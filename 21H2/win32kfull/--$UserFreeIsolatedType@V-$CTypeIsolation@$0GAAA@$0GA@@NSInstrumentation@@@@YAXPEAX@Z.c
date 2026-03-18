/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C021AF28
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     MNAllocPopup @ 0x1C021BAC0 (MNAllocPopup.c)
 *     MNFlushDestroyedPopups @ 0x1C021BC20 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C021BF30 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C021C5F4 (xxxMNStartMenuState.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C021B608 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

unsigned __int8 **__fastcall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(__int64 a1)
{
  unsigned __int8 **result; // rax
  unsigned __int8 *v3; // rcx

  result = gpUserTypeIsolation;
  v3 = gpUserTypeIsolation[4];
  if ( v3 )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<24576,96>::Free(v3, a1);
  return result;
}
