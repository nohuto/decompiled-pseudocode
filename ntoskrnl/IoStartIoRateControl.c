/*
 * XREFs of IoStartIoRateControl @ 0x1402C42F8
 * Callers:
 *     PspIoRateEntryActivate @ 0x140753428 (PspIoRateEntryActivate.c)
 * Callees:
 *     IopIoRateStartRateControl @ 0x1402C4400 (IopIoRateStartRateControl.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall IoStartIoRateControl(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d
  int v8; // edx
  int v9; // r8d
  _QWORD v12[16]; // [rsp+40h] [rbp-51h] BYREF

  v5 = *(_DWORD *)(a1 + 36);
  v12[0] = *(_QWORD *)a1;
  v12[3] = *(_QWORD *)(a1 + 16);
  v12[6] = *(_QWORD *)(a1 + 48);
  v12[9] = *(_QWORD *)(a1 + 96);
  v12[12] = *(_QWORD *)(a1 + 120);
  v12[1] = *(_QWORD *)(a1 + 8);
  v12[4] = *(_QWORD *)(a1 + 56);
  v12[7] = *(_QWORD *)(a1 + 64);
  v12[10] = *(_QWORD *)(a1 + 104);
  v12[13] = *(_QWORD *)(a1 + 128);
  v12[2] = *(_QWORD *)(a1 + 72);
  v12[5] = *(_QWORD *)(a1 + 80);
  v12[8] = *(_QWORD *)(a1 + 88);
  v12[11] = *(_QWORD *)(a1 + 112);
  v12[14] = *(_QWORD *)(a1 + 136);
  v8 = (v5 >> 1) & 1 | 2;
  if ( (v5 & 4) == 0 )
    v8 = (v5 >> 1) & 1;
  v9 = v8 | 4;
  if ( (v5 & 8) == 0 )
    v9 = v8;
  return IopIoRateStartRateControl((unsigned int)v12, v8, v9, a2, a3, a4, a5);
}
