/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0ca5362a8e9f42bbaa8a80157a92d215___::Run @ 0x18004B3E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f643ad3347bf4393b851723eb8b01c00_::operator() @ 0x18004B2F8 (_lambda_f643ad3347bf4393b851723eb8b01c00_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0ca5362a8e9f42bbaa8a80157a92d215___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_f643ad3347bf4393b851723eb8b01c00_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
