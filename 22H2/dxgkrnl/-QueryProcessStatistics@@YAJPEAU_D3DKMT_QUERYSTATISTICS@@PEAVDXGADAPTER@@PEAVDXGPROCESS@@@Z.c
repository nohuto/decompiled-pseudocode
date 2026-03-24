/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C0222AE0
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1C0226088 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C003F2C8 (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C003F358 (-VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C003F3EC (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1C003F47C (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct DXGPROCESS *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int ProcessNodeStatistics; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx

  v4 = 0LL;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v8 + 24) = 5393LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2 || !*((_QWORD *)a2 + 338) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v9 + 24) = 5394LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v10 + 24) = 5396LL;
    WdLogEvent5_WdAssertion(v10);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)a3 + 13) + 16LL) != CurrentThread
    && a3 != DXGPROCESS::GetCurrent((__int64)CurrentThread, (__int64)a2, (__int64)a3, a4) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, a2);
    *(_QWORD *)(v13 + 24) = 5397LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v27 = *((_QWORD *)a2 + 338);
    v28 = *((_QWORD *)a3 + 8);
    v29 = *(_QWORD *)(v27 + 640);
    if ( v28 )
      v30 = *(_QWORD *)(v28 + 8LL * (unsigned int)(*(_DWORD *)v29 - 1));
    else
      v30 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v29 + 8) + 304LL))(
            *(_QWORD *)(v27 + 648),
            v30,
            (char *)a1 + 24);
    if ( v14 >= 0 )
      return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                             *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 338) + 616LL),
                             *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 338) + 624LL),
                             a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  else
  {
    if ( *(_DWORD *)a1 != 2 )
    {
      switch ( *(_DWORD *)a1 )
      {
        case 4:
          v20 = *((_QWORD *)a2 + 338);
          v21 = *((_QWORD *)a3 + 8);
          v22 = *(_QWORD *)(v20 + 640);
          if ( v21 )
            v4 = *(_QWORD *)(v21 + 8LL * (unsigned int)(*(_DWORD *)v22 - 1));
          ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v22 + 8)
                                                                                             + 328LL))(
                                    *(_QWORD *)(v20 + 648),
                                    *((unsigned int *)a1 + 200),
                                    v4,
                                    (char *)a1 + 24);
          break;
        case 6:
          ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                                    *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 338) + 616LL),
                                    *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 338) + 624LL),
                                    *((_DWORD *)a1 + 200),
                                    a3,
                                    (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
          break;
        case 8:
          ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                                    *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 338) + 616LL),
                                    *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 338) + 624LL),
                                    *((_DWORD *)a1 + 200),
                                    a3,
                                    (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
          break;
        case 9:
          v16 = *((_QWORD *)a2 + 338);
          v17 = *((_QWORD *)a3 + 8);
          v18 = *(_QWORD *)(v16 + 640);
          if ( v17 )
            v4 = *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)v18 - 1));
          ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v18 + 8)
                                                                                             + 336LL))(
                                    *(_QWORD *)(v16 + 648),
                                    *((unsigned int *)a1 + 200),
                                    v4,
                                    (char *)a1 + 24);
          break;
        default:
          v14 = -1073741811;
          v15 = WdLogNewEntry5_WdWarning((unsigned int)(*(_DWORD *)a1 - 8), a2, a3);
          *(_QWORD *)(v15 + 24) = *(int *)a1;
          WdLogEvent5_WdWarning(v15);
          return (unsigned int)v14;
      }
      return ProcessNodeStatistics;
    }
    v23 = *((_QWORD *)a2 + 338);
    v24 = *((_QWORD *)a3 + 8);
    v25 = *(_QWORD *)(v23 + 640);
    if ( v24 )
      v26 = *(_QWORD *)(v24 + 8LL * (unsigned int)(*(_DWORD *)v25 - 1));
    else
      v26 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v25 + 8) + 312LL))(
            *(_QWORD *)(v23 + 648),
            v26,
            (char *)a1 + 24);
    if ( v14 >= 0 )
      return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                             *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 338) + 616LL),
                             *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 338) + 624LL),
                             a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  return (unsigned int)v14;
}
