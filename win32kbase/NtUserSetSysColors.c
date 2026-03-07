__int64 __fastcall NtUserSetSysColors(
        __int64 a1,
        NSInstrumentation::CLeakTrackingAllocator *a2,
        NSInstrumentation::CLeakTrackingAllocator *a3,
        int a4)
{
  __int64 v6; // r13
  void *v7; // rsi
  void *v8; // r14
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  char v13; // al
  struct tagKERNELHANDLETABLEENTRY *v14; // rbx
  int v15; // eax
  ULONG64 v16; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rcx
  __int64 v18; // rbx
  void *QuotaZInit; // rax
  unsigned __int64 v20; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v21; // rcx
  void *v22; // rax
  __int64 v23; // rbx
  int v24; // ecx
  int v25; // r15d
  unsigned int v27[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v28; // [rsp+48h] [rbp-90h]
  void *v29; // [rsp+50h] [rbp-88h]
  __int128 v30; // [rsp+60h] [rbp-78h] BYREF
  __int64 v31; // [rsp+70h] [rbp-68h]
  __int128 v32; // [rsp+78h] [rbp-60h] BYREF
  __int64 v33; // [rsp+88h] [rbp-50h]
  __int128 v34; // [rsp+90h] [rbp-48h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-38h]

  v6 = (unsigned int)a1;
  v7 = 0LL;
  v28 = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v27[0] = 0x2000;
  v27[1] = -1;
  LOBYTE(a1) = 1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v12 && (*(_DWORD *)(v12 + 12) & 0x8000) != 0 )
    {
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v13 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v13 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          *((_QWORD *)v14 + 2) = 0LL;
          if ( !*(_DWORD *)(*(_QWORD *)v14 + 8LL) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*(_QWORD *)v14);
        }
      }
    }
  }
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
    v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 760LL) + 24LL) & 8;
  else
    v15 = 0;
  if ( v15 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 864LL), v27, 0LL) )
  {
    v25 = 0;
    UserSetLastError(5LL);
  }
  else
  {
    if ( (_DWORD)v6 )
    {
      v18 = 4 * v6;
      if ( 4 * v6 )
      {
        if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a2 + v18);
        v16 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 + v18 > MmUserProbeAddress || v17 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( v18 )
        {
          if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          v17 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a3 + v18);
          v16 = MmUserProbeAddress;
          if ( (unsigned __int64)a3 + v18 > MmUserProbeAddress || v17 < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v17, v16, 4 * v6, 0x72637355u);
      v7 = QuotaZInit;
      v28 = QuotaZInit;
      if ( !QuotaZInit )
        ExRaiseStatus(-1073741801);
      memmove(QuotaZInit, a2, 4 * v6);
      v22 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v21, v20, 4 * v6, 0x76637355u);
      v8 = v22;
      v29 = v22;
      if ( !v22 )
        ExRaiseStatus(-1073741801);
      memmove(v22, a3, 4 * v6);
    }
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(v7, &v34, Win32FreePool);
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(v8, &v32, Win32FreePool);
    v23 = CreateProfileUserName(&v30);
    v25 = xxxSetSysColors(v24, v6, (_DWORD)v7, (_DWORD)v8, a4);
    if ( v23 && qword_1C02D66D0 )
      qword_1C02D66D0(&v30);
    if ( qword_1C02D65D8 )
      qword_1C02D65D8(&v32);
    if ( qword_1C02D65D8 )
      qword_1C02D65D8(&v34);
    if ( v7 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
    if ( v8 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v8);
  }
  UserSessionSwitchLeaveCrit();
  return v25;
}
