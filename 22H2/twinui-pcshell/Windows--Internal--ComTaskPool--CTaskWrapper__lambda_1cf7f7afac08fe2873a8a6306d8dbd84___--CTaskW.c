/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1cf7f7afac08fe2873a8a6306d8dbd84___::CTaskWrapper__lambda_1cf7f7afac08fe2873a8a6306d8dbd84_____lambda_1cf7f7afac08fe2873a8a6306d8dbd84___ @ 0x180339A14
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1cf7f7afac08fe2873a8a6306d8dbd84___ @ 0x180339B98 (Windows--Internal--ComTaskPool--QueueTask__lambda_1cf7f7afac08fe2873a8a6306d8dbd84___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1cf7f7afac08fe2873a8a6306d8dbd84___::CTaskWrapper__lambda_1cf7f7afac08fe2873a8a6306d8dbd84_____lambda_1cf7f7afac08fe2873a8a6306d8dbd84___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  a1[4] = a2[2];
  a1[5] = a2[3];
  *a1 = off_180524F10;
  return a1;
}
