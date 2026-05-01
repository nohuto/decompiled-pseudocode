/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d957daca4bf82a19faac8188fc39455___::CTaskWrapper__lambda_9d957daca4bf82a19faac8188fc39455_____lambda_9d957daca4bf82a19faac8188fc39455___ @ 0x18041C0C8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9d957daca4bf82a19faac8188fc39455___ @ 0x18041C338 (Windows--Internal--ComTaskPool--QueueTask__lambda_9d957daca4bf82a19faac8188fc39455___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d957daca4bf82a19faac8188fc39455___::CTaskWrapper__lambda_9d957daca4bf82a19faac8188fc39455_____lambda_9d957daca4bf82a19faac8188fc39455___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r8

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[4] = a2[2];
  *a1 = off_180533148;
  return a1;
}
