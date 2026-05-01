/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e8706d2f1629cd8c0ffda13504c364e9___::CTaskWrapper__lambda_e8706d2f1629cd8c0ffda13504c364e9_____lambda_e8706d2f1629cd8c0ffda13504c364e9___ @ 0x18041C138
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e8706d2f1629cd8c0ffda13504c364e9___ @ 0x18041C3D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_e8706d2f1629cd8c0ffda13504c364e9___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e8706d2f1629cd8c0ffda13504c364e9___::CTaskWrapper__lambda_e8706d2f1629cd8c0ffda13504c364e9_____lambda_e8706d2f1629cd8c0ffda13504c364e9___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // r8

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1805330F8;
  return a1;
}
