/*
 * XREFs of PiQueryPowerDependencyRelations @ 0x14086CD28
 * Callers:
 *     PiQueryPowerRelations @ 0x14086CB24 (PiQueryPowerRelations.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PiGetProviderList @ 0x1406CB884 (PiGetProviderList.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PiEnumerateProviderListEntry @ 0x140838DE8 (PiEnumerateProviderListEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryPowerDependencyRelations(__int64 a1)
{
  __int64 *ProviderList; // r14
  _QWORD *v3; // rsi
  _QWORD *v4; // r15
  __int64 *j; // rbx
  _QWORD *v7; // r11
  __int64 *i; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  PnpAcquireDependencyRelationsLock(0);
  ProviderList = PiGetProviderList(*(_QWORD *)(a1 + 32));
  v3 = (_QWORD *)(a1 + 192);
  v4 = *(_QWORD **)(a1 + 192);
  while ( v4 != v3 )
  {
    v7 = v4;
    v4 = (_QWORD *)*v4;
    if ( *((_BYTE *)v7 + 48) )
    {
      for ( i = (__int64 *)*ProviderList; i != ProviderList; i = (__int64 *)*i )
        PiEnumerateProviderListEntry((__int64)i);
      v9 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7
        || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7)
        || (*v10 = v9, *(_QWORD *)(v9 + 8) = v10, v11 = v7[3], *(_QWORD **)(v11 + 8) != v7 + 3)
        || (v12 = (_QWORD *)v7[4], (_QWORD *)*v12 != v7 + 3) )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      ExFreePoolWithTag(v7, 0x72775044u);
    }
  }
  for ( j = (__int64 *)*ProviderList; j != ProviderList; j = (__int64 *)*j )
    PiEnumerateProviderListEntry((__int64)j);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return 0LL;
}
