__int64 __fastcall IvtDismissPageFault(__int64 a1, unsigned int a2, __int16 a3, __int16 a4, int a5)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-20h]

  v9 = 0LL;
  v10 = 0LL;
  v8 = 9LL;
  WORD1(v8) = a3;
  if ( a2 == -1 )
  {
    v6 = v8;
  }
  else
  {
    v6 = v8 ^ (v8 ^ ((unsigned __int64)a2 << 32)) & 0xFFFFF00000000LL | 0x10;
    v8 = v6;
  }
  *(_QWORD *)&v9 = v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(8 * a4)) & 0xFF8 | 4;
  if ( a5 < 0 )
    v8 = v6 & 0xFFFFFFFFFFFF0FFFuLL | 0x1000;
  return IvtIommuSendCommand(a1, (unsigned __int64)&v8, 0);
}
