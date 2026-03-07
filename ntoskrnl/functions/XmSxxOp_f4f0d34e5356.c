_WORD *__fastcall XmSxxOp(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edx
  int v10; // edx

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 108) >> 1;
  if ( !v2 )
  {
    v10 = *(_DWORD *)(a1 + 16) >> 11;
    goto LABEL_18;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v10 = *(_DWORD *)(a1 + 16);
    goto LABEL_18;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v10 = *(_DWORD *)(a1 + 16) >> 6;
    goto LABEL_18;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v10 = *(_DWORD *)(a1 + 16) | (*(_DWORD *)(a1 + 16) >> 6);
    goto LABEL_18;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *(_DWORD *)(a1 + 16);
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = *(_DWORD *)(a1 + 16) >> 2;
    goto LABEL_18;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 4);
LABEL_11:
    v10 = v9 >> 7;
LABEL_18:
    v1 = v10 & 1;
    return XmStoreResult(a1, *(_DWORD *)(a1 + 108) & 1 ^ v1);
  }
  if ( v8 == 1 )
    v1 = (*(_DWORD *)(a1 + 16) & 0x40 | ((unsigned int)(*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 4)) >> 1) & 0x40) >> 6;
  return XmStoreResult(a1, *(_DWORD *)(a1 + 108) & 1 ^ v1);
}
