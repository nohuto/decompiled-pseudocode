__int64 __fastcall sub_140002D28(_QWORD *a1)
{
  __int64 Pool2; // rcx
  __int64 result; // rax

  Pool2 = ExAllocatePool2(64LL, 376LL, 1651076710LL);
  result = 0LL;
  if ( Pool2 )
    result = sub_1400023F8(Pool2, a1);
  qword_1400DF6D0 = result;
  return result;
}
