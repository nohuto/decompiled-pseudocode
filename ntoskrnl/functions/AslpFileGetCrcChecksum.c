__int64 __fastcall AslpFileGetCrcChecksum(_DWORD *a1, __int64 a2)
{
  int v3; // ecx
  unsigned int v4; // r8d
  _BYTE *v5; // rdx
  __int64 v6; // r11

  v3 = 0;
  if ( *(_QWORD *)(a2 + 16) >= 0x2000uLL )
  {
    v3 = AslComputeCrc32(0, *(_BYTE **)(a2 + 24), 0x1000u);
    v5 = (_BYTE *)(v6 - 4096);
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 32);
    v5 = *(_BYTE **)(a2 + 24);
  }
  *a1 = AslComputeCrc32(v3, v5, v4);
  return 0LL;
}
