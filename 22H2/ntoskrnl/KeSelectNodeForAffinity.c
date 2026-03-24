/*
 * XREFs of KeSelectNodeForAffinity @ 0x14035E2C0
 * Callers:
 *     KeStartThread @ 0x140340A7C (KeStartThread.c)
 *     KiSetIdealNodeProcessByGroup @ 0x14035AC64 (KiSetIdealNodeProcessByGroup.c)
 *     KiComputeThreadAffinity @ 0x14035D000 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x14035D934 (KiSetAffinityThread.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSelectNodeForAffinity(__int64 a1)
{
  unsigned __int16 v2; // cx
  unsigned int v3; // r9d
  __int64 v4; // r8
  unsigned int v6; // r9d

  if ( KeNumberNodes == 1 )
    return KeNodeBlock[0];
  v2 = KiProcessNodeSeed++;
  if ( (unsigned __int16)KiProcessNodeSeed >= (unsigned __int16)KeNumberNodes )
    KiProcessNodeSeed = 0;
  v3 = 0;
  while ( 1 )
  {
    if ( v2 >= (unsigned __int16)KeNumberNodes )
      v2 = 0;
    v4 = KeNodeBlock[v2];
    if ( (*(_BYTE *)(v4 + 181) & 0x10) == 0
      && *(_WORD *)(v4 + 144) == *(_WORD *)(a1 + 8)
      && (*(_QWORD *)(v4 + 136) & *(_QWORD *)a1) != 0LL )
    {
      break;
    }
    ++v3;
    ++v2;
    if ( v3 >= (unsigned __int16)KeNumberNodes )
    {
      v6 = 0;
      while ( 1 )
      {
        if ( v2 >= (unsigned __int16)KeNumberNodes )
          v2 = 0;
        v4 = KeNodeBlock[v2];
        if ( *(_WORD *)(v4 + 144) == *(_WORD *)(a1 + 8) && (*(_QWORD *)(v4 + 136) & *(_QWORD *)a1) != 0LL )
          break;
        ++v6;
        ++v2;
        if ( v6 >= (unsigned __int16)KeNumberNodes )
          return 0LL;
      }
      return v4;
    }
  }
  return v4;
}
