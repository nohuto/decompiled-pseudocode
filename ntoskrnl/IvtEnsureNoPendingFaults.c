__int64 __fastcall IvtEnsureNoPendingFaults(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v2; // r11
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r8
  int v12; // edx

  v2 = a1[20];
  v3 = a1[18];
  v4 = a1[1];
  v5 = v2 >> 5;
  v6 = *(_QWORD *)(v4 + 192);
  v7 = v6 >> 5;
  v8 = (v6 >> 5) & 0x3FFF;
  v9 = (*(_QWORD *)(v4 + 200) >> 5) & 0x3FFFLL;
  if ( v8 == v9 )
    return 0LL;
  v10 = a2;
  while ( 1 )
  {
    v11 = v3 + 32 * v8;
    if ( (HIDWORD(*(_QWORD *)v11) & 0xFFFFF) == v10 && (*(_BYTE *)(v11 + 8) & 3) != 0 )
      break;
    v12 = 0;
    if ( (v7 & 0x3FFF) + 1 != (_DWORD)v5 )
      v12 = (v7 & 0x3FFF) + 1;
    v6 ^= ((unsigned int)v6 ^ (32 * v12)) & 0x7FFE0;
    v7 = v6 >> 5;
    v8 = (v6 >> 5) & 0x3FFF;
    if ( v8 == v9 )
      return 0LL;
  }
  return v11;
}
