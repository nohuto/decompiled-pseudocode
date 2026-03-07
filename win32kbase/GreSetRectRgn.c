__int64 __fastcall GreSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  struct _RECTL v12; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF
  int v14; // [rsp+48h] [rbp-8h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v13, a1, 0, 0);
  v8 = v13[0];
  v9 = 0;
  if ( v13[0] )
  {
    v12.left = a2;
    v12.top = a3;
    v12.right = a4;
    v12.bottom = a5;
    if ( ((a2 & 0xF8000000) == 0 || (a2 & 0xF8000000) == -134217728)
      && ((a5 & 0xF8000000) == 0 || (a5 & 0xF8000000) == 0xF8000000)
      && ((a4 & 0xF8000000) == 0 || (a4 & 0xF8000000) == 0xF8000000)
      && ((a3 & 0xF8000000) == 0 || (a3 & 0xF8000000) == 0xF8000000) )
    {
      if ( a2 > a4 )
      {
        v12.left = a4;
        v12.right = a2;
      }
      if ( a3 > a5 )
      {
        v12.top = a5;
        v12.bottom = a3;
      }
      v11 = (v13[0] + 24LL) & -(__int64)(v13[0] != 0LL);
      RGNCOREOBJ::vSet((RGNCOREOBJ *)&v11, &v12);
      v9 = 1;
    }
  }
  if ( !v14 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v13);
  if ( v8 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
  return v9;
}
