/*
 * XREFs of LinkNodeFindByName @ 0x1C0099388
 * Callers:
 *     PcisuppGetRoutingInfo @ 0x1C0099C6C (PcisuppGetRoutingInfo.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C000B0E0 (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall LinkNodeFindByName(const char *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 *i; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  PVOID v8; // rcx
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v2 = LinkNodeListHead - 56;
  for ( i = (__int64 *)LinkNodeListHead; ; v2 = (__int64)(i - 7) )
  {
    if ( &LinkNodeListHead == i )
      return 3221226021LL;
    v6 = *(_QWORD *)(v2 + 600);
    P = 0LL;
    result = ACPIAmliBuildObjectPathname(v6, &P, 0);
    if ( (int)result < 0 )
      return result;
    v8 = P;
    if ( !strcmp((const char *)P, a1) )
      break;
    ExFreePoolWithTag(P, 0);
    i = *(__int64 **)(v2 + 56);
  }
  *a2 = v2;
  ExFreePoolWithTag(v8, 0);
  return 0LL;
}
