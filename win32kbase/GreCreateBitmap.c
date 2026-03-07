__int64 __fastcall GreCreateBitmap(__int64 a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  _QWORD v6[3]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v7; // [rsp+48h] [rbp-10h]

  if ( a2 * (unsigned __int64)(((a4 * a3 * (_DWORD)a1 + 15) >> 3) & 0x1FFFFFFE) > 0xFFFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v6[2] = 0LL;
    v6[0] = a5;
    v6[1] = a2 * (unsigned __int64)(((a4 * a3 * (_DWORD)a1 + 15) >> 3) & 0x1FFFFFFE);
    v7 = 0;
    return GreCreateBitmapInternal(a1, a2, a3, a4, (__int64)v6);
  }
}
