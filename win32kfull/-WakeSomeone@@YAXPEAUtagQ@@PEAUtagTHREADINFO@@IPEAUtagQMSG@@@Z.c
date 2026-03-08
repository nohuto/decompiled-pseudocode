/*
 * XREFs of ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00388C0
 * Callers:
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     EditionWakeSomeone @ 0x1C0016E80 (EditionWakeSomeone.c)
 *     EditionWakeThreadForInput @ 0x1C0037660 (EditionWakeThreadForInput.c)
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C009F110 (EditionHandleAndPostKeyEvent.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B68A8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B7674 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01C1710 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?CancelForegroundActivate@@YAXXZ @ 0x1C0017A88 (-CancelForegroundActivate@@YAXXZ.c)
 *     PtiMouseFromQ @ 0x1C0037050 (PtiMouseFromQ.c)
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PtiKbdFromQ @ 0x1C009FA48 (PtiKbdFromQ.c)
 *     IsProcessedByInputService @ 0x1C00CE17C (IsProcessedByInputService.c)
 *     IsMiPActive @ 0x1C00D7EB8 (IsMiPActive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C0143D18 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 */

void __fastcall WakeSomeone(__int64 a1, __int64 a2, unsigned int a3, struct tagQMSG *a4)
{
  unsigned __int64 v5; // r8
  struct tagTHREADINFO *v7; // rbx
  __int64 v8; // r13
  unsigned int v9; // ebp
  int v10; // r15d
  unsigned int v11; // edi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  struct tagTHREADINFO *v17; // rdx
  int v18; // eax
  __int64 v19; // rbx

  v5 = 0LL;
  v7 = (struct tagTHREADINFO *)a2;
  v8 = a1;
  v9 = 0;
  v10 = 0;
  v11 = 1;
  if ( a3 > 0x208 )
  {
    if ( a3 > 0x245 )
    {
      if ( a3 != 582 && a3 != 583 && a3 != 585 && a3 != 586 && a3 != 593 && a3 - 594 >= 2 )
        goto LABEL_92;
    }
    else if ( a3 != 581 )
    {
      if ( a3 != 521 )
      {
        if ( a3 == 522 )
          goto LABEL_80;
        if ( a3 != 523 )
        {
          if ( a3 == 524 )
            goto LABEL_93;
          if ( a3 != 525 )
          {
            if ( a3 != 526 )
            {
              if ( a3 == 568 )
              {
                v10 = 4096;
                goto LABEL_28;
              }
              if ( a3 != 576 )
                goto LABEL_92;
LABEL_97:
              if ( !PtiCurrentShared() )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5207LL);
              if ( !v10 )
                v10 = 2048;
              goto LABEL_28;
            }
LABEL_80:
            if ( (*(_DWORD *)(a1 + 396) & 0x2000000) != 0 )
            {
              v16 = PtiMouseFromQ(a1);
LABEL_37:
              v7 = (struct tagTHREADINFO *)v16;
              if ( ((a3 - 522) & 0xFFFFFFFB) != 0 )
                goto LABEL_11;
              goto LABEL_83;
            }
LABEL_36:
            v16 = PtiKbdFromQ(v8);
            goto LABEL_37;
          }
        }
      }
LABEL_66:
      if ( a4 )
        v9 = (~*((_DWORD *)a4 + 25) & 0x20000u) >> 17;
      else
        v9 = 1;
      goto LABEL_92;
    }
    v10 = 4096;
    goto LABEL_97;
  }
  if ( a3 == 520 )
    goto LABEL_93;
  if ( a3 > 0x11B )
  {
    if ( a3 == 512 )
    {
      if ( !a2 )
      {
        v12 = *(_QWORD *)(a1 + 112);
        if ( v12 )
          v7 = *(struct tagTHREADINFO **)(v12 + 16);
        else
          v7 = *(struct tagTHREADINFO **)(a1 + 96);
      }
      if ( a4 && (unsigned int)IsGenuineMouseInput((char *)a4 + 120) )
        v13 = IsMiPActive(v7, a4, 0LL);
      else
        v13 = 0;
      v11 = v13 != 0 ? 4098 : 2;
      goto LABEL_11;
    }
    if ( a3 == 513 )
      goto LABEL_66;
    if ( a3 != 514 )
    {
      if ( a3 == 515 || a3 == 516 )
        goto LABEL_66;
      if ( a3 != 517 )
      {
        if ( a3 - 518 <= 1 )
          goto LABEL_66;
LABEL_92:
        CancelForegroundActivate(a1, a2, 0LL, (int)a4);
      }
    }
LABEL_93:
    v19 = *(_QWORD *)(v8 + 112);
    if ( v19 && a3 - 512 <= 0xE )
      v7 = *(struct tagTHREADINFO **)(v19 + 16);
    else
      v7 = *(struct tagTHREADINFO **)(v8 + 96);
LABEL_83:
    v11 = 4;
    if ( (unsigned int)ShouldAddPointerWakeFlag(v7, a4) )
      v11 = 4100;
    goto LABEL_11;
  }
  if ( a3 == 283 )
    goto LABEL_97;
  if ( a3 != 254 && a3 != 255 )
  {
    if ( a3 != 256 )
    {
      if ( a3 == 257 )
        goto LABEL_36;
      if ( a3 == 258 )
        goto LABEL_43;
      if ( a3 != 260 )
      {
        if ( a3 == 261 )
          goto LABEL_36;
        if ( a3 != 262 )
          goto LABEL_92;
        goto LABEL_43;
      }
    }
    if ( a4 )
    {
      if ( *((_QWORD *)a4 + 4) != 16LL && (unsigned __int64)(*((_QWORD *)a4 + 4) - 17LL) >= 2
        || (v5 = (unsigned __int64)*((unsigned __int8 *)a4 + 32) >> 2,
            v18 = *((_BYTE *)a4 + 32) & 3,
            a1 = (unsigned int)(2 * v18),
            a2 = (unsigned int)(1 << (2 * v18)),
            ((unsigned __int8)a2 & *(_BYTE *)(v5 + v8 + 236)) == 0) )
      {
        v9 = ((*((_DWORD *)a4 + 25) >> 17) & 1) == 0;
      }
    }
    else
    {
      v9 = 1;
    }
LABEL_43:
    CancelForegroundActivate(a1, a2, v5, (int)a4);
    goto LABEL_36;
  }
LABEL_28:
  if ( !v7 )
  {
    v14 = *((_QWORD *)a4 + 2);
    if ( !v14 || (v15 = ValidateHwnd(v14)) == 0 || (v7 = *(struct tagTHREADINFO **)(v15 + 16)) == 0LL )
      v7 = (struct tagTHREADINFO *)PtiKbdFromQ(v8);
  }
  v11 = v10;
  if ( !v10 )
    v11 = 1024;
LABEL_11:
  if ( v7 )
  {
    if ( a4
      && *((_QWORD *)a4 + 13)
      && ((unsigned int)IsProcessedByInputService(a4) || (*((_DWORD *)a4 + 25) & 0x10000) != 0) )
    {
      v7 = v17;
    }
    if ( v11 )
      SetWakeBit(v7, v11);
    *((_QWORD *)v7 + 159) |= 0x80000000uLL;
    EtwTraceProcessWindowInfo(v7);
    if ( a4 )
      *((_QWORD *)a4 + 13) = v7;
    if ( v9 )
    {
      if ( a4 )
      {
        if ( (*((_DWORD *)a4 + 25) & 0x20000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5277LL);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v7, 0);
      *((_QWORD *)v7 + 159) |= 0x200000000uLL;
      EtwTraceProcessWindowInfo(v7);
    }
  }
}
