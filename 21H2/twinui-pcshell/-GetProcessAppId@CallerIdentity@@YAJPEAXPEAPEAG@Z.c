/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003A6A8
 * Callers:
 *     ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x18001279C (-GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18003A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x1804CEE78 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1804D9BC8 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1804D9E44 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1804DAFE4 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18005FD20 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1218 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x1804D9E10 (-Free@ARI@@YAXPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, unsigned int **a2, unsigned __int16 **a3)
{
  void *v4; // r15
  ARI::ProcessToken::SysAppId *v5; // r12
  __int64 v7; // rsi
  signed int v8; // edi
  bool v9; // cc
  NTSTATUS v10; // eax
  unsigned __int128 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  const UNICODE_STRING *v15; // rsi
  void *v16; // rdx
  unsigned __int64 v17; // r14
  unsigned int *v18; // rbx
  unsigned __int64 v19; // rsi
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned int *v22; // rdx
  unsigned int *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned int AppUserModelId; // eax
  DWORD LastError; // eax
  void *v29; // rdx
  __int64 v30; // rdx
  __int16 v31; // ax
  unsigned __int16 *ReturnLength; // [rsp+20h] [rbp-20h]
  unsigned int ReturnLengtha; // [rsp+20h] [rbp-20h]
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  ULONG TokenInformationLength; // [rsp+80h] [rbp+40h] BYREF
  struct _TOKEN_SECURITY_ATTRIBUTE_V1 *v37; // [rsp+88h] [rbp+48h] BYREF
  void *TokenHandle; // [rsp+90h] [rbp+50h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    v7 = -4LL;
    TokenHandle = (void *)-4LL;
    goto LABEL_4;
  }
  if ( OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
    v7 = (__int64)TokenHandle;
LABEL_4:
    v8 = 0;
    goto LABEL_5;
  }
  LastError = GetLastError();
  v7 = (__int64)TokenHandle;
  v8 = LastError;
LABEL_5:
  v9 = v8 <= 0;
  if ( !v8 )
  {
    v10 = NtQueryInformationToken((HANDLE)v7, TokenSecurityAttributes, 0LL, 0, &TokenInformationLength);
    if ( v10 == -1073741789 )
    {
      v11 = TokenInformationLength * (unsigned __int128)0x10u;
      if ( is_mul_ok(TokenInformationLength, 0x10uLL)
        && (*(_QWORD *)&v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, DWORD2(v11), 16LL * TokenInformationLength),
            (v12 = v11) != 0) )
      {
        memset_0((void *)v11, 0, TokenInformationLength);
        v13 = NtQueryInformationToken(
                (HANDLE)v7,
                TokenSecurityAttributes,
                (PVOID)v12,
                TokenInformationLength,
                &TokenInformationLength);
        if ( v13 < 0 )
        {
          v8 = RtlNtStatusToDosErrorNoTeb(v13);
          ARI::Free((PVOID)v12, v29);
        }
        else if ( *(_DWORD *)(v12 + 4)
               && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v14 = 0, *(_DWORD *)(v12 + 4)) )
        {
          while ( 1 )
          {
            v15 = (const UNICODE_STRING *)(*(_QWORD *)(v12 + 8) + 40LL * v14);
            if ( !RtlCompareUnicodeString(&DestinationString, v15, 1u) )
              break;
            if ( ++v14 >= *(_DWORD *)(v12 + 4) )
              goto LABEL_46;
          }
          v5 = (ARI::ProcessToken::SysAppId *)v15;
          v4 = (void *)v12;
          ARI::Free(0LL, v16);
          v8 = 0;
        }
        else
        {
LABEL_46:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v12);
          v8 = 1168;
        }
      }
      else
      {
        ARI::Free(0LL, *((void **)&v11 + 1));
        v8 = 8;
      }
    }
    else if ( v10 )
    {
      v8 = RtlNtStatusToDosErrorNoTeb(v10);
    }
    else
    {
      v8 = 1359;
    }
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
    v9 = v8 <= 0;
  }
  if ( !v9 )
    v8 = (unsigned __int16)v8 | 0x80070000;
  if ( v8 != -2147023728 && v8 != -2147024891 )
  {
    if ( v8 < 0 )
    {
      v30 = 165LL;
    }
    else
    {
      if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(v5, 0LL, (unsigned int)&v37, 0LL, ReturnLength) == 122 )
      {
        CoTaskMemFree(0LL);
        v17 = (unsigned int)v37;
        v18 = 0LL;
        v19 = (unsigned int)v37 + 1LL;
        if ( v19 < (unsigned int)v37 )
        {
          v8 = -2147024362;
          goto LABEL_65;
        }
        if ( is_mul_ok(v19, 2uLL) )
        {
          v18 = (unsigned int *)CoTaskMemAlloc(2 * v19);
          if ( !v18 )
          {
            v8 = -2147024882;
            goto LABEL_65;
          }
          v8 = 0;
          if ( v19 > 0x7FFFFFFF || v17 >= 0x7FFFFFFF )
          {
            *(_WORD *)v18 = 0;
          }
          else
          {
            v20 = 0LL;
            v21 = v19;
            v22 = v18;
            do
            {
              if ( v21 == v19 )
                break;
              v31 = *(_WORD *)((char *)v22 + (char *)&szAgent - (char *)v18);
              if ( !v31 )
                break;
              *(_WORD *)v22 = v31;
              ++v20;
              v22 = (unsigned int *)((char *)v22 + 2);
              --v21;
            }
            while ( v21 );
            v23 = (unsigned int *)((char *)v22 - 2);
            if ( v21 )
              v23 = v22;
            *(_WORD *)v23 = 0;
            v24 = v20 - 1;
            if ( v21 )
              v24 = v20;
            v25 = v19 - v24;
            if ( v21 && v25 > 1 && 2 * v25 > 2 )
              memset_0((char *)v18 + 2 * v24 + 2, 0, 2 * v25 - 2);
          }
        }
        else
        {
          v8 = -2147024362;
        }
        if ( v8 >= 0 )
        {
          AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                             v5,
                             (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)v37,
                             (unsigned int)&v37,
                             v18,
                             ReturnLength);
          if ( AppUserModelId )
          {
            v8 = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0xAC,
                   (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                   (const char *)AppUserModelId,
                   ReturnLengtha);
          }
          else
          {
            v8 = 0;
            *a2 = v18;
            v18 = 0LL;
          }
          goto LABEL_41;
        }
LABEL_65:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAB,
          (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
          (const char *)(unsigned int)v8,
          (int)ReturnLength);
LABEL_41:
        CoTaskMemFree(v18);
        goto LABEL_42;
      }
      v8 = -2147418113;
      v30 = 168LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)v8,
      (int)ReturnLength);
  }
LABEL_42:
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return (unsigned int)v8;
}
