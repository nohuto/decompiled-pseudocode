__int64 __fastcall CTouchProcessor::SetupQFramePostMT(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 **a5,
        unsigned int a6)
{
  __int64 *v7; // r15
  __int64 v8; // rbp
  PDEVICE_OBJECT v9; // rcx
  char v10; // bl
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // esi
  __int64 i; // rdi
  CTouchProcessor *v15; // rcx
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  void *v18; // r8
  CInputDest *v20; // rax
  _BYTE v21[128]; // [rsp+40h] [rbp-A8h] BYREF

  v7 = a3;
  v8 = a2;
  v9 = WPP_GLOBAL_Control;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      88,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)v9, v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3698);
  v12 = *(_DWORD *)(v8 + 48);
  v13 = 0;
  for ( i = *(_QWORD *)(v8 + 248); v13 < v12; ++v13 )
  {
    if ( (*(_DWORD *)(i + 140) & 0x10) == 0 )
    {
      if ( *(_DWORD *)i == -1 )
      {
        v20 = CInputDest::CInputDest((CInputDest *)v21, a5);
        CTouchProcessor::InitializeQFrame(a6, i, v13, a4, v20, a6);
LABEL_33:
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v10 = 0;
        }
        if ( (_BYTE)v11 || v10 )
        {
          v17 = 89;
LABEL_30:
          v18 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
          LOBYTE(v18) = v10;
          WPP_RECORDER_AND_TRACE_SF_(
            v16->AttachedDevice,
            v11,
            (_DWORD)v18,
            v16->DeviceExtension,
            5,
            7,
            v17,
            (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
        }
        goto LABEL_31;
      }
      if ( *(_QWORD *)(i + 8) == a4 )
        goto LABEL_33;
    }
    i += 160LL;
  }
  i = *v7;
  *v7 = 0LL;
  *(_QWORD *)(i + 8) = a4;
  CInputDest::operator=(i + 16, (__int64)a5);
  if ( *(_DWORD *)(i + 144) != 22 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3740);
  CTouchProcessor::InitializeQFrameCoalesceState(v15, (struct CPointerQFrame *)i, a6);
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)v11 || v10 )
  {
    v17 = 90;
    goto LABEL_30;
  }
LABEL_31:
  CInputDest::SetEmpty((CInputDest *)a5);
  return i;
}
