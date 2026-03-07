__int64 __fastcall CmpGetValueCountForKeyNodeStack(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // r9
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v6; // r9
  char v7; // r10
  __int16 v8; // r11
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ebx
  int v12; // esi
  int j; // eax
  int i; // eax
  _BYTE v16[96]; // [rsp+20h] [rbp-99h] BYREF
  _BYTE v17[96]; // [rsp+80h] [rbp-39h] BYREF

  memset(v16, 0, 0x58uLL);
  memset(v17, 0, 0x58uLL);
  CmpSortedValueEnumStackInitialize(v16);
  CmpValueEnumStackInitialize(v17);
  v4 = *a1;
  if ( *a1 < 0 )
    goto LABEL_23;
  do
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v4);
    v9 = EntryAtLayerHeight[2];
    if ( v9 && (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight) )
      break;
    v4 = v6 - 1;
  }
  while ( v4 >= 0 );
  if ( !v8 )
  {
LABEL_23:
    *a2 = 0;
    goto LABEL_24;
  }
  if ( !v7 )
  {
    *a2 = *(_DWORD *)(*(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, 0LL) + 16) + 36LL);
LABEL_24:
    v11 = 0;
    goto LABEL_25;
  }
  if ( v8 <= 1 )
  {
LABEL_17:
    v11 = CmpValueEnumStackStartFromKeyNodeStack(v17, a1);
    if ( v11 >= 0 )
    {
      v12 = 0;
      for ( i = CmpValueEnumStackAdvance(v17); ; i = CmpValueEnumStackAdvance(v17) )
      {
        v11 = i;
        if ( i == -2147483622 )
          break;
        if ( i < 0 )
          goto LABEL_25;
        ++v12;
      }
      goto LABEL_14;
    }
    goto LABEL_25;
  }
  v10 = CmpSortedValueEnumStackStartFromKeyNodeStack(v16, a1);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = 0;
    for ( j = CmpSortedValueEnumStackAdvance(v16); ; j = CmpSortedValueEnumStackAdvance(v16) )
    {
      v11 = j;
      if ( j == -2147483622 )
        break;
      if ( j < 0 )
        goto LABEL_25;
      ++v12;
    }
LABEL_14:
    *a2 = v12;
    goto LABEL_24;
  }
  if ( v10 == -1073741670 )
  {
    CmpSortedValueEnumStackCleanup(v16);
    CmpSortedValueEnumStackInitialize(v16);
    goto LABEL_17;
  }
LABEL_25:
  CmpValueEnumStackCleanup(v17);
  CmpSortedValueEnumStackCleanup(v16);
  return (unsigned int)v11;
}
