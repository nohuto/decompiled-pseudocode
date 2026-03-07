void __fastcall IvtMarkHiberMemoryScalableModePasidTables(__int64 a1, __int64 a2)
{
  void **v3; // rdi
  __int64 v4; // rsi
  void *v5; // rdx

  if ( ((*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF) != 0 )
  {
    v3 = (void **)(a2 + 56);
    v4 = (*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF;
    do
    {
      if ( *v3 )
        HalpIommuExtMarkHiberMemory(0LL, *v3, 0x1000u);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  v5 = *(void **)(a2 + 48);
  if ( v5 )
    HalpIommuExtMarkHiberMemory(0LL, v5, (8 * ((*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF) + 4095) & 0xFFFFF000);
  HalpIommuExtMarkHiberMemory(0LL, (void *)a2, 0x40u);
}
