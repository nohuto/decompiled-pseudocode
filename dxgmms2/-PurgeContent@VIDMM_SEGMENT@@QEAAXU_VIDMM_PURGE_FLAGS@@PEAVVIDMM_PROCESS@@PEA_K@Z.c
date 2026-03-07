__int64 __fastcall VIDMM_SEGMENT::PurgeContent(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v6; // rcx
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  int v9; // edx
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r13
  int v15; // ecx
  __int64 *v16; // r8
  __int64 **v17; // rsi
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 **v21; // rcx
  __int64 *v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 *v26; // r8
  __int64 **v27; // rsi
  __int64 *v28; // rdi
  __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 **v31; // rcx
  __int64 *v32; // rax
  __int64 result; // rax
  __int64 *v34; // rcx
  __int64 *v35; // rax
  _QWORD *v36; // [rsp+20h] [rbp-20h]
  _QWORD *v37; // [rsp+28h] [rbp-18h]
  __int64 v38; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v39; // [rsp+38h] [rbp-8h]
  __int64 v40; // [rsp+90h] [rbp+50h]

  v40 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
LABEL_3:
    a3 = v40;
  }
  v6 = (_QWORD *)(a1 + 136);
  v7 = *(_QWORD **)(a1 + 136);
LABEL_5:
  while ( v7 != v6 )
  {
    v8 = v7 - 3;
    v7 = (_QWORD *)*v7;
    v9 = a2 & 8;
    if ( (a2 & 8) == 0 || *v8 == a3 )
    {
      v37 = v8 + 5;
      v10 = (_QWORD *)v8[5];
      if ( (_QWORD *)*v37 != v37 )
      {
        while ( 1 )
        {
          v11 = v10;
          v10 = (_QWORD *)*v10;
          v36 = v11 + 2;
          v12 = (_QWORD *)v11[2];
          if ( (_QWORD *)*v36 != v36 )
            break;
LABEL_26:
          if ( v10 == v37 )
          {
            a3 = v40;
            v6 = (_QWORD *)(a1 + 136);
            goto LABEL_5;
          }
        }
        while ( 1 )
        {
          v13 = (__int64)(v12 - 7);
          v12 = (_QWORD *)*v12;
          v14 = **(_QWORD **)v13;
          if ( (*(_DWORD *)(v14 + 72) & 0x400) == 0 )
            break;
LABEL_25:
          if ( v12 == v36 )
            goto LABEL_26;
        }
        v15 = **(_DWORD **)(v14 + 536);
        if ( (v15 & 0x40000000) != 0 && v15 >= 0 && !v9 )
        {
          WdLogSingleEntry1(3LL, v13);
          if ( VIDMM_GLOBAL::InvalidateOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (struct _VIDMM_GLOBAL_ALLOC *)v14) )
            goto LABEL_3;
          v9 = a2 & 8;
        }
        if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
        {
          if ( v9 )
          {
            WdLogSingleEntry1(2LL, v13);
LABEL_24:
            v9 = a2 & 8;
            goto LABEL_25;
          }
          VIDMM_GLOBAL::UnpinOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v13, 3LL, 0);
        }
        if ( (**(_DWORD **)(v14 + 536) & 0x10000000) == 0
          && (*(_DWORD *)(v14 + 68) & 0x100) == 0
          && (*(_DWORD *)(v13 + 28) & 3) != 0 )
        {
          VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (VIDMM_DEVICE **)v13);
        }
        goto LABEL_24;
      }
    }
  }
  v16 = &v38;
  v39 = &v38;
  v38 = (__int64)&v38;
  v17 = (__int64 **)(a1 + 160);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == (__int64 *)v17 )
      break;
    v19 = (__int64)(v18 - 51);
    if ( (*(_DWORD *)v18[16] & 0x10000000) == 0
      && (*(_DWORD *)(v19 + 72) & 0x400) == 0
      && (*(_DWORD *)(v19 + 68) & 0x100) == 0
      && ((a2 & 4) == 0 || *(_QWORD *)(v19 + 16) + *(_QWORD *)(v19 + 128) > *(_QWORD *)(a1 + 128))
      && !*(_DWORD *)(v19 + 144) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v19, a2, a4);
      v16 = v39;
    }
    v20 = (__int64 *)*v18;
    if ( *v18 )
    {
      if ( (__int64 *)v20[1] != v18 )
        goto LABEL_73;
      v21 = (__int64 **)v18[1];
      if ( *v21 != v18 )
        goto LABEL_73;
      *v21 = v20;
      v20[1] = (__int64)v21;
      v22 = v39;
      if ( (__int64 *)*v39 != &v38 )
        goto LABEL_73;
      v18[1] = (__int64)v39;
      *v18 = (__int64)&v38;
      v16 = v18;
      *v22 = (__int64)v18;
      v39 = v18;
    }
  }
  if ( (__int64 *)v38 != &v38 )
  {
    v23 = *(__int64 **)(a1 + 168);
    if ( (__int64 **)v18[1] != v17 )
      goto LABEL_73;
    if ( (__int64 **)*v23 != v17 )
      goto LABEL_73;
    if ( *(__int64 **)(v38 + 8) != &v38 )
      goto LABEL_73;
    if ( (__int64 *)*v16 != &v38 )
      goto LABEL_73;
    *v23 = (__int64)&v38;
    v24 = v39;
    *(_QWORD *)(a1 + 168) = v39;
    *v24 = (__int64)v17;
    v25 = v38;
    v39 = v23;
    if ( *(__int64 **)(v38 + 8) != &v38 || (__int64 *)*v23 != &v38 )
      goto LABEL_73;
    *v23 = v38;
    *(_QWORD *)(v25 + 8) = v23;
  }
  v26 = &v38;
  v39 = &v38;
  v38 = (__int64)&v38;
  v27 = (__int64 **)(a1 + 176);
  while ( 1 )
  {
    v28 = *v27;
    if ( *v27 == (__int64 *)v27 )
      break;
    v29 = (__int64)(v28 - 51);
    if ( (*(_DWORD *)v28[16] & 0x10000000) == 0
      && (*(_DWORD *)(v29 + 68) & 0x100) == 0
      && ((a2 & 4) == 0
       || (*(_DWORD *)(a1 + 80) & 0x200) == 0
       || *(_QWORD *)(v29 + 16) + *(_QWORD *)(v29 + 128) > *(_QWORD *)(a1 + 128))
      && !*(_DWORD *)(v29 + 144) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v29, a2, a4);
      v26 = v39;
    }
    v30 = (__int64 *)*v28;
    if ( *v28 )
    {
      if ( (__int64 *)v30[1] != v28 )
        goto LABEL_73;
      v31 = (__int64 **)v28[1];
      if ( *v31 != v28 )
        goto LABEL_73;
      *v31 = v30;
      v30[1] = (__int64)v31;
      v32 = v39;
      if ( (__int64 *)*v39 != &v38 )
        goto LABEL_73;
      v28[1] = (__int64)v39;
      *v28 = (__int64)&v38;
      v26 = v28;
      *v32 = (__int64)v28;
      v39 = v28;
    }
  }
  result = v38;
  if ( (__int64 *)v38 != &v38 )
  {
    v34 = *(__int64 **)(a1 + 184);
    if ( (__int64 **)v28[1] == v27
      && (__int64 **)*v34 == v27
      && *(__int64 **)(v38 + 8) == &v38
      && (__int64 *)*v26 == &v38 )
    {
      *v34 = (__int64)&v38;
      v35 = v39;
      *(_QWORD *)(a1 + 184) = v39;
      *v35 = (__int64)v27;
      result = v38;
      v39 = v34;
      if ( *(__int64 **)(v38 + 8) == &v38 && (__int64 *)*v34 == &v38 )
      {
        *v34 = v38;
        *(_QWORD *)(result + 8) = v34;
        return result;
      }
    }
LABEL_73:
    __fastfail(3u);
  }
  return result;
}
