/*
 * XREFs of PpmEstimateIdleDuration @ 0x14022A74C
 * Callers:
 *     PpmComputeIdleDurationHint @ 0x14022A658 (PpmComputeIdleDurationHint.c)
 *     PpmIdleSelectStates @ 0x1403B2150 (PpmIdleSelectStates.c)
 * Callees:
 *     KeEstimateClockTickDuration @ 0x14022A8EC (KeEstimateClockTickDuration.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpmGetIdleConstrainedMask @ 0x140581D60 (PpmGetIdleConstrainedMask.c)
 */

unsigned __int64 *__fastcall PpmEstimateIdleDuration(
        __int64 a1,
        char a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        __int64 a9,
        int *a10)
{
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // edx
  int v19; // eax
  unsigned __int64 v20; // rdi
  int v21; // ecx
  unsigned int v22; // eax
  unsigned __int64 *result; // rax
  unsigned __int64 v24; // rsi
  __int64 Prcb; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 *v29; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v30; // [rsp+58h] [rbp-A8h]
  _QWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v32; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+72h] [rbp-8Eh]
  __int16 v34; // [rsp+76h] [rbp-8Ah]
  _QWORD v35[34]; // [rsp+80h] [rbp-80h] BYREF

  v30 = a7;
  v29 = a8;
  v33 = 0;
  v34 = 0;
  memset(&v35[1], 0, 0x100uLL);
  v16 = *(_QWORD *)(a1 + 33600);
  v17 = -1LL;
  v28 = 0LL;
  v27 = 0;
  LOBYTE(v18) = *(_BYTE *)(v16 + 740);
  v19 = 0;
  *a10 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v19 = 8;
    *a10 = 8;
  }
  if ( a2 )
    *a10 = v19 | 4;
  LOBYTE(v15) = a3;
  LOBYTE(v14) = a2;
  KeEstimateClockTickDuration(a1, v18, v14, v15, a4, (__int64)&v28, a9);
  v20 = v28;
  if ( v28 >= a6 )
    v20 = a6;
  v28 = v20;
  if ( !a2 )
  {
    v21 = *(_DWORD *)(a1 + 11684);
    if ( v21 )
    {
      v22 = KeMaximumIncrement / (unsigned int)(v21 + 1);
      if ( !v22 )
        v22 = 1;
      v17 = v22;
    }
  }
  if ( v20 <= v17 )
    v17 = v20;
  else
    *a10 |= 1u;
  LODWORD(v35[0]) = 2097153;
  memset((char *)v35 + 4, 0, 0x104uLL);
  if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(a1 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v35) )
  {
    v24 = 0LL;
    v31[1] = v35[1];
    v31[0] = v35;
    v32 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v27, v31) )
    {
      Prcb = KeGetPrcb(v27);
      v26 = *(_QWORD *)(Prcb + 33648);
      if ( v26 != -1LL && v26 > v24 )
        v24 = *(_QWORD *)(Prcb + 33648);
    }
    if ( v24 && a4 + v28 > v24 )
    {
      *a10 |= 0x2000u;
      v20 = v24 > a4 ? (unsigned int)(v24 - a4) : 1LL;
      if ( v20 < v17 )
        v17 = v20;
    }
  }
  if ( v17 < a5 )
  {
    *a10 |= 0x1000u;
    v17 = a5;
    v20 = a5;
  }
  *v29 = v20;
  result = v30;
  *v30 = v17;
  return result;
}
