/*
 * XREFs of NtUserfnPOPTINLPUINT @ 0x1C01E2F30
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnPOPTINLPUINT(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        volatile void *a4,
        __int64 a5,
        char a6)
{
  unsigned int v8; // esi

  v8 = a2;
  PtiCurrentShared(a1, a2, a3, (__int64)a4);
  if ( a4 )
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      ExRaiseAccessViolation();
    ProbeForRead(a4, 8 * a3, 4u);
  }
  return (*((__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, volatile void *, __int64))&WPP_MAIN_CB.SectorSize
          + ((a6 + 6) & 0x1F)))(
           a1,
           v8,
           a3,
           a4,
           a5);
}
