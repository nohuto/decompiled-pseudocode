/*
 * XREFs of ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E15B0
 * Callers:
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C01D7A9C (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DD958 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01DDFF8 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01DF13C (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHH@Z.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01FAB28 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C00E7B66 (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B8A54 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1C01E18E0 (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 *     ApiSetEditionQueryInertiaWorker @ 0x1C020B038 (ApiSetEditionQueryInertiaWorker.c)
 */

__int64 __fastcall CInertiaManager::QueryInertia(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  unsigned __int64 v7; // rdx
  CInertiaManager *v8; // rcx
  __int64 v9; // rsi
  __m128i v11[8]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *(_DWORD *)(a1 + 192);
  if ( (v3 & 1) != 0 && (v7 = *(_QWORD *)(a1 + 128)) != 0 )
  {
    CInputDest::CInputDest(v11, v7, 2 - ((v3 & 0x20) != 0), 1);
    LOBYTE(v3) = CInertiaManager::ValidateInertiaDest(v8, (const struct CInputDest *)v11);
    if ( (_BYTE)v3 && (*(_DWORD *)(a1 + 192) & 2) != 0 )
      LOBYTE(v3) = CInputDest::HasDelegationThread((CInputDest *)v11);
    CInputDest::SetEmpty((CInputDest *)v11);
  }
  else
  {
    v3 = (*(_DWORD *)(a1 + 192) & 0x10u) >> 4;
  }
  if ( (_BYTE)v3 && (LOBYTE(v3) = (a3 & *(_DWORD *)(a1 + 32)) != 0) != 0 )
  {
    v9 = a1 + 8;
    LOBYTE(v3) = (unsigned int)ApiSetEditionQueryInertiaWorker(a2, v9) != 0;
  }
  else
  {
    v9 = a1 + 8;
  }
  return v9 & -(__int64)((_BYTE)v3 != 0);
}
