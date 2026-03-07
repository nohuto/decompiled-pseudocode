unsigned __int64 __fastcall HalpIumGetVariable(_WORD *Src, __int128 *a2, _DWORD *a3, size_t *a4, void *a5)
{
  __int64 v10; // rax
  size_t v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 *Pool2; // rax
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  size_t v21; // r8

  if ( !qword_140C621F0 )
    return 0x8000000000000003uLL;
  v10 = -1LL;
  do
    ++v10;
  while ( Src[v10] );
  v11 = 2 * v10 + 2;
  v12 = 2 * v10 + 58;
  if ( v12 >= 0x1FA000 )
    return 0x8000000000000004uLL;
  v13 = *a4;
  if ( *a4 >= 2072576 - v12 )
    v13 = 2072576 - v12;
  *a4 = v13;
  v14 = (v13 + 2 * v10 + 4153) & 0xFFFFFFFFFFFFF000uLL;
  Pool2 = (__int64 *)ExAllocatePool2(64LL, v14, 2001103699LL);
  v16 = Pool2;
  if ( !Pool2 )
    return 0x8000000000000009uLL;
  *Pool2 = (__int64)(Pool2 + 7);
  memmove(Pool2 + 7, Src, v11);
  v17 = *v16;
  v16[1] = v11;
  v18 = *a2;
  v16[6] = v11 + v17;
  *((_OWORD *)v16 + 1) = v18;
  v16[5] = *a4;
  v19 = ((__int64 (__fastcall *)(__int64, __int64 *, unsigned __int64))qword_140C621F0)(3LL, v16, v14);
  v20 = v19;
  if ( a3 )
    *a3 = *((_DWORD *)v16 + 8);
  v21 = v16[5];
  *a4 = v21;
  if ( v19 )
  {
    if ( v19 == 0x8000000000000005uLL && v14 == 2072576 )
      v20 = 0x8000000000000004uLL;
  }
  else
  {
    memmove(a5, (const void *)v16[6], v21);
  }
  ExFreePoolWithTag(v16, 0);
  return v20;
}
