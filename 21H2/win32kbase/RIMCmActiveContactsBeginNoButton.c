/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x1C01B609C
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1C00E69BA (rimCountContactsToDeliverWithFrame.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0187010 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A7B8C (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01ADA80 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01AE2AC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01B198C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C00E74FA (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 */

__int64 __fastcall RIMCmActiveContactsBeginNoButton(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 active; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // r8
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  active = RIMCmActiveContactsBegin((__int64)&v9, a2, a3);
  v6 = *(_QWORD *)(active + 16);
  *(_OWORD *)a1 = *(_OWORD *)active;
  *(_QWORD *)(a1 + 16) = v6;
  RIMCmActiveContactsEnd((__int64)&v9, a2, v7);
  if ( (*(_QWORD *)a1 != v9 || *(_DWORD *)(a1 + 8) != v10 || *(_QWORD *)(a1 + 16) != v11)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
  {
    RIMCmActiveContactsNext(a2, a1);
  }
  return a1;
}
