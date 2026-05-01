/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_InitCoro$1_::_1_::dtor$0 @ 0x18013C6F7
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync__InitCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 600) + 10LL) )
    operator delete(*(void **)(a2 + 600), (const struct std::nothrow_t *)0x4D0);
}
