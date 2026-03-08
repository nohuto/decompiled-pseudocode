/*
 * XREFs of PoExecuteIdleCheck @ 0x1403C65A0
 * Callers:
 *     KiUpdateTime @ 0x14022BD80 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x14022CD80 (KeClockInterruptNotify.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     KiEnumerateNextProcessorNumber @ 0x1402AA0A0 (KiEnumerateNextProcessorNumber.c)
 *     HalRequestIpi @ 0x1402EF7C0 (HalRequestIpi.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpmEventIdleDurationExpiration @ 0x140598428 (PpmEventIdleDurationExpiration.c)
 */

__int64 __fastcall PoExecuteIdleCheck(unsigned __int64 a1)
{
  __int64 result; // rax
  char v3; // bl
  unsigned int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r11
  int v11; // ebx
  struct _KPRCB *Prcb; // rax
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h]
  _QWORD v16[34]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v17[68]; // [rsp+150h] [rbp+50h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  memset(v17, 0, 0x108uLL);
  LODWORD(v16[0]) = 2097153;
  result = (__int64)memset((char *)v16 + 4, 0, 0x104uLL);
  if ( !PpmIdleDurationExpirationTimeout )
    return result;
  if ( PpmIdleLastIdleDurationExpirationTime + PpmIdleDurationExpirationTimeout >= a1 )
    return result;
  v3 = 0;
  result = (__int64)memset(&v16[1], 0, 8LL * LOWORD(v16[0]));
  LOWORD(v16[0]) = 1;
  v4 = 0;
  if ( !KeNumberNodes )
    return result;
  do
  {
    v5 = KeNodeBlock[v4];
    v6 = *(_DWORD *)(v5 + 16);
    while ( v6 )
    {
      _BitScanForward((unsigned int *)&v7, v6);
      v13 = 0;
      v6 &= ~(1 << v7);
      v8 = *(_QWORD *)(v5 + 8 * v7 + 24);
      v9 = *(unsigned __int16 *)(v8 + 136);
      v10 = *(_QWORD *)(v8 + 72);
      if ( LOWORD(v16[0]) <= (unsigned __int16)v9 )
      {
        if ( WORD1(v16[0]) <= (unsigned __int16)v9 )
          goto LABEL_11;
        LOWORD(v16[0]) = v9 + 1;
      }
      v16[v9 + 1] |= v10;
LABEL_11:
      if ( *(_QWORD *)(v8 + 72) )
        v3 = 1;
    }
    result = (unsigned __int16)KeNumberNodes;
    ++v4;
  }
  while ( v4 < (unsigned __int16)KeNumberNodes );
  if ( v3 )
  {
    PpmIdleLastIdleDurationExpirationTime = a1;
    v17[0] = 2097153;
    memset(&v17[1], 0, 0x104uLL);
    *((_QWORD *)&v14 + 1) = v16[1];
    *(_QWORD *)&v14 = v16;
    while ( 1 )
    {
      v13 = 0;
      if ( (int)KiEnumerateNextProcessorNumber((__int64)&v13, (unsigned __int16 **)&v14) < 0 )
        break;
      v11 = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v13 + BYTE2(v13)];
      Prcb = (struct _KPRCB *)KeGetPrcb(v11);
      if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= a1 )
        KeAddProcessorAffinityEx((unsigned __int16 *)v17, v11);
    }
    result = KeIsEmptyAffinityEx(v17);
    if ( !(_DWORD)result )
    {
      PpmEventIdleDurationExpiration(v17);
      return HalRequestIpi(0, (__int64)v17);
    }
  }
  return result;
}
