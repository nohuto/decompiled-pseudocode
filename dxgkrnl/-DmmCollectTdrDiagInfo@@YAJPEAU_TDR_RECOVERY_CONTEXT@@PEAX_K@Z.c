/*
 * XREFs of ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C03A7DA4
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0309D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectTdrDiagInfo(struct _TDR_RECOVERY_CONTEXT *a1, void *a2, size_t a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  VIDPN_MGR *v8; // rcx
  int v9; // eax
  size_t v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  memset(a2, 0, 0x2000uLL);
  v7 = *((_QWORD *)a1 + 4);
  if ( v7 )
  {
    if ( !*(_QWORD *)(v7 + 2920) )
      WdLogSingleEntry0(1LL);
    v8 = *(VIDPN_MGR **)(*(_QWORD *)(v7 + 2920) + 104LL);
    if ( v8 )
    {
      v10 = 0LL;
      v9 = VIDPN_MGR::AcquireDiagInfo(v8, a2, 0x2000uLL, 1, 0LL, &v10);
      if ( v9 == -2147483643 )
      {
        WdLogSingleEntry2(3LL, 0x2000LL, v10);
        return 2147483653LL;
      }
      else
      {
        if ( v9 < 0 )
          return (unsigned int)v9;
        return v3;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v7);
      return 3223192373LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
}
