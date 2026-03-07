LARGE_INTEGER __fastcall StLcBucketsCopy(unsigned int *a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  LARGE_INTEGER result; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // eax
  LARGE_INTEGER v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[0].QuadPart = 0LL;
  v4 = a4;
  if ( a4 > 8 )
    v4 = 8;
  result = KeQueryPerformanceCounter(v11);
  if ( v4 )
  {
    v8 = v4;
    do
    {
      v9 = 1000000LL * *a3;
      a3 += 2;
      v10 = 10 * (((unsigned int)(v9 / v11[0].QuadPart) + 9) / 0xA);
      if ( !v10 )
        v10 = -1;
      *a1 = v10;
      result.QuadPart = *((unsigned int *)a3 - 2);
      a1[1] = result.LowPart;
      a1 += 2;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
