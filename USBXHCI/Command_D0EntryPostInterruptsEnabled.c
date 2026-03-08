/*
 * XREFs of Command_D0EntryPostInterruptsEnabled @ 0x1C0014130
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013F90 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     Command_SendInternalCommandSynchronously @ 0x1C0030224 (Command_SendInternalCommandSynchronously.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C004A9F0 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Command_D0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  __int64 v2; // rsi
  char *v3; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int16 v7; // ax
  __int64 Pool2; // rax
  int v10; // edx
  int v11; // r9d
  unsigned int v12; // eax
  __int16 v13; // cx
  unsigned int *v14; // rsi
  bool v15; // zf
  void *v16; // rcx
  __int64 (__fastcall *v17)(); // rcx
  unsigned int v18; // eax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  v5 = *(_QWORD *)(v2 + 88);
  if ( a2 != 5 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 108) & 0x100) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 128LL, 1229146200LL);
    v3 = (char *)Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 27;
      LOBYTE(v10) = 2;
LABEL_13:
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v10, 7, v11, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      return 0LL;
    }
    *(_QWORD *)Pool2 = a1;
    KeInitializeEvent((PRKEVENT)(Pool2 + 104), SynchronizationEvent, 0);
    *((_QWORD *)v3 + 10) = 0LL;
    *((_DWORD *)v3 + 22) = 0;
    *((_DWORD *)v3 + 23) = 0;
    *((_QWORD *)v3 + 12) = 0LL;
    *((_QWORD *)v3 + 6) = Command_GetSupportedExtendedCapabilityCommandCompletion;
    v12 = *((_DWORD *)v3 + 11) & 0xFFFF63FF;
    *((_QWORD *)v3 + 7) = v3;
    *((_DWORD *)v3 + 11) = v12 | 0x6000;
    Command_SendInternalCommandSynchronously(a1, v3);
    if ( (*(_BYTE *)(v5 + 112) & 1) != 0 )
      *(_DWORD *)(v2 + 636) = 2;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_WORD *)(v6 + 248);
  if ( v7 == 4147 || v7 == 6418 || v7 == 6945 || !_stricmp((const char *)(v6 + 304), "NVDA") )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) = -1LL;
    if ( !v3 )
    {
      v3 = (char *)ExAllocatePool2(64LL, 128LL, 1229146200LL);
      if ( !v3 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v11 = 28;
        LOBYTE(v10) = 3;
        goto LABEL_13;
      }
    }
    v13 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 248LL);
    if ( v13 == 4147 || v13 == 6418 )
    {
      memset(v3 + 8, 0, 0x78uLL);
      *(_QWORD *)v3 = a1;
      KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
      v17 = Command_RenesasGetFirmwareVersionCommandCompletion;
      v14 = (unsigned int *)(v3 + 44);
    }
    else
    {
      v14 = (unsigned int *)(v3 + 44);
      v15 = v13 == 6945;
      v16 = v3 + 8;
      if ( v15 )
      {
        memset(v16, 0, 0x78uLL);
        *(_QWORD *)v3 = a1;
        KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
        *((_QWORD *)v3 + 7) = v3;
        *((_QWORD *)v3 + 6) = Command_ASMediaGetFirmwareVersionLowCommandCompletion;
        *v14 = *v14 & 0xFFFF03FF | 0xD000;
        Command_SendInternalCommandSynchronously(a1, v3);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) == -1LL )
          goto LABEL_7;
        memset(v3 + 8, 0, 0x78uLL);
        *(_QWORD *)v3 = a1;
        KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
        v17 = Command_ASMediaGetFirmwareVersionHighCommandCompletion;
        v18 = *v14 & 0xFFFF03FF | 0xCC00;
LABEL_28:
        *((_QWORD *)v3 + 7) = v3;
        *((_QWORD *)v3 + 6) = v17;
        *v14 = v18;
        Command_SendInternalCommandSynchronously(a1, v3);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) != -1LL )
          Etw_ControllerFirmareVersionUpdate();
        goto LABEL_7;
      }
      memset(v16, 0, 0x78uLL);
      *(_QWORD *)v3 = a1;
      KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
      v17 = Command_NvidiaGetFirmwareVersionCommandCompletion;
    }
    v18 = *v14 & 0xFFFF03FF | 0xC400;
    goto LABEL_28;
  }
LABEL_7:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x49434858u);
  return 0LL;
}
