/*
 * XREFs of MiUnlockStealVm @ 0x1403BD420
 * Callers:
 *     MiLockStealSystemVm @ 0x14039875C (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1403BD8B8 (MiLockStealUserVm.c)
 * Callees:
 *     MiAttachThreadDone @ 0x140217944 (MiAttachThreadDone.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiUnlockSystemVa @ 0x1402EED60 (MiUnlockSystemVa.c)
 *     KeForceDetachProcess @ 0x140354F9C (KeForceDetachProcess.c)
 *     MmDetachSession @ 0x140355CB0 (MmDetachSession.c)
 */

void __fastcall MiUnlockStealVm(__int64 a1, __int64 a2)
{
  void *v3; // rdi

  MiUnlockSystemVa(a1, a2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    KeForceDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)(a1 + 72));
    MiAttachThreadDone(*(_QWORD *)(a1 + 64));
  }
  else
  {
    v3 = *(void **)(a1 + 56);
    if ( v3 )
    {
      MmDetachSession(*(_QWORD *)(a1 + 56), ($115DCDF994C6370D29323EAB0E0C9502 *)(a1 + 72));
      ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
    }
  }
}
