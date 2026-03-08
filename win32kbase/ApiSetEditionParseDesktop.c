/*
 * XREFs of ApiSetEditionParseDesktop @ 0x1C00AA310
 * Callers:
 *     ParseWindowStation @ 0x1C00AA220 (ParseWindowStation.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EditionParseDesktop @ 0x1C00AA47C (EditionParseDesktop.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionParseDesktop(
        int a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v11; // ebp
  int v12; // r14d
  PDEVICE_OBJECT v14; // rcx
  char v15; // bl
  void *v16; // r9
  unsigned int v17; // edi
  int v18; // r9d

  v11 = a3;
  v12 = a2;
  v14 = WPP_GLOBAL_Control;
  v15 = 1;
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
  v16 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      462,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  v17 = 0;
  if ( qword_1C02D6A48 && (int)qword_1C02D6A48(v14, a2, a3, v16) >= 0 )
  {
    LOBYTE(v18) = a4;
    v17 = EditionParseDesktop(a1, v12, v11, v18, a5, a6, a7, a8, a9, a10);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v15 = 0;
  if ( (_BYTE)a2 || v15 )
  {
    LOBYTE(a3) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      463,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return v17;
}
