/*
 * XREFs of UpdateKernelCoordinatedStates @ 0x1C003846C
 * Callers:
 *     PepUpdateCoordinatedStateWorker @ 0x1C0039F30 (PepUpdateCoordinatedStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C002C6B8 (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall UpdateKernelCoordinatedStates(__int64 a1)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  *(_BYTE *)(a1 + 40) = 1;
  v2 = ((__int64 (*)(void))qword_1C001C638)();
  if ( v2 >= 0 )
  {
    if ( a1 == qword_1C001C998 )
      ProcLibTraceCoordinatedIdleStates(0);
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x19u,
      (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
