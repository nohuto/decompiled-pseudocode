/*
 * XREFs of ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C02DC4D0
 * Callers:
 *     ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B99B4 (-AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DAB84 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectBlackScreenDiagInfo(DXGADAPTER *a1, size_t a2, void *a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  size_t v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)a1 + 337) )
    return 0LL;
  memset(a3, 0, 0x2000uLL);
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 337) + 88LL);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(0LL, v10);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
  v17 = 0LL;
  result = VIDPN_MGR::AcquireDiagInfo(v11, a3, 0x2000uLL, 1, 0LL, &v17);
  if ( (_DWORD)result == -2147483643 )
  {
    v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v16 + 24) = 0x2000LL;
    *(_QWORD *)(v16 + 32) = v17;
    WdLogEvent5_WdWarning(v16);
    return 2147483653LL;
  }
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
