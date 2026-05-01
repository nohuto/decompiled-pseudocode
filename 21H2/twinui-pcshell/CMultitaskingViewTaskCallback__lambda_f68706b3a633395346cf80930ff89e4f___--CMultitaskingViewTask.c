/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___::CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___ @ 0x1803F222C
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___ @ 0x1803F2190 (MakeMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1803F0820 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___::CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(a1);
  *(_QWORD *)a1 = off_18052D880;
  *(_QWORD *)(a1 + 32) = off_18052D8D0;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 64));
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 32);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 80));
  return a1;
}
