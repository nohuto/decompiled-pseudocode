__int64 __fastcall sub_140003C50(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  Pool2 = ExAllocatePool2(64LL, 32LL, 808477539LL);
  if ( Pool2 && (v5 = sub_1400A2F2C(Pool2, a2)) != 0 && (v6 = *(_QWORD *)(v5 + 16)) != 0 )
  {
    *((_QWORD *)&v8 + 1) = v5;
    *(_QWORD *)&v8 = v6;
  }
  else
  {
    v8 = 0LL;
  }
  sub_140003E14(qword_1400DF6D8, a1, &v8);
  return a1;
}
