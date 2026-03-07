char __fastcall ViCtxEqualExtendedState(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r14
  unsigned int v6; // esi
  unsigned int *i; // rbp

  v5 = MEMORY[0xFFFFF780000003D8] & *(_QWORD *)(a2 + 512) & *(_QWORD *)(a1 + 512);
  if ( (v5 & 1) == 0
    || a3
    || *(_WORD *)a1 == *(_WORD *)a2
    && *(_WORD *)(a1 + 2) == *(_WORD *)(a2 + 2)
    && *(_BYTE *)(a1 + 4) == *(_BYTE *)(a2 + 4)
    && !memcmp((const void *)(a1 + 32), (const void *)(a2 + 32), 0x80uLL) )
  {
    v6 = 2;
    if ( (v5 & 2) == 0
      || *(_DWORD *)(a1 + 24) == *(_DWORD *)(a2 + 24)
      && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28)
      && !memcmp((const void *)(a1 + 256), (const void *)(a2 + 256), 0xA0uLL) )
    {
      for ( i = (unsigned int *)0xFFFFF78000000404LL;
            !_bittest64(&v5, v6) || !memcmp((const void *)(*(i - 1) + a1), (const void *)(*(i - 1) + a2), *i);
            i += 2 )
      {
        if ( ++v6 >= 0x40 )
          return 1;
      }
    }
  }
  return 0;
}
