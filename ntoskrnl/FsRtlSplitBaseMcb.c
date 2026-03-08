/*
 * XREFs of FsRtlSplitBaseMcb @ 0x14053A920
 * Callers:
 *     FsRtlSplitLargeMcb @ 0x14053AA90 (FsRtlSplitLargeMcb.c)
 * Callees:
 *     FsRtlFindLargeIndex @ 0x1402D0B8C (FsRtlFindLargeIndex.c)
 *     FsRtlAddEntry @ 0x1402D0C14 (FsRtlAddEntry.c)
 */

BOOLEAN __stdcall FsRtlSplitBaseMcb(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Amount)
{
  int v3; // r15d
  int v4; // edi
  int v5; // ebp
  __int64 v7; // rbx
  _DWORD *Mapping; // rdx
  int v9; // eax
  __int64 v10; // r8
  int v11; // r10d
  int v12; // ecx
  int v13; // eax
  __int64 v15; // r8
  __int64 v16; // r10
  bool v17; // zf
  int v18; // r8d
  _DWORD *v19; // rdx
  unsigned int v20; // [rsp+40h] [rbp+8h] BYREF

  v3 = Amount;
  v4 = 0;
  v20 = 0;
  v5 = Vbn;
  if ( FsRtlFindLargeIndex((__int64)Mcb, Vbn, (int *)&v20) )
  {
    v7 = v20;
    Mapping = Mcb->Mapping;
    if ( Mapping[2 * v20 + 1] == -1 )
    {
LABEL_29:
      while ( (unsigned int)v7 < Mcb->PairCount )
      {
        *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)v7) += v3;
LABEL_28:
        LODWORD(v7) = v7 + 1;
      }
      LOBYTE(v4) = 1;
      return v4;
    }
    if ( v20 )
      v9 = Mapping[2 * v20 - 2];
    else
      v9 = 0;
    if ( v9 == v5 )
    {
      if ( !v20 )
        goto LABEL_15;
      v10 = v20 - 1;
      v11 = Mapping[2 * v10 + 1];
      if ( v11 == -1 || (v20 != 1 ? (v12 = Mapping[2 * v20 - 4]) : (v12 = 0), !(v11 + Mapping[2 * v10] - v12)) )
      {
        LODWORD(v7) = v20 - 1;
        goto LABEL_29;
      }
    }
    if ( v20 )
    {
      v13 = Mapping[2 * v20 - 2];
LABEL_17:
      if ( v13 == v5 )
      {
        if ( FsRtlAddEntry((__int64)Mcb, v20, 1) )
        {
          *((_DWORD *)Mcb->Mapping + 2 * v7 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v7) = v3 + v5;
          goto LABEL_28;
        }
      }
      else if ( FsRtlAddEntry((__int64)Mcb, v20, 2) )
      {
        v15 = (unsigned int)(v7 + 1);
        v16 = (unsigned int)(v7 + 2);
        *((_DWORD *)Mcb->Mapping + 2 * v7 + 1) = *((_DWORD *)Mcb->Mapping + 2 * v16 + 1);
        *((_DWORD *)Mcb->Mapping + 2 * v7) = v5;
        *((_DWORD *)Mcb->Mapping + 2 * v15 + 1) = -1;
        v17 = (_DWORD)v15 == 0;
        *((_DWORD *)Mcb->Mapping + 2 * v15) = v3 + v5;
        v18 = 0;
        v19 = Mcb->Mapping;
        if ( !v17 )
          v18 = v19[2 * v7];
        if ( (_DWORD)v7 )
          v4 = v19[2 * (unsigned int)(v7 - 1)];
        LODWORD(v7) = v7 + 2;
        v19[2 * v16 + 1] += v18 - v4;
        goto LABEL_29;
      }
      return 0;
    }
LABEL_15:
    v13 = 0;
    goto LABEL_17;
  }
  return v4;
}
