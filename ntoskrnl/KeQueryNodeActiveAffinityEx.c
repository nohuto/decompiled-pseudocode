/*
 * XREFs of KeQueryNodeActiveAffinityEx @ 0x1402AAE68
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x1402AA2C0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpWorkQueueManagerThread @ 0x140839860 (ExpWorkQueueManagerThread.c)
 *     ExProcessorCounterSetCallback @ 0x14086BB50 (ExProcessorCounterSetCallback.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140B937E4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402AB030 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x1402AE38C (KiQuerySubNodeActiveAffinity.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall KeQueryNodeActiveAffinityEx(unsigned __int16 a1, unsigned __int16 *a2, _WORD *a3)
{
  __int64 v3; // rsi
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  int v9; // [rsp+28h] [rbp-18h]
  int v10; // [rsp+2Ch] [rbp-14h]
  __int128 v11; // [rsp+30h] [rbp-10h] BYREF
  __int16 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v3 = a1;
  v13 = 0LL;
  v12 = 0;
  v11 = 0LL;
  if ( a2 )
  {
    memset(a2 + 4, 0, 8LL * *a2);
    *a2 = 1;
  }
  if ( a3 )
    *a3 = 0;
  if ( (unsigned __int16)v3 < (unsigned __int16)KeNumberNodes )
  {
    _mm_lfence();
    v10 = 0;
    v8 = KeNodeBlock[v3];
    v9 = *(_DWORD *)(v8 + 16);
    while ( 1 )
    {
      if ( (unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v8, &v13) )
        return;
      KiQuerySubNodeActiveAffinity(v13, &v11, &v12, v6);
      if ( a2 )
      {
        v7 = WORD4(v11);
        if ( *a2 <= WORD4(v11) )
        {
          if ( a2[1] <= WORD4(v11) )
            goto LABEL_12;
          *a2 = WORD4(v11) + 1;
        }
        *(_QWORD *)&a2[4 * v7 + 4] |= v11;
      }
LABEL_12:
      if ( a3 )
        *a3 += v12;
    }
  }
}
