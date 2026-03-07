void __fastcall IopFreeReqAlternative(__int64 a1)
{
  __int64 i; // rsi
  _QWORD *v3; // rbx
  void *v4; // rcx
  void *v5; // rcx

  if ( a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 20); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD **)(*(_QWORD *)(a1 + 8 * i + 24) + 32LL);
      while ( v3 && !v3[2] )
      {
        v4 = (void *)v3[8];
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0);
          v3[8] = 0LL;
        }
        v5 = v3;
        v3 = (_QWORD *)v3[4];
        ExFreePoolWithTag(v5, 0);
      }
    }
  }
}
