__int64 __fastcall GUIDToSCSINameString(_BYTE *a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v5; // r10
  _BYTE *v6; // r11
  unsigned int v8; // r9d
  __int64 v9; // rbx
  int v10; // r9d
  __int64 v11; // r11

  v5 = a2;
  v6 = a1;
  if ( a4 < 2 * a3 + 4 )
    return 3238002694LL;
  v8 = 4;
  *a2 = dword_1C0030050;
  if ( a3 )
  {
    v9 = a3;
    do
    {
      LOBYTE(a1) = *v6;
      HexFromUchar(a1, (char *)v5 + v8, a4 - v8);
      v8 = v10 + 2;
      v6 = (_BYTE *)(v11 + 1);
      --v9;
    }
    while ( v9 );
  }
  return 0LL;
}
