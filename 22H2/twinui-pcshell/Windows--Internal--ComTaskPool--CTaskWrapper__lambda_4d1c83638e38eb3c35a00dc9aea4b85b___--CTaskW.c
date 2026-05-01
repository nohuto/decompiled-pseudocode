/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d1c83638e38eb3c35a00dc9aea4b85b___::CTaskWrapper__lambda_4d1c83638e38eb3c35a00dc9aea4b85b_____lambda_4d1c83638e38eb3c35a00dc9aea4b85b___ @ 0x18043C3E0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4d1c83638e38eb3c35a00dc9aea4b85b___ @ 0x18043C6A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_4d1c83638e38eb3c35a00dc9aea4b85b___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d1c83638e38eb3c35a00dc9aea4b85b___::CTaskWrapper__lambda_4d1c83638e38eb3c35a00dc9aea4b85b_____lambda_4d1c83638e38eb3c35a00dc9aea4b85b___(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *(_DWORD *)(a2 + 8);
  v5 = (_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)(a1 + 32) != v5 )
  {
    *(_QWORD *)(a1 + 32) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_180536960;
  return a1;
}
