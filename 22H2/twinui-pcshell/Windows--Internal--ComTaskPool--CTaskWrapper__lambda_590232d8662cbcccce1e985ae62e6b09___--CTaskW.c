/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_590232d8662cbcccce1e985ae62e6b09___::CTaskWrapper__lambda_590232d8662cbcccce1e985ae62e6b09_____lambda_590232d8662cbcccce1e985ae62e6b09___ @ 0x1804A1578
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_590232d8662cbcccce1e985ae62e6b09___ @ 0x1804A1BF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_590232d8662cbcccce1e985ae62e6b09___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_590232d8662cbcccce1e985ae62e6b09___::CTaskWrapper__lambda_590232d8662cbcccce1e985ae62e6b09_____lambda_590232d8662cbcccce1e985ae62e6b09___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  v5 = a2 + 2;
  a1[4] = 0LL;
  if ( a1 + 4 != a2 + 2 )
  {
    a1[4] = *v5;
    *v5 = 0LL;
  }
  v6 = a2 + 3;
  a1[5] = 0LL;
  if ( a1 + 5 != a2 + 3 )
  {
    a1[5] = *v6;
    *v6 = 0LL;
  }
  *a1 = off_18053CA70;
  return a1;
}
