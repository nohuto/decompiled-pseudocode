/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0228780
 * Callers:
 *     xxxEndScroll @ 0x1C022A170 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C022A46C (xxxSBTrackInit.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0228E64 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

unsigned __int8 **__fastcall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(__int64 a1)
{
  unsigned __int8 **result; // rax
  unsigned __int8 *v3; // rcx

  result = gpUserTypeIsolation;
  v3 = gpUserTypeIsolation[5];
  if ( v3 )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<28672,112>::Free(v3, a1);
  return result;
}
