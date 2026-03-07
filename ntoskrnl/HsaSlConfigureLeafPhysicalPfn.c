__int64 __fastcall HsaSlConfigureLeafPhysicalPfn(unsigned __int64 *a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // edi
  int v6; // r8d
  unsigned __int64 *v7; // r10
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx

  v4 = 0;
  v5 = a3 & 1;
  v6 = a3 & 2;
  v7 = a1;
  if ( a4 )
  {
    v8 = a2 - (_QWORD)a1;
    do
    {
      if ( *v7 )
        break;
      ++v4;
      v9 = ((unsigned __int64)v5 << 61) | -(__int64)(v6 != 0) & 0x4000000000000000LL;
      *v7 = v9;
      *v7 = v9 | ((*(unsigned __int64 *)((char *)v7 + v8) & 0xFFFFFFFFFFLL) << 12) | 1;
      ++v7;
    }
    while ( v4 < a4 );
  }
  return v4;
}
