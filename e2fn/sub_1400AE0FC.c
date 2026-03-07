_QWORD *__fastcall sub_1400AE0FC(_QWORD *a1, unsigned int a2, int a3, __int64 *a4, __int64 *a5)
{
  __int64 Pool2; // rax
  __int64 v9; // rax
  __int64 v10; // rcx

  Pool2 = ExAllocatePool2(64LL, 32LL, a2);
  if ( Pool2 && (v9 = sub_1400AE034(Pool2, a3, a4, a5)) != 0 && (v10 = *(_QWORD *)(v9 + 16)) != 0 )
  {
    a1[1] = v9;
    *a1 = v10;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
