/*
 * XREFs of _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x1801D7770
 * Callers:
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1801D90D4 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1801E08D0 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x1801E2740 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_3a58774b2403835eabbd2227e376bc7e_::operator()(_QWORD **a1)
{
  RTL_SRWLOCK *v2; // rbx

  if ( (int)CAppViewManager::_ObliterateOperation((CAppViewManager *)*a1, (const struct _GUID *)a1[1]) < 0 && *a1[2] )
  {
    v2 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    CAppViewManager::_TransferAllWindowsToNextGlomWorker(*a1, *a1[2], 0LL, 4294967293LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*a1)[15] + 176LL))((*a1)[15], *a1[2]);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
