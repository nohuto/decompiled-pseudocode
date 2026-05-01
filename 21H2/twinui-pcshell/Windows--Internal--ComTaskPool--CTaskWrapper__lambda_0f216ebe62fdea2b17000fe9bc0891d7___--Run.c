/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0f216ebe62fdea2b17000fe9bc0891d7___::Run @ 0x18007EDD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d8bb58e9e9a518de6b9a01fbafcee51a_::operator() @ 0x18007EE58 (_lambda_d8bb58e9e9a518de6b9a01fbafcee51a_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0f216ebe62fdea2b17000fe9bc0891d7___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_d8bb58e9e9a518de6b9a01fbafcee51a_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
