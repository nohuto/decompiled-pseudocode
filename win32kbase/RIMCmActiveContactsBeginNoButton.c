/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x1C01DE028
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1C00F065E (rimCountContactsToDeliverWithFrame.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01A8B98 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01A93A0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01A98C0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01CF2D0 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01D5098 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01D5A04 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01D9470 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C00F19A8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00F1A04 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01DE0AC (RIMCmActiveContactsNext.c)
 */

__int64 __fastcall RIMCmActiveContactsBeginNoButton(__int64 a1, __int64 a2)
{
  __int64 active; // rax
  __int64 v5; // xmm1_8
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  active = RIMCmActiveContactsBegin((__int64)&v7, a2);
  v5 = *(_QWORD *)(active + 16);
  *(_OWORD *)a1 = *(_OWORD *)active;
  *(_QWORD *)(a1 + 16) = v5;
  RIMCmActiveContactsEnd((__int64)&v7, a2);
  if ( (*(_QWORD *)a1 != v7 || *(_DWORD *)(a1 + 8) != v8 || *(_QWORD *)(a1 + 16) != v9)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
  {
    RIMCmActiveContactsNext(a2, a1);
  }
  return a1;
}
