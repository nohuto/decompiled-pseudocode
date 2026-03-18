/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x14066D000
 * Callers:
 *     KiInterruptThunk @ 0x14042B310 (KiInterruptThunk.c)
 *     $$1 @ 0x14042B320 ($$1.c)
 *     $$2 @ 0x14042B330 ($$2.c)
 *     $$3 @ 0x14042B340 ($$3.c)
 *     $$4 @ 0x14042B350 ($$4.c)
 *     $$5 @ 0x14042B360 ($$5.c)
 *     $$6 @ 0x14042B370 ($$6.c)
 *     $$7 @ 0x14042B380 ($$7.c)
 *     $$8 @ 0x14042B390 ($$8.c)
 *     $$9 @ 0x14042B3A0 ($$9.c)
 *     $$a @ 0x14042B3B0 ($$a.c)
 *     $$b @ 0x14042B3C0 ($$b.c)
 *     $$c @ 0x14042B3D0 ($$c.c)
 *     $$d @ 0x14042B3E0 ($$d.c)
 *     $$e @ 0x14042B3F0 ($$e.c)
 *     $$f @ 0x14042B400 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14034BADC (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1403F2BC8 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x14042B0D0 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax

  KeExitRetpoline(a1, a2, a3);
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
