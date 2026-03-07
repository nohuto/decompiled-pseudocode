__int64 __fastcall NtGdiDDCCISaveCurrentSettings(void *a1)
{
  struct OPM::CMutex *v2; // rbx
  int HandleObject; // ebx
  CPhysicalMonitorHandle *v5; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(struct OPM::CMutex **)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8728LL);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v6, v2);
  v5 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((__int64)v2 + 8, a1, &v5);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciSaveCurrentSettings(v5);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v6);
  return (unsigned int)HandleObject;
}
