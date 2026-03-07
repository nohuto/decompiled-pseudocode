__int64 __fastcall MiMarkHiberNotCachedPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  char v5; // bl
  void *v6; // rsi
  ULONG_PTR v7; // r9
  __int64 v8; // rcx
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = v4;
  v5 = v4;
  if ( (v4 & 1) != 0 && ((v4 & 0x10) != 0 || (v4 & 8) != 0) )
  {
    v6 = (void *)(((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFFLL);
    if ( (unsigned int)MiIsPfn((unsigned __int64)v6) )
    {
      if ( v5 >= 0 )
      {
        if ( !a3 )
        {
          v7 = 1LL;
LABEL_13:
          PoSetHiberRange(0LL, 0x14000u, v6, v7, 0x636E6D4Du);
        }
      }
      else
      {
        v7 = 512LL;
        if ( a3 <= 1 )
          goto LABEL_13;
        v8 = (unsigned int)(a3 - 1);
        do
        {
          v7 <<= 9;
          --v8;
        }
        while ( v8 );
        if ( v7 )
          goto LABEL_13;
      }
    }
  }
  return 0LL;
}
