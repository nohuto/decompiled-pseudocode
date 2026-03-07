__int64 __fastcall MiZeroPhysicalPage(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // r9

  v6 = 48 * a2 - 0x220000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = v7;
  if ( (a3 & 1) == 0 )
  {
    v9 = MiPfnBestZeroAttribute(v6, a4, a3);
    v8 = v9;
    if ( v9 != v7 )
      MiChangePageAttribute(v6, v9, 0LL, v10);
  }
  result = MiFillPhysicalPages(a2);
  if ( v8 != v7 && v8 != a4 )
    return MiChangePageAttribute(v6, v7, 0LL, v12);
  return result;
}
