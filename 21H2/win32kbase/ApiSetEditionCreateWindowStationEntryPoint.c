/*
 * XREFs of ApiSetEditionCreateWindowStationEntryPoint @ 0x1C0095620
 * Callers:
 *     NtUserCreateWindowStation @ 0x1C00955E0 (NtUserCreateWindowStation.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C00957E0 (IsEditionGetProcessWindowStationEntryPointSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionCreateWindowStationEntryPoint(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned int v10; // ebp
  __int64 v12; // rbx
  int v13; // edx

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      462,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v12 = 0LL;
  if ( (int)IsEditionGetProcessWindowStationEntryPointSupported() >= 0 && qword_1C0256ED0 )
    v12 = qword_1C0256ED0(a1, v10, a3, a4, a5, a6, a7, a8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      10,
      463,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v12;
}
