__int64 __fastcall MiCaptureSparsePages(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 i; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = a1;
  for ( i = MiMakeValidPte(a1, qword_140C69390, 1); a2; --a2 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(v4);
    if ( v10 != i )
    {
      v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10);
      MiSetPfnLink((_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), v3);
      v3 = v7;
      MiLockAndDecrementShareCount(48 * v8 - 0x220000000000LL, 0);
    }
    v4 += 8LL;
  }
  return v3;
}
