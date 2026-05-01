/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8___::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8_____lambda_5f960233b161913a1e7fccd27b0605a8___ @ 0x1801E79D0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5f960233b161913a1e7fccd27b0605a8___ @ 0x1801E8A78 (Windows--Internal--ComTaskPool--QueueTask__lambda_5f960233b161913a1e7fccd27b0605a8___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8___::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8_____lambda_5f960233b161913a1e7fccd27b0605a8___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_18050E960;
  return a1;
}
