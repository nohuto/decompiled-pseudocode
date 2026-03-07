void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        struct VIDMM_BUDGET_STATE *a2,
        int *a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v5; // r11
  unsigned int v7; // r12d
  unsigned __int64 v8; // rcx
  int *v9; // rdx
  __int64 v10; // r8
  int *v11; // r9
  int *v12; // r10
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned int *v18; // rsi
  __int64 v19; // r8
  int *v20; // rdi
  __int64 v21; // r15
  unsigned __int64 v22; // r13
  _QWORD *v23; // rdx
  int **v24; // r10
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdx
  int **v27; // rax
  int *v28; // rcx
  int **v29; // rax
  unsigned int *v30; // r10
  __int64 v31; // rdx
  __int64 v32; // rdi
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 *v36; // rdx
  __int64 v37; // r10
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  int *v41; // rdx
  int **v42; // rcx
  int *v43; // rax
  __int64 i; // rax
  unsigned __int64 v45; // rcx
  int *v46; // r9
  unsigned __int64 *v47; // rdx
  unsigned __int64 v48; // rcx
  int *v49; // rsi
  _QWORD *v50; // rdi
  VIDMM_GLOBAL *v51; // r14
  unsigned __int64 v52; // [rsp+30h] [rbp-51h]
  unsigned int v54; // [rsp+40h] [rbp-41h]
  VIDMM_GLOBAL *v55; // [rsp+48h] [rbp-39h]
  unsigned __int64 v56[3]; // [rsp+50h] [rbp-31h] BYREF
  __int128 v57; // [rsp+68h] [rbp-19h]
  __int64 v58; // [rsp+78h] [rbp-9h]

  v5 = a4;
  v55 = a1;
  v7 = a3[a4 + 81];
  if ( v7 )
  {
    v11 = &a3[4 * a4 + 36];
    v58 = 0LL;
    v57 = 0LL;
    v12 = *(int **)v11;
    if ( *(int **)v11 != v11 )
    {
      v13 = *a3 + 37LL * *(unsigned int *)a2;
      do
      {
        v14 = *(v12 - 4);
        v15 = *((_QWORD *)v12 - 45);
        v12 = *(int **)v12;
        v16 = *((_QWORD *)&v57 + v14);
        if ( v16 <= *(_QWORD *)(v15 + 8 * v13 + 184) )
          v16 = *(_QWORD *)(v15 + 8 * v13 + 184);
        *((_QWORD *)&v57 + v14) = v16;
      }
      while ( v12 != v11 );
    }
    v17 = a5;
    v18 = dword_1C00652F8;
    v52 = a5;
    memset(v56, 255, sizeof(v56));
    v19 = 3LL;
    while ( 1 )
    {
      v20 = *(int **)v11;
      v21 = 0LL;
      v22 = v17 / v7;
      if ( *(int **)v11 == v11 )
        break;
      do
      {
        v23 = v20;
        v24 = (int **)v20;
        v20 = *(int **)v20;
        v54 = dword_1C00652F8[*((int *)v23 - 4)];
        v25 = v22 * v54;
        v26 = *(_QWORD *)(*(v23 - 45) + 8 * (*a3 + 37LL * *(unsigned int *)a2) + 184);
        if ( v26 <= v25 )
        {
          v52 -= v26;
          v7 -= v54;
          v21 += v25 - v26;
          if ( *((int ***)v20 + 1) != v24 )
            goto LABEL_51;
          v27 = (int **)v24[1];
          if ( *v27 != (int *)v24 )
            goto LABEL_51;
          *v27 = v20;
          v28 = &a3[4 * v5 + 48];
          *((_QWORD *)v20 + 1) = v27;
          v29 = (int **)*((_QWORD *)v28 + 1);
          if ( *v29 != v28 )
            goto LABEL_51;
          *v24 = v28;
          v24[1] = (int *)v29;
          *v29 = (int *)v24;
          *((_QWORD *)v28 + 1) = v24;
        }
      }
      while ( v20 != v11 );
      if ( !v21 )
        break;
      v30 = dword_1C00652F8;
      v31 = 0LL;
      v32 = 3LL;
      do
      {
        v33 = *(_QWORD *)((char *)&v57 + v31 * 8);
        ++v31;
        v34 = *v30++;
        v35 = v22 * v34;
        if ( v33 >= v35 )
          v33 = v35;
        v56[v31 - 1] = v21 + v33;
        --v32;
      }
      while ( v32 );
      if ( *(int **)v11 == v11 )
        goto LABEL_39;
      v17 = v52;
    }
    v36 = v56;
    v37 = 3LL;
    do
    {
      v38 = *v36;
      v39 = *v18++;
      v40 = v22 * v39;
      if ( *v36 >= v40 )
        v38 = v40;
      *v36++ = v38;
      --v37;
    }
    while ( v37 );
    if ( *(int **)v11 != v11 )
    {
      v41 = &a3[4 * v5 + 48];
      v42 = (int **)*((_QWORD *)v41 + 1);
      if ( *(int **)(*(_QWORD *)v41 + 8LL) != v41
        || *v42 != v41
        || *(int **)(*(_QWORD *)v11 + 8LL) != v11
        || **((int ***)v11 + 1) != v11
        || (*v42 = v11,
            *((_QWORD *)v41 + 1) = *((_QWORD *)v11 + 1),
            **((_QWORD **)v11 + 1) = v41,
            *((_QWORD *)v11 + 1) = v42,
            v43 = *(int **)v11,
            *(int **)(*(_QWORD *)v11 + 8LL) != v11)
        || *v42 != v11 )
      {
LABEL_51:
        __fastfail(3u);
      }
      *v42 = v43;
      *((_QWORD *)v43 + 1) = v42;
      *((_QWORD *)v11 + 1) = v11;
      *(_QWORD *)v11 = v11;
    }
LABEL_39:
    for ( i = 1LL; i < 3; ++i )
    {
      v45 = v56[i - 1];
      if ( v45 > v56[i] )
        v56[i] = v45;
    }
    v46 = &a3[6 * v5 + 12];
    v47 = v56;
    do
    {
      v48 = *v47++;
      if ( v48 >= *((_QWORD *)a3 + 4) )
        v48 = *((_QWORD *)a3 + 4);
      *(_QWORD *)v46 = v48;
      v46 += 2;
      --v19;
    }
    while ( v19 );
    v49 = &a3[4 * v5 + 48];
    v50 = *(_QWORD **)v49;
    if ( *(int **)v49 != v49 )
    {
      v51 = v55;
      do
      {
        VIDMM_GLOBAL::AssignProcessBudget(
          v51,
          a2,
          (struct VIDMM_SEGMENT_GROUP_STATE *)a3,
          (struct VIDMM_PROCESS_ADAPTER_INFO *)(v50 - 51),
          v56[*((int *)v50 - 4)]);
        v50 = (_QWORD *)*v50;
      }
      while ( v50 != (_QWORD *)v49 );
    }
  }
  else
  {
    v8 = a5;
    if ( a5 >= *((_QWORD *)a3 + 4) )
      v8 = *((_QWORD *)a3 + 4);
    v9 = &a3[6 * a4 + 12];
    v10 = 3LL;
    do
    {
      *(_QWORD *)v9 = v8;
      v9 += 2;
      --v10;
    }
    while ( v10 );
  }
}
