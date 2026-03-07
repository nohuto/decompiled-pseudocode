__int64 __fastcall CmGetDevicePanelGroup(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = 0;
  if ( (*(_BYTE *)a1 & 0x7Fu) >= 2 )
  {
    return (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( (v2 & 4) != 0 )
    {
      return 256;
    }
    else if ( (v2 & 2) != 0 )
    {
      return 257;
    }
  }
  return v1;
}
