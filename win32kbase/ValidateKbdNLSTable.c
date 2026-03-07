char __fastcall ValidateKbdNLSTable(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // r8d
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned int v5; // ecx
  _BYTE *v6; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 )
    return 1;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( !v2 )
    return 1;
LABEL_3:
  v4 = v1 + 132LL * v3;
  if ( *(_BYTE *)(v4 + 1) < 3u )
  {
    v5 = 0;
    v6 = (_BYTE *)(v4 + 68);
    while ( *(v6 - 64) < 0x10u && *v6 < 0x10u )
    {
      ++v5;
      v6 += 8;
      if ( v5 >= 8 )
      {
        if ( ++v3 < v2 )
          goto LABEL_3;
        return 1;
      }
    }
  }
  return 0;
}
