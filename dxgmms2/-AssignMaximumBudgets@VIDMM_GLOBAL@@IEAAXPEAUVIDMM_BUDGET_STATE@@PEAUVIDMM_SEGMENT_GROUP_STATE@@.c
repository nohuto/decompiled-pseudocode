void __fastcall VIDMM_GLOBAL::AssignMaximumBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3)
{
  _DWORD *v4; // r15
  struct VIDMM_SEGMENT_GROUP_STATE **v6; // rsi
  VIDMM_GLOBAL *v7; // r10
  int i; // ebp
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *v11; // r14
  struct VIDMM_PROCESS_ADAPTER_INFO *v12; // r9
  struct VIDMM_SEGMENT_GROUP_STATE *v13; // rbx
  __int64 v14; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE **v15; // rax
  struct VIDMM_SEGMENT_GROUP_STATE **v16; // rax

  v4 = (_DWORD *)((char *)a3 + 324);
  v6 = (struct VIDMM_SEGMENT_GROUP_STATE **)((char *)a3 + 200);
  v7 = this;
  for ( i = 0; i < 3; ++i )
  {
    v9 = 3LL;
    v10 = (_QWORD *)((char *)a3 + 24 * i + 48);
    do
    {
      *v10++ = *((_QWORD *)a3 + 4);
      --v9;
    }
    while ( v9 );
    if ( *v4 )
    {
      v11 = *(v6 - 7);
      while ( v11 != (struct VIDMM_SEGMENT_GROUP_STATE *)((char *)a3 + 16 * i + 144) )
      {
        v12 = (struct VIDMM_SEGMENT_GROUP_STATE *)((char *)v11 - 408);
        v13 = v11;
        v11 = *(struct VIDMM_SEGMENT_GROUP_STATE **)v11;
        VIDMM_GLOBAL::AssignProcessBudget(v7, a2, a3, v12, 0xFFFFFFFFFFFFFFFFuLL);
        v14 = *(_QWORD *)v13;
        if ( *(struct VIDMM_SEGMENT_GROUP_STATE **)(*(_QWORD *)v13 + 8LL) != v13
          || (v15 = (struct VIDMM_SEGMENT_GROUP_STATE **)*((_QWORD *)v13 + 1), *v15 != v13)
          || (*v15 = (struct VIDMM_SEGMENT_GROUP_STATE *)v14,
              *(_QWORD *)(v14 + 8) = v15,
              v16 = (struct VIDMM_SEGMENT_GROUP_STATE **)*v6,
              *(struct VIDMM_SEGMENT_GROUP_STATE ***)*v6 != v6 - 1) )
        {
          __fastfail(3u);
        }
        v7 = this;
        *(_QWORD *)v13 = v6 - 1;
        *((_QWORD *)v13 + 1) = v16;
        *v16 = v13;
        *v6 = v13;
      }
    }
    ++v4;
    v6 += 2;
  }
}
