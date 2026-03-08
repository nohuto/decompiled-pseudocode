/*
 * XREFs of KiInitializeDpcRuntimeHistoryHashTables @ 0x140B43D24
 * Callers:
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x140203D9C (KiInitializeTimer2.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x14080F2A0 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 */

__int64 KiInitializeDpcRuntimeHistoryHashTables()
{
  __int64 Prcb; // rax
  __int64 result; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v3[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v4; // [rsp+40h] [rbp-10h]
  int v5; // [rsp+42h] [rbp-Eh]
  __int16 v6; // [rsp+46h] [rbp-Ah]
  unsigned int v7; // [rsp+60h] [rbp+10h] BYREF

  v3[1] = (unsigned __int16 *)qword_140D1EFE8[0];
  v3[0] = (unsigned __int16 *)KeActiveProcessors;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v4 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v3) )
  {
    Prcb = KeGetPrcb(v7);
    result = KiInitializeSingleDpcRuntimeHistoryHashTable(Prcb);
    if ( (int)result < 0 )
      return result;
  }
  word_140C40EA2 = 0;
  KiInitializeTimer2(
    (unsigned __int64)&KiDpcRuntimeHistoryHashTableCleanupTimer,
    (__int64)KiDpcRuntimeHistoryHashTableCleanupTimerCallback,
    0LL,
    8);
  v2[1] = -1LL;
  v2[0] = 0LL;
  KeSetTimer2((__int64)&KiDpcRuntimeHistoryHashTableCleanupTimer, -900000000LL, 900000000LL, (__int64)v2);
  return 0LL;
}
