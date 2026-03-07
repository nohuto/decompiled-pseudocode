__int64 (__fastcall *__fastcall BgkAcquireDisplayOwnership(__int64 a1))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v2; // rdx
  char v3; // cl
  __int64 v4; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v5[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]

  memset(v5, 0, sizeof(v5));
  v6 = 0LL;
  if ( byte_140C6A80A && !byte_140C6A800 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(0LL, 1LL);
  result = qword_140C6A7F8;
  if ( qword_140C6A7F8 )
  {
    v4 = 0LL;
    LOBYTE(a1) = 1;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C6A7F8(a1, v5, &v4);
    if ( (int)result >= 0 )
    {
      LOBYTE(v2) = 1;
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(v5, v2);
      v3 = byte_140C6A80A;
      if ( (int)result >= 0 )
        v3 = 1;
      qword_140C6A7E8 = 0LL;
      byte_140C6A80A = v3;
    }
  }
  return result;
}
