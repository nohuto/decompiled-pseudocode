/*
 * XREFs of TriageGetDriverCount @ 0x140A96CF4
 * Callers:
 *     VfTriageAddDrivers @ 0x140A94974 (VfTriageAddDrivers.c)
 *     ViTriageSameDriversFromDump @ 0x140A94C80 (ViTriageSameDriversFromDump.c)
 * Callees:
 *     TriagepVerifyDump @ 0x140A96D6C (TriagepVerifyDump.c)
 */

__int64 __fastcall TriageGetDriverCount(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax

  if ( !(unsigned __int8)TriagepVerifyDump(a1) )
    return 3221225485LL;
  v4 = a1 + (unsigned int)TriageImagePageSize;
  if ( !v4 )
    return 3221225485LL;
  *a2 = *(_DWORD *)(v4 + 52);
  return 0LL;
}
