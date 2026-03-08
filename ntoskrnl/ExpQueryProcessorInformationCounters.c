/*
 * XREFs of ExpQueryProcessorInformationCounters @ 0x14086C350
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x14086BB50 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     PoGetIdleTimes @ 0x140236ABC (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402F74A8 (PoGetPerfStateAndParkingInfo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall ExpQueryProcessorInformationCounters(__int64 a1, char a2, char a3, char a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 v10; // r15
  __int64 v11; // r10
  __int64 v12; // r14
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 result; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+28h] [rbp-61h] BYREF
  __int128 v27; // [rsp+30h] [rbp-59h] BYREF
  __int128 v28; // [rsp+40h] [rbp-49h]
  __int128 v29; // [rsp+50h] [rbp-39h] BYREF
  __int128 v30; // [rsp+60h] [rbp-29h] BYREF
  __int128 v31; // [rsp+70h] [rbp-19h]
  __int128 v32; // [rsp+80h] [rbp-9h] BYREF
  __int128 v33; // [rsp+90h] [rbp+7h]
  __int128 v34; // [rsp+A0h] [rbp+17h]

  ProcNumber.Group = *(unsigned __int8 *)(a1 + 208);
  ProcNumber.Number = *(_BYTE *)(a1 + 209);
  ProcNumber.Reserved = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v29 = 0LL;
  if ( a2 )
  {
    PoGetIdleTimes(&ProcNumber, (__int64)&v32, (__int64)&v29);
    v8 = (unsigned int)v29;
    v9 = *((_QWORD *)&v32 + 1);
    v10 = (unsigned int)v34;
    v11 = v33;
    v12 = DWORD1(v34);
    v13 = *((_QWORD *)&v33 + 1);
    v14 = DWORD2(v34);
    v15 = DWORD1(v29);
    *(_QWORD *)(a5 + 120) = *((_QWORD *)&v29 + 1);
    v16 = (unsigned int)KeMaximumIncrement;
    v17 = (unsigned int)KeMaximumIncrement * v8;
    v18 = (unsigned int)KeMaximumIncrement * v15;
    *(_QWORD *)a5 = v17;
    *(_QWORD *)(a5 + 72) = v9;
    *(_QWORD *)(a5 + 96) = v10;
    *(_QWORD *)(a5 + 80) = v11;
    *(_QWORD *)(a5 + 104) = v12;
    *(_QWORD *)(a5 + 88) = v13;
    v19 = v18 - v17;
    *(_QWORD *)(a5 + 112) = v14;
    v20 = v17 + v16 * *(unsigned int *)(a1 + 33132);
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v19 = 0LL;
    *(_QWORD *)(a5 + 72) = 0LL;
    v20 = 0LL;
    *(_QWORD *)(a5 + 80) = 0LL;
    v13 = 0LL;
    *(_QWORD *)(a5 + 88) = 0LL;
    v11 = 0LL;
    *(_QWORD *)(a5 + 96) = 0LL;
    v9 = 0LL;
    *(_QWORD *)(a5 + 104) = 0LL;
    v14 = 0LL;
    *(_QWORD *)(a5 + 112) = 0LL;
    v12 = 0LL;
    *(_QWORD *)(a5 + 120) = 0LL;
    v10 = 0LL;
  }
  *(_QWORD *)(a5 + 8) = v20;
  *(_QWORD *)(a5 + 24) = v19;
  v21 = (unsigned int)KeMaximumIncrement;
  v22 = (unsigned int)KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(a1 + 33096);
  v27 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  *(_QWORD *)(a5 + 16) = v22;
  *(_DWORD *)(a5 + 32) = *(_DWORD *)(a1 + 33088);
  v23 = v21 * *(unsigned int *)(a1 + 33104);
  v31 = 0LL;
  *(_QWORD *)(a5 + 48) = v23;
  *(_DWORD *)(a5 + 60) = *(_DWORD *)(a1 + 13148);
  *(_DWORD *)(a5 + 64) = *(_DWORD *)(a1 + 13228);
  *(_QWORD *)(a5 + 40) = v21 * *(unsigned int *)(a1 + 33100);
  *(_DWORD *)(a5 + 56) = *(_DWORD *)(a1 + 13252);
  *(_QWORD *)(a5 + 168) = v11 + v9 + v13;
  *(_QWORD *)(a5 + 176) = v10 + v14 + v12;
  v24 = (unsigned __int64)&v30 & -(__int64)(a4 != 0);
  if ( a3 || v24 )
    PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)&v27, v24, 0LL);
  *(_DWORD *)(a5 + 128) = BYTE13(v28);
  *(_QWORD *)(a5 + 132) = *(_QWORD *)((char *)&v27 + 4);
  *(_DWORD *)(a5 + 140) = v27;
  *(_QWORD *)(a5 + 184) = *(_QWORD *)((char *)&v28 + 4);
  *(_OWORD *)(a5 + 144) = v30;
  *(_QWORD *)(a5 + 160) = v31;
  result = *((_QWORD *)&v31 + 1);
  *(_QWORD *)(a5 + 192) = *((_QWORD *)&v31 + 1);
  return result;
}
