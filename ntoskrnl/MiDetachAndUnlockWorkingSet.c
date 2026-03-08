/*
 * XREFs of MiDetachAndUnlockWorkingSet @ 0x14020CF74
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402245D0 (MiTrimOrAgeWorkingSet.c)
 *     MiHandleForceTrimWorkingSets @ 0x1406326A0 (MiHandleForceTrimWorkingSets.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiDetachSessionGlobal @ 0x1402EA04C (MiDetachSessionGlobal.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall MiDetachAndUnlockWorkingSet(__int64 a1)
{
  char result; // al
  _OWORD v2[3]; // [rsp+20h] [rbp-48h] BYREF

  result = *(_BYTE *)(a1 + 184) & 7;
  if ( result )
  {
    if ( result == 1 )
      return MiDetachSessionGlobal(*(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 17000LL);
  }
  else
  {
    result = a1 + 0x80;
    if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1664) )
    {
      memset(v2, 0, sizeof(v2));
      return KiUnstackDetachProcess(v2, 1LL);
    }
  }
  return result;
}
