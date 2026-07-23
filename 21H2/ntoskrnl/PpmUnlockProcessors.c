/*
 * XREFs of PpmUnlockProcessors @ 0x140567F38
 * Callers:
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 * Callees:
 *     HalRequestIpi @ 0x140268E40 (HalRequestIpi.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403461F0 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall PpmUnlockProcessors(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 Prcb; // rdx
  __int64 v6; // rbx
  unsigned __int32 v7; // eax
  unsigned __int32 v8; // r9d
  signed __int32 v9; // ecx
  __int64 result; // rax
  unsigned int v11; // [rsp+20h] [rbp-A9h] BYREF
  unsigned __int16 *v12[2]; // [rsp+28h] [rbp-A1h] BYREF
  __int16 v13; // [rsp+38h] [rbp-91h]
  int v14; // [rsp+3Ah] [rbp-8Fh]
  __int16 v15; // [rsp+3Eh] [rbp-8Bh]
  _DWORD v16[44]; // [rsp+40h] [rbp-89h] BYREF

  v14 = 0;
  v15 = 0;
  v11 = 0;
  v16[0] = 1310721;
  memset(&v16[1], 0, 0xA4uLL);
  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v12[1] = *(unsigned __int16 **)(a2 + 8);
  v13 = 0;
  v12[0] = (unsigned __int16 *)a2;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v12) )
  {
    Prcb = KeGetPrcb(v11);
    v6 = *(_QWORD *)(Prcb + 0x8000);
    _m_prefetchw((const void *)(Prcb + 32832));
    v7 = *(_DWORD *)(Prcb + 32832);
    do
    {
      v8 = v7;
      v9 = v7 ^ (v7 ^ (v7 - 1)) & 0xFFFFFF;
      if ( (v9 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v7) == 5 )
        {
          v9 = v9 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v7) == 7 )
        {
          v9 = v9 & 0xFFFFFF | 0x6000000;
        }
      }
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(Prcb + 32832), v9, v7);
    }
    while ( v7 != v8 );
    if ( HIBYTE(v9) == 6 )
      KeAddProcessorAffinityEx(v16, v11);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v6
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F)));
    KeRemoveProcessorAffinityEx(a1, v11);
  }
  result = KeIsEmptyAffinityEx(v16);
  if ( !(_DWORD)result )
    return HalRequestIpi(0, (__int64)v16);
  return result;
}
