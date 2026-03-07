__int64 __fastcall Endpoint_SetType(__int64 a1)
{
  int v1; // r8d
  __int64 result; // rax

  v1 = 3;
  switch ( *(_BYTE *)(a1 + 99) & 3 )
  {
    case 0:
      goto LABEL_10;
    case 1:
      v1 = 1;
      goto LABEL_5;
    case 2:
      v1 = 2;
      goto LABEL_5;
  }
  if ( (*(_BYTE *)(a1 + 99) & 3) != 3 )
  {
LABEL_10:
    *(_DWORD *)(a1 + 120) = 0;
    v1 = 0;
    goto LABEL_6;
  }
LABEL_5:
  *(_DWORD *)(a1 + 120) = v1;
LABEL_6:
  if ( *(char *)(a1 + 98) < 0 || !v1 )
  {
    result = (unsigned int)(v1 + 4);
    *(_DWORD *)(a1 + 120) = result;
  }
  return result;
}
