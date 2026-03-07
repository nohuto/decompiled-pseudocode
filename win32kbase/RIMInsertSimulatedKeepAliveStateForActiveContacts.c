__int64 __fastcall RIMInsertSimulatedKeepAliveStateForActiveContacts(int a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 active; // rax
  __int64 v10; // xmm1_8
  int v11; // ebx
  __int64 result; // rax
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]

  v4 = *(_QWORD *)(a2 + 472);
  v5 = a2;
  active = RIMCmActiveContactsBeginNoButton(&v15, v4);
  v10 = *(_QWORD *)(active + 16);
  v13 = *(_OWORD *)active;
  v14 = v10;
  while ( 1 )
  {
    RIMCmActiveContactsEnd((__int64)&v15, v4);
    v11 = v14;
    if ( (_QWORD)v13 == v15 )
    {
      result = v16;
      if ( DWORD2(v13) == v16 && v14 == v17 )
        break;
    }
    if ( (*(_DWORD *)(v14 + 16) & 2) == 0 )
      __int2c();
    if ( (*(_DWORD *)(v14 + 2348) & 1) == 0 )
    {
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v14 - 16) )
        rimInsertSimulatedContactKeepAliveStateInFrame(a1, v5, v11 - 16, a3, a4);
    }
    RIMCmActiveContactsNext(v4, &v13);
  }
  return result;
}
