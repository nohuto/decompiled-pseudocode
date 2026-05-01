/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream_____lambda_f0c7bfcec3116c957850ec0211f27af7___::Release @ 0x18013DEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     WINRT_CloseHandle @ 0x180090CF2 (WINRT_CloseHandle.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream_____lambda_f0c7bfcec3116c957850ec0211f27af7___::Release(
        volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi
  void *v3; // rcx

  v2 = _InterlockedDecrement(Block + 4);
  if ( !v2 && Block )
  {
    v3 = (void *)*((_QWORD *)Block + 1);
    if ( v3 )
    {
      WINRT_CloseHandle(v3);
      *((_QWORD *)Block + 1) = 0LL;
    }
    operator delete((void *)Block);
  }
  return v2;
}
