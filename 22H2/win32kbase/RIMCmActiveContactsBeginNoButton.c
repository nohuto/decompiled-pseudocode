/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x1C01AFE08
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1C00E1A7E (rimCountContactsToDeliverWithFrame.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C017BC38 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C440 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C960 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A11E0 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01A6F9C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01A792C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01AB398 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C00E34D4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E3530 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01AFE8C (RIMCmActiveContactsNext.c)
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
