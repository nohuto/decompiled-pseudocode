/*
 * XREFs of KeSetEventBoostPriority @ 0x14056F2C0
 * Callers:
 *     NtSetEventBoostPriority @ 0x1409F8B40 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1402396C0 (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall KeSetEventBoostPriority(__int64 a1, char *a2)
{
  char *v2; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = &v4;
  if ( a2 )
    v2 = a2;
  return KeSetEventBoostPriorityEx(a1, (__int64)v2, 0LL, 0LL, 1, 0);
}
