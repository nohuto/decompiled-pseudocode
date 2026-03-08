/*
 * XREFs of KeEtwInitializeCpuStarvationProvider @ 0x1403A807C
 * Callers:
 *     EtwpCpuStarvationProvEnableCallback @ 0x1403A8060 (EtwpCpuStarvationProvEnableCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 KeEtwInitializeCpuStarvationProvider()
{
  __int64 result; // rax
  __int64 Prcb; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  _WORD *Pool3; // rax
  __int128 v5; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v6[2]; // [rsp+40h] [rbp-20h] BYREF
  __int16 v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+52h] [rbp-Eh]
  __int16 v9; // [rsp+56h] [rbp-Ah]
  unsigned int v10; // [rsp+70h] [rbp+10h] BYREF

  v6[1] = (unsigned __int16 *)qword_140D1EFE8[0];
  v8 = 0;
  v6[0] = (unsigned __int16 *)KeActiveProcessors;
  v9 = 0;
  v5 = 0LL;
  v10 = 0;
  v7 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v6);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v10);
    v2 = Prcb;
    if ( !*(_QWORD *)(Prcb + 13264) )
    {
      v3 = *(_QWORD *)(Prcb + 192);
      LOBYTE(v5) = 3;
      DWORD2(v5) = *(unsigned __int16 *)(v3 + 138);
      Pool3 = (_WORD *)ExAllocatePool3(64, 80, 1883466059, (unsigned int)&v5, 1);
      if ( Pool3 )
      {
        *(_BYTE *)Pool3 = 19;
        Pool3[1] = 0;
        *((_QWORD *)Pool3 + 3) = KiLogSingleDpcSoftTimeoutEvent;
        *((_QWORD *)Pool3 + 4) = v2;
        *((_QWORD *)Pool3 + 7) = 0LL;
        *((_QWORD *)Pool3 + 2) = 0LL;
        *((_BYTE *)Pool3 + 1) = 2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 13264), (signed __int64)Pool3, 0LL) )
          ExFreePoolWithTag(Pool3, 0x7043694Bu);
      }
    }
  }
  return result;
}
