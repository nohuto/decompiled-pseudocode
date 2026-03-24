/*
 * XREFs of KeGetNextKernelStackSegment @ 0x140356088
 * Callers:
 *     RtlpWalkFrameChain @ 0x14021D210 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x140340838 (RtlpIsFrameInBoundsEx.c)
 *     KiInSwapKernelStacks @ 0x140355C1C (KiInSwapKernelStacks.c)
 *     KeEnumerateKernelStackSegments @ 0x140355FEC (KeEnumerateKernelStackSegments.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetNextKernelStackSegment(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax

  if ( a3 )
  {
    *a2 = a1[7];
    a2[1] = a1[6];
    a2[2] = a1[11];
    a2[3] = a1[5];
  }
  else
  {
    v3 = a2[3];
    if ( !*(_QWORD *)(v3 + 16) )
      return 0;
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 16);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v3 + 32);
  }
  return 1;
}
