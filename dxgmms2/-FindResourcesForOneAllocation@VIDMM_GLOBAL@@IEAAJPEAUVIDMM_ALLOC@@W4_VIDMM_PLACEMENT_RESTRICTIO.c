__int64 __fastcall VIDMM_GLOBAL::FindResourcesForOneAllocation(
        __int64 a1,
        __int64 **a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v15; // r8
  bool v16; // al
  __int64 v17; // rcx
  unsigned int BucketIdForAllocationSizePow2; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // [rsp+20h] [rbp-28h]

  v9 = **a2;
  if ( (*(_DWORD *)(a2[1][1] + 112) & 8) != 0 && (*(_DWORD *)(v9 + 68) & 0x440) == 0x40 )
  {
    a3 = 2;
LABEL_10:
    v11 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet((VIDMM_GLOBAL *)a1, v9, a3, 0, a5, a6);
    goto LABEL_7;
  }
  if ( a6 != -1 )
    goto LABEL_10;
  v10 = *(_DWORD *)(v9 + 64);
  if ( !v10 )
    goto LABEL_10;
  if ( !a4 || (v10 & 0x1F) == 0 && (v10 & 0x7C0) == 0 )
  {
    v12 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2);
    if ( v12 >= 0 )
      goto LABEL_8;
    goto LABEL_10;
  }
  v11 = VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(a1, **a2);
LABEL_7:
  v12 = v11;
LABEL_8:
  v13 = *(unsigned int *)(v9 + 68);
  if ( (v13 & 0x4000000) != 0 && v12 >= 0 )
  {
    v15 = a2[1][2];
    v16 = (*(_DWORD *)(*(_QWORD *)(v9 + 200) + 80LL) & 0x1001) != 0 && (v13 & 0x400) == 0;
    v17 = *(_QWORD *)(v9 + 16);
    if ( v16 )
    {
      BucketIdForAllocationSizePow2 = GetBucketIdForAllocationSizePow2(v17, v13, v15);
      *(_QWORD *)(v20 + 8LL * BucketIdForAllocationSizePow2 + 2400) += v21;
      ++*(_DWORD *)(v20 + 4LL * BucketIdForAllocationSizePow2 + 2664);
      ++*(_DWORD *)(v20 + 1780);
      v22 = bTracingEnabled == 0;
      *(_BYTE *)(v20 + 2752) = 1;
      if ( !v22 && (byte_1C00769C1 & 1) != 0 )
      {
        LODWORD(v28) = -1073741823;
        McTemplateK0pq_EtwWriteTransfer(v19, &EventCompleteAllocationMigration, v20, v9, v28);
      }
      v23 = *(_QWORD *)(v9 + 16);
      ++*(_DWORD *)(a1 + 7728);
      *(_QWORD *)(a1 + 7736) += v23;
    }
    else
    {
      v24 = GetBucketIdForAllocationSizePow2(v17, v13, v15);
      *(_QWORD *)(v25 + 8LL * v24 + 2224) += v26;
      ++*(_DWORD *)(v25 + 4LL * v24 + 2576);
      ++*(_DWORD *)(v25 + 1776);
      v22 = bTracingEnabled == 0;
      *(_BYTE *)(v25 + 2752) = 1;
      if ( !v22 && (byte_1C00769C1 & 1) != 0 )
      {
        LODWORD(v28) = 0;
        McTemplateK0pq_EtwWriteTransfer(v19, &EventCompleteAllocationMigration, v25, v9, v28);
      }
      *(_QWORD *)(a1 + 7720) += *(_QWORD *)(v9 + 16);
      ++*(_DWORD *)(a1 + 7712);
      ++*(_DWORD *)(a1 + 44660);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v19);
      v27[3] = a2;
      v27[4] = *(_QWORD *)(v9 + 120);
      v27[5] = *(_QWORD *)(v9 + 200);
    }
    *(_DWORD *)(v9 + 68) &= 0xF9FFFFFF;
  }
  return (unsigned int)v12;
}
