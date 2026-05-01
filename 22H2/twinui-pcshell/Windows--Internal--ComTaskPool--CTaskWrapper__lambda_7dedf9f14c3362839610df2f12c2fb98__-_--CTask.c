/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7dedf9f14c3362839610df2f12c2fb98__&_::CTaskWrapper__lambda_7dedf9f14c3362839610df2f12c2fb98__&___lambda_7dedf9f14c3362839610df2f12c2fb98__&_ @ 0x180201828
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7dedf9f14c3362839610df2f12c2fb98__&_ @ 0x180201AA8 (Windows--Internal--ComTaskPool--QueueTask__lambda_7dedf9f14c3362839610df2f12c2fb98__-_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B05E0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7dedf9f14c3362839610df2f12c2fb98____::CTaskWrapper__lambda_7dedf9f14c3362839610df2f12c2fb98______lambda_7dedf9f14c3362839610df2f12c2fb98____(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  v4 = *a2;
  a1[2] = *a2;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 208);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 208), v5 + 1, v5);
        if ( v6 != v5 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v5 + 16),
      (volatile int *)v4);
  }
LABEL_8:
  *a1 = off_18050FBB8;
  return a1;
}
