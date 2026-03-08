/*
 * XREFs of ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C0210B80
 * Callers:
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0206300 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C020D290 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C020D9D0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x1C0210C78 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C022E058 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C00F1E86 (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01E3284 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1C0210EE0 (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 *     ApiSetEditionQueryInertiaWorker @ 0x1C0242384 (ApiSetEditionQueryInertiaWorker.c)
 */

__int64 __fastcall CInertiaManager::QueryInertia(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  unsigned __int64 v7; // rdx
  CInertiaManager *v8; // rcx
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v12[16]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *(_DWORD *)(a1 + 192);
  if ( (v3 & 1) != 0 && (v7 = *(_QWORD *)(a1 + 128)) != 0 )
  {
    CInputDest::CInputDest(v12, v7, 2 - ((v3 & 0x20) != 0), 1);
    LOBYTE(v3) = CInertiaManager::ValidateInertiaDest(v8, (const struct CInputDest *)v12);
    if ( (_BYTE)v3 && (*(_DWORD *)(a1 + 192) & 2) != 0 )
      LOBYTE(v3) = CInputDest::HasDelegationThread((CInputDest *)v12);
    CInputDest::SetEmpty((CInputDest *)v12);
  }
  else
  {
    v3 = (*(_DWORD *)(a1 + 192) & 0x10u) >> 4;
  }
  if ( (_BYTE)v3 && (v9 = *(_DWORD *)(a1 + 32) & a3, LOBYTE(v3) = v9 != 0, v9) )
  {
    v10 = a1 + 8;
    LOBYTE(v3) = (unsigned int)ApiSetEditionQueryInertiaWorker(a2, v10) != 0;
  }
  else
  {
    v10 = a1 + 8;
  }
  return v10 & -(__int64)((_BYTE)v3 != 0);
}
