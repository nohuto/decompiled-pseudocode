__int64 sub_1400A20F0()
{
  __int64 result; // rax
  void *v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+28h] [rbp-20h]
  _QWORD v3[3]; // [rsp+2Ch] [rbp-1Ch] BYREF

  result = sub_1400A258C();
  if ( (_BYTE)result )
  {
    memset(v3, 0, 12);
    v1 = &unk_1400D4218;
    v2 = 24;
    result = WdfLdrQueryInterface(&v1);
    if ( (int)result >= 0 )
      return (*(__int64 (__fastcall **)(void *, __int64))((char *)v3 + 4))(&unk_1400DF0D0, qword_1400DF6A8);
  }
  return result;
}
