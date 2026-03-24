/*
 * XREFs of NtUserKillTimer @ 0x1C000B860
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C01686FC (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // r15d
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  __int64 *v16; // rsi
  __int64 **v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  int v21; // [rsp+50h] [rbp+8h]
  char v22; // [rsp+60h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  if ( gpresUser && (unsigned int)UserIsUserCritSecInExclusive() && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v4 = 0LL;
    v5 = ++gdwAtomicCheckSerial;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v4 << 6) + gpAtomickCheckStacks) )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= gdwAtomicCheckLogSize )
          goto LABEL_10;
      }
      v6 = (unsigned __int64)(unsigned int)v4 << 6;
      *(_DWORD *)(v6 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v6 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v6 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v6 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v5 = v21;
  }
LABEL_10:
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
    {
      v8 = 0LL;
      goto LABEL_43;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v8 = 0LL;
  v9 = (_QWORD *)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v7)) & 0x3F));
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 != v9 )
  {
    while ( 1 )
    {
      if ( *(v10 - 3) == v7 && *(v10 - 2) == a2 )
      {
        v11 = *((_DWORD *)v10 - 16);
        if ( (v11 & 0x1006) == 0 )
        {
          if ( (v11 & 0x40) != 0 )
            break;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          v4 = *(v10 - 11);
          if ( CurrentProcessWin32Process == *(_QWORD *)(v4 + 424) || !v7 && (*(_BYTE *)(v10 - 8) & 4) == 0 )
            break;
        }
      }
      v10 = (_QWORD *)*v10;
      if ( v10 == v9 )
        goto LABEL_43;
    }
    v13 = *((_DWORD *)v10 - 16);
    if ( (v13 & 0x1000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 224LL);
      v13 = *((_DWORD *)v10 - 16);
    }
    v14 = v13 | 0x1000;
    *((_DWORD *)v10 - 16) = v14;
    if ( (v14 & 1) != 0 )
      DecTimerCountAndClearReadyFlag((struct tagTIMER *)(v10 - 14));
    if ( (unsigned int)HMMarkObjectDestroy(v10 - 14) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
      if ( !*(v10 - 3) )
        _bittestandreset(gTimerId, *((_DWORD *)v10 - 4) - 256);
      EtwTraceKillTimer(v10 - 14);
      HMAssignmentUnlock(v10 - 3);
      v15 = *(v10 - 5);
      v16 = v10 - 5;
      if ( (_QWORD *)v15 == v10 - 5 || (__int64 *)*(v10 - 4) == v16 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5970LL);
        v15 = *v16;
      }
      if ( *(__int64 **)(v15 + 8) != v16 )
        goto LABEL_50;
      v17 = (__int64 **)*(v10 - 4);
      if ( *v17 != v16 )
        goto LABEL_50;
      *v17 = (__int64 *)v15;
      *(_QWORD *)(v15 + 8) = v17;
      *(v10 - 4) = v16;
      *v16 = (__int64)v16;
      v18 = *v10;
      if ( (_QWORD *)*v10 == v10 || (_QWORD *)v10[1] == v10 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5970LL);
        v18 = *v10;
      }
      if ( *(_QWORD **)(v18 + 8) != v10 || (v19 = (_QWORD *)v10[1], (_QWORD *)*v19 != v10) )
LABEL_50:
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      v10[1] = v10;
      *v10 = v10;
      HMFreeObject(v10 - 14);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
    }
    v8 = 1LL;
  }
LABEL_43:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v4 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v4 << 6) + gpAtomickCheckStacks) != v5 )
          {
            v4 = (unsigned int)(v4 + 1);
            if ( (unsigned int)v4 >= gdwAtomicCheckLogSize )
              goto LABEL_52;
          }
          *(_DWORD *)(((unsigned __int64)(unsigned int)v4 << 6) + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_52:
  UserSessionSwitchLeaveCrit(v4);
  return v8;
}
