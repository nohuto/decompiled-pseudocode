/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C002B4A8
 * Callers:
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C001D690 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C002B370 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A4350 (-Free@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL);
  v3 = *(_QWORD *)(result + 48);
  if ( v3 )
    return NSInstrumentation::CTypeIsolation<913408,3568>::Free(v3, a1);
  return result;
}
