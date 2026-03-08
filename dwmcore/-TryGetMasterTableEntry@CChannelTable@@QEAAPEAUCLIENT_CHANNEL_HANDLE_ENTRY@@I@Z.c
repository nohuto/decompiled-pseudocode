/*
 * XREFs of ?TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z @ 0x1800EB6E4
 * Callers:
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800EB5D0 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x1801B2710 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180099BBC (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CLIENT_CHANNEL_HANDLE_ENTRY *__fastcall CChannelTable::TryGetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // r9

  LOBYTE(v2) = HANDLE_TABLE::ValidEntry(this, a2);
  if ( v2 )
    return (struct CLIENT_CHANNEL_HANDLE_ENTRY *)(*(_QWORD *)(v4 + 24) + (unsigned int)(*(_DWORD *)(v4 + 8) * v3));
  else
    return 0LL;
}
