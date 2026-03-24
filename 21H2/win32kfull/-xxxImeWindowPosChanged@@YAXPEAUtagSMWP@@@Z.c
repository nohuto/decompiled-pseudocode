/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006DB4C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E958 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1)
{
  __int64 v1; // r15
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v9; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rax
  struct tagBWL *v13; // rax
  _QWORD *i; // r12
  __int64 v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // r8
  ULONG64 *v18; // rdx
  ULONG64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rsi
  __int64 v27; // rcx
  struct tagBWL *v28; // [rsp+28h] [rbp-80h]
  __int128 v29; // [rsp+40h] [rbp-68h] BYREF
  __int64 v30; // [rsp+50h] [rbp-58h]
  __int128 v31; // [rsp+58h] [rbp-50h] BYREF
  __int64 v32; // [rsp+68h] [rbp-40h]

  v1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v9),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
    v12 = *(_QWORD *)(v3 + 464);
    if ( v12 )
      v1 = *(_QWORD *)(v12 + 24);
  }
  if ( v1 )
  {
    v13 = BuildHwndList(*(struct tagWND **)(v1 + 112), 2, gptiCurrent);
    v28 = v13;
    if ( v13 )
    {
      for ( i = (_QWORD *)((char *)v13 + 32); *i != 1LL; ++i )
      {
        v15 = ValidateHwnd(*i);
        v16 = (_QWORD *)v15;
        if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
          break;
        if ( v15 && *(_QWORD *)(v15 + 16) == gptiCurrent )
        {
          if ( (v17 = *(_QWORD *)(v15 + 40), (*(_WORD *)(v17 + 42) & 0x1000) != 0)
            && (MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1103LL),
                v17 = v16[5],
                (*(_WORD *)(v17 + 42) & 0x1000) != 0)
            || **(_WORD **)(v16[17] + 8LL) != *(_WORD *)(gpsi + 898LL) )
          {
            v18 = 0LL;
          }
          else
          {
            v18 = *(_DWORD *)(v17 + 252) ? (ULONG64 *)v16[35] : *(ULONG64 **)(v17 + 296);
          }
          v31 = 0LL;
          v32 = 0LL;
          v29 = 0LL;
          v30 = 0LL;
          if ( v18 )
          {
            v19 = *v18;
            if ( v19 >= MmUserProbeAddress )
              v19 = MmUserProbeAddress;
            v20 = *(_QWORD *)(v19 + 16);
            LOBYTE(v19) = 1;
            v21 = (__int64 *)HMValidateHandleNoSecure(v20, v19);
            if ( v21 )
            {
              *(_QWORD *)&v31 = *(_QWORD *)(gptiCurrent + 416LL);
              *(_QWORD *)(gptiCurrent + 416LL) = &v31;
              *((_QWORD *)&v31 + 1) = v16;
              HMLockObject(v16);
              v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
              *(_QWORD *)&v29 = *(_QWORD *)(v22 + 416);
              *(_QWORD *)(v22 + 416) = &v29;
              *((_QWORD *)&v29 + 1) = v21;
              HMLockObject(v21);
              do
              {
                if ( v21 == (__int64 *)v1 )
                  break;
                v23 = *v21;
                v24 = *((_QWORD *)a1 + 5);
                v25 = *((_DWORD *)a1 + 7);
                while ( --v25 >= 0 )
                {
                  if ( v23 == *(_QWORD *)v24 )
                  {
                    if ( (~*(_BYTE *)(v24 + 32) & 3) != 0 )
                      xxxSendMessage((unsigned __int64)v16, 0x287u, 6uLL, 0LL);
                    break;
                  }
                  v24 += 168LL;
                }
                if ( v25 >= 0 )
                  break;
                v21 = (__int64 *)v21[13];
                v26 = *((_QWORD *)&v29 + 1);
                *((_QWORD *)&v29 + 1) = v21;
                if ( v21 )
                  HMLockObject(v21);
                if ( v26 )
                  HMUnlockObject(v26);
              }
              while ( v21 );
              ThreadUnlock1(v23);
              ThreadUnlock1(v27);
            }
          }
        }
      }
      FreeHwndList(v28);
    }
  }
}
