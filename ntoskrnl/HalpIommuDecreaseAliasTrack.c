/*
 * XREFs of HalpIommuDecreaseAliasTrack @ 0x1405155D4
 * Callers:
 *     HalpIommuBlockDevice @ 0x1405153C0 (HalpIommuBlockDevice.c)
 * Callees:
 *     IidAreIdsStrictlyEqual @ 0x14067175C (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuDecreaseAliasTrack(__int64 a1, _QWORD *a2)
{
  __int64 *i; // r11
  __int64 v5; // r11
  __int64 *v7; // rcx
  __int64 **v8; // rax

  *a2 = 0LL;
  for ( i = (__int64 *)HalpRidAliasList; ; i = *(__int64 **)v5 )
  {
    if ( i == &HalpRidAliasList )
      return 3221226021LL;
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(i[2], a1) )
      break;
  }
  if ( _InterlockedDecrement64((volatile signed __int64 *)(v5 + 24)) <= -1 )
    __fastfail(0xEu);
  if ( !*(_QWORD *)(v5 + 24) )
  {
    v7 = *(__int64 **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v8 = *(__int64 ***)(v5 + 8), *v8 != (__int64 *)v5) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
  }
  *a2 = v5;
  return 0LL;
}
