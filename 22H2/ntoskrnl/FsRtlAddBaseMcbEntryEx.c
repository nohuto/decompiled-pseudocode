/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x1402F5910
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x1402F5380 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x1402F58F0 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x1402F5E64 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x1402F5F9C (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x1402F6028 (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ULONG PairCount; // ebp
  int v5; // r15d
  int v6; // r12d
  unsigned int v7; // r13d
  unsigned int v8; // esi
  signed int v10; // r11d
  signed int v11; // r10d
  _DWORD *Mapping; // r14
  unsigned int v13; // eax
  unsigned int v14; // ebx
  ULONG v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v19; // r8d
  unsigned int v20; // r10d
  int v21; // ecx
  int v22; // r9d
  _DWORD *v23; // r14
  unsigned int v24; // ebx
  unsigned int v25; // r8d
  __int64 v26; // rax
  bool v27; // zf
  unsigned int *v28; // r9
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // edx
  int v35; // eax
  int v36; // edx
  unsigned int v37; // ebp
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rcx
  int v41; // r8d
  unsigned int *v42; // rdx
  int v43; // eax
  __int64 v44; // rcx
  _DWORD *v45; // rdx
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // r9d
  int v49; // eax
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // edx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // r8d
  int v57; // eax
  int v58; // ecx
  __int64 v59; // rcx
  unsigned int v60; // edx
  __int64 v61; // rcx
  int v62; // eax
  int v63; // edx
  int v64; // eax
  __int64 v65; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v66; // [rsp+68h] [rbp+10h]

  PairCount = Mcb->PairCount;
  v5 = 0;
  v6 = SectorCount;
  v7 = Lbn;
  v8 = Vbn;
  v10 = 0;
  v11 = PairCount - 1;
  if ( (int)(PairCount - 1) < 0 )
    goto LABEL_7;
  while ( 1 )
  {
    Mapping = Mcb->Mapping;
    v13 = (v11 + v10) / 2;
    v14 = v13;
    if ( v13 && (unsigned int)Vbn < Mapping[2 * v13 - 2] )
    {
      v11 = v13 - 1;
      goto LABEL_6;
    }
    if ( (unsigned int)Vbn <= Mapping[2 * v13] - 1 )
      break;
    v10 = v13 + 1;
LABEL_6:
    if ( v10 > v11 )
      goto LABEL_7;
  }
  v19 = Mapping[2 * v13 + 1];
  LODWORD(v65) = 0;
  v20 = Vbn + SectorCount - 1;
  if ( v19 == -1 )
  {
    if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v20, &v65) )
      goto LABEL_7;
    v51 = (unsigned int)(v65 - 1);
    if ( v14 != (_DWORD)v51 )
      goto LABEL_7;
    v63 = 0;
    if ( (_DWORD)v65 )
      v63 = Mapping[2 * v51];
    if ( Mapping[2 * (unsigned int)v65 + 1] == v7 + v63 - v8 )
    {
      if ( (_DWORD)v65 )
        v64 = Mapping[2 * v51];
      else
        v64 = 0;
      v6 = v64 - v8;
      goto LABEL_7;
    }
    return -1073741823;
  }
  if ( v13 )
    v21 = Mapping[2 * v13 - 2];
  else
    v21 = 0;
  if ( v7 != (_DWORD)Vbn + v19 - v21 )
    return -1073741823;
  v22 = Mapping[2 * v13];
  if ( v20 <= v22 - 1 )
    return 0;
  if ( v13 < PairCount )
  {
    v8 = Mapping[2 * v13];
    if ( v13 == -1 )
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  if ( v13 )
    v62 = Mapping[2 * v13 - 2];
  else
    v62 = 0;
  v7 = v19 + v22 - v62;
  v6 = v20 - v8 + 1;
LABEL_7:
  v15 = PairCount;
  LODWORD(v65) = PairCount;
  if ( !PairCount || (v23 = Mcb->Mapping, v23[2 * PairCount - 2] <= v8) )
  {
LABEL_8:
    if ( v15 )
    {
      v45 = Mcb->Mapping;
      v46 = v15 - 1;
      v47 = v45[2 * v46];
      if ( v47 == v8 )
      {
        v48 = v45[2 * v46 + 1];
        if ( v48 == -1 )
        {
          v50 = 0;
        }
        else
        {
          v49 = v15 == 1 ? 0 : v45[2 * v15 - 4];
          v50 = v47 + v48 - v49;
        }
        if ( v50 == v7 )
        {
          v45[2 * PairCount - 2] += v6;
          return 0;
        }
      }
    }
    if ( !v8 )
      goto LABEL_10;
    if ( v15 )
      v5 = *((_DWORD *)Mcb->Mapping + 2 * v15 - 2);
    if ( v5 == v8 )
    {
LABEL_10:
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v15, 1LL) )
        return -1073741670;
      v16 = v15;
    }
    else
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v15, 2LL) )
        return -1073741670;
      v44 = 8LL * v15;
      *(_DWORD *)((char *)Mcb->Mapping + v44 + 4) = -1;
      *(_DWORD *)((char *)Mcb->Mapping + v44) = v8;
      v16 = v15 + 1;
    }
    v17 = 8 * v16;
    *(_DWORD *)((char *)Mcb->Mapping + v17 + 4) = v7;
    *(_DWORD *)((char *)Mcb->Mapping + v17) = v6 + v8;
    return 0;
  }
  if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v8, &v65) )
  {
    v15 = v65;
    goto LABEL_8;
  }
  v24 = v65;
  v66 = v6 + v8;
  v25 = v6 + v8 - 1;
  v26 = 2LL * (unsigned int)v65;
  v27 = v23[v26 + 1] == -1;
  v28 = &v23[v26];
  v65 = v26 * 4;
  if ( !v27 || v24 && v23[2 * v24 - 2] > v8 )
    return -1073741823;
  v29 = *v28 - 1;
  if ( v25 > v29 )
    return -1073741823;
  if ( v24 )
    v30 = v23[2 * v24 - 2];
  else
    v30 = 0;
  if ( v30 >= v8 || v25 >= v29 )
  {
    if ( v24 )
      v31 = v23[2 * v24 - 2];
    else
      v31 = 0;
    if ( v25 < v29 && v31 == v8 )
    {
      if ( v24 )
      {
        v55 = v24 - 1;
        v56 = v23[2 * v55 + 1];
        if ( v56 != -1 )
        {
          if ( v24 == 1 )
            v57 = 0;
          else
            v57 = v23[2 * v24 - 4];
          v5 = v23[2 * v55] + v56 - v57;
        }
      }
      if ( v5 == v7 )
      {
        if ( v24 )
        {
          v23[2 * v24 - 2] += v6;
        }
        else
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
            return -1073741670;
          *((_DWORD *)Mcb->Mapping + 1) = v7;
          *(_DWORD *)Mcb->Mapping = v6;
        }
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v24, 1LL) )
          return -1073741670;
        v59 = v65;
        v60 = v66;
        *(_DWORD *)((char *)Mcb->Mapping + v65 + 4) = v7;
        *(_DWORD *)((char *)Mcb->Mapping + v59) = v60;
      }
      return 0;
    }
    if ( v24 )
      v32 = v23[2 * v24 - 2];
    else
      v32 = 0;
    if ( v32 < v8 && v25 == v29 )
    {
      if ( v24 >= PairCount - 1 )
        v58 = -1;
      else
        v58 = v23[2 * v24 + 3];
      if ( v58 == v6 + v7 )
      {
        *v28 = v8;
        *((_DWORD *)Mcb->Mapping + 2 * v24 + 3) = v7;
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v24, 1LL) )
          return -1073741670;
        v61 = v65;
        *(_DWORD *)((char *)Mcb->Mapping + v65 + 4) = -1;
        *(_DWORD *)((char *)Mcb->Mapping + v61) = v8;
        *((_DWORD *)Mcb->Mapping + 2 * v24 + 3) = v7;
      }
      return 0;
    }
    if ( v24 )
    {
      v33 = v24 - 1;
      v34 = v23[2 * v33 + 1];
      if ( v34 == -1 )
      {
        v36 = 0;
      }
      else
      {
        if ( v24 == 1 )
          v35 = 0;
        else
          v35 = v23[2 * v24 - 4];
        v36 = v23[2 * v33] + v34 - v35;
      }
    }
    else
    {
      v36 = 0;
    }
    v37 = PairCount - 1;
    if ( v36 == v7 && (v24 >= v37 ? (v38 = -1) : (v38 = v23[2 * v24 + 3]), v38 == v6 + v7) )
    {
      if ( v24 )
      {
        v23[2 * v24 - 2] = v23[2 * v24 + 2];
        FsRtlRemoveLargeEntry(Mcb, v24, 2LL);
      }
      else
      {
        v23[3] = v7;
        FsRtlRemoveLargeEntry(Mcb, 0LL, 1LL);
      }
    }
    else
    {
      if ( v24 >= v37 )
        v39 = -1;
      else
        v39 = v23[2 * v24 + 3];
      if ( v39 == v6 + v7 )
      {
        v23[2 * v24 + 3] = v7;
        goto LABEL_55;
      }
      if ( v24 )
      {
        v40 = v24 - 1;
        v41 = v23[2 * v40 + 1];
        v42 = &v23[2 * v40];
        if ( v41 != -1 )
        {
          if ( v24 == 1 )
            v43 = 0;
          else
            v43 = v23[2 * v24 - 4];
          v5 = *v42 + v41 - v43;
        }
        if ( v5 == v7 )
        {
          *v42 = *v28;
LABEL_55:
          FsRtlRemoveLargeEntry(Mcb, v24, 1LL);
          return 0;
        }
      }
      v28[1] = v7;
    }
    return 0;
  }
  if ( (unsigned __int8)FsRtlAddEntry(Mcb, v24, 2LL) )
  {
    v52 = v65;
    v53 = v66;
    *(_DWORD *)((char *)Mcb->Mapping + v65 + 4) = -1;
    *(_DWORD *)((char *)Mcb->Mapping + v52) = v8;
    v54 = v24 + 1;
    *((_DWORD *)Mcb->Mapping + 2 * v54 + 1) = v7;
    *((_DWORD *)Mcb->Mapping + 2 * v54) = v53;
    return 0;
  }
  return -1073741670;
}
