_UNKNOWN **__fastcall sub_14006CC60(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 (__fastcall ***v3)(_QWORD); // rcx
  _UNKNOWN **result; // rax

  v2 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_1400DF678 + 1616))(
                    qword_1400DF6A8,
                    a1,
                    off_1400DF318);
  _InterlockedIncrement64((volatile signed __int64 *)(v2 + 472));
  v3 = *(__int64 (__fastcall ****)(_QWORD))(v2 + 384);
  if ( v3 )
    return (_UNKNOWN **)(**v3)(v3);
  result = &off_1400DF038;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOBYTE(v1) = 2;
    return (_UNKNOWN **)sub_1400A1C34(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), v1, 4, 17, (__int64)&unk_1400D8D98);
  }
  return result;
}
