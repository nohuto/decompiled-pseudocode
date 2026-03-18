/*
 * XREFs of ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00C11F0
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_27fa0b678d056c4f62e221b84b7517f7_::operator() @ 0x1C00D97C0 (_lambda_27fa0b678d056c4f62e221b84b7517f7_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C016A304 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00D9738 (--$FreeIsolatedType@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0179828 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall PDEV::Free(struct PDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)a1 + 440);
  if ( v3 )
    ReleaseReferenceCountedObjectHandle(1LL, v3, a3);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(a1);
}
