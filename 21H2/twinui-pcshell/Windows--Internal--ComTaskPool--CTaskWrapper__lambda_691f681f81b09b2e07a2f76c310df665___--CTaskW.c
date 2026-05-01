/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_691f681f81b09b2e07a2f76c310df665___::CTaskWrapper__lambda_691f681f81b09b2e07a2f76c310df665_____lambda_691f681f81b09b2e07a2f76c310df665___ @ 0x180392AC4
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_95ea086e3b8fa056e55a3a293b600f83___ @ 0x1803930D0 (CreationThreadDispatcher--RunAsync__lambda_95ea086e3b8fa056e55a3a293b600f83___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     _lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_ @ 0x180369DB8 (_lambda_b572b7b401bca0583e7d35bf745a8e03_--_lambda_b572b7b401bca0583e7d35bf745a8e03_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_691f681f81b09b2e07a2f76c310df665___::CTaskWrapper__lambda_691f681f81b09b2e07a2f76c310df665_____lambda_691f681f81b09b2e07a2f76c310df665___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_(a1 + 2, a2);
  v4 = a2 + 2;
  a1[4] = 0LL;
  if ( a1 + 4 != v4 )
  {
    a1[4] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_18064DC68;
  return a1;
}
