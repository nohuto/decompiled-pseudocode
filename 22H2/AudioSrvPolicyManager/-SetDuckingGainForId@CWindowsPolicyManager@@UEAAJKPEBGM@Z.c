/*
 * XREFs of ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180006EA0
 * Callers:
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x18000ABD0 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180018844 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId(
        CWindowsPolicyManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        float a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v7; // ecx
  HANDLE ProcessHeap; // rax
  float *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  LPVOID *v12; // rbx
  signed int v13; // edi
  __int64 v14; // r9
  LPVOID *v15; // rsi
  LPVOID *v16; // rbp
  LPVOID *v17; // rbx
  __int64 v18; // rdx
  HANDLE v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  HANDLE v22; // rcx
  signed int LastError; // eax
  struct TSSession *v25; // [rsp+30h] [rbp-38h] BYREF
  LPVOID *v26; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(a2, 1, 0LL, &v25) )
  {
    if ( a4 <= -6.0 )
    {
      if ( a4 <= -18.0 )
      {
        v7 = 0;
        LOBYTE(v7) = a4 > -96.0;
      }
      else
      {
        v7 = 2;
      }
    }
    else
    {
      v7 = 3;
    }
    *((_DWORD *)v25 + 80) = v7;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  ProcessHeap = GetProcessHeap();
  v9 = (float *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v12 = (LPVOID *)v9;
  if ( v9 )
  {
    v9[3] = a4;
    *(_QWORD *)v9 = 0LL;
    *((_DWORD *)v9 + 2) = a2;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = v12 == 0LL ? 0x8007000E : 0;
  if ( v12 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a3[v14] );
    v13 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, a3);
  }
  v15 = 0LL;
  v16 = v12;
  if ( v13 < 0 )
  {
    v15 = v12;
    v16 = 0LL;
  }
  if ( v15 )
  {
    CoTaskMemFree(*v15);
    *v15 = 0LL;
    operator delete(v15, (const struct std::nothrow_t *)0x10);
  }
  v17 = v16;
  v26 = v16;
  if ( v13 < 0 )
  {
    v18 = 444LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_41;
  }
  v19 = GetProcessHeap();
  v20 = HeapAlloc(v19, 0, 0x18uLL);
  v21 = v20;
  if ( v20 )
  {
    *v20 = &CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)g_ApplicationManager + 2);
    v17 = v26;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v21 )
  {
    v22 = g_WorkerEventPort;
    v21[1] = CApplicationManager::HandleDuckingIdGainChanged;
    v21[2] = v16;
    if ( PostQueuedCompletionStatus(v22, 0, (ULONG_PTR)v21, 0LL) )
    {
      v13 = 0;
    }
    else
    {
      LastError = GetLastError();
      v13 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v13 = LastError;
    }
    if ( v13 >= 0 )
      v21 = 0LL;
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v21 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v21 + 8LL))(v21, 1LL);
  if ( v13 < 0 )
  {
    v18 = 446LL;
    goto LABEL_39;
  }
  v17 = 0LL;
  v13 = 0;
LABEL_41:
  if ( v17 )
  {
    CoTaskMemFree(*v17);
    *v17 = 0LL;
    operator delete(v17, (const struct std::nothrow_t *)0x10);
  }
  return (unsigned int)v13;
}
