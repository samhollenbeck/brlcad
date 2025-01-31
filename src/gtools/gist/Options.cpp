#include "Options.h"

Options::Options()
{
	filepath = "";
	temppath = "../build/bin/";
	logopath = "";
	ppi = 300;
	width = 3508;
	length = 2480;
	isFolder = false;
    folderName = "";
	openGUI = false;
	exportToFile = false;
	overrideImages = false;
	exportFolderName = "";
	fileName = "";
	name = "N/A";
	owner = "";
	classification = "";
	rightLeft = "Right hand";
	zY = "+Z-up";
	notes = "None";
	uLength = "m";
	originalUnitsLength = true;
	uMass = "g";
	originalUnitsMass = true;
}

Options::~Options()
{

}

void
Options::setFilepath(std::string f)
{
	filepath = f;
}

void
Options::setTemppath(std::string f)
{
	if (f[f.size() - 1] != '/' && f[f.size() - 1] != '\\')
		f = f + '\\';
	temppath = f;
}

void
Options::setLogopath(std::string f)
{
	logopath = f;
}

void
Options::setPPI(int p)
{
	ppi = p;
	width = int(ppi * 11.69);
	length = int(ppi * 8.27);
}

void
Options::setIsFolder()
{
	isFolder = true;
}

void
Options::setOpenGUI()
{
	openGUI = true;
}

void
Options::setExportToFile()
{
	exportToFile = true;
}

void
Options::setOverrideImages()
{
	overrideImages = true;
}

void
Options::setExportFolder(std::string fldr)
{
    exportFolderName = fldr;
}

void
Options::setFolder(std::string n)
{
	folderName = n;
}

void
Options::setFileName(std::string n)
{
	fileName = n;
}

void
Options::setName(std::string n)
{
	name = n;
}

void
Options::setOwner(std::string n)
{
	owner = n;
}

void
Options::setClassification(std::string c)
{
	classification = c;
}

void
Options::setOrientationRightLeft(bool rL)
{
	if (rL)
	{
		rightLeft = "Left hand";
	}
}

void
Options::setOrientationZYUp(bool zy)
{
	if (zy) {
		zY = "+Y-up";
	}
}

void
Options::setNotes(std::string n)
{
	notes = n;
}


void
Options::setTopComp(std::string t)
{
	topComp = t;
}
void
Options::setUnitLength(std::string l)
{
	uLength = l;
	originalUnitsLength = false;
}

void
Options::setUnitMass(std::string m)
{
	uMass = m;
	originalUnitsMass = false;
}

std::string Options::getFilepath()
{
	return filepath;
}

std::string Options::getLogopath()
{
	return logopath;
}

std::string Options::getFolder()
{
	return folderName;
}

std::string Options::getExportFolder()
{
    return exportFolderName;
}

std::string Options::getTemppath()
{
	return temppath;
}

int Options::getWidth()
{
	return width;
}

int Options::getLength()
{
	return length;
}

bool Options::getIsFolder()
{
	return isFolder;
}

bool Options::getOpenGUI()
{
	return openGUI;
}

bool Options::getExportToFile()
{
	return exportToFile;
}

bool Options::getOverrideImages()
{
	return overrideImages;
}

std::string Options::getFileName()
{
	return fileName;
}

std::string Options::getName()
{
	return name;
}

std::string Options::getOwner()
{
	return owner;
}

std::string Options::getClassification()
{
	return classification;
}

std::string Options::getOrientationRightLeft()
{
	return rightLeft;
}

std::string Options::getOrientationZYUp()
{
	return zY;
}

std::string Options::getNotes()
{
	return notes;
}


std::string Options::getTopComp()
{
	return topComp;
}

std::string Options::getUnitLength()
{
	return uLength;
}

std::string Options::getUnitMass()
{
	return uMass;
}

bool Options::isOriginalUnitsLength()
{
	return originalUnitsLength;
}

bool Options::isOriginalUnitsMass()
{
	return originalUnitsMass;
}
