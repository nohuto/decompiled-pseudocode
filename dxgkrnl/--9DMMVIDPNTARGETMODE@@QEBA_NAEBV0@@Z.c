bool __fastcall DMMVIDPNTARGETMODE::operator!=(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v3; // r8d
  int v4; // ecx
  bool result; // al

  result = 1;
  if ( *(_DWORD *)(a1 + 76) == *(_DWORD *)(a2 + 76)
    && *(_DWORD *)(a1 + 80) == *(_DWORD *)(a2 + 80)
    && *(_DWORD *)(a1 + 84) == *(_DWORD *)(a2 + 84)
    && *(_DWORD *)(a1 + 88) == *(_DWORD *)(a2 + 88)
    && *(_DWORD *)(a1 + 92) == *(_DWORD *)(a2 + 92)
    && *(_DWORD *)(a1 + 96) == *(_DWORD *)(a2 + 96)
    && *(_DWORD *)(a1 + 100) == *(_DWORD *)(a2 + 100)
    && *(_DWORD *)(a1 + 104) == *(_DWORD *)(a2 + 104)
    && *(_QWORD *)(a1 + 112) == *(_QWORD *)(a2 + 112) )
  {
    v2 = *(_DWORD *)(a2 + 120);
    if ( (((unsigned __int8)v2 ^ *(_BYTE *)(a1 + 120)) & 7) == 0
      && (((unsigned __int16)v2 ^ (unsigned __int16)*(_DWORD *)(a1 + 120)) & 0x1F8) == 0 )
    {
      v3 = *(_DWORD *)(a1 + 128);
      v4 = *(_DWORD *)(a2 + 128);
      if ( (((unsigned __int8)v3 ^ *(_BYTE *)(a2 + 128)) & 3) == 0
        && (((unsigned __int8)v3 ^ (unsigned __int8)v4) & 0xFC) == 0
        && ((v3 ^ v4) & 0x3F00) == 0
        && ((v3 ^ v4) & 0xFC000) == 0
        && ((v3 ^ v4) & 0x3F00000) == 0
        && ((v3 ^ v4) & 0xFC000000) == 0 )
      {
        return 0;
      }
    }
  }
  return result;
}
