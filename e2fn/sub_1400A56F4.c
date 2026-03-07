_QWORD *__fastcall sub_1400A56F4(_QWORD *a1, unsigned int a2)
{
  __int64 Pool2; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  Pool2 = ExAllocatePool2(64LL, 32LL, a2);
  if ( Pool2 && (v4 = sub_1400A4C10(Pool2)) != 0 && (v5 = *(_QWORD *)(v4 + 16)) != 0 )
  {
    a1[1] = v4;
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
