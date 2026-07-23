/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x14034AF90
 * Callers:
 *     RtlpHpVsContextAddSubsegment @ 0x140239F6C (RtlpHpVsContextAddSubsegment.c)
 *     RtlpHpVsChunkSplit @ 0x140349EE0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x14034AE90 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x14034B0F0 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  unsigned __int64 v6; // rcx
  _RTL_RB_TREE *v7; // rbx
  unsigned __int64 Root; // rdx
  BOOLEAN v9; // al
  unsigned __int64 v10; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0;
  v13 = 0LL;
  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v12, &v13);
  v6 = ((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
     + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  a1[3].Min = (_RTL_BALANCED_NODE *)((char *)a1[3].Min
                                   + ((unsigned int)((0x101010101010101LL * ((v6 + (v6 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
  v7 = a1 + 1;
  *(_WORD *)a3 = a3 ^ RtlpHpHeapGlobals ^ (v12
                                         + v5
                                         - ((0x101010101010101LL * ((v6 + (v6 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  Root = (unsigned __int64)v7->Root;
  if ( ((__int64)v7->Min & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)v7;
    else
      Root = 0LL;
  }
  v9 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)Root - 8) ^ *(_DWORD *)(Root - 8)) )
      {
        v10 = *(_QWORD *)Root;
        if ( ((__int64)v7->Min & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_16;
          v10 ^= Root;
        }
        if ( !v10 )
        {
LABEL_16:
          v9 = 0;
          return RtlRbInsertNodeEx(v7, (PRTL_BALANCED_NODE)Root, v9, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      else
      {
        v10 = *(_QWORD *)(Root + 8);
        if ( ((__int64)v7->Min & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_17;
          v10 ^= Root;
        }
        if ( !v10 )
        {
LABEL_17:
          v9 = 1;
          return RtlRbInsertNodeEx(v7, (PRTL_BALANCED_NODE)Root, v9, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      Root = v10;
    }
  }
  return RtlRbInsertNodeEx(v7, (PRTL_BALANCED_NODE)Root, v9, (PRTL_BALANCED_NODE)(a3 + 8));
}
