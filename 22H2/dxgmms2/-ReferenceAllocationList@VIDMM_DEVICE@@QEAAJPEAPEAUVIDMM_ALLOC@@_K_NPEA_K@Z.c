/*
 * XREFs of ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0072FB0
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0072D9C (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024D70 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x1C0025CCC (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0065084 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0073C50 (VidMmiShouldChargeAllocationAgainstBudget.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferenceAllocationList(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC **a2,
        __int64 a3,
        char a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r15
  __int64 v6; // rbp
  bool v7; // zf
  __int64 v8; // r15
  struct VIDMM_ALLOC **v9; // rbx
  VIDMM_DEVICE *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // edx
  VIDMM_GLOBAL **v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // rcx
  struct VIDMM_ALLOC **v17; // r13
  struct VIDMM_ALLOC **v18; // r9
  struct VIDMM_ALLOC *v19; // r8
  __int64 v20; // r10
  unsigned __int64 *v21; // r12
  unsigned __int64 v22; // rax
  unsigned int v23; // r15d
  unsigned __int64 *v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // r14
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v27; // ebx
  __int64 v28; // rbp
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // r8
  struct VIDMM_ALLOC **v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int i; // edx
  __int64 v38; // rax
  _QWORD *v39; // rcx
  struct VIDMM_ALLOC *v40; // r9
  __int64 *v41; // rsi
  __int64 *v42; // rcx
  unsigned int v43; // ebp
  unsigned int v44; // edi
  _QWORD *v45; // rbx
  unsigned int j; // r8d
  __int64 v47; // rax
  _QWORD *v48; // rdx
  unsigned int v49; // ebx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  struct VIDMM_ALLOC **v54; // rdx
  VIDMM_DEVICE *v55; // rax
  VIDMM_DEVICE **v56; // rcx
  VIDMM_DEVICE **v57; // rdx
  __int64 v58; // r10
  __int64 v59; // r11
  __int64 v60; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  int v62; // r9d
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // [rsp+50h] [rbp-88h]
  VIDMM_GLOBAL **v66; // [rsp+58h] [rbp-80h]
  VIDMM_GLOBAL *v67; // [rsp+60h] [rbp-78h]
  __int64 v68; // [rsp+70h] [rbp-68h]
  __int64 v69; // [rsp+80h] [rbp-58h] BYREF
  __int64 v70; // [rsp+88h] [rbp-50h]

  v5 = *((_QWORD *)this + 2);
  v6 = a3;
  v7 = v5 == -360;
  v8 = v5 + 360;
  v68 = v8;
  v9 = a2;
  v10 = this;
  if ( !v7 && *(struct _KTHREAD **)(v8 + 8) == KeGetCurrentThread() )
  {
    v63 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v63 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v63);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v62 = *(_DWORD *)(v8 + 24);
      if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"g", v12, v62);
    }
    ExAcquirePushLockExclusiveEx(v8, 0LL);
  }
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v13 = 0;
  v14 = (VIDMM_GLOBAL **)*((_QWORD *)v10 + 2);
  v66 = v14;
  if ( *((_DWORD *)*v14 + 1750) )
  {
    do
    {
      v15 = v13++;
      v16 = (_QWORD *)((char *)v14[6] + 296 * v15);
      v16[13] = v16[9];
      v16[14] = v16[10];
      v16[15] = v16[11];
      v16[16] = v16[12];
    }
    while ( v13 < *((_DWORD *)*v14 + 1750) );
    v14 = (VIDMM_GLOBAL **)*((_QWORD *)v10 + 2);
    v66 = v14;
  }
  v17 = &v9[v6];
  v18 = v9;
  if ( v9 != v17 )
  {
    do
    {
      v19 = *v18;
      v20 = **(_QWORD **)*v18;
      if ( ((*(_DWORD *)(v20 + 76) & 0x40) == 0
         || *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 1) + 8LL) + 288LL) == **(_QWORD **)(v20 + 480))
        && !(*((_BYTE *)v19 + 25) & 1 | *((_DWORD *)v19 + 38))
        && !*((_BYTE *)v19 + 27) )
      {
        v51 = **(_QWORD **)v19;
        if ( (*((_BYTE *)v19 + 36) & 1) != 0 && (*(_DWORD *)(v51 + 76) & 0xF0000) == 0x20000 )
          v52 = 0LL;
        else
          v52 = *(_WORD *)(v51 + 78) & 0xF;
        v53 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 48LL) + 296LL * (*(_DWORD *)(v20 + 76) & 0x3F) + 8 * v52;
        *(_QWORD *)(v53 + 104) += *(_QWORD *)(v20 + 16);
        *((_BYTE *)v19 + 27) = 1;
      }
      ++v18;
    }
    while ( v18 != v17 );
    v14 = (VIDMM_GLOBAL **)*((_QWORD *)v10 + 2);
    v66 = v14;
  }
  v21 = a5;
  v22 = 0LL;
  *a5 = 0LL;
  v67 = *v14;
  if ( *((_DWORD *)*v14 + 1750) )
  {
    v23 = 0;
    do
    {
      v24 = (unsigned __int64 *)&v69;
      v25 = 0LL;
      v65 = 0LL;
      v26 = (__int64)v14[6] + 296 * v23;
      v27 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v28 = v26 + 104 - (_QWORD)&v69;
      do
      {
        if ( a4 )
        {
          SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                                v67,
                                v23,
                                v27,
                                *(struct VIDMM_PARTITION **)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 40LL) + 288LL));
          v25 = v65;
          v29 = *((_QWORD *)SegmentGroupState + 3);
        }
        else
        {
          v29 = *(unsigned __int64 *)((char *)v24 + v28 - 80);
        }
        v30 = *(unsigned __int64 *)((char *)v24 + v28);
        *v24 = v29;
        if ( v30 > v29 )
        {
          v64 = v30 - v29;
          if ( v25 > v64 )
            v64 = v25;
          v25 = v64;
          v65 = v64;
        }
        else
        {
          *v24 = v29 - v30;
        }
        ++v27;
        ++v24;
      }
      while ( v27 < 2 );
      v14 = v66;
      v21 = a5;
      if ( !v25 )
      {
        v31 = *(_QWORD *)(v26 + 120);
        if ( v31 > v70 + v69 )
          v25 = v31 - (v70 + v69);
      }
      v22 = *a5;
      if ( *a5 <= v25 )
        v22 = v25;
      *a5 = v22;
      ++v23;
      v67 = *v66;
    }
    while ( v23 < *((_DWORD *)*v66 + 1750) );
    v9 = a2;
    v10 = this;
    v8 = v68;
    v6 = a3;
  }
  v32 = 0x1FFFFFFFFFFFFFFFLL;
  v33 = v9;
  v34 = v6 & 0x1FFFFFFFFFFFFFFFLL;
  v35 = 0LL;
  if ( v9 > v17 )
    v34 = 0LL;
  if ( v34 )
  {
    do
    {
      v36 = (__int64)*v33++;
      ++v35;
      *(_BYTE *)(v36 + 27) = 0;
    }
    while ( v35 != v34 );
    v22 = *v21;
  }
  if ( v22 )
  {
    v49 = -1073741801;
  }
  else
  {
    if ( bTracingEnabled )
    {
      v32 = *((_QWORD *)v10 + 2);
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)v32 + 7000LL); v39[22] = v39[19] )
      {
        v38 = i++;
        v39 = (_QWORD *)(*(_QWORD *)(v32 + 48) + 296 * v38);
        v39[20] = v39[17];
        v39[21] = v39[18];
      }
    }
    for ( ; v9 != v17; ++*((_DWORD *)v40 + 38) )
    {
      v40 = *v9;
      if ( !(*((_BYTE *)*v9 + 25) & 1 | *((_DWORD *)*v9 + 38)) )
      {
        v54 = (struct VIDMM_ALLOC **)*((_QWORD *)v40 + 14);
        v55 = (struct VIDMM_ALLOC *)((char *)v40 + 112);
        if ( v54[1] != (struct VIDMM_ALLOC *)((char *)v40 + 112)
          || (v56 = (VIDMM_DEVICE **)*((_QWORD *)v40 + 15), *v56 != v55)
          || (*v56 = (VIDMM_DEVICE *)v54,
              v54[1] = (struct VIDMM_ALLOC *)v56,
              v57 = (VIDMM_DEVICE **)*((_QWORD *)v10 + 20),
              *v57 != (VIDMM_DEVICE *)((char *)v10 + 152)) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v55 = (char *)v10 + 152;
        *((_QWORD *)v40 + 15) = v57;
        *v57 = v55;
        *((_QWORD *)v10 + 20) = v55;
        if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(v40) )
        {
          v60 = (unsigned __int8)HIBYTE(*(_WORD *)(v59 + 76)) >> 4;
          *(_QWORD *)(v58 + 8 * v60 + 136) += *(_QWORD *)(v59 + 16);
        }
      }
      ++v9;
    }
    v41 = (__int64 *)*((_QWORD *)v10 + 2);
    v42 = v41;
    if ( bTracingEnabled )
    {
      v43 = 0;
      if ( *(_DWORD *)(*v41 + 7000) )
      {
        do
        {
          v44 = 0;
          v45 = (_QWORD *)(v41[6] + 296LL * v43 + 136);
          do
          {
            if ( v45[3] != *v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
              McTemplateK0xxpqhu_EtwWriteTransfer(*v41, &EventVidMmProcessUsageChange, v32);
            ++v44;
            ++v45;
          }
          while ( v44 < 3 );
          ++v43;
        }
        while ( v43 < *(_DWORD *)(*v41 + 7000) );
        v42 = (__int64 *)*((_QWORD *)v10 + 2);
      }
    }
    for ( j = 0; j < *(_DWORD *)(*v42 + 7000); v48[12] = v48[16] )
    {
      v47 = j++;
      v48 = (_QWORD *)(v42[6] + 296 * v47);
      v48[9] = v48[13];
      v48[10] = v48[14];
      v48[11] = v48[15];
    }
    v49 = 0;
  }
  *(_QWORD *)(v8 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  return v49;
}
