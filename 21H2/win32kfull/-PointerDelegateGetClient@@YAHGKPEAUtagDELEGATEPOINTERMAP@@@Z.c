/*
 * XREFs of ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F14CC
 * Callers:
 *     ValidateDelegatePointerList @ 0x1C01EFC80 (ValidateDelegatePointerList.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C01325F4 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall PointerDelegateGetClient(unsigned __int16 a1, unsigned int a2, struct tagDELEGATEPOINTERMAP *a3)
{
  __int64 v6; // rdi
  __int128 *v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  __int128 v14; // xmm6
  __int64 result; // rax
  _DWORD v16[28]; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v17[80]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+F0h] [rbp-58h]
  int v19; // [rsp+FCh] [rbp-4Ch]

  CTouchProcessor::DelegateCapture(gpTouchProcessor, v17, a1, a2, 0);
  v6 = 0LL;
  if ( v19 == 2 )
    v6 = v18;
  if ( !v6 || *(_QWORD *)(v6 + 16) == gptiCurrent )
    return 0LL;
  *(_WORD *)a3 = a1;
  *((_DWORD *)a3 + 1) = a2;
  memset((char *)a3 + 8, 0, 0x70uLL);
  v7 = (__int128 *)INPUTDEST_FROM_PWND(v16, v6);
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v11 = v7[3];
  v12 = v7[4];
  v13 = v7[5];
  v14 = v7[6];
  result = 1LL;
  *(_OWORD *)((char *)a3 + 8) = v8;
  *((_DWORD *)a3 + 30) = 1;
  *(_OWORD *)((char *)a3 + 24) = v9;
  *(_OWORD *)((char *)a3 + 40) = v10;
  *(_OWORD *)((char *)a3 + 56) = v11;
  *(_OWORD *)((char *)a3 + 72) = v12;
  *(_OWORD *)((char *)a3 + 88) = v13;
  *(_OWORD *)((char *)a3 + 104) = v14;
  return result;
}
