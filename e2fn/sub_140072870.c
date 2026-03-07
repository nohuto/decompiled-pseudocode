_UNKNOWN **__fastcall sub_140072870(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  void *v3; // rax
  void *v4; // r8
  void *v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-18h]

  result = &off_1400DF038;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v3 = *(void **)(a2 + 16);
    v4 = &unk_1400D44E0;
    v5 = &unk_1400D44E0;
    if ( v3 )
      v5 = v3;
    v6 = (__int64)v5;
    LOBYTE(v5) = 4;
    if ( *(_QWORD *)(a1 + 16) )
      v4 = *(void **)(a1 + 16);
    return (_UNKNOWN **)sub_1400B0338(
                          *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
                          (_DWORD)v5,
                          8,
                          10,
                          (__int64)&unk_1400D91A8,
                          (__int64)v4,
                          v6);
  }
  return result;
}
