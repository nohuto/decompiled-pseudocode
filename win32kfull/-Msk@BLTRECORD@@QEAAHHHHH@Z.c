__int64 __fastcall BLTRECORD::Msk(struct _POINTL *this, LONG a2, LONG a3, LONG a4, LONG a5)
{
  struct _POINTL *v5; // rsi
  __int64 result; // rax
  int v10; // ecx

  v5 = this + 21;
  this[21].y = 0;
  this[21].x = 0;
  this[23].x = a2;
  this[23].y = a3;
  this[22].y = a5;
  this[22].x = a4;
  result = EXFORMOBJ::bXform((EXFORMOBJ *)&this[2], this + 21, 2LL);
  if ( (_DWORD)result )
  {
    result = 1LL;
    v10 = this[22].y - this[21].y;
    this[24].x = this[22].x + a2 - v5->x;
    this[24].y = a3 + v10;
  }
  return result;
}
