/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x1C01C5434
 * Callers:
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01C538C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C03BB5D4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C01C5508 (_EnforceDriverModelScalingPolicy.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(struct _LUID *a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdi
  unsigned __int64 v9; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v10[144]; // [rsp+60h] [rbp-A8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v9);
  v6 = (__int64)v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      WdLogSingleEntry1(1LL, 8340LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Potentinal Deadlock code path, Please contact basevid",
        8340LL,
        0LL,
        0LL,
        0LL,
        0LL);
      EnforceDriverModelScalingPolicy(v6, a2);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, (struct DXGADAPTER *const)v6, 0LL);
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10, 0LL);
      if ( v7 < 0 )
      {
        v8 = v7;
        if ( v7 == -1073741130 )
        {
          WdLogSingleEntry4(3LL, -1073741130LL, v6, *(int *)(v6 + 408), *(unsigned int *)(v6 + 404));
        }
        else
        {
          WdLogSingleEntry4(2LL, v7, v6, *(int *)(v6 + 408), *(unsigned int *)(v6 + 404));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire shared access on adapter - will not enforce scaling policy. (Status = 0x%I64x, pA"
                      "dapter = 0x%I64x, pAdapter->GetLuid() = 0x%I64x%08I64x)",
            v8,
            v6,
            *(int *)(v6 + 408),
            *(unsigned int *)(v6 + 404),
            0LL);
        }
      }
      else
      {
        EnforceDriverModelScalingPolicy(v6, a2);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v10);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
    }
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
  }
  else
  {
    WdLogSingleEntry2(3LL, a1->HighPart, a1->LowPart);
  }
}
