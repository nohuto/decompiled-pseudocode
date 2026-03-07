__int64 __fastcall NormBuffer__GetLastChar(__int64 a1)
{
  unsigned __int16 *v2; // rcx
  unsigned int v4; // r11d
  __int64 v5; // r10
  unsigned int v6; // r11d
  char v7; // cl
  char v8; // al
  char v9; // cl

  v2 = (unsigned __int16 *)(*(_QWORD *)(a1 + 40) - 2LL);
  if ( *(unsigned __int16 **)(a1 + 64) == v2 )
    return *(unsigned int *)(a1 + 56);
  v4 = *v2;
  *(_QWORD *)(a1 + 64) = v2;
  *(_DWORD *)(a1 + 56) = v4;
  if ( v4 - 56321 <= 0x3FE )
  {
    v4 += (*(v2 - 1) - 55287) << 10;
    *(_DWORD *)(a1 + 56) = v4;
  }
  if ( (unsigned __int8)(Normalization__PageLookup(*(_QWORD *)(a1 + 112), v4) - 1) > 0xF9u )
  {
    v8 = 0;
    v9 = 0;
  }
  else
  {
    v7 = Normalization__TableLookup();
    v8 = v7 & 0xC0;
    v9 = v7 & 0x3F;
  }
  *(_BYTE *)(v5 + 72) = v9;
  *(_BYTE *)(v5 + 73) = v8;
  return v6;
}
