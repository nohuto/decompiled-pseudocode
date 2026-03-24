/*
 * XREFs of ?SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x180027BE8
 * Callers:
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x180027BA0 (-SyncFlush@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z @ 0x180027F80 (-SynchronizedCommit@CChannel@@UEAAJPEAX@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800281E0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005E108 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::SynchronizeChannel(CInternalMilCmdConnection *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ecx
  char v6; // al
  int MasterTableEntry; // eax
  unsigned int v8; // ecx
  signed int v9; // ebx
  CChannel *v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  signed int LastError; // eax
  unsigned int v15; // ecx
  unsigned int v16; // [rsp+20h] [rbp-48h]
  __m128i v17; // [rsp+30h] [rbp-38h]
  HANDLE hHandle; // [rsp+50h] [rbp-18h]
  int v19; // [rsp+70h] [rbp+8h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v20; // [rsp+80h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v6 = *((_BYTE *)this + 56);
  v20 = 0LL;
  v19 = 52;
  if ( !v6 )
  {
    v9 = -2003303402;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303402, 0xDEu, 0LL);
LABEL_10:
    LeaveCriticalSection(v2);
    return (unsigned int)v9;
  }
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CInternalMilCmdConnection *)((char *)this + 64), a2, &v20);
  v9 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, MasterTableEntry, 0xE2u, 0LL);
  if ( v9 < 0 )
    goto LABEL_10;
  v17 = *(__m128i *)v20;
  hHandle = (HANDLE)*((_QWORD *)v20 + 2);
  LeaveCriticalSection(v2);
  v10 = (CChannel *)_mm_srli_si128(v17, 8).m128i_u64[0];
  v11 = CChannel::SendCommand(v10, &v19, 4u);
  v9 = v11;
  if ( v11 < 0 )
  {
    v16 = 238;
    goto LABEL_18;
  }
  v11 = CChannel::SynchronizedCommit(v10, 0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    v16 = 243;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v16, 0LL);
    return (unsigned int)v9;
  }
  SetLastError(0);
  if ( WaitForSingleObject(hHandle, 0xFFFFFFFF) == -1 )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 >= 0 )
      v9 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v9, 0xFEu, 0LL);
  }
  return (unsigned int)v9;
}
