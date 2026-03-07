__int64 __fastcall BuildFirmwareActivateCommand(__int64 a1, unsigned __int8 a2, char a3, char a4, char a5)
{
  int v5; // eax
  int v6; // eax
  __int64 result; // rax

  v5 = (*(_DWORD *)(a1 + 40) ^ a2) & 7;
  *(_BYTE *)a1 = 16;
  v6 = *(_DWORD *)(a1 + 40) ^ v5;
  if ( a5 )
  {
    result = v6 & 0xFFFFFFE7;
  }
  else if ( a4 )
  {
    result = v6 | 0x18u;
  }
  else if ( a3 )
  {
    result = v6 & 0xFFFFFFE7 | 0x10;
  }
  else
  {
    result = v6 & 0xFFFFFFE7 | 8;
  }
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
