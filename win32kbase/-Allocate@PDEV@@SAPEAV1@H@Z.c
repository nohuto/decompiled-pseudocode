/*
 * XREFs of ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C001D690
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0181D80 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C001CBA4 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C002B4A8 (--$FreeIsolatedType@V-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00C7DB0 (-Allocate@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct PDEV *__fastcall PDEV::Allocate(__int64 a1)
{
  int v1; // esi
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  v1 = a1;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL) + 48LL) )
    return 0LL;
  v2 = (_QWORD *)NSInstrumentation::CTypeIsolation<913408,3568>::Allocate();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = v2;
  if ( !v1 && !AcquireReferenceCountedObjectHandle(1LL, v2, v2 + 440) )
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(v3);
    return 0LL;
  }
  return (struct PDEV *)v4;
}
