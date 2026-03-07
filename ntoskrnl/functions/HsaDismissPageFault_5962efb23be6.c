__int64 __fastcall HsaDismissPageFault(__int64 a1, unsigned int a2, __int16 a3, unsigned __int16 a4, int a5)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  v9 = 0LL;
  LOWORD(v9) = a3;
  v6 = 0LL;
  v7 = v9;
  if ( a2 != -1 )
  {
    v6 = 4LL;
    v7 = (v9 ^ ((unsigned __int64)a2 << 32)) & 0xFFFFF00000000LL ^ v9;
  }
  *(_QWORD *)&v9 = v7 & 0xFFFFFFFFFFFFFFFLL | 0x7000000000000000LL;
  *((_QWORD *)&v9 + 1) = v6 ^ (v6 ^ ((unsigned __int64)a4 << 32)) & 0x1FF00000000LL;
  if ( a5 < 0 )
    *((_QWORD *)&v9 + 1) = (v6 ^ (v6 ^ ((unsigned __int64)a4 << 32)) & 0x1FF00000000LL) & 0xFFFF0FFFFFFFFFFFuLL | 0x100000000000LL;
  return HsaIommuSendCommand(a1, &v9, 0LL);
}
