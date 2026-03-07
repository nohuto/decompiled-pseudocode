__int64 __fastcall UpgradeDispModeFlags(__int64 a1, __int64 a2)
{
  int v3; // ecx
  unsigned int v4; // ecx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 36);
  if ( ((*(_BYTE *)(a2 + 36) ^ (unsigned __int8)v3) & 1) != 0 )
    *(_DWORD *)(a1 + 36) = v3 | 1;
  v4 = *(_DWORD *)(a1 + 40);
  if ( ((*(_BYTE *)(a2 + 40) ^ *(_BYTE *)(a1 + 40)) & 0x20) != 0 )
  {
    v4 |= 0x20u;
    *(_DWORD *)(a1 + 40) = v4;
  }
  if ( ((*(_BYTE *)(a2 + 40) ^ (unsigned __int8)v4) & 0x40) != 0 )
  {
    v4 |= 0x40u;
    *(_DWORD *)(a1 + 40) = v4;
  }
  if ( ((*(_BYTE *)(a2 + 40) ^ v4) & 0x80u) != 0 )
  {
    v4 |= 0x80u;
    *(_DWORD *)(a1 + 40) = v4;
  }
  result = *(_DWORD *)(a2 + 40) ^ v4;
  if ( ((*(_WORD *)(a2 + 40) ^ (unsigned __int16)v4) & 0x100) != 0 )
    *(_DWORD *)(a1 + 40) = v4 & 0xFFFFFEFF;
  return result;
}
