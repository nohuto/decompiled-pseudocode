__int64 __fastcall DxgkEngLockVisRgnApiExt(HDC a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( qword_1C02D55F0 && (int)qword_1C02D55F0() >= 0 && qword_1C02D55F8 )
    return qword_1C02D55F8(a1);
  return v1;
}
