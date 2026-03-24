/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F7808
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00F77D0 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E2D64 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  unsigned int v3; // ebx
  struct tagBWL *v5; // rax
  PRKPROCESS *v6; // rcx
  unsigned __int64 *i; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v16; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v18; // rbx
  __int64 *v19; // r12
  unsigned __int64 v20; // r14
  __int64 v21; // r8
  __int64 v22; // rbx
  ULONG64 *v23; // rbx
  char v24; // r14
  ULONG64 v25; // rsi
  ULONG64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  struct tagBWL *v29; // [rsp+48h] [rbp-50h]

  v3 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v5 = BuildHwndList(*(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL), 2, 0LL);
  v29 = v5;
  if ( v5 )
  {
    for ( i = (unsigned __int64 *)((char *)v5 + 32); ; ++i )
    {
      v8 = *i;
      if ( *i == 1 )
        break;
      v9 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v6)
        || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v16),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      v6 = (PRKPROCESS *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v8 < *(_QWORD *)(gpsi + 8LL) )
      {
        v18 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v8 * LODWORD(gSharedInfo[2]);
        v19 = (__int64 *)HMPkheFromPhe(v18);
        v20 = v8 >> 16;
        if ( ((_WORD)v20 == *(_WORD *)(v18 + 26)
           || (_WORD)v20 == 0xFFFF
           || !(_WORD)v20 && PsGetCurrentProcessWow64Process(v6))
          && (*(_BYTE *)(v18 + 25) & 1) == 0
          && *(_BYTE *)(v18 + 24) == 1 )
        {
          v9 = *v19;
        }
      }
      if ( v9 && a1 != (struct tagWND *)v9 )
      {
        v21 = *(_QWORD *)(v9 + 40);
        v22 = v21;
        if ( (*(_WORD *)(v21 + 42) & 0x1000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1103LL);
          v21 = *(_QWORD *)(v9 + 40);
          v22 = v21;
        }
        if ( (*(_WORD *)(v22 + 42) & 0x1000) == 0 )
        {
          v6 = (PRKPROCESS *)gpsi;
          if ( **(_WORD **)(*(_QWORD *)(v9 + 136) + 8LL) == *(_WORD *)(gpsi + 898LL) )
            v23 = *(_DWORD *)(v22 + 252) ? *(ULONG64 **)(v9 + 280) : *(ULONG64 **)(v22 + 296);
          else
            v23 = 0LL;
          if ( v23 && *(char *)(v21 + 20) >= 0 && (!a2 || a2 == *(struct tagTHREADINFO **)(v9 + 16)) )
          {
            v24 = 0;
            v6 = *(PRKPROCESS **)(*(_QWORD *)(v9 + 16) + 424LL);
            if ( v6 != *(PRKPROCESS **)(gptiCurrent + 424LL) )
            {
              KeAttachProcess(*v6);
              v24 = 1;
            }
            v25 = *v23;
            if ( *v23 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
            {
              if ( v24 )
                KeDetachProcess();
            }
            else
            {
              v6 = (PRKPROCESS *)MmUserProbeAddress;
              v26 = *v23;
              if ( v25 >= MmUserProbeAddress )
                v26 = MmUserProbeAddress;
              if ( (*(_DWORD *)(v26 + 44) & 1) != 0 )
              {
                v27 = HMValidateHandleNoSecure(*(_QWORD *)(v25 + 16), 1);
                if ( v27 )
                  *(_DWORD *)(v25 + 44) &= ~1u;
              }
              else
              {
                v27 = 0LL;
              }
              if ( v24 )
                KeDetachProcess();
              if ( v27 )
              {
                v28 = *(_QWORD *)(v27 + 16);
                if ( v28 )
                {
                  if ( (*(_DWORD *)(v28 + 488) & 1) == 0 )
                    PostMessage(v27, 642, 1, 0);
                }
              }
            }
          }
        }
      }
    }
    FreeHwndList(v29);
    return 1;
  }
  return v3;
}
