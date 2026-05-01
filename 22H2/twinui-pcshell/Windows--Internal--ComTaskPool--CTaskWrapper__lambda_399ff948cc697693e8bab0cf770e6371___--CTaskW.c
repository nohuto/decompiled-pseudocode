/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371___::CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371_____lambda_399ff948cc697693e8bab0cf770e6371___ @ 0x18030D1E0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_399ff948cc697693e8bab0cf770e6371___ @ 0x18030E744 (Windows--Internal--ComTaskPool--QueueTask__lambda_399ff948cc697693e8bab0cf770e6371___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371___::CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371_____lambda_399ff948cc697693e8bab0cf770e6371___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[4] = a2[2];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 4);
  *a1 = off_180522970;
  return a1;
}
