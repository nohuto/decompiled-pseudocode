/*
 * XREFs of _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____lambda_843a4523c4ce898f7fb4bb4d9e96aac5____::_1_::catch$4 @ 0x18036773C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____lambda_843a4523c4ce898f7fb4bb4d9e96aac5____::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a2 + 72);
  if ( *(_DWORD *)(v5 + 64) != -2147023174 && *(_DWORD *)(v5 + 64) != -2147417848 && *(_DWORD *)(v5 + 64) != -1996357631 )
  {
    *(_QWORD *)(a2 + 64) = __abi_winrt_ptr_ctor(v5);
    throw (Platform::Exception **)(a2 + 64);
  }
  Platform::Details::EventSourceRemove(
    *(Platform::Details **)(a2 + 144),
    *(void ***)(a2 + 152),
    *(struct Platform::Details::EventLock **)(a2 + 40),
    a4);
  return 0LL;
}
