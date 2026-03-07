__int64 __fastcall PspCaptureCreateInfo(char a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rcx
  char v6; // dl
  char v7; // cl

  v4 = 0;
  if ( a1 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v5 = a2;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 87) = *(_BYTE *)(v5 + 87);
  }
  if ( *(_DWORD *)(a2 + 8) || *(_QWORD *)a2 != 88LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = (32 * *(_BYTE *)(a2 + 16)) ^ (*(_BYTE *)(a3 + 8) ^ (32 * *(_BYTE *)(a2 + 16))) & 0x7F;
    *(_BYTE *)(a3 + 8) = v6;
    *(_BYTE *)(a3 + 9) ^= (*(_BYTE *)(a3 + 9) ^ (*(_BYTE *)(a2 + 16) >> 3)) & 1;
    *(_DWORD *)(a3 + 164) = *(_DWORD *)(a2 + 20);
    v7 = v6 ^ (v6 ^ (2 * *(_BYTE *)(a2 + 16))) & 2;
    *(_BYTE *)(a3 + 8) = v7;
    *(_BYTE *)(a3 + 8) = v7 ^ (v7 ^ (8 * *(_BYTE *)(a2 + 16))) & 0x10;
    *(_WORD *)(a3 + 10) = *(_WORD *)(a2 + 18);
    *(_QWORD *)(a3 + 40) = a2;
  }
  return v4;
}
