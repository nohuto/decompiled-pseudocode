CMonitorAPI *__fastcall CMonitorAPI::CMonitorAPI(CMonitorAPI *this, int *a2)
{
  OPM::CMutex::CMutex(this, a2);
  *((_DWORD *)this + 6) = -1071774324;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  OPM::CMutex::CMutex((CMonitorAPI *)((char *)this + 32), a2);
  return this;
}
