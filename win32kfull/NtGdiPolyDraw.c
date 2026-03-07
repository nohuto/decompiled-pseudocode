__int64 __fastcall NtGdiPolyDraw(HDC a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  _QWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0;
  if ( a4 <= 0x1FFFFFFF )
  {
    umptr_r<tagPOINT>::init_probe((__int64)v10, a2, a4);
    umptr_r<unsigned char>::init_probe((__int64)v9, a3, a4, 1LL);
    if ( v10[0] )
    {
      if ( v9[0] )
        return (unsigned int)GrePolyDraw(a1, (__int64)v10, (__int64)v9, a4);
    }
  }
  return v4;
}
