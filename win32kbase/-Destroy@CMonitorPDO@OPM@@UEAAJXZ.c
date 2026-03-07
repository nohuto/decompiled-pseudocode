__int64 __fastcall OPM::CMonitorPDO::Destroy(OPM::CMonitorPDO *this)
{
  void **v1; // rbx
  int v3; // edi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // r14
  void *v7; // rbp
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax

  v1 = (void **)*((_QWORD *)this + 1);
  v3 = 0;
  OPM::CMutex::Lock(v1);
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_DWORD *)this + 6) = 0;
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = (void *)_InterlockedExchange64((volatile __int64 *)this + 5, 0LL);
  v7 = (void *)_InterlockedExchange64((volatile __int64 *)this + 6, 0LL);
  if ( *v1 )
    KeReleaseMutex((PRKMUTEX)*v1, 0);
  if ( v6 )
  {
    v8 = IoUnregisterPlugPlayNotificationEx(v6);
    if ( v8 < 0 )
      v3 = v8;
  }
  if ( v7 )
  {
    v9 = IoUnregisterPlugPlayNotificationEx(v7);
    if ( v9 < 0 && v3 >= 0 )
      return (unsigned int)v9;
  }
  return (unsigned int)v3;
}
