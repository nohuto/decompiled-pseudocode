/*
 * XREFs of ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x1C0055410
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C00551AC (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 */

void __fastcall FxDisposeList::_WorkItemThunk(FxDisposeList *Parameter, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(Parameter, &irql, a3);
  FxDisposeList::DrainListLocked(Parameter, &irql);
  FxNonPagedObject::Unlock(Parameter, irql, v4);
}
