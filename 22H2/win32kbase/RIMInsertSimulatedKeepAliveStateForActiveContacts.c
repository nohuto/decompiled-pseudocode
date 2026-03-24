/*
 * XREFs of RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01783F8
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159500 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0179B00 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C017B814 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017FBB8 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C017FC4C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FCBC (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0180324 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall RIMInsertSimulatedKeepAliveStateForActiveContacts(int a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 active; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  int v12; // ebx
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  __int128 v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int128 v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  _BYTE v21[32]; // [rsp+60h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v5 = a2;
  active = RIMCmActiveContactsBeginNoButton(&v19, v4);
  v10 = *(_QWORD *)(active + 16);
  v17 = *(_OWORD *)active;
  v18 = v10;
  while ( 1 )
  {
    v11 = RIMCmActiveContactsEnd(v21, v4);
    v12 = v18;
    v13 = *(_OWORD *)v11;
    v14 = *(_QWORD *)(v11 + 16);
    v15 = *(_QWORD *)v11;
    v20 = v14;
    v19 = v13;
    if ( (_QWORD)v17 == v15 )
    {
      result = DWORD2(v19);
      if ( DWORD2(v17) == DWORD2(v19) && v18 == v20 )
        break;
    }
    if ( (*(_DWORD *)(v18 + 16) & 2) == 0 )
      __int2c();
    if ( (*(_DWORD *)(v18 + 2324) & 1) == 0 )
    {
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v18 - 16) )
        rimInsertSimulatedContactKeepAliveStateInFrame(a1, v5, v12 - 16, a3, a4);
    }
    RIMCmActiveContactsNext(v4, &v17);
  }
  return result;
}
