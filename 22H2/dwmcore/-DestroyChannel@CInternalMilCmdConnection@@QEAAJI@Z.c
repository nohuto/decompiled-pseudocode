/*
 * XREFs of ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18014ECDC
 * Callers:
 *     ?Destroy@CChannel@@UEAAJXZ @ 0x18014F9B0 (-Destroy@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800277F0 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800281E0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DestroyKernelChannel@CInternalMilCmdConnection@@AEAAJI@Z @ 0x18014EDC0 (-DestroyKernelChannel@CInternalMilCmdConnection@@AEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x18014F06C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::DestroyChannel(CInternalMilCmdConnection *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CChannelTable *v3; // rbp
  int MasterTableEntry; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  CInternalMilCmdConnection *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v3 = (CInternalMilCmdConnection *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  MasterTableEntry = CChannelTable::GetMasterTableEntry(v3, a2, &v12);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, MasterTableEntry, 0x95u, 0LL);
    LeaveCriticalSection(v2);
  }
  else
  {
    ReleaseInterface<CChannel>((CChannel **)v12 + 1);
    CChannelTable::DestroyHandle(v3, a2);
    LeaveCriticalSection(v2);
    v9 = CInternalMilCmdConnection::DestroyKernelChannel(v8, a2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA7u, 0LL);
  }
  return v7;
}
