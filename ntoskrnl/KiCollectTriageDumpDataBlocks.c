void __fastcall KiCollectTriageDumpDataBlocks(int a1, char a2)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rbx
  struct _KTHREAD *v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  unsigned int v16; // ebx

  KiCollectFullProcessName((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( !a2 )
    KiSaveCurrentEtwTraceBuffer();
  IoAddTriageDumpDataBlock((ULONG)&KseEngine, (PVOID)0x60);
  v4 = a1 - 239;
  if ( v4 )
  {
    v5 = v4 - 26;
    if ( v5 )
    {
      v6 = v5 - 70;
      if ( v6 )
      {
        v7 = v6 - 60;
        if ( v7 )
        {
          if ( v7 != 96 )
            goto LABEL_28;
LABEL_16:
          IoAddTriageDumpDataBlock((ULONG)&KeSwapProcessOrStackThread, (PVOID)8);
          IopAddBugcheckTriageThread(*(__int64 *)&KeSwapProcessOrStackThread);
          goto LABEL_28;
        }
        if ( qword_140C42448 == 396 )
        {
          if ( KdpBreakpointChangeCount )
            IoAddTriageDumpDataBlock((ULONG)&KdpBreakpointChangeCount, (PVOID)4);
          IoAddTriageDumpDataBlock((ULONG)&VslpTraceLog, (PVOID)0xA08);
          if ( VslpHotpatchLog )
          {
            IoAddTriageDumpDataBlock((ULONG)&VslpHotpatchLog, (PVOID)8);
            LODWORD(v8) = VslpHotpatchLog;
            v9 = 327688LL;
LABEL_27:
            IoAddTriageDumpDataBlock(v8, (PVOID)v9);
          }
        }
      }
      else if ( qword_140C42448 == 4 || qword_140C42448 == 100 )
      {
        goto LABEL_16;
      }
    }
    else
    {
      KiMarkBugCheckRegions(qword_140C42448, xmmword_140C42450, MEMORY[0x140C42458], qword_140C42460);
      if ( qword_140C42460 == 47 )
      {
        v10 = MEMORY[0x140C42458];
        if ( MmIsAddressValidEx(MEMORY[0x140C42458] + 1928) )
        {
          v8 = *(_QWORD *)(v10 + 1928);
          v9 = 4096LL;
          goto LABEL_27;
        }
      }
    }
  }
  else
  {
    PopInternalAddToDumpFile(0LL, 0LL, 0LL);
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcStateIndex == 1 )
    {
      Process = CurrentThread->SavedApcState.Process;
      if ( Process )
      {
        if ( Process != KeGetCurrentThread()->ApcState.Process )
        {
          IoAddTriageDumpDataBlock((ULONG)Process, (PVOID)0xB80);
          KiCollectFullProcessName((__int64)Process);
        }
      }
    }
    if ( CriticalProcessExceptionData )
    {
      IoAddTriageDumpDataBlock((ULONG)&CriticalProcessExceptionData, (PVOID)0x30);
      if ( (_WORD)xmmword_140C317B0 )
      {
        LODWORD(v8) = DWORD2(xmmword_140C317B0);
        v9 = (unsigned __int16)xmmword_140C317B0;
        goto LABEL_27;
      }
    }
  }
LABEL_28:
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v13 = KeGetCurrentThread();
    v14 = (__int64)v13->KernelShadowStackBase - 4096;
    v15 = (v13->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v14 - v15 >= 0x1000 )
      v16 = 4096;
    else
      v16 = v14 - v15;
    if ( KiIsAddressRangeValid(v15, v16) )
      IoAddTriageDumpDataBlock(v15, (PVOID)v16);
    IoAddTriageDumpDataBlock((ULONG)&KiKernelCetEnabled, (PVOID)1);
    IoAddTriageDumpDataBlock((ULONG)&KiKernelCetAuditModeEnabled, (PVOID)1);
    IoAddTriageDumpDataBlock((ULONG)&KeKernelCetWrssEnabledScenarios, (PVOID)1);
    IoAddTriageDumpDataBlock((ULONG)&KiKernelCetLogging, (PVOID)0x1C);
  }
}
