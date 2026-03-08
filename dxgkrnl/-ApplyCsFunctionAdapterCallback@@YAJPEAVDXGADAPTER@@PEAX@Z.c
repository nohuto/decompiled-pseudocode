/*
 * XREFs of ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C033E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCsStartRunningTime@DXGPROCESS@@QEBA_KI@Z @ 0x1C0055928 (-GetCsStartRunningTime@DXGPROCESS@@QEBA_KI@Z.c)
 *     ?SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x1C0055A58 (-SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z.c)
 *     ?CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z @ 0x1C0224608 (-CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z.c)
 *     ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x1C02E1464 (-AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z.c)
 *     ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02E151C (-EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

__int64 __fastcall ApplyCsFunctionAdapterCallback(struct DXGADAPTER *a1, int *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  unsigned int v5; // ebp
  struct ADAPTER_RENDER *v6; // rdx
  int v7; // eax
  unsigned __int64 CsStartRunningTime; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  DXGGLOBAL *v11; // rax
  DXGGLOBAL *Global; // rax
  bool v13; // r9
  _BYTE v15[8]; // [rsp+50h] [rbp-38h] BYREF
  struct DXGADAPTER *v16; // [rsp+58h] [rbp-30h]
  char v17; // [rsp+60h] [rbp-28h]
  unsigned __int64 v18; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = a2[2];
  v16 = a1;
  v17 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v5 = *((_DWORD *)a1 + 60);
    if ( v5 < 6 )
    {
      v6 = (struct ADAPTER_RENDER *)*((_QWORD *)a1 + 366);
      v18 = 0LL;
      v7 = DXGPROCESS::CollectRunningTime((DXGPROCESS *)v2, v6, &v18);
      if ( v7 < 0 )
      {
        WdLogSingleEntry4(3LL, v4, v2, a1, v7);
        goto LABEL_14;
      }
      if ( (_DWORD)v4 == 1 )
      {
        DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, v5, v18);
        *(_DWORD *)(v2 + 80) = 1;
        Global = DXGGLOBAL::GetGlobal();
        v13 = 1;
      }
      else
      {
        if ( (_DWORD)v4 != 2 )
        {
          WdLogSingleEntry1(2LL, v4);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"ApplyCsFunctionAdapterCallback:: Unsupported fn Type: %d",
            v4,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_14;
        }
        CsStartRunningTime = DXGPROCESS::GetCsStartRunningTime((DXGPROCESS *)v2, v5);
        v9 = v18;
        v10 = CsStartRunningTime;
        if ( v18 > CsStartRunningTime && *(_DWORD *)(v2 + 80) )
        {
          v11 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::AddGPUTimeCoreDripsBlockerTracking(
            v11,
            *((_QWORD *)a1 + 29),
            *(struct _EPROCESS **)(v2 + 56),
            v9 - v10);
        }
        DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, v5, 0LL);
        *(_DWORD *)(v2 + 80) = 0;
        Global = DXGGLOBAL::GetGlobal();
        v13 = 0;
      }
      DXGGLOBAL::EnableCoreDripsBlockerAccountingForProcess(
        Global,
        *((_QWORD *)a1 + 29),
        *(struct _EPROCESS **)(v2 + 56),
        v13);
    }
  }
LABEL_14:
  if ( v17 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  return 0LL;
}
