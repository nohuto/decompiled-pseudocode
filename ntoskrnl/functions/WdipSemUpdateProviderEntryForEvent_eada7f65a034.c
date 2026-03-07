__int64 __fastcall WdipSemUpdateProviderEntryForEvent(__int64 a1, char a2)
{
  __int64 v2; // r11
  unsigned int v4; // r8d
  unsigned int v6; // edx
  __int64 v7; // r9
  __int64 result; // rax
  unsigned int v9; // edx
  unsigned int v10; // r8d
  int v11; // ecx

  v2 = *(_QWORD *)(a1 + 40);
  v4 = *(unsigned __int8 *)(a1 + 18);
  v6 = *(unsigned __int8 *)(v2 + 16);
  v7 = *(_QWORD *)(a1 + 24) | *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 32) |= *(_DWORD *)(a1 + 36);
  result = v4;
  ++*(_DWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 24) = v7;
  if ( (unsigned __int8)v4 <= (unsigned __int8)v6 )
    result = v6;
  *(_BYTE *)(v2 + 36) |= 1u;
  *(_BYTE *)(v2 + 16) = result;
  if ( a2 )
  {
    v9 = *(unsigned __int8 *)(a1 + 18);
    v10 = *(unsigned __int8 *)(v2 + 48);
    v11 = *(_DWORD *)(a1 + 36) | *(_DWORD *)(v2 + 64);
    *(_QWORD *)(v2 + 56) |= *(_QWORD *)(a1 + 24);
    result = v9;
    *(_DWORD *)(v2 + 64) = v11;
    if ( (unsigned __int8)v9 <= (unsigned __int8)v10 )
      result = v10;
    *(_BYTE *)(v2 + 68) |= 1u;
    *(_BYTE *)(v2 + 48) = result;
  }
  return result;
}
