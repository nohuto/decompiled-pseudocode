__int64 __fastcall MmMapViewOfSection(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  _QWORD v14[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v14, 0, sizeof(v14));
  result = MiMapParametersInitialize(v14, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = MiMapViewOfSection(a1, (unsigned int)v14, (_DWORD)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_140C67C1C;
      else
        ++dword_140C67C18;
    }
    else
    {
      *a7 = v14[3];
      return (unsigned int)result;
    }
  }
  return result;
}
