__int64 __fastcall MiMarkNonPagedHiberPhasePte(__int64 a1, unsigned __int64 a2, int a3)
{
  char v4; // bl
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = v11;
  if ( (v11 & 1) != 0 )
  {
    v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFFLL;
    if ( (unsigned int)MiIsPfn(v5) )
    {
      if ( v4 >= 0 )
      {
        if ( !a3 )
        {
          v8 = 48 * v5 - 0x220000000000LL;
          if ( *(_WORD *)(v8 + 32) > 1u
            || !(unsigned int)MiIsPfnTradable((_DWORD *)v8)
            || (*(_BYTE *)(v9 + 35) & 8) != 0 )
          {
            v6 = 1LL;
LABEL_14:
            PoSetHiberRange(0LL, 0x14000u, (PVOID)v5, v6, 0x6C64704Eu);
          }
        }
      }
      else
      {
        v6 = 512LL;
        if ( a3 <= 1 )
          goto LABEL_14;
        v7 = (unsigned int)(a3 - 1);
        do
        {
          v6 <<= 9;
          --v7;
        }
        while ( v7 );
        if ( v6 )
          goto LABEL_14;
      }
    }
  }
  return 0LL;
}
