__int64 __fastcall CmpGetSubKeyCountForKeyNodeStack(__int16 *a1, int *a2)
{
  __int16 i; // dx
  __int16 v5; // dx
  __int64 EntryAtLayerHeight; // rax
  int j; // edi
  int v8; // ebx
  int v10; // eax
  _BYTE v11[352]; // [rsp+20h] [rbp-188h] BYREF

  memset(v11, 0, sizeof(v11));
  CmpKeyEnumStackInitialize(v11);
  for ( i = *a1; ; i = v5 - 1 )
  {
    if ( i <= 0 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, 0);
      j = *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 20LL)
        + *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 24LL);
LABEL_6:
      *a2 = j;
      v8 = 0;
      goto LABEL_7;
    }
    if ( *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, i) + 16) )
      break;
  }
  v8 = CmpKeyEnumStackStartFromKeyNodeStack(v11, a1, 0LL);
  if ( v8 >= 0 )
  {
    for ( j = 0; ; ++j )
    {
      v10 = CmpKeyEnumStackAdvance(v11);
      v8 = v10;
      if ( v10 == -2147483622 )
        break;
      if ( v10 < 0 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  CmpKeyEnumStackCleanup(v11);
  return (unsigned int)v8;
}
