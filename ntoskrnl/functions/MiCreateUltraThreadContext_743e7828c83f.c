__int64 __fastcall MiCreateUltraThreadContext(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v8; // ebx

  v8 = 0;
  while ( !_bittest(&a3, v8) || (unsigned int)MiCreateUltraThreadContextHelper(a1 + 32LL * v8, v8, a2, a4) )
  {
    if ( ++v8 >= 4 )
      return 1LL;
  }
  MiDeleteUltraThreadContext(a1);
  return 0LL;
}
