_UNKNOWN **__fastcall sub_1400B19F0(const wchar_t *a1, const wchar_t *a2, const wchar_t *a3)
{
  _UNKNOWN **result; // rax

  result = &off_1400DF038;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    return (_UNKNOWN **)sub_1400A3320(
                          *(_QWORD *)(*((_QWORD *)P + 3) + 16LL),
                          4u,
                          0xCu,
                          0x32u,
                          (__int64)&unk_1400D9868,
                          a3,
                          a2,
                          a1);
  return result;
}
