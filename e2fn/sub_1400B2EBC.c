_QWORD *__fastcall sub_1400B2EBC(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, int *a5, __int64 *a6)
{
  __int64 Pool2; // rax
  __int64 v10; // rax
  __int64 v11; // rcx

  Pool2 = ExAllocatePool2(64LL, 32LL, a2);
  if ( Pool2 && (v10 = sub_1400B2C4C(Pool2, a3, a4, a5, a6)) != 0 && (v11 = *(_QWORD *)(v10 + 16)) != 0 )
  {
    a1[1] = v10;
    *a1 = v11;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
