/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___::Run @ 0x1801F9830
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_db6d4cb92203a874116970825d9bc39e_::operator() @ 0x1801F8B64 (_lambda_db6d4cb92203a874116970825d9bc39e_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_db6d4cb92203a874116970825d9bc39e_::operator()((_QWORD *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
