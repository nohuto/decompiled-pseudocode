_QWORD *__fastcall sub_1400A5754(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 Pool2; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  Pool2 = ExAllocatePool2(64LL, 32LL, a2);
  if ( Pool2 && (v6 = sub_1400A4D60(Pool2, a3)) != 0 && (v7 = *(_QWORD *)(v6 + 16)) != 0 )
  {
    a1[1] = v6;
    *a1 = v7;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
