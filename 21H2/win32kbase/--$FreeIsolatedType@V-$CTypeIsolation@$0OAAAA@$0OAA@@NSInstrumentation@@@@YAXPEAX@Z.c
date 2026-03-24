/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00C8548
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C007BDB8 (MultiUserNtGreCleanup.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C007F510 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00B02B0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00C8CBC (-Free@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

unsigned __int8 **__fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<917504,3584>>(__int64 a1)
{
  unsigned __int8 **result; // rax
  unsigned __int8 *v3; // rcx

  result = gpTypeIsolation;
  v3 = gpTypeIsolation[6];
  if ( v3 )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<917504,3584>::Free(v3, a1);
  return result;
}
