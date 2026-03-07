__int64 __fastcall COPMProtectedOutput::Destroy(COPMProtectedOutput *this)
{
  void **v1; // rbx
  int v3; // esi
  int v4; // eax
  int v5; // eax

  v1 = (void **)*((_QWORD *)this + 1);
  v3 = 0;
  OPM::CMutex::Lock(v1);
  if ( *((_BYTE *)this + 80) )
  {
    v4 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x2324A3u, (char *)this + 72, 8u, 0LL, 0);
    *((_BYTE *)this + 80) = 0;
    if ( v4 < 0 )
      v3 = v4;
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *v1 )
    KeReleaseMutex((PRKMUTEX)*v1, 0);
  v5 = OPM::CMonitorPDO::Destroy(this);
  if ( v5 < 0 && v3 >= 0 )
    return (unsigned int)v5;
  return (unsigned int)v3;
}
