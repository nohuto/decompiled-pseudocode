/*
 * XREFs of ExpFindFastOwnerEntryForThread @ 0x1403C53E4
 * Callers:
 *     ExAcquireFastResourceExclusive @ 0x1403C48B0 (ExAcquireFastResourceExclusive.c)
 *     ExIsFastResourceHeldExclusive @ 0x1403C4E10 (ExIsFastResourceHeldExclusive.c)
 *     ExIsFastResourceHeld @ 0x1403C4F80 (ExIsFastResourceHeld.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x1403C50F0 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExpFastResourceLegacyRelease @ 0x1403C5290 (ExpFastResourceLegacyRelease.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1406081A8 (ExpFastResourceLegacyIsAcquiredShared.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpFindFastOwnerEntryForThread(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 *v4; // rax
  __int64 *i; // rcx
  __int64 *v7; // rdx

  v4 = (__int64 *)(a1 + 1656 + (a3 != 0 ? 0x18 : 0));
  for ( i = (__int64 *)*v4; ; i = (__int64 *)*i )
  {
    if ( i == v4 )
      return 0LL;
    if ( i[3] == a2 )
      break;
  }
  if ( a4 && (*((_BYTE *)i + 17) & 2) == 0 )
  {
    v7 = i + 5;
    for ( i = (__int64 *)i[5]; i != v7; i = (__int64 *)*i )
    {
      if ( (*((_BYTE *)i + 17) & 2) != 0 )
        return i;
    }
    return 0LL;
  }
  return i;
}
