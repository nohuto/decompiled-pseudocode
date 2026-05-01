/*
 * XREFs of ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180088154
 * Callers:
 *     DllCanUnloadNow @ 0x180087230 (DllCanUnloadNow.c)
 *     ?StaticInitialize@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CA_NXZ @ 0x18008F15C (-StaticInitialize@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CA_NXZ.c)
 *     ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1801A99C0 (-CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     DllGetActivationFactory @ 0x1801AD7F0 (DllGetActivationFactory.c)
 *     DllGetClassObject @ 0x1801AD830 (DllGetClassObject.c)
 *     ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x1803993F8 (--0VirtualTouchpadUriHandlerFactory@@QEAA@XZ.c)
 *     ??1VirtualTouchpadUriHandlerFactory@@EEAA@XZ @ 0x18039951C (--1VirtualTouchpadUriHandlerFactory@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 *Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create()
{
  __int64 *result; // rax

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  result = &Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_;
  byte_180650148 = 1;
  return result;
}
