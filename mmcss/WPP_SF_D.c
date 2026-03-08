/*
 * XREFs of WPP_SF_d @ 0x1C0004884
 * Callers:
 *     CiSchedulerWait @ 0x1C0001680 (CiSchedulerWait.c)
 *     CiNdisThrottle @ 0x1C000A0A0 (CiNdisThrottle.c)
 *     CiTaskIndexCreate @ 0x1C000B370 (CiTaskIndexCreate.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B8B0 (CiCreateTaskIndexClientFromThread.c)
 *     CiNdisOpenDevice @ 0x1C000BCB0 (CiNdisOpenDevice.c)
 *     CsInitialize @ 0x1C000E0B0 (CsInitialize.c)
 *     CiConfigInitialize @ 0x1C000E4E0 (CiConfigInitialize.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000E8D0 (CiConfigInitializeFromRegistry.c)
 *     CiTaskAllocate @ 0x1C000EBA0 (CiTaskAllocate.c)
 *     CiTaskDump @ 0x1C000EF00 (CiTaskDump.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_d(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
