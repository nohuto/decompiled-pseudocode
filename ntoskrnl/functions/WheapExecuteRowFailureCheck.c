char __fastcall WheapExecuteRowFailureCheck(unsigned __int64 a1, __int64 a2, char a3, char a4)
{
  char v5; // r15
  unsigned __int64 v6; // r14
  PVOID *v7; // r8
  _QWORD *p_P; // rdi
  unsigned int v9; // r12d
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  unsigned int v14; // r9d
  PVOID *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  PVOID **v18; // rax
  PVOID **v19; // rax
  void *v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *P; // [rsp+28h] [rbp-58h] BYREF
  PVOID *v28; // [rsp+30h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  __int128 Src; // [rsp+40h] [rbp-40h] BYREF
  __int128 v31; // [rsp+50h] [rbp-30h]
  __int128 v32; // [rsp+60h] [rbp-20h]

  Src = 0LL;
  v5 = 0;
  v31 = 0LL;
  v32 = 0LL;
  if ( WheapPolicyRowFailCheckEnable )
  {
    v6 = (unsigned int)WheapPolicyRowFailCheckExtent;
    v7 = (PVOID *)WheapPfaList;
    p_P = &P;
    v9 = WheapPolicyRowFailCheckThreshold;
    v10 = a1 - (unsigned int)WheapPolicyRowFailCheckExtent;
    P = &P;
    v11 = (unsigned int)WheapPolicyRowFailCheckExtent + a1;
    v12 = a1;
    v13 = a1;
    if ( a1 < (unsigned int)WheapPolicyRowFailCheckExtent )
      v10 = 0LL;
    v14 = 1;
    v28 = (PVOID *)&P;
    if ( WheapPfaList != &WheapPfaList )
    {
      do
      {
        v15 = v7;
        v7 = (PVOID *)*v7;
        v16 = (unsigned __int64)v15[5];
        if ( v16 >= v10 && v16 <= v11 )
        {
          if ( v16 != a1 )
          {
            ++v14;
            v17 = (unsigned __int64)v15[5];
            if ( v16 >= v12 )
              v17 = v12;
            v12 = v17;
            if ( v16 <= v13 )
              v16 = v13;
            v13 = v16;
          }
          if ( v7[1] != v15
            || (v18 = (PVOID **)v15[1], *v18 != v15)
            || (*v18 = v7, v7[1] = v18, v19 = (PVOID **)v28, *v28 != &P) )
          {
LABEL_36:
            __fastfail(3u);
          }
          v15[1] = v28;
          *v15 = &P;
          *v19 = v15;
          v28 = v15;
        }
      }
      while ( v7 != &WheapPfaList );
      p_P = P;
    }
    if ( v14 < v9 )
    {
      while ( p_P != &P )
      {
        v23 = WheapPfaList;
        v24 = p_P;
        p_P = (_QWORD *)*p_P;
        if ( *((PVOID **)WheapPfaList + 1) != &WheapPfaList )
          goto LABEL_36;
        *v24 = WheapPfaList;
        v24[1] = &WheapPfaList;
        v23[1] = v24;
        WheapPfaList = v24;
      }
    }
    else
    {
      v5 = 1;
      while ( p_P != &P )
      {
        v20 = p_P;
        p_P = (_QWORD *)*p_P;
        ExFreePoolWithTag(v20, 0x61656857u);
      }
      if ( v13 - v12 < v6 )
      {
        v21 = v13;
        v13 = v6 + v12;
        if ( v21 < v6 )
          v12 = 0LL;
        else
          v12 = v21 - v6;
      }
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 48LL;
      *(_QWORD *)&v31 = 0x800000574C4E524BuLL;
      *((_QWORD *)&v31 + 1) = 0x1000000002LL;
      *(_QWORD *)&v32 = v12;
      *((_QWORD *)&v32 + 1) = v13;
      WheaLogInternalEvent(&Src);
      for ( ; v12 <= v13; ++v12 )
      {
        v29 = v12 << 12;
        if ( !(unsigned int)MmGetPageBadStatus(&v29) )
          WheaAttemptPhysicalPageOffline(v12, 0, a3, a4);
      }
    }
  }
  return v5;
}
