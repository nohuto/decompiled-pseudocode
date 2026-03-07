__int64 __fastcall SpiInit(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int16 v10; // bx
  __int16 v11; // ax

  v4 = a4;
  v5 = a1 + 40;
  while ( (((__int64 (__fastcall *)(__int64))off_140C06B40[0])(v5) & 5) != 4 )
    ;
  while ( (((__int64 (__fastcall *)(__int64))off_140C06B40[0])(v5) & 8) != 0 )
    ((void (__fastcall *)(__int64))off_140C06B40[0])(a1 + 96);
  ((void (__fastcall *)(__int64, _QWORD))off_140C06B48[0])(a1 + 16, 0LL);
  v7 = a1 + 8;
  ((void (__fastcall *)(__int64, _QWORD))off_140C06B48[0])(a1 + 8, 0LL);
  ((void (__fastcall *)(__int64, __int64))off_140C06B48[0])(a1, 15LL);
  ((void (__fastcall *)(__int64, _QWORD))off_140C06B48[0])(a1 + 4, 0LL);
  ((void (__fastcall *)(__int64, _QWORD))off_140C06B48[0])(a1 + 20, v4);
  v8 = a1 + 52;
  v9 = a1 + 48;
  do
  {
    do
    {
      v10 = ((__int64 (__fastcall *)(__int64))off_140C06B40[0])(v8);
      v11 = ((__int64 (__fastcall *)(__int64))off_140C06B40[0])(v9);
    }
    while ( v10 );
  }
  while ( v11 );
  return ((__int64 (__fastcall *)(__int64, __int64))off_140C06B48[0])(v7, 1LL);
}
