__int64 __fastcall MmMapSecureViewOfSection(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 result; // rax
  _QWORD v15[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  result = MiMapParametersInitialize(v15, *a7, 0, 4, 0LL);
  if ( (int)result < 0
    || (v15[9] = a12,
        HIDWORD(v15[8]) = 2,
        result = MiMapViewOfSection(a1, (unsigned int)v15, (_DWORD)a3, 0, a6, 2, 1),
        (int)result < 0) )
  {
    if ( *a3 )
      ++dword_140C67C1C;
    else
      ++dword_140C67C18;
  }
  else
  {
    *a7 = v15[3];
    return (unsigned int)result;
  }
  return result;
}
