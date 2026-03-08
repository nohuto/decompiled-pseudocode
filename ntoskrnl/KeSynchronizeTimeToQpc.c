/*
 * XREFs of KeSynchronizeTimeToQpc @ 0x140568B80
 * Callers:
 *     HalpAcpiPreSleep @ 0x140A93820 (HalpAcpiPreSleep.c)
 * Callees:
 *     KiUpdateTimeAssist @ 0x1403C9BA8 (KiUpdateTimeAssist.c)
 */

__int64 __fastcall KeSynchronizeTimeToQpc(LARGE_INTEGER a1)
{
  LARGE_INTEGER v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = 0LL;
  return KiUpdateTimeAssist(&v2, 1, (__int64)&v3, (__int64)&v3);
}
