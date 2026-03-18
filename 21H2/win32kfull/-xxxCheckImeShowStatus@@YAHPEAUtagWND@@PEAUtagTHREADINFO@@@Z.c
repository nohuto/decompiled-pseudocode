/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DFE44
 * Callers:
 *     NtUserCheckImeShowStatusInThread @ 0x1C00DFD70 (NtUserCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01DE204 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagTHREADINFO *v2; // r14
  unsigned int v4; // edi
  struct tagBWL *v6; // rax
  struct tagBWL *v7; // r12
  __int64 *i; // r15
  __int64 v9; // rsi
  struct tagWND *v10; // rdi
  __int64 v11; // r14
  _QWORD **v12; // rcx
  bool v13; // zf
  __int64 v14; // r8
  __int64 v15; // rsi
  ULONG64 *v16; // rsi
  char v17; // r14
  PRKPROCESS *v18; // rcx
  ULONG64 v19; // rsi
  ULONG64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  _QWORD **v24; // [rsp+A0h] [rbp+18h]

  v2 = a2;
  v4 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v6 = BuildHwndList(*(ShellWindowManagement **)(*((_QWORD *)a1 + 13) + 112LL), (const struct tagWND *)2, 0LL, 1);
  v7 = v6;
  if ( !v6 )
    return v4;
  for ( i = (__int64 *)((char *)v6 + 32); ; ++i )
  {
    v9 = *i;
    if ( *i == 1 )
      break;
    v10 = 0LL;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v9 < *(_QWORD *)(gpsi + 8LL) )
    {
      v11 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v9 * LODWORD(gSharedInfo[2]);
      v12 = (_QWORD **)HMPkheFromPhe(v11);
      v24 = v12;
      LOWORD(v9) = WORD1(v9) & 0x7FFF;
      if ( (WORD1(v9) & 0x7FFF) != *(_WORD *)(v11 + 26) && (_WORD)v9 != 0x7FFF )
      {
        if ( (_WORD)v9 || !PsGetCurrentProcessWow64Process(v12) )
        {
LABEL_15:
          v2 = a2;
          goto LABEL_16;
        }
        v12 = v24;
      }
      if ( (*(_BYTE *)(v11 + 25) & 1) != 0 )
        goto LABEL_15;
      v13 = *(_BYTE *)(v11 + 24) == 1;
      v2 = a2;
      if ( v13 )
        v10 = (struct tagWND *)*v12;
    }
LABEL_16:
    if ( v10 && a1 != v10 )
    {
      v14 = *((_QWORD *)v10 + 5);
      v15 = v14;
      if ( (*(_WORD *)(v14 + 42) & 0x1000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(4096LL);
        v14 = *((_QWORD *)v10 + 5);
        v15 = v14;
      }
      if ( (*(_WORD *)(v15 + 42) & 0x1000) == 0 )
      {
        if ( **(_WORD **)(*((_QWORD *)v10 + 17) + 8LL) == *(_WORD *)(gpsi + 898LL) )
          v16 = *(_DWORD *)(v14 + 248) ? (ULONG64 *)*((_QWORD *)v10 + 35) : *(ULONG64 **)(v15 + 296);
        else
          v16 = 0LL;
        if ( v16 && *(char *)(v14 + 20) >= 0 && (!v2 || v2 == *((struct tagTHREADINFO **)v10 + 2)) )
        {
          v17 = 0;
          v18 = *(PRKPROCESS **)(*((_QWORD *)v10 + 2) + 424LL);
          if ( v18 != *(PRKPROCESS **)(gptiCurrent + 424LL) )
          {
            KeAttachProcess(*v18);
            v17 = 1;
          }
          v19 = *v16;
          if ( v19 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( v17 )
              KeDetachProcess();
          }
          else
          {
            v20 = v19;
            if ( v19 >= MmUserProbeAddress )
              v20 = MmUserProbeAddress;
            if ( (*(_DWORD *)(v20 + 44) & 1) != 0 )
            {
              v21 = HMValidateHandleNoSecure(*(_QWORD *)(v19 + 16), 1);
              if ( v21 )
                *(_DWORD *)(v19 + 44) &= ~1u;
            }
            else
            {
              v21 = 0LL;
            }
            if ( v17 )
              KeDetachProcess();
            if ( v21 )
            {
              v22 = *(_QWORD *)(v21 + 16);
              if ( v22 )
              {
                if ( (*(_DWORD *)(v22 + 488) & 1) == 0 )
                  PostMessage(v21, 642, 1, 0);
              }
            }
          }
        }
      }
    }
    v2 = a2;
  }
  FreeHwndList(v7);
  return 1;
}
