__int64 __fastcall COPM::GetCertificateSize(void **this, void *a2, enum _DXGKMDT_CERTIFICATE_TYPE a3, unsigned int *a4)
{
  PRKMUTEX *v4; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (PRKMUTEX *)(this + 6);
  OPM::CMutex::Lock(this + 6);
  v11 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(this + 3, a2, &v11);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetCertificateSize(v11, a3, a4);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v4 )
    KeReleaseMutex(*v4, 0);
  return (unsigned int)HandleObject;
}
