/*
 * XREFs of ApiSetEditionNotifyDwmForSystemVisualCreation @ 0x1C00BFB78
 * Callers:
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJW4_HwndTargetType@@PEAUCompositionObject@@@Z @ 0x1C00BFB00 (-SetSystemVisual@CHwndTargetProp@@QEAAJW4_HwndTargetType@@PEAUCompositionObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionNotifyDwmForSystemVisualCreation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  PDEVICE_OBJECT v6; // rcx
  unsigned int v7; // ebx
  char v8; // di
  void *v9; // r9
  void *v11; // r8

  v3 = a3;
  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  v7 = 0;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v9 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      492,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( qword_1C02D7F90 && (int)qword_1C02D7F90(v6, a2, a3, v9) >= 0 )
  {
    if ( qword_1C02D7F98 )
      return (unsigned int)qword_1C02D7F98(a1, v4, v3);
    return v7;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( (_BYTE)a2 || v8 )
    {
      v11 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
      LOBYTE(v11) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)v11,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        10,
        493,
        (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
    }
    return 0LL;
  }
}
