void __fastcall IvtMarkHiberRegions(void *a1, __int64 a2)
{
  void **v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *i; // rbx

  if ( a1 )
  {
    HalpIommuExtMarkHiberMemory(a1, (void *)(a2 + 208), 8u);
  }
  else
  {
    v3 = *(void ***)(a2 + 32);
    if ( v3 )
    {
      v4 = 512LL;
      do
      {
        if ( *v3 )
          HalpIommuExtMarkHiberMemory(0LL, *v3, 0x1000u);
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    if ( *(_BYTE *)(a2 + 316) )
    {
      v5 = (_QWORD *)(a2 + 88);
      for ( i = *(_QWORD **)(a2 + 88); i != v5; i = (_QWORD *)*i )
        IvtMarkHiberMemoryScalableModePasidTables((__int64)a1, (__int64)(i - 2));
    }
  }
}
