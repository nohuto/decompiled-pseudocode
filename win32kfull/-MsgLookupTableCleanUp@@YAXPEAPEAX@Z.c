void __fastcall MsgLookupTableCleanUp(void **a1)
{
  void **v2; // rdi
  __int64 v3; // rbp
  void *v4; // rsi
  void **v5; // r14
  __int64 v6; // r15

  if ( a1 )
  {
    v2 = a1;
    v3 = 8LL;
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        v5 = (void **)*v2;
        v6 = 16LL;
        do
        {
          if ( *v5 )
            Win32FreePool(*v5);
          ++v5;
          --v6;
        }
        while ( v6 );
        Win32FreePool(v4);
      }
      ++v2;
      --v3;
    }
    while ( v3 );
    Win32FreePool(a1);
  }
}
