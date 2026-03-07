// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::ReAllocateOldResource(VIDMM_LINEAR_POOL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v6; // r8d
  unsigned int v7; // edx
  struct VIDMM_PARTITION *v8; // r9
  VIDMM_GLOBAL *v9; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // r8
  int v15; // ebx
  VIDMM_SEGMENT *v16; // rax
  struct _VIDMM_GLOBAL_ALLOC **v17; // rcx
  VIDMM_SEGMENT **v18; // rdx
  VIDMM_SEGMENT **v19; // rdx
  unsigned int v20; // [rsp+20h] [rbp-18h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = a2;
  }
  VIDMM_SEGMENT::IncrementBytesResident(
    (VIDMM_SEGMENT *)this,
    **((struct VIDMM_PARTITION ***)a2 + 64),
    *((_QWORD *)a2 + 2),
    (*((_DWORD *)a2 + 17) & 0x200) != 0);
  v5 = *((_QWORD *)a2 + 2);
  v6 = *((_DWORD *)this + 119);
  v7 = *((_DWORD *)this + 95);
  v8 = (struct VIDMM_PARTITION *)**((_QWORD **)a2 + 64);
  v9 = this[1];
  this[27] = (VIDMM_LINEAR_POOL *)((char *)this[27] + v5);
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v9, v7, v6, v8);
  *((_QWORD *)SegmentGroupState + 15) += v5;
  ++*((_DWORD *)this + 80);
  ++*((_DWORD *)this + 81);
  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
  {
    v20 = *((_DWORD *)this + 4) + 1;
    McTemplateK0pqx_EtwWriteTransfer(v20, &TotalBytesResidentInSegment, v11, *((_QWORD *)this[1] + 3), v20, this[28]);
  }
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v12 = *((_QWORD *)a2 + 65);
    if ( v12 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v12 + 44)) == 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 64) + 56LL), *((_QWORD *)a2 + 2));
      if ( _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 65) + 40LL)) != 1 )
        goto LABEL_14;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 64) + 56LL), *((_QWORD *)a2 + 2));
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 64) + 64LL), *((_QWORD *)a2 + 2));
LABEL_14:
    *((_QWORD *)this[1] + 5026) += *((_QWORD *)a2 + 2);
  }
  v13 = *((_DWORD *)this + 20);
  if ( (v13 & 0x20) != 0 )
    v14 = *((_QWORD *)a2 + 3);
  else
    v14 = *((_QWORD *)a2 + 2);
  if ( (v13 & 0x1000) != 0 )
  {
    v15 = 0;
    *((_QWORD *)a2 + 17) = 1LL;
  }
  else
  {
    v15 = VIDMM_LINEAR_POOL::AllocateAt(
            this[19],
            *(union _LARGE_INTEGER *)((char *)a2 + 128),
            v14,
            a2,
            (void **)a2 + 17);
  }
  v16 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 408);
  v17 = (struct _VIDMM_GLOBAL_ALLOC **)*((_QWORD *)a2 + 51);
  if ( v17[1] != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 408)
    || (v18 = (VIDMM_SEGMENT **)*((_QWORD *)a2 + 52), *v18 != v16)
    || (*v18 = (VIDMM_SEGMENT *)v17,
        v17[1] = (struct _VIDMM_GLOBAL_ALLOC *)v18,
        v19 = (VIDMM_SEGMENT **)this[21],
        *v19 != (VIDMM_SEGMENT *)(this + 20)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v16 = this + 20;
  *((_QWORD *)a2 + 52) = v19;
  *v19 = v16;
  this[21] = v16;
  VIDMM_SEGMENT::MarkResourcesForEviction(this, (struct _VIDMM_POOL_BLOCK **)a2, 0LL, 0LL);
  if ( v15 < 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 6LL, a2, v15, 0LL);
  }
}
