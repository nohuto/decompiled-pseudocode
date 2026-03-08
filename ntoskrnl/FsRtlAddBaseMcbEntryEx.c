/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x1402D06D0
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x1402D00C0 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x1402D06B0 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlFindLargeIndex @ 0x1402D0B8C (FsRtlFindLargeIndex.c)
 *     FsRtlAddEntry @ 0x1402D0C14 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x1402D0D2C (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v4; // r15d
  int v5; // ebx
  int v6; // r12d
  unsigned int v7; // ebp
  ULONG PairCount; // r10d
  ULONG v10; // edi
  __int64 v11; // rdx
  _DWORD *Mapping; // r14
  ULONG v14; // edi
  unsigned int v15; // r9d
  int v16; // r8d
  int v17; // ecx
  int v18; // edx
  _DWORD *v19; // r14
  __int64 v20; // rdi
  unsigned int v21; // r8d
  int v22; // r9d
  unsigned int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // edx
  _DWORD *v27; // r8
  __int64 v28; // rcx
  int v29; // r9d
  int v30; // edx
  int v31; // eax
  int v32; // edx
  __int64 v33; // rax
  int v34; // eax
  int v35; // edx
  int v36; // eax
  int v37; // edx
  unsigned int v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int v42; // edx
  ULONG v43; // r8d
  int v44; // edx
  int v45; // eax
  __int64 v46; // rax
  int v47; // r8d
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // r8
  unsigned int v51; // edx
  int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  ULONG v57; // [rsp+60h] [rbp+8h] BYREF
  ULONG v58; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v59; // [rsp+70h] [rbp+18h]

  v4 = Lbn;
  v5 = 0;
  v57 = 0;
  v6 = SectorCount;
  v7 = Vbn;
  if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, Vbn, &v57) )
  {
    Mapping = Mcb->Mapping;
    v14 = v57;
    v15 = v6 + v7 - 1;
    v58 = 0;
    v16 = Mapping[2 * v57 + 1];
    if ( v16 == -1 )
    {
      if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v15, &v58) )
      {
        v33 = v58 - 1;
        if ( v14 == (_DWORD)v33 )
        {
          v55 = 0;
          if ( v58 )
            v55 = Mapping[2 * v33];
          if ( Mapping[2 * v58 + 1] != v4 + v55 - v7 )
            return -1073741823;
          if ( v58 )
            v56 = Mapping[2 * v33];
          else
            v56 = 0;
          v6 = v56 - v7;
        }
      }
    }
    else
    {
      if ( v57 )
        v17 = Mapping[2 * v57 - 2];
      else
        v17 = 0;
      if ( v4 != v7 + v16 - v17 )
        return -1073741823;
      v18 = Mapping[2 * v57];
      if ( v15 <= v18 - 1 )
        return 0;
      if ( v57 < Mcb->PairCount )
        v7 = v57 != -1 ? v18 : 0;
      else
        v7 = 0;
      if ( v57 )
        v54 = Mapping[2 * v57 - 2];
      else
        v54 = 0;
      v4 = v16 + v18 - v54;
      v6 = v15 - v7 + 1;
    }
  }
  PairCount = Mcb->PairCount;
  v10 = PairCount;
  v58 = PairCount;
  v57 = PairCount;
  if ( !PairCount || (v19 = Mcb->Mapping, v19[2 * PairCount - 2] <= v7) )
  {
LABEL_3:
    if ( v10 )
    {
      v27 = Mcb->Mapping;
      v28 = v10 - 1;
      v29 = v27[2 * v28];
      if ( v29 == v7 )
      {
        v30 = v27[2 * v28 + 1];
        if ( v30 == -1 )
        {
          v32 = 0;
        }
        else
        {
          v31 = v10 == 1 ? 0 : v27[2 * v10 - 4];
          v32 = v29 + v30 - v31;
        }
        if ( v32 == v4 )
        {
          v27[2 * PairCount - 2] += v6;
          return 0;
        }
      }
    }
    if ( !v7 || v10 && *((_DWORD *)Mcb->Mapping + 2 * v10 - 2) == v7 )
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v10, 1LL) )
        return -1073741670;
      v11 = v10;
    }
    else
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v10, 2LL) )
        return -1073741670;
      v11 = v10 + 1;
      *((_DWORD *)Mcb->Mapping + 2 * v10 + 1) = -1;
      *((_DWORD *)Mcb->Mapping + 2 * v10) = v7;
    }
    *((_DWORD *)Mcb->Mapping + 2 * v11 + 1) = v4;
    *((_DWORD *)Mcb->Mapping + 2 * v11) = v6 + v7;
    return 0;
  }
  if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v7, &v57) )
  {
    v10 = v57;
    PairCount = v58;
    goto LABEL_3;
  }
  v20 = v57;
  v59 = v6 + v7;
  v21 = v6 + v7 - 1;
  if ( v19[2 * v57 + 1] != -1 || v57 && v19[2 * v57 - 2] > v7 )
    return -1073741823;
  v22 = v19[2 * v57];
  v23 = v22 - 1;
  if ( v21 > v22 - 1 )
    return -1073741823;
  if ( v57 )
    v24 = v19[2 * v57 - 2];
  else
    v24 = 0;
  if ( v24 < v7 && v21 < v23 )
  {
    if ( (unsigned __int8)FsRtlAddEntry(Mcb, v57, 2LL) )
    {
      v25 = (unsigned int)(v20 + 1);
      v26 = v59;
      *((_DWORD *)Mcb->Mapping + 2 * v20 + 1) = -1;
      *((_DWORD *)Mcb->Mapping + 2 * v20) = v7;
      *((_DWORD *)Mcb->Mapping + 2 * v25 + 1) = v4;
      *((_DWORD *)Mcb->Mapping + 2 * v25) = v26;
      return 0;
    }
    return -1073741670;
  }
  if ( v57 )
    v34 = v19[2 * v57 - 2];
  else
    v34 = 0;
  if ( v34 == v7 && v21 < v23 )
  {
    if ( !v57 || (v35 = v19[2 * v57 - 1], v35 == -1) )
    {
      v37 = 0;
    }
    else
    {
      if ( v57 == 1 )
        v36 = 0;
      else
        v36 = v19[2 * v57 - 4];
      v37 = v19[2 * v57 - 2] + v35 - v36;
    }
    if ( v37 == v4 )
    {
      if ( v57 )
      {
        v19[2 * v57 - 2] += v6;
        return 0;
      }
      if ( (unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
      {
        *((_DWORD *)Mcb->Mapping + 1) = v4;
        *(_DWORD *)Mcb->Mapping = v6;
        return 0;
      }
    }
    else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v57, 1LL) )
    {
      v51 = v59;
      *((_DWORD *)Mcb->Mapping + 2 * v20 + 1) = v4;
      *((_DWORD *)Mcb->Mapping + 2 * v20) = v51;
      return 0;
    }
    return -1073741670;
  }
  if ( v57 )
    v38 = v19[2 * v57 - 2];
  else
    v38 = 0;
  if ( v38 >= v7 || v21 != v23 )
  {
    if ( !v57 || (v40 = v19[2 * v57 - 1], v40 == -1) )
    {
      v42 = 0;
    }
    else
    {
      if ( v57 == 1 )
        v41 = 0;
      else
        v41 = v19[2 * v57 - 4];
      v42 = v19[2 * v57 - 2] + v40 - v41;
    }
    v43 = v58 - 1;
    if ( v42 == v4 )
    {
      if ( v57 >= v43 )
        v52 = -1;
      else
        v52 = v19[2 * v57 + 3];
      v44 = v6 + v4;
      if ( v52 == v6 + v4 )
      {
        if ( !v57 )
        {
          v53 = 0LL;
          v19[3] = v4;
          v50 = 1LL;
          goto LABEL_97;
        }
        v50 = 2LL;
        v19[2 * v57 - 2] = v19[2 * v57 + 2];
LABEL_96:
        v53 = (unsigned int)v20;
LABEL_97:
        FsRtlRemoveLargeEntry(Mcb, v53, v50);
        return 0;
      }
    }
    else
    {
      v44 = v6 + v4;
    }
    if ( v57 >= v43 )
      v45 = -1;
    else
      v45 = v19[2 * v57 + 3];
    if ( v45 == v44 )
    {
      v19[2 * v57 + 3] = v4;
    }
    else
    {
      if ( !v57 )
        goto LABEL_76;
      v46 = v57 - 1;
      v47 = v19[2 * v46 + 1];
      v48 = v46;
      if ( v47 != -1 )
      {
        if ( (_DWORD)v46 )
          v49 = v19[2 * v57 - 4];
        else
          v49 = 0;
        v5 = v47 + v19[2 * v48] - v49;
      }
      if ( v5 != v4 )
      {
LABEL_76:
        v19[2 * v57 + 1] = v4;
        return 0;
      }
      v19[2 * v48] = v22;
    }
    v50 = 1LL;
    goto LABEL_96;
  }
  if ( v57 >= v58 - 1 )
    v39 = -1;
  else
    v39 = v19[2 * v57 + 3];
  if ( v39 == v6 + v4 )
  {
    v19[2 * v57] = v7;
LABEL_64:
    *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v20 + 1) + 1) = v4;
    return 0;
  }
  if ( (unsigned __int8)FsRtlAddEntry(Mcb, v57, 1LL) )
  {
    *((_DWORD *)Mcb->Mapping + 2 * v20 + 1) = -1;
    *((_DWORD *)Mcb->Mapping + 2 * v20) = v7;
    goto LABEL_64;
  }
  return -1073741670;
}
