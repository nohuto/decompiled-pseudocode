bool __fastcall sub_14006CD00(__int64 a1, char a2)
{
  int v3; // edx
  __int64 v4; // rbx
  void (__fastcall ***v5)(_QWORD, char *, char *); // rcx
  char v7; // [rsp+50h] [rbp+18h] BYREF
  char v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  v4 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_1400DF678 + 1616))(
                    qword_1400DF6A8,
                    a1,
                    off_1400DF318);
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 480));
  v5 = *(void (__fastcall ****)(_QWORD, char *, char *))(v4 + 368);
  if ( v5 )
  {
    (**v5)(v5, &v7, &v8);
    if ( v7 )
      (*(void (__fastcall **)(__int64, _QWORD))(qword_1400DF678 + 1136))(qword_1400DF6A8, *(_QWORD *)(v4 + 448));
  }
  else if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOBYTE(v3) = 2;
    sub_1400A1E6C(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), v3, 4, 16, (__int64)&unk_1400D8D98, a2);
  }
  return v8 != 0;
}
