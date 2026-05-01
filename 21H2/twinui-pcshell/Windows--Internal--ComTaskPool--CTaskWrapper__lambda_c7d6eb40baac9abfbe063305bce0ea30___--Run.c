/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7d6eb40baac9abfbe063305bce0ea30___::Run @ 0x180038340
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ed95610872b18a867010d7fca41407e7_::operator() @ 0x1800383C8 (_lambda_ed95610872b18a867010d7fca41407e7_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7d6eb40baac9abfbe063305bce0ea30___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_ed95610872b18a867010d7fca41407e7_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
