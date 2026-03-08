/*
 * XREFs of NtUserfnCOPYGLOBALDATA @ 0x1C01E1470
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnCOPYGLOBALDATA(
        __int64 a1,
        unsigned int a2,
        SIZE_T a3,
        volatile void *a4,
        __int64 a5,
        char a6)
{
  PtiCurrentShared(a1);
  ProbeForRead(a4, a3, 1u);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, SIZE_T, volatile void *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           a4,
           a5);
}
