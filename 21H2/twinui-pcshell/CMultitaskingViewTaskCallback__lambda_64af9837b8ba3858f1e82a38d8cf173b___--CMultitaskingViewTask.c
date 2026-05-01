/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___::CMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___ @ 0x1803F07B0
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___ @ 0x1803F0714 (MakeMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1803F0820 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___::CMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>();
  *(_QWORD *)a1 = off_18052D500;
  *(_QWORD *)(a1 + 32) = off_18052D550;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 48));
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 16);
  return a1;
}
