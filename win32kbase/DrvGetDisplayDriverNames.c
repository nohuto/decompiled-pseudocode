unsigned int *__fastcall DrvGetDisplayDriverNames(__int64 a1)
{
  _WORD *v1; // rax
  unsigned int *v3; // rbx
  int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // ecx
  unsigned int *v7; // r15
  unsigned int *v8; // rdi
  __int64 v9; // rax

  v1 = *(_WORD **)(a1 + 200);
  v3 = 0LL;
  v4 = 0;
  if ( v1 )
  {
    v5 = 0;
    while ( *v1 )
    {
      ++v5;
      do
      {
        ++v1;
        v4 += 2;
      }
      while ( *v1 );
      ++v1;
      v4 += 2;
    }
    v6 = v4 + 24 * v5 + 26;
    if ( v6 )
    {
      v7 = (unsigned int *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                             gpLeakTrackingAllocator,
                             0x104uLL,
                             v6,
                             0x73726447u);
      v3 = v7;
      if ( v7 )
      {
        v8 = &v7[6 * v5 + 6];
        memmove(v8, *(const void **)(a1 + 200), (unsigned int)(v4 + 2));
        *v7 = 0;
        if ( *(_WORD *)v8 )
        {
          v9 = 0LL;
          while ( 1 )
          {
            *(_QWORD *)&v7[4 * v9 + 4] = v8;
            if ( *v7 >= v5 )
              break;
            *(_QWORD *)&v7[4 * *v7 + 2] = *(_QWORD *)(a1 + 136);
            v9 = *v7 + 1;
            *v7 = v9;
            while ( *(_WORD *)v8 )
              v8 = (unsigned int *)((char *)v8 + 2);
            v8 = (unsigned int *)((char *)v8 + 2);
            if ( !*(_WORD *)v8 )
              return v3;
          }
          WdLogSingleEntry0(1LL);
        }
      }
    }
  }
  return v3;
}
