__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct _KTHREAD **a3)
{
  __int64 v6; // rdx
  unsigned int v8; // r9d
  unsigned __int16 v9; // r8
  unsigned int v10; // r9d
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // r8
  __int64 v13; // rax
  struct _KTHREAD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *v17; // rbp
  int ProcessAdapterStatistics; // ebx
  unsigned int v19; // r9d
  unsigned __int16 v20; // r8
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *v21; // rbp

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 5672LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pQueryStatistics", 5672LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 || !*((_QWORD *)a2 + 366) )
  {
    WdLogSingleEntry1(1LL, 5673LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapter && pAdapter->IsRenderAdapter()",
      5673LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 5675LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess", 5675LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3[16] != KeGetCurrentThread() && a3 != (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1) )
  {
    WdLogSingleEntry1(1LL, 5676LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pProcess->IsMutexOwner() || pProcess == DXGPROCESS::GetCurrent()",
      5676LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *(int *)a1;
  if ( (int)v6 > 9 )
  {
    if ( (_DWORD)v6 == 13 )
    {
      v12 = *((_WORD *)a1 + 400);
LABEL_40:
      v21 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24);
      ProcessAdapterStatistics = VIDMM_EXPORT::VidMmQueryProcessAdapterStatistics(
                                   *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 366) + 760LL),
                                   *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 366) + 768LL),
                                   v12,
                                   (struct DXGPROCESS *)a3,
                                   (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
      if ( ProcessAdapterStatistics >= 0 )
        return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                               *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 366) + 736LL),
                               *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 366) + 744LL),
                               (struct DXGPROCESS *)a3,
                               v21);
      return (unsigned int)ProcessAdapterStatistics;
    }
    if ( (_DWORD)v6 == 14 )
    {
      v10 = *((unsigned __int16 *)a1 + 401);
      v11 = *((_WORD *)a1 + 400);
      return (unsigned int)VIDMM_EXPORT::VidMmQueryProcessSegmentStatistics(
                             *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 366) + 760LL),
                             *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 366) + 768LL),
                             v11,
                             v10,
                             (struct DXGPROCESS *)a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    }
    if ( (_DWORD)v6 != 15 )
    {
      if ( (_DWORD)v6 != 19 )
      {
LABEL_35:
        ProcessAdapterStatistics = -1073741811;
        WdLogSingleEntry1(3LL, v6);
        return (unsigned int)ProcessAdapterStatistics;
      }
      v8 = *((unsigned __int16 *)a1 + 401);
      v9 = *((_WORD *)a1 + 400);
      return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                             *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 366) + 736LL),
                             *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 366) + 744LL),
                             v9,
                             v8,
                             (struct DXGPROCESS *)a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    }
    v19 = *((unsigned __int16 *)a1 + 401);
    v20 = *((_WORD *)a1 + 400);
    return (unsigned int)VIDMM_EXPORT::VidMmQueryProcessSegmentGroupStatistics(
                           *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 366) + 760LL),
                           *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 366) + 768LL),
                           v20,
                           v19,
                           (struct DXGPROCESS *)a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  if ( (_DWORD)v6 == 9 )
  {
    v19 = *((_DWORD *)a1 + 200);
    v20 = 0;
    return (unsigned int)VIDMM_EXPORT::VidMmQueryProcessSegmentGroupStatistics(
                           *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 366) + 760LL),
                           *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 366) + 768LL),
                           v20,
                           v19,
                           (struct DXGPROCESS *)a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  if ( (_DWORD)v6 != 1 )
  {
    if ( (_DWORD)v6 != 2 )
    {
      if ( (_DWORD)v6 != 4 )
      {
        if ( (_DWORD)v6 != 6 )
        {
          if ( (_DWORD)v6 == 8 )
            return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                                   *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 366) + 736LL),
                                   *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 366) + 744LL),
                                   *((_DWORD *)a1 + 200),
                                   (struct DXGPROCESS *)a3,
                                   (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
          goto LABEL_35;
        }
        v8 = *((_DWORD *)a1 + 200);
        v9 = -1;
        return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                               *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 366) + 736LL),
                               *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 366) + 744LL),
                               v9,
                               v8,
                               (struct DXGPROCESS *)a3,
                               (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
      }
      v10 = *((_DWORD *)a1 + 200);
      v11 = 0;
      return (unsigned int)VIDMM_EXPORT::VidMmQueryProcessSegmentStatistics(
                             *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 366) + 760LL),
                             *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 366) + 768LL),
                             v11,
                             v10,
                             (struct DXGPROCESS *)a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    }
    v12 = 0;
    goto LABEL_40;
  }
  v13 = *((_QWORD *)a2 + 366);
  v14 = a3[8];
  v15 = *(_QWORD *)(v13 + 760);
  if ( v14 )
    v16 = *((_QWORD *)v14 + (unsigned int)(*(_DWORD *)v15 - 1));
  else
    v16 = 0LL;
  v17 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24);
  ProcessAdapterStatistics = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v15 + 8) + 296LL))(
                               *(_QWORD *)(v13 + 768),
                               v16,
                               (char *)a1 + 24);
  if ( ProcessAdapterStatistics >= 0 )
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 366) + 736LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 366) + 744LL),
                           (struct DXGPROCESS *)a3,
                           v17);
  return (unsigned int)ProcessAdapterStatistics;
}
