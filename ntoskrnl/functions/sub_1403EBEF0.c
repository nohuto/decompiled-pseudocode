char __fastcall sub_1403EBEF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r8
  _QWORD *v10; // rax
  PMDL v11; // r9
  unsigned __int128 v12; // rax
  int v13; // ecx
  ULONG *p_ByteCount; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  ULONG *v17; // r10
  _DWORD *v18; // rbx
  PVOID v19; // rax
  char result; // al

  v4 = a2 ^ __ROL8__(a2, 17);
  v7 = (0x7010008004002001LL * v4) ^ (((unsigned __int64)v4 * (unsigned __int128)0x7010008004002001uLL) >> 64);
  v8 = 4;
  v9 = v7;
  v10 = (_QWORD *)(a2 + 24);
  do
  {
    *v10-- ^= v9;
    v9 = __ROL8__(v9, v8--);
  }
  while ( v8 );
  v11 = *(PMDL *)a2;
  if ( ((unsigned __int8)v7 & 0xFu) < 7 )
  {
    v12 = ((unsigned __int64)v11 ^ __ROL8__(v11, 17)) * (unsigned __int128)0x7010008004002001uLL;
    v13 = 6;
    *((_QWORD *)&v12 + 1) ^= v12;
    p_ByteCount = &v11->ByteCount;
    v15 = *((_QWORD *)&v12 + 1) + v9;
    do
    {
      *(_QWORD *)p_ByteCount ^= v15;
      p_ByteCount -= 2;
      v15 = __ROL8__(v15, v13--);
    }
    while ( v13 );
    v16 = ((unsigned __int64)(unsigned int)v11->Size - 48) >> 3;
    if ( (_DWORD)v16 )
    {
      v17 = &v11->ByteCount + 2 * (int)v16;
      do
      {
        *(_QWORD *)v17 ^= v15;
        v15 = __ROL8__(v15, v16);
        v17 -= 2;
        LODWORD(v16) = v16 - 1;
      }
      while ( (_DWORD)v16 );
    }
  }
  v18 = *(_DWORD **)a2;
  v19 = MmMapLockedPagesWithReservedMapping(*(PVOID *)(a2 + 8), *(_DWORD *)(a2 + 16), *(PMDL *)a2, MmCached);
  result = MmSetPageProtection(
             (unsigned __int64)v19,
             (v18[10] + 4095 + ((v18[8] + v18[11]) & 0xFFF)) & 0xFFFFF000,
             0x40u);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 32) = a3;
  return result;
}
