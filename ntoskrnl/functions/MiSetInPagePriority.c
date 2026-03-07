__int64 __fastcall MiSetInPagePriority(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edx
  int v5; // eax
  int v6; // ecx
  __int64 result; // rax

  if ( a3 >= 5 || a2 <= a3 )
    v4 = *(_DWORD *)(a1 + 192) & 0xFFF7FFFF;
  else
    v4 = *(_DWORD *)(a1 + 192) | 0x80000;
  *(_DWORD *)(a1 + 192) = v4;
  v5 = a3 & 7;
  v6 = v5 << 12;
  result = v4 & 0xFFFF81FF | (v5 << 9) & 0xFFFF8FFF;
  *(_DWORD *)(a1 + 192) = result | v6;
  return result;
}
