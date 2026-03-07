void __fastcall Crashdump_Register_PrepareForHibernate(__int64 a1)
{
  unsigned int v1; // edi
  __int64 **v3; // rsi

  v1 = 0;
  if ( *(_DWORD *)(a1 + 28) )
  {
    PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(a1 + 40), *(unsigned int *)(a1 + 48), 0x43434858u);
    v3 = *(__int64 ***)(a1 + 56);
    if ( *(_DWORD *)(a1 + 28) )
    {
      do
      {
        PoSetHiberRange(0LL, 0x10000u, v3[2], *((unsigned int *)v3 + 10), 0x43434858u);
        v3 = (__int64 **)*v3;
        ++v1;
      }
      while ( v1 < *(_DWORD *)(a1 + 28) );
    }
  }
}
