__int64 __fastcall HsaEnsureNoPendingFaults(__int64 *a1, int a2)
{
  unsigned __int64 v2; // r11
  __int64 v3; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  unsigned __int64 v11; // r10
  __int64 v12; // r8

  v2 = a1[14];
  v3 = a1[12];
  v5 = *a1;
  v6 = v2 >> 4;
  v7 = *(_QWORD *)(v5 + 8240);
  v8 = (*(_QWORD *)(v5 + 8248) >> 4) & 0x7FFFLL;
  while ( 1 )
  {
    v11 = v7 >> 4;
    v12 = (v7 >> 4) & 0x7FFF;
    if ( v12 == v8 )
      return 0LL;
    v9 = v3 + 16 * v12;
    if ( *(_QWORD *)v9 >> 60 == 1
      && *(unsigned __int16 *)(v9 + 2) == a2
      && (*(_QWORD *)v9 & 0x24020000000000LL) != 0x20000000000LL )
    {
      break;
    }
    v10 = 0;
    if ( (v11 & 0x7FFF) + 1 != (_DWORD)v6 )
      v10 = (v11 & 0x7FFF) + 1;
    v7 ^= ((unsigned int)v7 ^ (16 * v10)) & 0x7FFF0;
  }
  return v9;
}
