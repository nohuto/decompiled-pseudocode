/*
 * XREFs of ?OnProcessDestruction@CProcessData@DirectComposition@@SAXPEAU_W32PROCESS@@@Z @ 0x1C006BD3C
 * Callers:
 *     DCompositionProcessCallout @ 0x1C006BB30 (DCompositionProcessCallout.c)
 * Callees:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C006BD88 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CProcessData::OnProcessDestruction(struct _W32PROCESS *a1)
{
  void *v1; // rbx

  v1 = (void *)*((_QWORD *)a1 + 32);
  if ( v1 )
  {
    DirectComposition::CProcessData::~CProcessData(*((DirectComposition::CProcessData **)a1 + 32));
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *((_QWORD *)a1 + 32) = 0LL;
  }
}
