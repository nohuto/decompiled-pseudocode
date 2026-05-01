/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000820C
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180006FA8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B58 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800022EC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032E0 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000336C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18000339C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x1800034C8 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800062A8 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x18000900C (--$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x1800443F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800456EC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v6; // rcx
  wil::details *v7; // rbx
  void *v8; // rdx
  int LastErrorFailHr; // edi
  DWORD v10; // eax
  void *v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  wil::details *v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  HANDLE ProcessHeap; // rax
  char *v19; // rsi
  HANDLE v20; // rax
  int v21; // eax
  void *v22; // rdx
  HANDLE v23; // rax
  wil::details *v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details *v25; // [rsp+50h] [rbp-B0h]
  char *v26; // [rsp+58h] [rbp-A8h]
  WCHAR Name[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 304, a1);
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v7 = Mutex;
  if ( !Mutex )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
    goto LABEL_18;
  }
  v10 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v10 != 258 )
  {
    if ( !v10 )
      goto LABEL_8;
    if ( v10 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v11, v12, v13);
      JUMPOUT(0x18000853FLL);
    }
  }
  if ( (v10 & 0xFFFFFF7F) != 0 )
  {
    v14 = 0LL;
    goto LABEL_9;
  }
LABEL_8:
  v14 = v7;
LABEL_9:
  v25 = v14;
  v15 = wil::details_abi::SemaphoreValue::TryGetValue<unsigned __int64>(Name);
  LastErrorFailHr = v15;
  if ( v15 >= 0 )
    LastErrorFailHr = 0;
  else
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (__int64)"wil", (const char *)(unsigned int)v15);
  if ( LastErrorFailHr >= 0 )
  {
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v19 = (char *)HeapAlloc(ProcessHeap, 8u, 0x130uLL);
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v20 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, char *))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v20, v19);
    }
    v26 = v19;
    if ( v19 )
    {
      *(_OWORD *)v24 = 0LL;
      v21 = wil::details_abi::SemaphoreValue::CreateFromPointer(v24, (char *)Name, (unsigned __int64)v19);
      LastErrorFailHr = v21;
      if ( v21 >= 0 )
      {
        *(_DWORD *)v19 = 1;
        *((_QWORD *)v19 + 1) = v7;
        v7 = 0LL;
        *((wil::details **)v19 + 2) = v24[0];
        *((wil::details **)v19 + 3) = v24[1];
        memset_0(v19 + 40, 0, 0x108uLL);
        *((_QWORD *)v19 + 4) = 0LL;
        wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v19 + 40));
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v19 + 232), 0, 0);
        *((_QWORD *)v19 + 34) = 0LL;
        *((_QWORD *)v19 + 35) = 0LL;
        *((_QWORD *)v19 + 36) = 0LL;
        *((_QWORD *)v19 + 37) = 0LL;
        *a2 = v19;
        LastErrorFailHr = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (__int64)"wil", (const char *)(unsigned int)v21);
        if ( v24[1] )
          wil::details::CloseHandle(v24[1], v22);
        if ( v24[0] )
          wil::details::CloseHandle(v24[0], v22);
        v23 = GetProcessHeap();
        HeapFree(v23, 0, v19);
      }
      if ( LastErrorFailHr >= 0 )
      {
        LastErrorFailHr = 0;
        goto LABEL_16;
      }
    }
    else
    {
      LastErrorFailHr = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v16 = 302LL;
  }
  else
  {
    v16 = 294LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v16, (__int64)"wil", (const char *)(unsigned int)LastErrorFailHr);
LABEL_16:
  if ( v14 )
    wil::details::ReleaseMutex(v14, v8);
LABEL_18:
  if ( v7 )
    wil::details::CloseHandle(v7, v8);
  return (unsigned int)LastErrorFailHr;
}
