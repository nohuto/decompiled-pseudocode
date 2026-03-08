/*
 * XREFs of PopFxNextParentRelationSafe @ 0x1402E4C58
 * Callers:
 *     PopFxNotifyPreDIrpIssue @ 0x1402BA338 (PopFxNotifyPreDIrpIssue.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x1402BA4B8 (PopFxNotifyPostDIrpCompletion.c)
 *     PopFxActivateComponentDependencies @ 0x140306004 (PopFxActivateComponentDependencies.c)
 *     PopFxDeactivateComponentDependencies @ 0x140306C70 (PopFxDeactivateComponentDependencies.c)
 *     PoFxRemoveComponentRelation @ 0x140585C70 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140586060 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentRelationsCleanup @ 0x140587474 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x140587938 (PopFxDeviceRelationsCleanup.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall PopFxNextParentRelationSafe(_QWORD **a1, __int64 a2, _QWORD *a3)
{
  char v3; // si
  _QWORD **v7; // r14
  _QWORD *v8; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v3 = 0;
  if ( a2 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(a2 + 8));
    v7 = (_QWORD **)(a2 + 56);
  }
  else
  {
    v7 = a1;
  }
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == a1 )
      break;
    v10 = v8 - 7;
    KxAcquireSpinLock(v8 - 6);
    if ( (*(_DWORD *)(v8 - 5) & 4) != 0 )
    {
      *a3 = v10;
      return 1;
    }
    KxReleaseSpinLock(v10 + 1);
    *((_DWORD *)v10 + 4) &= ~8u;
    v10[6] = 0LL;
    v11 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v12 = (_QWORD *)v8[1], (_QWORD *)*v12 != v8) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    ExFreePoolWithTag(v8 - 7, 0x4D584650u);
  }
  return v3;
}
