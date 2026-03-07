_QWORD *__fastcall sub_1400AF20C(_QWORD *a1, unsigned int a2, __int64 a3, __int64 *a4, __int64 *a5, char *a6, char *a7)
{
  __int64 Pool2; // rax
  __int64 v11; // rax
  __int64 v12; // rcx

  Pool2 = ExAllocatePool2(64LL, 32LL, a2);
  if ( Pool2 && (v11 = sub_1400AF020(Pool2, a3, a4, a5, a6, a7)) != 0 && (v12 = *(_QWORD *)(v11 + 16)) != 0 )
  {
    a1[1] = v11;
    *a1 = v12;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
