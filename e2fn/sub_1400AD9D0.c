_QWORD *__fastcall sub_1400AD9D0(_QWORD *a1, int a2, __int64 (__fastcall ***a3)(PVOID P), __int64 a4, __int64 a5)
{
  __int64 Pool2; // rax
  __int64 v10; // rax
  __int64 v11; // rcx

  Pool2 = ExAllocatePool2(64LL, 32LL, 1936749682LL);
  if ( Pool2 && (v10 = sub_1400AD804(Pool2, a2, a3, a4, a5)) != 0 && (v11 = *(_QWORD *)(v10 + 16)) != 0 )
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
