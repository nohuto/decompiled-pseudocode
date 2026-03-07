void __fastcall CmpSortedValueEnumStackCleanup(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 EntryAtLayerHeight; // rbx
  struct _PRIVILEGE_SET *v4; // rcx
  unsigned int j; // ebp
  unsigned int *v6; // rdx
  __int64 v7; // rcx
  struct _PRIVILEGE_SET *v8; // rcx

  for ( i = 0; i <= *(_WORD *)(a1 + 8); ++i )
  {
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, i);
    v4 = *(struct _PRIVILEGE_SET **)(EntryAtLayerHeight + 8);
    if ( v4 )
      CmSiFreeMemory(v4);
    if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
    {
      for ( j = 0; j < *(_DWORD *)(EntryAtLayerHeight + 24); ++j )
      {
        v6 = (unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 8LL * j);
        v7 = *(_QWORD *)EntryAtLayerHeight;
        if ( (*(_BYTE *)(*(_QWORD *)EntryAtLayerHeight + 140LL) & 1) != 0 )
          HvpReleaseCellFlat(v7, v6);
        else
          HvpReleaseCellPaged(v7, v6);
      }
      CmSiFreeMemory(*(PPRIVILEGE_SET *)(EntryAtLayerHeight + 16));
    }
  }
  v8 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v8 )
    CmSiFreeMemory(v8);
}
