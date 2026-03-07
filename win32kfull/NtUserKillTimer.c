// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  _QWORD **v12; // rbx
  _QWORD *i; // r14
  _QWORD *v14; // rsi
  _QWORD *v15; // r15
  int v16; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // r8
  char v19; // bl
  struct _HANDLEENTRY *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx

  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v4) + 8)
    || (v7 = SGDGetUserSessionState(v5), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v7 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      goto LABEL_46;
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( a1 )
  {
    v11 = ValidateHwnd(a1);
    if ( !v11 )
      goto LABEL_33;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v11)) & 0x3F));
  for ( i = *v12; ; i = (_QWORD *)*i )
  {
    if ( i == v12 )
      goto LABEL_33;
    v14 = i - 14;
    v15 = i - 3;
    if ( *v15 == v11 && v14[12] == a2 )
    {
      v16 = *((_DWORD *)v14 + 12);
      if ( (v16 & 6) == 0 )
      {
        if ( (v16 & 0x40) != 0 )
          break;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
        v18 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v10 = -*(_QWORD *)CurrentProcessWin32Process;
          v18 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        }
        if ( v18 == *(_QWORD *)(v14[3] + 424LL) || !v11 && (v14[6] & 4) == 0 )
          break;
      }
    }
  }
  v19 = 0;
  v20 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(i - 14);
  if ( !gbInDestroyHandleTableObjects )
  {
    v21 = SGDGetUserSessionState(gbInDestroyHandleTableObjects);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v21 + 8)) == 1 )
    {
      if ( gphePrimaryDestroyTarget )
      {
        if ( v20 != gphePrimaryDestroyTarget )
          ++gcSecondaryDestroyTargets;
      }
      else
      {
        v19 = 1;
        MEMORY[0] = v20;
      }
    }
  }
  if ( (unsigned int)HMMarkObjectDestroy(i - 14) )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState(v10) + 8) )
    {
      v23 = SGDGetUserSessionState(v22);
      if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v23 + 8)) )
        goto LABEL_21;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) == 0 )
    {
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_21:
      v25 = PsGetCurrentThreadWin32Thread(v24);
      ++*(_DWORD *)(v25 + 48);
      if ( (v14[6] & 1) != 0 )
        DecTimerCount((struct tagTIMER *)(i - 14));
      v26 = v14[9];
      if ( *(_QWORD **)(v26 + 8) != v14 + 9
        || (v27 = (_QWORD *)v14[10], (_QWORD *)*v27 != v14 + 9)
        || (*v27 = v26, *(_QWORD *)(v26 + 8) = v27, v28 = (_QWORD *)*i, *(_QWORD **)(*i + 8LL) != i)
        || (v29 = (_QWORD *)i[1], (_QWORD *)*v29 != i) )
      {
        __fastfail(3u);
      }
      *v29 = v28;
      v28[1] = v29;
      if ( !*v15 )
        _bittestandreset(gTimerId, *((_DWORD *)v14 + 24) - 256);
      EtwTraceKillTimer(i - 14);
      HMAssignmentUnlock(i - 3);
      HMFreeObject(i - 14);
      v31 = PsGetCurrentThreadWin32Thread(v30);
      --*(_DWORD *)(v31 + 48);
      goto LABEL_30;
    }
LABEL_46:
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  }
LABEL_30:
  if ( v19 )
    gphePrimaryDestroyTarget = 0LL;
  v6 = 1LL;
LABEL_33:
  v32 = PsGetCurrentThreadWin32Thread(v10);
  --*(_DWORD *)(v32 + 48);
  UserSessionSwitchLeaveCrit(v33);
  return v6;
}
