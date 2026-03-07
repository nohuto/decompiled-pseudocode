COPMProtectedOutput *__fastcall COPMProtectedOutput::COPMProtectedOutput(
        COPMProtectedOutput *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        int *a5)
{
  int *v5; // r14
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v7; // eax
  void **v8; // rbx
  int v9; // esi
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a2;
  v5 = a5;
  OPM::CMonitorPDO::CMonitorPDO(this, a3, a4, a5);
  *((_BYTE *)this + 80) = 0;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  v7 = InputBuffer;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 21) = v7;
  if ( *v5 < 0 )
    return this;
  v8 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v8);
  if ( OPM::CMonitorPDO::IsDestroyed(this) )
  {
    v9 = -1071774438;
LABEL_5:
    if ( *v8 )
      KeReleaseMutex((PRKMUTEX)*v8, 0);
    COPMProtectedOutput::Destroy(this);
    *v5 = v9;
    return this;
  }
  v9 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23248Bu, &InputBuffer, 4u, (char *)this + 72, 8u);
  if ( v9 < 0 )
    goto LABEL_5;
  *((_BYTE *)this + 80) = 1;
  if ( *v8 )
    KeReleaseMutex((PRKMUTEX)*v8, 0);
  return this;
}
