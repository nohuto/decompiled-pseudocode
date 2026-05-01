/*
 * XREFs of ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18028FF18
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1801A76FC (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18005EB14 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18020AF84 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIJsonObjectStatics@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonObjectStatics@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18028D214 (--$GetActivationFactory@V-$ComPtr@UIJsonObjectStatics@Json@Data@Windows@@@WRL@Microsoft@@@Founda.c)
 *     ?FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x18028F4E4 (-FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18029047C (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  unsigned int JsonDataFromDisk; // ebx
  WCHAR *FileW; // rax
  WCHAR *v4; // rdi
  DWORD FileSize; // eax
  __int64 v6; // r14
  SIZE_T v7; // r15
  void *v8; // rcx
  int v9; // eax
  CHAR *v10; // rsi
  const char *v11; // r9
  WCHAR *v12; // r14
  int v13; // eax
  unsigned int v14; // r8d
  PVOID Reserved1; // r12
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, PVOID, struct Windows::Data::Json::IJsonObject **, __int64 *); // r15
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID lpBuffer; // [rsp+60h] [rbp-A8h] BYREF
  DWORD NumberOfBytesRead[2]; // [rsp+68h] [rbp-A0h] BYREF
  const WCHAR *v26[2]; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  __int64 v28; // [rsp+98h] [rbp-70h]
  WCHAR Dst[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  if ( ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", Dst, 0x104u) )
  {
    FileW = (WCHAR *)CreateFileW(Dst, 0x80000000, 1u, 0LL, 3u, 0x8000080u, 0LL);
    v4 = FileW;
    v26[1] = FileW;
    if ( FileW == (WCHAR *)-1LL )
    {
      JsonDataFromDisk = -2147023728;
    }
    else
    {
      FileSize = GetFileSize(FileW, 0LL);
      v6 = FileSize;
      v7 = FileSize + 1;
      lpBuffer = 0LL;
      v9 = CTCoAllocPolicy::Alloc(v8, 1, v7, &lpBuffer);
      JsonDataFromDisk = v9;
      v10 = (CHAR *)lpBuffer;
      if ( v9 >= 0 )
      {
        if ( ReadFile(v4, lpBuffer, v6, NumberOfBytesRead, 0LL) )
        {
          v10[v6] = 0;
          v12 = (WCHAR *)CoTaskMemAlloc(2 * v7);
          v26[0] = v12;
          if ( MultiByteToWideChar(0xFDE9u, 0, v10, -1, v12, v7) )
          {
            v23 = 0LL;
            v28 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.Data.Json.JsonObject",
              0x1Du,
              0x1Cu);
            v13 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonObjectStatics>>(
                    v28,
                    &v23);
            JsonDataFromDisk = v13;
            if ( v13 >= 0 )
            {
              v22 = 0LL;
              Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v26, v14)[1].Reserved.Reserved1;
              v28 = 0LL;
              v16 = v23;
              v17 = *(__int64 (__fastcall **)(__int64, PVOID, struct Windows::Data::Json::IJsonObject **, __int64 *))(*(_QWORD *)v23 + 56LL);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
              v18 = v17(v16, Reserved1, &v22, &v21);
              JsonDataFromDisk = v18;
              if ( v18 >= 0 )
              {
                if ( (_BYTE)v21 || (PenWorkspaceBrokerTelemetry::FailedToParseJsonString(v19), (_BYTE)v21) )
                  JsonDataFromDisk = PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(this, v22);
                else
                  JsonDataFromDisk = -2147467259;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x22D,
                  (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  (const char *)(unsigned int)v18);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x228,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                (const char *)(unsigned int)v13);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
          }
          else
          {
            JsonDataFromDisk = -2147467259;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x225,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)0x80004005LL);
          }
          CoTaskMemFree(v12);
        }
        else
        {
          JsonDataFromDisk = wil::details::in1diag3::Return_GetLastError(
                               retaddr,
                               (void *)0x220,
                               (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                               v11);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x21D,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v9);
      }
      CoTaskMemFree(v10);
    }
    if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v4);
  }
  else
  {
    JsonDataFromDisk = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL);
  }
  return JsonDataFromDisk;
}
