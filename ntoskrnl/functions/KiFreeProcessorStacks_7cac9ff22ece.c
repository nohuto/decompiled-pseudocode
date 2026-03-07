signed __int64 __fastcall KiFreeProcessorStacks(_QWORD *a1)
{
  ULONG_PTR v2; // rcx
  signed __int64 result; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // r9

  v2 = a1[8];
  if ( v2 )
    result = MmDeleteKernelStackEx(v2, 0, 0LL);
  if ( a1[9] )
    result = MmFreeIsrStack();
  if ( a1[10] )
    result = MmFreeIsrStack();
  v4 = 5LL;
  v5 = a1 + 11;
  v6 = 5LL;
  do
  {
    if ( *v5 )
      result = MmFreeIsrStack();
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = a1[16];
  if ( v7 )
    result = KiDeleteKernelShadowStack(a1[17], 4LL, 0LL, v7 + 8);
  v8 = a1[28];
  if ( v8 )
    result = MmFreeIndependentPages(v8, 4096LL);
  v9 = a1 + 23;
  do
  {
    v10 = *(v9 - 5);
    if ( v10 )
      result = KiDeleteKernelShadowStack(*v9, 3LL, 0LL, v10);
    ++v9;
    --v4;
  }
  while ( v4 );
  return result;
}
