__int64 __fastcall GreOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-8h]
  struct _POINTL v12; // [rsp+68h] [rbp+28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, a1, 0, 0);
  v12.x = a2;
  v5 = 0;
  v6 = v10[0];
  v12.y = a3;
  if ( v10[0] )
  {
    v7 = RGNOBJ::bOffset((RGNOBJ *)v10, &v12);
    v6 = v10[0];
    if ( v7 )
    {
      v9 = (v10[0] + 24LL) & -(__int64)(v10[0] != 0LL);
      v5 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v9);
    }
  }
  if ( !v11 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v10);
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
  return v5;
}
