__int64 __fastcall IopSortRelationListForRemove(__int64 a1)
{
  unsigned int *v2; // r11
  int v3; // r14d
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  bool v8; // r12
  __int64 v9; // r11
  __int64 *ProviderList; // r15
  __int64 *i; // rsi
  int v12; // ebx

  if ( *(_BYTE *)(a1 + 8) )
  {
    return 0;
  }
  else
  {
    PnpAcquireDependencyRelationsLock(0);
    v2 = *(unsigned int **)a1;
    v3 = 0;
    v4 = 0LL;
    if ( !**(_DWORD **)a1 )
      goto LABEL_18;
    do
    {
      v5 = *(_QWORD *)&v2[6 * v4 + 4];
      if ( v5 )
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      else
        v6 = 0LL;
      v7 = *(_QWORD *)(v6 + 16);
      v8 = (v7 || (v7 = *(_QWORD *)(v6 + 648) & 0xFFFFFFFFFFFFFFFEuLL) != 0)
        && PipIsDeviceInDeviceObjectList(v2, *(_QWORD *)(v7 + 32), 0LL);
      ProviderList = PiGetProviderList(v5);
      for ( i = (__int64 *)*ProviderList; i != ProviderList; i = (__int64 *)*i )
        PiEnumerateProviderListEntry((__int64)i);
      if ( v8 )
      {
        *(_DWORD *)(v9 + 24 * v4 + 32) &= ~4u;
      }
      else
      {
        *(_DWORD *)(v9 + 24 * v4 + 32) |= 4u;
        ++v3;
      }
      v2 = *(unsigned int **)a1;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < **(_DWORD **)a1 );
    if ( v3 )
    {
      v12 = PipSortDeviceObjectList(a1);
      if ( v12 >= 0 )
        *(_BYTE *)(a1 + 8) = 1;
    }
    else
    {
LABEL_18:
      v12 = -1073741823;
    }
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
  }
  return (unsigned int)v12;
}
