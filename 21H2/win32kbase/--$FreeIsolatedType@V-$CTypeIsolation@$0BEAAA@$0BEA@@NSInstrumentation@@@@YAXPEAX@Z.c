/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0090F9C
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0090DF0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0097060 (--0PATHMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0092F00 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

PVOID __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(__int64 a1)
{
  PVOID result; // rax
  __int64 v3; // rcx

  result = gpTypeIsolation;
  v3 = *((_QWORD *)gpTypeIsolation + 4);
  if ( v3 )
    return (PVOID)NSInstrumentation::CTypeIsolation<81920,320>::Free(v3, a1);
  return result;
}
