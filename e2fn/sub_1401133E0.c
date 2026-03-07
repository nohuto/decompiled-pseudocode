_UNKNOWN **__fastcall sub_1401133E0(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  const wchar_t *v3; // rax
  const wchar_t *v4; // r8
  const wchar_t *v5; // rdx

  result = &off_1400DF038;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v3 = *(const wchar_t **)(a2 + 16);
    v4 = (const wchar_t *)&unk_1400D44E0;
    v5 = (const wchar_t *)&unk_1400D44E0;
    if ( v3 )
      v5 = v3;
    if ( *(_QWORD *)(a1 + 16) )
      v4 = *(const wchar_t **)(a1 + 16);
    return (_UNKNOWN **)sub_1400B0338(
                          *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
                          4u,
                          8LL,
                          0x39u,
                          (__int64)&unk_1400D91A8,
                          v4,
                          v5);
  }
  return result;
}
