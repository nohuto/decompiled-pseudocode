const struct CPointerInputFrame *__fastcall CTouchProcessor::ReferenceInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct RIMCOMPLETEFRAME *a3,
        unsigned int a4)
{
  struct CPointerInputFrame *v5; // rdi
  char v7; // bl
  char v8; // r8
  struct RIMCOMPLETEFRAME *v9; // r9
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  const struct CPointerInputFrame *v14; // rdi

  v5 = a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1149);
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v8 = 0;
  }
  v9 = (struct RIMCOMPLETEFRAME *)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
  if ( (_BYTE)a2 || v8 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v8,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      41,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( (*((_DWORD *)v5 + 57) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1152);
  *((_DWORD *)v5 + 57) |= 0x200u;
  _InterlockedAdd((volatile signed __int32 *)v5 + 11, 1u);
  v10 = (_QWORD *)((char *)v5 + 24);
  v11 = (_QWORD *)((char *)gptiCurrent + 1184);
  v12 = *((_QWORD *)gptiCurrent + 148);
  if ( *(struct tagTHREADINFO **)(v12 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1184) )
    __fastfail(3u);
  *v10 = v12;
  *((_QWORD *)v5 + 4) = v11;
  *(_QWORD *)(v12 + 8) = v10;
  *v11 = v10;
  v14 = CTouchProcessor::PopulateReferencedInputFrame(this, v5, a4, v9);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( (_BYTE)v13 || v7 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v7,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      42,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  return v14;
}
