_QWORD *__fastcall sub_1400A3D90(
        _QWORD *a1,
        unsigned int a2,
        int *a3,
        __int64 *a4,
        _QWORD *a5,
        int *a6,
        int *a7,
        int *a8)
{
  __int64 Pool2; // rax
  __int64 v12; // rax
  __int64 v13; // rcx

  Pool2 = ExAllocatePool2(64LL, 32LL, a2);
  if ( Pool2 && (v12 = sub_1400A3BA8(Pool2, a3, a4, a5, a6, a7, a8)) != 0 && (v13 = *(_QWORD *)(v12 + 16)) != 0 )
  {
    a1[1] = v12;
    *a1 = v13;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
