__int64 __fastcall VIDMM_PROCESS::QueryVideoMemoryInfo(
        VIDMM_PROCESS *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v11; // rdi
  __int64 v15; // rsi
  struct DXGPROCESS *v16; // rdx
  struct VIDMM_SEGMENT_GROUP_STATE *v17; // rax
  struct VIDMM_SEGMENT_GROUP_STATE *v18; // rax
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v19; // r8d
  __int64 v20; // rbx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  unsigned __int64 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  int v27; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v28[8]; // [rsp+28h] [rbp-18h] BYREF
  DXGPUSHLOCK *v29; // [rsp+30h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-8h]

  v11 = a5;
  if ( (unsigned int)a5 <= D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
  {
    v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a3);
    if ( v15 )
    {
      v19 = a5;
      v20 = *(_QWORD *)(v15 + 48) + 296LL * a4;
      *a6 = *(_QWORD *)(v20 + 8LL * (int)a5 + 24);
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                            *(VIDMM_GLOBAL **)v15,
                            a4,
                            v19,
                            *((struct VIDMM_PARTITION **)this + 36));
      *a8 = *((_QWORD *)SegmentGroupState + 5);
      *a9 = *(_QWORD *)(v20 + 8 * v11 + 56);
      v22 = a10;
      if ( a10 )
      {
        v23 = 5LL;
        v24 = v20 - (_QWORD)a10;
        do
        {
          if ( (_DWORD)v11 )
            v25 = 0LL;
          else
            v25 = *(unsigned __int64 *)((char *)v22 + v24 + 256);
          *v22++ = v25;
          --v23;
        }
        while ( v23 );
        *a11 = *(_QWORD *)(v20 + 8 * v11 + 200);
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, (struct _KTHREAD **)(v15 + 360), 0);
      DXGPUSHLOCK::AcquireShared(v29);
      v30 = 1;
      *a7 = *(_QWORD *)(v20 + 8 * v11 + 136);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
      return 0LL;
    }
    if ( !a10 )
    {
      v16 = (struct DXGPROCESS *)*((_QWORD *)this + 4);
      a5 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v27 = 0;
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        this,
        v16,
        (enum VIDMM_BUDGET_PRIORITY_BAND *)&a5,
        (enum VIDMM_BUDGET_VISIBILITY_STATE *)&v27);
      v17 = VIDMM_GLOBAL::GetSegmentGroupState(
              a2,
              a4,
              (enum _D3DKMT_MEMORY_SEGMENT_GROUP)v11,
              *((struct VIDMM_PARTITION **)this + 36));
      *a6 = *((_QWORD *)v17 + 3 * a5 + v27 + 6);
      v18 = VIDMM_GLOBAL::GetSegmentGroupState(
              a2,
              a4,
              (enum _D3DKMT_MEMORY_SEGMENT_GROUP)v11,
              *((struct VIDMM_PARTITION **)this + 36));
      *a8 = *((_QWORD *)v18 + 5);
      *a9 = 0LL;
      *a7 = 0LL;
      return 0LL;
    }
  }
  return 3221225485LL;
}
