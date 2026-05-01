/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::_)(IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_19c629caca3fc168e565f554a8149559___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::_scalar_deleting_destructor_ @ 0x18000E560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x180008980 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180008B48 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 *     ??3@YAXPEAX@Z @ 0x180009D50 (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::___IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_19c629caca3fc168e565f554a8149559___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::_scalar_deleting_destructor_(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(Block + 8);
  *((_DWORD *)Block + 15) = -1073741823;
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(Block + 4);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
