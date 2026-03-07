__int64 __fastcall XmJxxOp(__int64 a1)
{
  unsigned int v1; // edx
  int v3; // ecx
  __int64 result; // rax
  unsigned int v5; // ecx
  unsigned int v6; // ecx

  v1 = *(_DWORD *)(a1 + 108);
  switch ( v1 >> 1 )
  {
    case 0u:
      v3 = *(_DWORD *)(a1 + 16) >> 11;
      goto LABEL_5;
    case 1u:
      v3 = *(_DWORD *)(a1 + 16);
      goto LABEL_5;
    case 2u:
      v3 = *(_DWORD *)(a1 + 16) >> 6;
LABEL_5:
      result = 1LL;
      v5 = v3 & 1;
      goto LABEL_6;
    case 3u:
      v3 = *(_DWORD *)(a1 + 16) | (*(_DWORD *)(a1 + 16) >> 6);
      goto LABEL_5;
    case 4u:
      v6 = *(_DWORD *)(a1 + 16);
      goto LABEL_20;
    case 5u:
      v3 = *(_DWORD *)(a1 + 16) >> 2;
      goto LABEL_5;
  }
  result = (v1 >> 1) - 6;
  if ( v1 >> 1 == 6 )
  {
    v6 = *(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 4);
LABEL_20:
    v3 = v6 >> 7;
    goto LABEL_5;
  }
  if ( v1 >> 1 != 7 )
    return result;
  result = 1LL;
  v5 = (*(_DWORD *)(a1 + 16) & 0x40 | ((unsigned int)(*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 4)) >> 1) & 0x40) >> 6;
LABEL_6:
  if ( v5 != (v1 & 1) )
  {
    result = *(unsigned __int16 *)(a1 + 104);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}
