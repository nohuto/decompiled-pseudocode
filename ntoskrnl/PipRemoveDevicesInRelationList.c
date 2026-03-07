__int64 __fastcall PipRemoveDevicesInRelationList(char *P)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  bool v4; // si
  __int64 *v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rcx

  v1 = *((_QWORD *)P + 7);
  if ( v1 && (v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL)) != 0 )
  {
    v4 = 0;
    if ( (*(_DWORD *)(v3 + 396) & 0x10) == 0 )
      v4 = *(_QWORD *)(v3 + 16) != 0LL;
    v5 = (__int64 *)(P + 64);
    v6 = IopSortRelationListForRemove(*((_QWORD *)P + 8));
    PnpDeleteLockedDeviceNodes(*((_QWORD *)P + 7), *v5, 2, 0, *((_DWORD *)P + 21), 0, 0LL, 0LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(v3 + 300) == 784 )
        IopRemoveRelationFromList(*v5, *((_QWORD *)P + 7));
      PnpUnlinkDeviceRemovalRelations(v7, *v5);
    }
  }
  else
  {
    v6 = -1073741823;
    v5 = (__int64 *)(P + 64);
  }
  IopFreeRelationList((_QWORD *)*v5);
  ExFreePoolWithTag(P, 0);
  return v6;
}
