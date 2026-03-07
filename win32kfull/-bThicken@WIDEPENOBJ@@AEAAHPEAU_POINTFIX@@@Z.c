__int64 __fastcall WIDEPENOBJ::bThicken(WIDEPENOBJ *this, struct _POINTFIX *a2)
{
  int x; // r8d
  int y; // r11d
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  int v10; // r11d
  struct _POINTFIX v11; // rax
  FIX v12; // ebx
  FIX v13; // esi
  FIX v14; // r14d
  int v15; // r8d
  int v16; // edi
  struct _POINTFIX v18; // [rsp+20h] [rbp-10h] BYREF
  struct _POINTFIX v19; // [rsp+28h] [rbp-8h] BYREF
  struct _POINTFIX v20; // [rsp+68h] [rbp+38h] BYREF
  struct _POINTFIX v21; // [rsp+70h] [rbp+40h] BYREF

  v18 = *a2;
  v19 = a2[1];
  vHalve((struct EVECTORFX *)&v18);
  vHalve((struct EVECTORFX *)&v19);
  x = v18.x;
  if ( v18.x < 0 )
    x = -v18.x;
  y = v18.y;
  if ( v18.y < 0 )
    y = -v18.y;
  v5 = v19.x;
  if ( v19.x < 0 )
    v5 = -v19.x;
  v6 = v19.y;
  if ( v19.y < 0 )
    v6 = -v19.y;
  if ( ((x | y | v5 | v6) & 0xFFFFF000) != 0 )
    return 0LL;
  v7 = v19.x * v18.y;
  v8 = v18.x * v19.y;
  v9 = v18.x * v18.x + v18.y * v18.y;
  v10 = v19.x * v19.x + v19.y * v19.y;
  if ( v9 <= v10 )
  {
    if ( 16LL * v10 < (v7 - v8) * (__int64)(v7 - v8) )
      return 0LL;
    v11 = v19;
    v9 = v19.x * v19.x + v19.y * v19.y;
  }
  else
  {
    if ( 16LL * v9 < (v8 - v7) * (__int64)(v8 - v7) )
      return 0LL;
    v11 = v18;
  }
  v21 = v11;
  v12 = 8;
  if ( v9 >= 64 )
  {
    v14 = v21.y;
    v13 = v21.x;
  }
  else
  {
    v13 = 8;
    v21 = (struct _POINTFIX)8LL;
    v14 = 0;
  }
  v20 = 0LL;
  v15 = abs32(v14);
  if ( v15 <= v13 )
  {
    v12 = -8;
    goto LABEL_23;
  }
  if ( (int)abs32(v13) <= -v14 )
  {
    v16 = -8;
    v20.x = -8;
    v12 = 0;
LABEL_24:
    v20.y = v12;
    goto LABEL_26;
  }
  if ( v15 <= -v13 )
  {
LABEL_23:
    v16 = 0;
    v20.x = 0;
    goto LABEL_24;
  }
  v16 = 8;
  v20 = (struct _POINTFIX)8LL;
  v12 = 0;
LABEL_26:
  if ( (unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
  {
    WIDEPATHOBJ::vAddPoint(this, &v21);
    WIDEPATHOBJ::vAddPoint(this, &v20);
    v21.x = -v13;
    v21.y = -v14;
    v20.x = -v16;
    v20.y = -v12;
    WIDEPATHOBJ::vAddPoint(this, &v21);
    WIDEPATHOBJ::vAddPoint(this, &v20);
    WIDEPATHOBJ::vEndFigure(this);
    return 1LL;
  }
  return 0LL;
}
