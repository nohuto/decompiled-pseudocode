void __fastcall VIDMM_GLOBAL::GetTotalSegmentSize(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v8; // rbx
  unsigned int v11; // r12d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbp
  unsigned int v14; // ecx
  unsigned __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  int v20; // r11d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  struct VIDMM_PARTITION *Current; // rax
  struct VIDMM_PARTITION *v24; // r9
  unsigned __int64 v25; // rax
  int v26; // ecx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  struct VIDMM_PARTITION *v28; // r9

  v8 = 0LL;
  v11 = a2;
  v12 = 0LL;
  *a6 = 0LL;
  v13 = 0LL;
  *a7 = 0LL;
  *a8 = 0LL;
  v14 = *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 32);
  v15 = 0LL;
  if ( v14 )
  {
    v16 = 0LL;
    v17 = v14;
    do
    {
      v18 = *(_QWORD *)(v16 + *((_QWORD *)this + 464));
      v19 = *(_QWORD *)(v18 + 208);
      v20 = *(_DWORD *)(v18 + 80);
      if ( v19 >= *(_QWORD *)(v18 + 48) )
        v19 = *(_QWORD *)(v18 + 48);
      if ( (v20 & 0x1001) != 0 )
      {
        v21 = v19 + v12;
        if ( (v20 & 1) == 0 )
          v21 = v12;
        v12 = v21;
        if ( (v20 & 1) == 0 )
          v15 += v19;
      }
      else if ( (v20 & 0x40) != 0 )
      {
        *a7 += v19;
      }
      else
      {
        *a6 += v19;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v16 + *((_QWORD *)this + 464)) + 476LL) == 2 )
        v13 += v19;
      v16 += 8LL;
      --v17;
    }
    while ( v17 );
    v11 = a2;
  }
  if ( v12 <= v15 )
    v12 = v15;
  *a8 = v12;
  v22 = qword_1C00765A8;
  Current = VIDMM_PARTITION::GetCurrent();
  v24 = Current;
  if ( Current )
    v22 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + *((_QWORD *)Current + 5) + 16);
  v25 = *a8;
  if ( *a8 > v22 )
  {
    *a8 = v22;
    v25 = v22;
  }
  v26 = *((_DWORD *)this + 10232);
  if ( v25 > 1LL << v26 && (*((_BYTE *)this + 40936) & 4) != 0 )
    *a8 = 1LL << v26;
  if ( v24 )
  {
    SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, v11, D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL, v24);
    *a3 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(this, v11, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL, v28) + 1);
    v8 = *((_QWORD *)SegmentGroupState + 1);
  }
  else
  {
    *a3 = 0LL;
    v13 = 0LL;
  }
  *a4 = v8;
  *a5 = v13;
}
