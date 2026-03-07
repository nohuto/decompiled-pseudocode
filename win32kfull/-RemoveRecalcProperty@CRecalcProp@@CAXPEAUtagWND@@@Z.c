void __fastcall CRecalcProp::RemoveRecalcProperty(struct tagWND *a1)
{
  char v2; // dl
  char v3; // r8
  __int64 v4; // rax
  unsigned int v5; // edx
  CRecalcProp *v6; // rbx

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v3 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v3 = 0;
  }
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      56LL,
      5u,
      0x17u,
      0x38u,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      *(_QWORD *)a1);
  v4 = InternalRemoveProp((__int64)a1, CRecalcProp::s_atom, 1u);
  v6 = (CRecalcProp *)v4;
  if ( v4 )
    *(_QWORD *)(v4 + 16) = 0LL;
  if ( *(_DWORD *)(v4 + 24) == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1674LL);
  *((_DWORD *)a1 + 80) &= ~0x80u;
  CRecalcProp::`scalar deleting destructor'(v6, v5);
}
