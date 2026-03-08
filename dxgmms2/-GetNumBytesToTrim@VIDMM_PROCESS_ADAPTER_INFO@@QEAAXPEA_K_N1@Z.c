/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0092260
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C008FC00 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00A70D0 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00B2774 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C00EF2B8 (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00AAC58 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(
        VIDMM_PROCESS_ADAPTER_INFO *this,
        unsigned __int64 *a2,
        char a3,
        unsigned __int8 a4)
{
  unsigned int v4; // r12d
  VIDMM_PROCESS_ADAPTER_INFO *v6; // r10
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int64 *v9; // rbx
  __int64 v10; // rcx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v11; // edi
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  VIDMM_GLOBAL *v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h] BYREF
  __int64 v25; // [rsp+50h] [rbp-48h]

  *a2 = 0LL;
  v4 = 0;
  v6 = this;
  v20 = *(VIDMM_GLOBAL **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 7016LL) )
  {
    v7 = 32 * (a4 ^ 1LL);
    v22 = v7;
    do
    {
      v8 = 0LL;
      v9 = (unsigned __int64 *)&v24;
      v11 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v21 = *((_QWORD *)v6 + 6) + 296LL * v4;
      v10 = v21;
      v23 = v21 + v7 + 72;
      v12 = 24 - (v7 + 72);
      v13 = v23 - (_QWORD)&v24;
      do
      {
        v14 = v8;
        if ( a3 )
        {
          SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                                v20,
                                v4,
                                v11,
                                *(struct VIDMM_PARTITION **)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 40LL) + 288LL));
          v15 = (unsigned __int64 *)((char *)v9 + v13);
          v16 = *((_QWORD *)SegmentGroupState + 3);
        }
        else
        {
          v15 = (unsigned __int64 *)((char *)v9 + v13);
          v16 = *(unsigned __int64 *)((char *)v9 + v13 + v12);
        }
        v17 = *v15;
        *v9 = v16;
        if ( v17 > v16 )
        {
          v8 = v17 - v16;
          if ( v14 > v17 - v16 )
            v8 = v14;
        }
        else
        {
          *v9 = v16 - v17;
        }
        v12 = 24 - (v7 + 72);
        ++v11;
        v10 = v21;
        ++v9;
      }
      while ( v11 < 2 );
      v7 = v22;
      if ( !v8 )
      {
        v18 = *(_QWORD *)(v23 + 16);
        if ( v18 > v25 + v24 )
          v8 = v18 - (v25 + v24);
      }
      v6 = this;
      if ( *a2 > v8 )
        v8 = *a2;
      ++v4;
      *a2 = v8;
      v20 = *(VIDMM_GLOBAL **)this;
    }
    while ( v4 < *(_DWORD *)(*(_QWORD *)this + 7016LL) );
  }
}
