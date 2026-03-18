/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00D9738
 * Callers:
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C008B640 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00C11F0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00D9EB8 (-Free@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

PVOID __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(__int64 a1)
{
  PVOID result; // rax
  __int64 v3; // rcx

  result = gpTypeIsolation;
  v3 = *((_QWORD *)gpTypeIsolation + 6);
  if ( v3 )
    return (PVOID)NSInstrumentation::CTypeIsolation<909312,3552>::Free(v3, a1);
  return result;
}
