__int64 __fastcall COPM::DestroyProtectedOutput(void **this, void *a2)
{
  int HandleObject; // edi
  int v5; // eax
  struct _KMUTANT *v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  OPM::CMutex::Lock(this + 7);
  v8 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(this + 3, a2, &v8);
  if ( HandleObject >= 0 )
  {
    v5 = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
           (__int64)(this + 3),
           v8,
           (unsigned int)a2,
           this + 6);
    HandleObject = 0;
    if ( v5 < 0 )
      HandleObject = v5;
  }
  v6 = (struct _KMUTANT *)this[7];
  if ( v6 )
    KeReleaseMutex(v6, 0);
  return (unsigned int)HandleObject;
}
