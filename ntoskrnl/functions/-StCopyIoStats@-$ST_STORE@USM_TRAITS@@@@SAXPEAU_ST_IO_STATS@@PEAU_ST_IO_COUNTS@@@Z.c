void *__fastcall ST_STORE<SM_TRAITS>::StCopyIoStats(unsigned int *a1, __int64 a2)
{
  char *v2; // rsi
  unsigned int v3; // eax
  unsigned int v5; // ecx
  __int64 v6; // rcx
  size_t v7; // rbx

  v2 = (char *)(a1 + 1);
  v3 = *(_DWORD *)(a2 + 8) + 1;
  if ( v3 > 0x40 )
    v3 = 64;
  *a1 = v3;
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 >= 0x40 )
  {
    v6 = ((_BYTE)v5 + 1) & 0x3F;
    v7 = 20LL * (unsigned int)(64 - v6);
    memmove(v2, (const void *)(a2 + 4 * ((unsigned int)v6 + 4 * v6 + 6)), v7);
    v2 += v7;
  }
  return memmove(v2, (const void *)(a2 + 24), 20LL * (((unsigned __int8)*(_DWORD *)(a2 + 8) + 1) & 0x3F));
}
