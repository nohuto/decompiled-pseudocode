/*
 * XREFs of _anonymous_namespace_::TryGetFilePublisher @ 0x1801430F8
 * Callers:
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x180138CD0 (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x180143914 (_anonymous_namespace_--TryGetProcessPublisher.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z @ 0x18012A290 (--$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z.c)
 *     ?resize@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x180146060 (-resize@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::TryGetFilePublisher(__int64 a1, LPCWSTR *a2)
{
  const WCHAR *v3; // rdi
  DWORD FileVersionInfoSize; // eax
  const char *v5; // r9
  __int64 result; // rax
  const WCHAR *v9; // [rsp+38h] [rbp-40h] BYREF
  LPVOID lpBuffer; // [rsp+40h] [rbp-38h] BYREF
  LPCVOID pBlock[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  DWORD dwHandle; // [rsp+60h] [rbp-18h] BYREF
  unsigned int puLen; // [rsp+64h] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *a2;
  FileVersionInfoSize = GetFileVersionInfoSizeExW(2u, *a2, &dwHandle);
  try
  {
    if ( FileVersionInfoSize )
    {
      *(_OWORD *)pBlock = 0LL;
      v12 = 0LL;
      std::vector<unsigned char>::resize(pBlock, FileVersionInfoSize);
      if ( GetFileVersionInfoExW(2u, v3, 0, LODWORD(pBlock[1]) - LODWORD(pBlock[0]), (LPVOID)pBlock[0])
        && VerQueryValueW(pBlock[0], L"\\StringFileInfo\\040904B0\\CompanyName", &lpBuffer, &puLen) )
      {
        v9 = v3;
        PinManagerTelemetry::FilePublisherRetrieved<unsigned short const *,unsigned short * &>(
          (__int64 *)&v9,
          (__int64 *)&lpBuffer);
        std::wstring::wstring(a1, lpBuffer);
        if ( pBlock[0] )
          std::_Deallocate<16,0>((void *)pBlock[0], (const struct std::nothrow_t *)(v12 - (unsigned __int64)pBlock[0]));
        return a1;
      }
      if ( pBlock[0] )
        std::_Deallocate<16,0>((void *)pBlock[0], (const struct std::nothrow_t *)(v12 - (unsigned __int64)pBlock[0]));
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1E9,
      (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      v5);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    return a1;
  }
  return result;
}
