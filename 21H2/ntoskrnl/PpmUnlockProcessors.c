/*
 * XREFs of PpmUnlockProcessors @ 0x1405C8FE4
 * Callers:
 *     PpmIdleSelectStates @ 0x1403A1620 (PpmIdleSelectStates.c)
 * Callees:
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall PpmUnlockProcessors(unsigned __int16 *a1, __int64 a2)
{
  unsigned int Number; // esi
  __int64 Prcb; // rdx
  __int64 v6; // rbx
  unsigned __int32 v7; // eax
  unsigned __int32 v8; // r9d
  signed __int32 v9; // ecx
  __int64 result; // rax
  __int64 v11; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v12[3]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v13[68]; // [rsp+48h] [rbp-C0h] BYREF

  LODWORD(v11) = 0;
  v13[0] = 2097153;
  memset(&v13[1], 0, 0x104uLL);
  Number = KeGetPcr()->Prcb.Number;
  v12[1] = *(unsigned __int16 **)(a2 + 8);
  memset(&v12[2], 0, sizeof(unsigned __int16 *));
  v12[0] = (unsigned __int16 *)a2;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v12) )
  {
    Prcb = KeGetPrcb(v11);
    v6 = *(_QWORD *)(Prcb + 33600);
    _m_prefetchw((const void *)(Prcb + 33672));
    v7 = *(_DWORD *)(Prcb + 33672);
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
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(Prcb + 33672), v9, v7);
    }
    while ( v7 != v8 );
    if ( HIBYTE(v9) == 6 )
      KeAddProcessorAffinityEx((unsigned __int16 *)v13, v11);
    KeInterlockedClearProcessorAffinityEx(v6 + 72, Number);
    KeRemoveProcessorAffinityEx(a1, v11);
  }
  result = KeIsEmptyAffinityEx(v13);
  if ( !(_DWORD)result )
    return HalRequestIpi(0, (__int64)v13);
  return result;
}
