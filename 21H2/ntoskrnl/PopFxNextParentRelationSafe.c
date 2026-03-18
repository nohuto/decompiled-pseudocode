/*
 * XREFs of PopFxNextParentRelationSafe @ 0x1404199DC
 * Callers:
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     PopFxDeviceRelationsCleanup @ 0x140419798 (PopFxDeviceRelationsCleanup.c)
 *     PopFxNextComponentParentRelationSafe @ 0x1404199A4 (PopFxNextComponentParentRelationSafe.c)
 *     PopFxNextDeviceParentRelationSafe @ 0x1404199C0 (PopFxNextDeviceParentRelationSafe.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x140419AAC (PopFxNotifyPostDIrpCompletion.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall PopFxNextParentRelationSafe(_QWORD **a1, __int64 a2, _QWORD *a3)
{
  char v3; // si
  _QWORD **v7; // r14
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx

  v3 = 0;
  if ( a2 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 8));
    v7 = (_QWORD **)(a2 + 56);
  }
  else
  {
    v7 = a1;
  }
  while ( 1 )
  {
    v11 = *v7;
    if ( *v7 == a1 )
      break;
    v8 = v11 - 7;
    KxAcquireSpinLock(v11 - 6);
    if ( (*(_DWORD *)(v11 - 5) & 4) != 0 )
    {
      *a3 = v8;
      return 1;
    }
    KxReleaseSpinLock(v8 + 1);
    *((_DWORD *)v8 + 4) &= ~8u;
    v8[6] = 0LL;
    v9 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v10 = (_QWORD *)v11[1], (_QWORD *)*v10 != v11) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    ExFreePoolWithTag(v11 - 7, 0x4D584650u);
  }
  return v3;
}
