/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x14066A9B0
 * Callers:
 *     KiInterruptThunk @ 0x140422F80 (KiInterruptThunk.c)
 *     $$1 @ 0x140422F90 ($$1.c)
 *     $$2 @ 0x140422FA0 ($$2.c)
 *     $$3 @ 0x140422FB0 ($$3.c)
 *     $$4 @ 0x140422FC0 ($$4.c)
 *     $$5 @ 0x140422FD0 ($$5.c)
 *     $$6 @ 0x140422FE0 ($$6.c)
 *     $$7 @ 0x140422FF0 ($$7.c)
 *     $$8 @ 0x140423000 ($$8.c)
 *     $$9 @ 0x140423010 ($$9.c)
 *     $$a @ 0x140423020 ($$a.c)
 *     $$b @ 0x140423030 ($$b.c)
 *     $$c @ 0x140423040 ($$c.c)
 *     $$d @ 0x140423050 ($$d.c)
 *     $$e @ 0x140423060 ($$e.c)
 *     $$f @ 0x140423070 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x1402E3E6C (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1403ED6A8 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x140422D40 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax

  KeExitRetpoline(a1, a2);
  result = ((__int64)a2 >> 47) + 1;
  if ( (__int64)a2 >> 47 != -1 && result != 1 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    return KiCustomAccessRoutine0(a2);
  }
  return result;
}
