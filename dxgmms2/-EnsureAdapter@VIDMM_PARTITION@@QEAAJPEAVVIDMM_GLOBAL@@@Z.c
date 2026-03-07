__int64 __fastcall VIDMM_PARTITION::EnsureAdapter(VIDMM_PARTITION *this, struct VIDMM_GLOBAL *a2)
{
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  unsigned int v5; // ebx
  struct VIDMM_PARTITION_ADAPTER_INFO *v6; // rdi
  unsigned __int64 v7; // rbp
  NTSTATUS v8; // edi
  wchar_t *v9; // r15
  unsigned int v10; // ebp
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupStateForPartition; // rax
  __int64 v12; // rcx
  PPCW_INSTANCE *v13; // r14
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+28h] [rbp-80h]
  __int64 v17; // [rsp+30h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  struct _PCW_DATA v19; // [rsp+60h] [rbp-48h] BYREF
  struct _PCW_DATA v20; // [rsp+70h] [rbp-38h] BYREF

  AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, a2);
  v5 = 0;
  v6 = AdapterInfo;
  if ( *((_QWORD *)AdapterInfo + 1) )
    return 0LL;
  v7 = *((unsigned int *)a2 + 1754);
  if ( (unsigned int)v7 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x158 )
      goto LABEL_18;
    *((_QWORD *)AdapterInfo + 3) = ExAllocatePool2(64LL, 344 * v7, 1833789782LL);
  }
  else
  {
    *((_QWORD *)AdapterInfo + 3) = (char *)AdapterInfo + 32;
    if ( (_DWORD)v7 )
      memset((char *)AdapterInfo + 32, 0, 344 * v7);
  }
  *((_DWORD *)v6 + 94) = v7;
  if ( !*((_QWORD *)v6 + 3) )
  {
LABEL_18:
    _InterlockedAdd(&dword_1C00768D0, 1u);
    WdLogSingleEntry1(6LL, 453LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Couldn't allocate memory for vidmmpartition.",
      453LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  *((_QWORD *)v6 + 1) = a2;
  *(_QWORD *)v6 = this;
  VIDMM_GLOBAL::CalculatePartitionAdapterBudgets(a2, this, v6);
  v8 = 0;
  v9 = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create naming string for CreateGpuPerformanceCounterSetLocalAdapterMemory",
      465LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v10 = 0;
  if ( *((_DWORD *)a2 + 1754) )
  {
    while ( 1 )
    {
      SegmentGroupStateForPartition = VIDMM_GLOBAL::GetSegmentGroupStateForPartition(a2, v10, this);
      v12 = *((_QWORD *)a2 + 3);
      v13 = (PPCW_INSTANCE *)SegmentGroupStateForPartition;
      LODWORD(v17) = *((_DWORD *)this + 8);
      DestinationString = 0LL;
      LODWORD(v16) = v10;
      LODWORD(Data) = *(_DWORD *)(v12 + 404);
      v8 = RtlStringCbPrintfW(
             v9,
             0x208uLL,
             L"luid_0x%08X_0x%08X_phys_%u_part_%u",
             *(unsigned int *)(v12 + 408),
             Data,
             v16,
             v17);
      if ( v8 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v9);
      if ( *(_DWORD *)v13 )
      {
        if ( *(_DWORD *)v13 == 1 )
        {
          v20.Data = v13;
          v20.Size = 344;
          v8 = PcwCreateInstance(v13 + 42, GpuPerformanceCounterSetNonLocalAdapterMemory, &DestinationString, 1u, &v20);
          if ( v8 < 0 )
          {
            WdLogSingleEntry0(1LL);
            ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to create CreateGpuPerformanceCounterSetNonLocalAdapterMemory",
              503LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_12;
          }
        }
      }
      else
      {
        v19.Data = v13;
        v19.Size = 344;
        v8 = PcwCreateInstance(v13 + 42, GpuPerformanceCounterSetLocalAdapterMemory, &DestinationString, 1u, &v19);
        if ( v8 < 0 )
        {
          WdLogSingleEntry0(1LL);
          ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to create CreateGpuPerformanceCounterSetLocalAdapterMemory",
            494LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_12;
        }
      }
      if ( ++v10 >= *((_DWORD *)a2 + 1754) )
        goto LABEL_12;
    }
    WdLogSingleEntry0(1LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create naming string for Adapter Memory partitions",
      484LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_12:
  ExFreePoolWithTag(v9, 0);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v5;
}
