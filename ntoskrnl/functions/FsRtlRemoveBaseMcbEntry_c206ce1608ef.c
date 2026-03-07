BOOLEAN __stdcall FsRtlRemoveBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  int v3; // edi
  LONGLONG v4; // r15
  LONGLONG v5; // r12
  PVOID *p_Mapping; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // rdx
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rax
  ULONG v14; // r9d
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // r8
  __int64 v18; // rdx
  ULONG PairCount; // eax
  __int64 v21; // rax
  _DWORD *v22; // r8
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // r9
  int v26; // r10d
  int v27; // r8d
  int v28; // r8d
  int v29; // eax
  int v30; // r13d
  int v31; // edx
  __int64 v32; // rbp
  unsigned int v33; // r13d
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // r9
  _DWORD *v40; // rdx
  int v41; // ecx
  int v42; // eax
  ULONG v43; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = SectorCount;
  v43 = 0;
  v5 = Vbn;
  if ( !Vbn )
  {
    PairCount = Mcb->PairCount;
    if ( PairCount )
    {
      if ( SectorCount >= *((unsigned int *)Mcb->Mapping + 2 * PairCount - 2) )
      {
        Mcb->PairCount = 0;
        return 1;
      }
    }
  }
  if ( SectorCount > 0 )
  {
    p_Mapping = &Mcb->Mapping;
    while ( 1 )
    {
      if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)v5, &v43) )
        return 1;
      v8 = v43;
      v9 = v43 ? *((unsigned int *)*p_Mapping + 2 * v43 - 2) : 0LL;
      if ( v9 == v5 )
      {
        v10 = *p_Mapping;
        v11 = *((_DWORD *)*p_Mapping + 2 * v43);
        if ( (unsigned int)(v11 - 1) < v5 + v4 )
          break;
      }
      if ( v43 )
        v21 = *((unsigned int *)*p_Mapping + 2 * v43 - 2);
      else
        v21 = 0LL;
      v22 = *p_Mapping;
      if ( v21 == v5 )
      {
        if ( v22[2 * v43 + 1] == -1 )
          return 1;
        if ( v43 )
        {
          v23 = v43 - 1;
          v24 = v22[2 * v23 + 1];
          v25 = v23;
          if ( v24 == -1 || (!(_DWORD)v23 ? (v29 = 0) : (v29 = v22[2 * v43 - 4]), !(v22[2 * v25] + v24 - v29)) )
          {
            v22[2 * v25] += v4;
            *((_DWORD *)*p_Mapping + 2 * v8 + 1) += v4;
            return 1;
          }
        }
        if ( (unsigned __int8)FsRtlAddEntry(Mcb, v43, 1LL) )
        {
          *((_DWORD *)*p_Mapping + 2 * v8 + 1) = -1;
          *((_DWORD *)*p_Mapping + 2 * v8) = v4 + v5;
          *((_DWORD *)*p_Mapping + 2 * (unsigned int)(v8 + 1) + 1) += v4;
          return 1;
        }
        return 0;
      }
      v30 = v22[2 * v43];
      v31 = v22[2 * v43 + 1];
      v32 = v43;
      if ( (unsigned int)(v30 - 1) >= v5 + v4 )
      {
        if ( v31 == -1 )
          return 1;
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v43, 2LL) )
          return 0;
        v39 = (unsigned int)(v8 + 1);
        *((_DWORD *)*p_Mapping + 2 * v8 + 1) = *((_DWORD *)*p_Mapping + 2 * (unsigned int)(v8 + 2) + 1);
        *((_DWORD *)*p_Mapping + 2 * v8) = v5;
        *((_DWORD *)*p_Mapping + 2 * v39 + 1) = -1;
        *((_DWORD *)*p_Mapping + 2 * v39) = v5 + v4;
        v40 = *p_Mapping;
        if ( (_DWORD)v8 )
          v41 = v40[2 * (unsigned int)(v8 - 1)];
        else
          v41 = 0;
        if ( (_DWORD)v8 != -1 )
          v3 = v40[2 * v8];
        v40[2 * (unsigned int)(v8 + 2) + 1] += v40[2 * v8] + v40[2 * v39] - v3 - v41;
        return 1;
      }
      v33 = v30 - v5;
      if ( v31 != -1 )
      {
        if ( v43 >= Mcb->PairCount - 1 || (v36 = v43 + 1, v37 = v36, v22[2 * v36 + 1] == -1) )
        {
          v22[2 * v43] = v5;
        }
        else
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v36, 1LL) )
            return 0;
          *((_DWORD *)*p_Mapping + 2 * v37 + 1) = -1;
          *((_DWORD *)*p_Mapping + 2 * v37) = *((_DWORD *)*p_Mapping + 2 * v32);
          *((_DWORD *)*p_Mapping + 2 * v32) -= v33;
        }
      }
      v5 += v33;
      v4 -= v33;
LABEL_17:
      if ( v4 <= 0 )
        return 1;
    }
    if ( v43 )
      v12 = v10[2 * v43 - 2];
    else
      v12 = 0;
    v13 = (unsigned int)(v11 - v12);
    v5 += v13;
    v4 -= v13;
    if ( v10[2 * v43 + 1] == -1 )
      goto LABEL_17;
    v14 = Mcb->PairCount - 1;
    if ( v43 == v14 )
    {
      if ( v43 )
      {
        v15 = v43 - 1;
        v16 = v10[2 * v15 + 1];
        if ( v16 == -1 || (v43 != 1 ? (v35 = v10[2 * v43 - 4]) : (v35 = 0), !(v10[2 * v15] + v16 - v35)) )
        {
          v17 = 2LL;
          v18 = (unsigned int)v15;
LABEL_16:
          FsRtlRemoveLargeEntry(Mcb, v18, v17);
          goto LABEL_17;
        }
      }
      goto LABEL_60;
    }
    if ( !v43
      || (v26 = v10[2 * v43 - 1], v26 != -1)
      && (v43 == 1 ? (v34 = 0) : (v34 = v10[2 * v43 - 4]), v26 + v10[2 * v43 - 2] - v34) )
    {
      if ( v43 < v14 && v10[2 * v43 + 3] != -1 )
      {
        v10[2 * v43 + 1] = -1;
        goto LABEL_17;
      }
      if ( !v43 )
        goto LABEL_85;
    }
    v27 = v10[2 * v43 - 1];
    if ( v27 != -1 )
    {
      v38 = v43 == 1 ? 0 : v10[2 * v43 - 4];
      if ( v10[2 * v43 - 2] + v27 - v38 )
      {
LABEL_85:
        if ( v43 >= v14 || v10[2 * v43 + 3] == -1 )
        {
LABEL_60:
          v18 = v43;
          goto LABEL_36;
        }
        if ( !v43 )
          goto LABEL_34;
      }
    }
    v28 = v10[2 * v43 - 1];
    if ( v28 == -1 || (v43 != 1 ? (v42 = v10[2 * v43 - 4]) : (v42 = 0), !(v10[2 * v43 - 2] + v28 - v42)) )
    {
LABEL_34:
      if ( v43 < v14 && v10[2 * v43 + 3] != -1 )
      {
        v10[2 * v43 + 1] = -1;
        v18 = (unsigned int)(v8 - 1);
LABEL_36:
        v17 = 1LL;
        goto LABEL_16;
      }
    }
    v18 = v43 - 1;
    v17 = 2LL;
    goto LABEL_16;
  }
  return 1;
}
