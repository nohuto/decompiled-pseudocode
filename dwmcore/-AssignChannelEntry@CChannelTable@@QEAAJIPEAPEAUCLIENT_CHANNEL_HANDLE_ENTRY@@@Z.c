/*
 * XREFs of ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800CCEF8
 * Callers:
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x1800CCD3C (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x18009C52C (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800CD0D4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 */

__int64 __fastcall CChannelTable::AssignChannelEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  int MasterTableEntry; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v9; // rsi
  HANDLE EventW; // rax
  signed int LastError; // eax
  __int64 v13; // rcx
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  MasterTableEntry = HANDLE_TABLE::AssignEntry(this, a2, 1);
  v8 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    v14 = 69;
    goto LABEL_13;
  }
  MasterTableEntry = CChannelTable::GetMasterTableEntry(this, a2, &v15);
  v8 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    v14 = 71;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, MasterTableEntry, v14, 0LL);
    return v8;
  }
  v9 = v15;
  *((_QWORD *)v15 + 1) = 0LL;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v9 + 2) = EventW;
  if ( EventW )
  {
    ++*((_DWORD *)this + 8);
    *a3 = v9;
  }
  else
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( (v8 & 0x80000000) == 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v8, 0x4Au, 0LL);
  }
  return v8;
}
