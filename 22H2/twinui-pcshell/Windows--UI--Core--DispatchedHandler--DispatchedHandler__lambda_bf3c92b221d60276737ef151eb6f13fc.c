/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___ @ 0x180364568
 * Callers:
 *     ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x180364CA0 (-AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18035C898 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_bf3c92b221d60276737ef151eb6f13fc_::_lambda_bf3c92b221d60276737ef151eb6f13fc_ @ 0x180364784 (_lambda_bf3c92b221d60276737ef151eb6f13fc_--_lambda_bf3c92b221d60276737ef151eb6f13fc_.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = lambda_bf3c92b221d60276737ef151eb6f13fc_::_lambda_bf3c92b221d60276737ef151eb6f13fc_(v7, a2);
    *v4 = &off_180649D58;
    lambda_bf3c92b221d60276737ef151eb6f13fc_::_lambda_bf3c92b221d60276737ef151eb6f13fc_(a1 + 6, v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v5 + 8));
  }
  a1[37] = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a2 + 8));
  return a1;
}
