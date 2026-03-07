__int64 __fastcall PointerDelegateGetClient(__int64 a1, unsigned int a2, struct tagDELEGATEPOINTERMAP *a3)
{
  unsigned __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm4
  __int128 v14; // xmm5
  __int128 v15; // xmm6
  __int64 result; // rax
  _DWORD v17[28]; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v18[80]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-58h]
  int v20; // [rsp+FCh] [rbp-4Ch]

  v5 = a1;
  v6 = SGDGetUserSessionState(a1);
  CTouchProcessor::DelegateCapture(*(_QWORD *)(v6 + 3424), v18, v5, a2, 0);
  if ( v20 != 2 )
    return 0LL;
  v7 = v19;
  if ( !v19 || *(_QWORD *)(v19 + 16) == gptiCurrent )
    return 0LL;
  *(_WORD *)a3 = v5;
  *((_DWORD *)a3 + 1) = a2;
  memset_0((char *)a3 + 8, 0, 0x70uLL);
  v8 = (__int128 *)INPUTDEST_FROM_PWND(v17, v7);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v13 = v8[4];
  v14 = v8[5];
  v15 = v8[6];
  result = 1LL;
  *(_OWORD *)((char *)a3 + 8) = v9;
  *((_DWORD *)a3 + 30) = 1;
  *(_OWORD *)((char *)a3 + 24) = v10;
  *(_OWORD *)((char *)a3 + 40) = v11;
  *(_OWORD *)((char *)a3 + 56) = v12;
  *(_OWORD *)((char *)a3 + 72) = v13;
  *(_OWORD *)((char *)a3 + 88) = v14;
  *(_OWORD *)((char *)a3 + 104) = v15;
  return result;
}
