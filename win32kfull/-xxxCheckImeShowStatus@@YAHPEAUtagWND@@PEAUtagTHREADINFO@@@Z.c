/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00C62B0
 * Callers:
 *     NtUserCheckImeShowStatusInThread @ 0x1C00C61D0 (NtUserCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01B94A8 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagTHREADINFO *v2; // rsi
  unsigned int v4; // ebx
  struct tagBWL *v5; // rax
  __int64 *i; // r14
  __int64 v7; // rdi
  struct tagWND *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct tagWND **v11; // r15
  bool v12; // zf
  __int64 v13; // r8
  ULONG64 *v14; // rdi
  char v16; // si
  PRKPROCESS *v17; // rcx
  ULONG64 v18; // rdi
  ULONG64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  struct tagBWL *v22; // [rsp+48h] [rbp-50h]

  v2 = a2;
  v4 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v5 = BuildHwndList(*(ShellWindowManagement **)(*((_QWORD *)a1 + 13) + 112LL), 2, 0LL, 1);
  v22 = v5;
  if ( v5 )
  {
    for ( i = (__int64 *)((char *)v5 + 32); ; ++i )
    {
      v7 = *i;
      if ( *i == 1 )
        break;
      v8 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(gpsi + 8LL) )
      {
        v9 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v7;
        v11 = (struct tagWND **)HMPkheFromPhe(v9);
        LOWORD(v7) = WORD1(v7) & 0x7FFF;
        if ( ((WORD1(v7) & 0x7FFF) == *(_WORD *)(v9 + 26)
           || (_WORD)v7 == 0x7FFF
           || !(_WORD)v7 && PsGetCurrentProcessWow64Process(v10))
          && (*(_BYTE *)(v9 + 25) & 1) == 0 )
        {
          v12 = *(_BYTE *)(v9 + 24) == 1;
          v2 = a2;
          if ( v12 )
            v8 = *v11;
        }
        else
        {
          v2 = a2;
        }
      }
      if ( v8 && a1 != v8 )
      {
        if ( (*(_WORD *)(*((_QWORD *)v8 + 5) + 42LL) & 0x1000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 870LL);
        v13 = *((_QWORD *)v8 + 5);
        if ( (*(_WORD *)(v13 + 42) & 0x1000) == 0
          && **(_WORD **)(*((_QWORD *)v8 + 17) + 8LL) == *(_WORD *)(gpsi + 898LL) )
        {
          v14 = *(_DWORD *)(v13 + 248) ? (ULONG64 *)*((_QWORD *)v8 + 35) : *(ULONG64 **)(v13 + 296);
          if ( v14 && *(char *)(v13 + 20) >= 0 && (!v2 || v2 == *((struct tagTHREADINFO **)v8 + 2)) )
          {
            v16 = 0;
            v17 = *(PRKPROCESS **)(*((_QWORD *)v8 + 2) + 424LL);
            if ( v17 != *(PRKPROCESS **)(gptiCurrent + 424LL) )
            {
              KeAttachProcess(*v17);
              v16 = 1;
            }
            v18 = *v14;
            if ( v18 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
            {
              if ( v16 )
                KeDetachProcess();
              v2 = a2;
            }
            else
            {
              v19 = v18;
              if ( v18 >= MmUserProbeAddress )
                v19 = MmUserProbeAddress;
              if ( (*(_DWORD *)(v19 + 44) & 1) != 0 )
              {
                v20 = HMValidateHandleNoSecure(*(_QWORD *)(v18 + 16), 1);
                if ( v20 )
                  *(_DWORD *)(v18 + 44) &= ~1u;
              }
              else
              {
                v20 = 0LL;
              }
              if ( v16 )
                KeDetachProcess();
              if ( v20 )
              {
                v21 = *(_QWORD *)(v20 + 16);
                if ( v21 )
                {
                  if ( (*(_DWORD *)(v21 + 488) & 1) == 0 )
                    PostMessage(v20, 642LL, 1LL, 0LL);
                }
              }
              v2 = a2;
            }
          }
        }
      }
    }
    FreeHwndList(v22);
    return 1;
  }
  return v4;
}
