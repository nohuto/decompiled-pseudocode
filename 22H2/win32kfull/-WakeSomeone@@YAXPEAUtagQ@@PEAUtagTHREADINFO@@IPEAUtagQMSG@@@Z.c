/*
 * XREFs of ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C0051568
 * Callers:
 *     EditionWakeSomeone @ 0x1C0008C70 (EditionWakeSomeone.c)
 *     EditionWakeThreadForInput @ 0x1C0050450 (EditionWakeThreadForInput.c)
 *     PostInputMessage @ 0x1C00507E0 (PostInputMessage.c)
 *     xxxCapture @ 0x1C00C02CC (xxxCapture.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0109DE0 (EditionHandleAndPostKeyEvent.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C0166FE8 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E0760 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EAAF0 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     IsProcessedByInputService @ 0x1C00128BC (IsProcessedByInputService.c)
 *     CancelForegroundActivate @ 0x1C004F750 (CancelForegroundActivate.c)
 *     PtiKbdFromQ @ 0x1C004FB88 (PtiKbdFromQ.c)
 *     SetWakeBit @ 0x1C0051880 (SetWakeBit.c)
 *     PtiMouseFromQ @ 0x1C005256C (PtiMouseFromQ.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C00525BC (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall WakeSomeone(struct tagQ *a1, struct tagTHREADINFO *a2, unsigned int a3, struct tagQMSG *a4)
{
  struct tagTHREADINFO *v6; // rdi
  struct tagQ *v7; // r13
  unsigned int v8; // r14d
  int v9; // r15d
  unsigned int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // edx
  struct tagTHREADINFO *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // eax

  v6 = a2;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 1;
  if ( a3 > 0x207 )
  {
    if ( a3 <= 0x20E )
    {
      if ( a3 != 526 )
      {
        if ( a3 == 520 )
          goto LABEL_51;
        if ( a3 == 521 )
          goto LABEL_48;
        if ( a3 != 522 )
        {
          if ( a3 == 524 )
            goto LABEL_51;
          goto LABEL_48;
        }
      }
      goto LABEL_23;
    }
    if ( a3 != 568 )
    {
      if ( a3 != 576 )
      {
        if ( a3 <= 0x244 || a3 > 0x247 && (a3 <= 0x248 || a3 > 0x24A && a3 - 593 > 2) )
          goto LABEL_50;
        v9 = 4096;
      }
LABEL_88:
      if ( !W32GetThreadWin32Thread(KeGetCurrentThread()) )
        return;
      if ( !v9 )
        v9 = 2048;
      goto LABEL_40;
    }
    v9 = 4096;
LABEL_40:
    if ( !v6 )
    {
      v15 = *((_QWORD *)a4 + 2);
      if ( !v15 || (v16 = ValidateHwnd(v15)) == 0 || (v6 = *(struct tagTHREADINFO **)(v16 + 16)) == 0LL )
        v6 = (struct tagTHREADINFO *)PtiKbdFromQ((__int64)v7);
    }
    v10 = v9;
    if ( !v9 )
      v10 = 1024;
    goto LABEL_10;
  }
  if ( a3 >= 0x206 )
  {
LABEL_48:
    if ( a4 )
      v8 = (~*((_DWORD *)a4 + 25) & 0x100000u) >> 20;
    else
      v8 = 1;
    goto LABEL_50;
  }
  if ( a3 > 0x106 )
  {
    if ( a3 == 512 )
    {
      if ( !a2 )
      {
        v11 = *((_QWORD *)a1 + 13);
        if ( v11 )
          v6 = *(struct tagTHREADINFO **)(v11 + 16);
        else
          v6 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 11);
      }
      v10 = 2;
      if ( (unsigned int)ShouldAddPointerWakeFlag(v6, a4) )
        v10 = 4098;
      goto LABEL_10;
    }
    if ( a3 == 513 )
      goto LABEL_48;
    if ( a3 != 283 )
    {
      if ( a3 == 514 )
        goto LABEL_51;
      if ( a3 > 0x202 )
      {
        if ( a3 > 0x204 )
          goto LABEL_51;
        goto LABEL_48;
      }
LABEL_50:
      CancelForegroundActivate((int)a1);
LABEL_51:
      v17 = *((_QWORD *)v7 + 13);
      if ( v17 && a3 - 512 <= 0xE )
        v6 = *(struct tagTHREADINFO **)(v17 + 16);
      else
        v6 = (struct tagTHREADINFO *)*((_QWORD *)v7 + 11);
      goto LABEL_53;
    }
    goto LABEL_88;
  }
  if ( a3 == 262 )
    goto LABEL_35;
  if ( a3 < 0xFE )
    goto LABEL_50;
  if ( a3 <= 0xFF )
    goto LABEL_40;
  switch ( a3 )
  {
    case 0x101u:
      goto LABEL_23;
    case 0x100u:
      goto LABEL_32;
    case 0x102u:
LABEL_35:
      CancelForegroundActivate((int)a1);
      goto LABEL_23;
    case 0x104u:
LABEL_32:
      if ( a4 )
      {
        if ( (unsigned __int64)(*((_QWORD *)a4 + 4) - 16LL) > 2
          || (v18 = *((_BYTE *)a4 + 32) & 3,
              LODWORD(a1) = 2 * v18,
              ((unsigned __int8)(1 << (2 * v18)) & *((_BYTE *)v7
                                                   + ((unsigned __int64)*((unsigned __int8 *)a4 + 32) >> 2)
                                                   + 228)) == 0) )
        {
          v8 = ((*((_DWORD *)a4 + 25) >> 20) & 1) == 0;
        }
      }
      else
      {
        v8 = 1;
      }
      goto LABEL_35;
  }
  if ( a3 != 261 )
    goto LABEL_50;
LABEL_23:
  if ( ((a3 - 522) & 0xFFFFFFFB) != 0 || (*((_DWORD *)v7 + 97) & 0x2000000) == 0 )
    v12 = PtiKbdFromQ((__int64)v7);
  else
    v12 = PtiMouseFromQ(v7, 4294967291LL);
  v6 = (struct tagTHREADINFO *)v12;
  if ( ((a3 - 522) & v13) == 0 )
  {
LABEL_53:
    v10 = 4;
    if ( (unsigned int)ShouldAddPointerWakeFlag(v6, a4) )
      v10 = 4100;
  }
LABEL_10:
  if ( v6 )
  {
    if ( a4 && *((_QWORD *)a4 + 13) && (IsProcessedByInputService((__int64)a4) || (*((_DWORD *)a4 + 25) & 0x80000) != 0) )
      v6 = v14;
    if ( v10 )
      SetWakeBit(v6, v10);
    *((_QWORD *)v6 + 154) |= 0x100000000uLL;
    EtwTraceProcessWindowInfo(v6);
    if ( a4 )
      *((_QWORD *)a4 + 13) = v6;
    if ( v8 )
    {
      if ( a4 )
      {
        if ( (*((_DWORD *)a4 + 25) & 0x100000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5672LL);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v6, 0);
      *((_QWORD *)v6 + 154) |= 0x400000000uLL;
      EtwTraceProcessWindowInfo(v6);
    }
  }
}
