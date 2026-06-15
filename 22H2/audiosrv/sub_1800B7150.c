/*
 * XREFs of sub_1800B7150 @ 0x1800B7150
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800B7078 @ 0x1800B7078 (sub_1800B7078.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800B7150(__int64 a1, unsigned int a2, void *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rcx
  __vcrt_trace_logging_provider *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rcx
  __vcrt_trace_logging_provider *v15; // rcx
  __int64 v16; // rcx
  HANDLE CurrentProcess; // rax
  int v18; // [rsp+40h] [rbp-19h] BYREF
  int v19; // [rsp+44h] [rbp-15h] BYREF
  int v20; // [rsp+48h] [rbp-11h] BYREF
  DWORD CurrentProcessId; // [rsp+50h] [rbp-9h] BYREF
  int v22; // [rsp+54h] [rbp-5h]
  void *v23[2]; // [rsp+58h] [rbp-1h] BYREF
  char v24[32]; // [rsp+68h] [rbp+Fh] BYREF
  int *v25; // [rsp+88h] [rbp+2Fh]
  int v26; // [rsp+90h] [rbp+37h]
  int v27; // [rsp+94h] [rbp+3Bh]

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v23[1] = v6;
  v7 = *(_DWORD *)(a1 + 8);
  v8 = v7 + 1;
  if ( (unsigned int)v8 >= v7 )
  {
    *(_DWORD *)(a1 + 8) = v8;
    if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 12) && *(_DWORD *)(a1 + 16) == 16 && !*(_DWORD *)(a1 + 64) )
    {
      v9 = (__vcrt_trace_logging_provider *)sub_180008448(v8, sub_1800B6240)[1];
      if ( *(_DWORD *)v9 > 4u && __vcrt_trace_logging_provider::_TlgKeywordOn(v9, 0x400000000001uLL) )
      {
        v19 = *(_DWORD *)(a1 + 12);
        v20 = *(_DWORD *)(a1 + 8);
        v18 = 0;
        v23[0] = a3;
        sub_1800B7078(v10, byte_180166074, v11, v12, v23, (__int64)&v18, (__int64)&v20, (__int64)&v19);
      }
      *(_DWORD *)(a1 + 64) = 1;
      CurrentProcessId = GetCurrentProcessId();
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
      v13 = ReportCoreHang(&CurrentProcessId, (unsigned int)(v22 != 0) + 1, a2, 33LL);
      v15 = (__vcrt_trace_logging_provider *)sub_180008448(v14, sub_1800B6240)[1];
      if ( *(_DWORD *)v15 > 4u && __vcrt_trace_logging_provider::_TlgKeywordOn(v15, 1uLL) )
      {
        v18 = v13;
        v25 = &v18;
        v26 = 4;
        v27 = 0;
        sub_1800521E8(v16, byte_180166050, 0LL, 0LL, 3, (__int64)v24);
      }
      if ( v13 >= 0 )
        Sleep(0xEA60u);
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
}
