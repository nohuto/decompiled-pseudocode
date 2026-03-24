/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01690B8
 * Callers:
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     MNAllocPopup @ 0x1C02213C8 (MNAllocPopup.c)
 *     MNFlushDestroyedPopups @ 0x1C0221530 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C0221C40 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C02224D0 (xxxMNStartMenuState.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0220F3C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
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
