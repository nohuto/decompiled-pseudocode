/*
 * XREFs of RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01ADA80
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01AF120 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01B1008 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01B609C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B68C8 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall RIMInsertSimulatedKeepAliveStateForActiveContacts(int a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 active; // rax
  __int64 v10; // r8
  __int64 v11; // xmm1_8
  int v12; // ebx
  __int64 result; // rax
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]

  v4 = *(_QWORD *)(a2 + 472);
  v5 = a2;
  active = RIMCmActiveContactsBeginNoButton(&v16, v4);
  v11 = *(_QWORD *)(active + 16);
  v14 = *(_OWORD *)active;
  v15 = v11;
  while ( 1 )
  {
    RIMCmActiveContactsEnd((__int64)&v16, v4, v10);
    v12 = v15;
    if ( (_QWORD)v14 == v16 )
    {
      result = v17;
      if ( DWORD2(v14) == v17 && v15 == v18 )
        break;
    }
    if ( (*(_DWORD *)(v15 + 16) & 2) == 0 )
      __int2c();
    if ( (*(_DWORD *)(v15 + 2324) & 1) == 0 )
    {
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v15 - 16) )
        rimInsertSimulatedContactKeepAliveStateInFrame(a1, v5, v12 - 16, a3, a4);
    }
    RIMCmActiveContactsNext(v4, &v14);
  }
  return result;
}
