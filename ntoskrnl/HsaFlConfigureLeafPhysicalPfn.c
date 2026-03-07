__int64 __fastcall HsaFlConfigureLeafPhysicalPfn(unsigned __int64 *a1, __int64 a2, char a3, unsigned int a4)
{
  int v4; // r8d
  unsigned int v5; // r11d
  unsigned __int64 *i; // r10

  v4 = a3 & 2;
  v5 = 0;
  for ( i = a1; v5 < a4; ++i )
  {
    if ( *i )
      break;
    *i = v4 != 0 ? 2 : 0;
    ++v5;
    *i = (v4 != 0 ? 3LL : 1LL) | ((*(unsigned __int64 *)((char *)i + a2 - (_QWORD)a1) & 0xFFFFFFFFFFLL) << 12) | 0x8000000000000004uLL;
  }
  return v5;
}
