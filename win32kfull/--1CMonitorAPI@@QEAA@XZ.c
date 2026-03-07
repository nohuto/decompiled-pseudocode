void __fastcall CMonitorAPI::~CMonitorAPI(CMonitorAPI *this)
{
  OPM::CMutex::~CMutex((CMonitorAPI *)((char *)this + 32));
  OPM::CList<CPhysicalMonitorHandle>::~CList<CPhysicalMonitorHandle>((char *)this + 8);
  OPM::CMutex::~CMutex(this);
}
