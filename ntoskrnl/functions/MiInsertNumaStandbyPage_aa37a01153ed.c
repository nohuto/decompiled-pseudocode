signed __int64 __fastcall MiInsertNumaStandbyPage(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // r12
  signed __int64 result; // rax
  volatile signed __int64 *v10; // rsi
  __int64 v11; // r11
  volatile signed __int64 *v12; // rbp
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  _OWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int64 *v17; // [rsp+40h] [rbp-28h]

  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  MiPfnToStandbyLookaside(v4, 0LL, (__int64 *)v16);
  _InterlockedIncrement64(v17);
  if ( a2 )
  {
    v5 = a2[7];
    v6 = a2[10];
    v7 = a2[11];
    v8 = a2[8];
    MiSetPfnNodeBlinkLow(a1, v5);
    *(_DWORD *)(a1 + 36) ^= (*(_DWORD *)(a1 + 36) ^ (v5 >> 19)) & 0x1FFFFF;
    result = MiSetNextStandbyPageSameNodeNoLockAsserts(a1, v6);
    v10 = v17;
    v11 = 0x3FFFFFFFFFLL;
    if ( v5 == 0x3FFFFFFFFFLL )
      *((_QWORD *)v17 + 2) = v4;
    else
      result = MiSetNextStandbyPageSameNodeNoLockAsserts(v8, v4);
    if ( v6 == v11 )
    {
      *((_QWORD *)v10 + 3) = v4;
    }
    else
    {
      result = MiSetPfnNodeBlinkLow(v7, v4);
      *(_DWORD *)(v7 + 36) ^= (*(_DWORD *)(v7 + 36) ^ (v4 >> 19)) & 0x1FFFFF;
    }
  }
  else
  {
    v12 = v17;
    v13 = 0x3FFFFFFFFFLL;
    v14 = *((_QWORD *)v17 + 3);
    if ( v14 == 0x3FFFFFFFFFLL )
      *((_QWORD *)v17 + 2) = v4;
    else
      MiSetNextStandbyPageSameNodeNoLockAsserts(48 * v14 - 0x220000000000LL, v4);
    MiSetNextStandbyPageSameNodeNoLockAsserts(a1, v13);
    result = MiSetPfnNodeBlinkLow(v15, v14);
    *(_DWORD *)(a1 + 36) ^= (*(_DWORD *)(a1 + 36) ^ (v14 >> 19)) & 0x1FFFFF;
    *((_QWORD *)v12 + 3) = v4;
  }
  return result;
}
