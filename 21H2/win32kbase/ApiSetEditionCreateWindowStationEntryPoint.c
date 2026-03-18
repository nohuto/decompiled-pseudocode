/*
 * XREFs of ApiSetEditionCreateWindowStationEntryPoint @ 0x1C009B230
 * Callers:
 *     NtUserCreateWindowStation @ 0x1C009B1F0 (NtUserCreateWindowStation.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C009B49C (IsEditionGetProcessWindowStationEntryPointSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionCreateWindowStationEntryPoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v9; // rbp
  unsigned int v10; // r14d
  PDEVICE_OBJECT v12; // rcx
  char v13; // bl
  void *v14; // r9
  __int64 v15; // rdi
  int v16; // edx
  void *v18; // r8

  v9 = a3;
  v10 = a2;
  v12 = WPP_GLOBAL_Control;
  v13 = 1;
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
  v14 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      468,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  v15 = 0LL;
  if ( (int)IsEditionGetProcessWindowStationEntryPointSupported(v12, a2, a3, v14) >= 0 && qword_1C029BC20 )
    v15 = qword_1C029BC20(a1, v10, v9, a4, a5, a6, a7, a8);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v13 = 0;
  if ( (_BYTE)v16 || v13 )
  {
    v18 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v18) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      (_DWORD)v18,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      469,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return v15;
}
