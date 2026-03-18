/*
 * XREFs of ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C0131F1C
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0131D34 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0131600 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C013177C (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0131D00 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vHalve@@YAXAEAVEVECTORFX@@@Z @ 0x1C0132008 (-vHalve@@YAXAEAVEVECTORFX@@@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::bThicken(WIDEPENOBJ *this, struct _POINTFIX *a2)
{
  int x; // r8d
  int y; // r11d
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // ecx
  int v10; // r11d
  struct _POINTFIX v12; // rax
  FIX v13; // ebx
  FIX v14; // esi
  FIX v15; // r14d
  int v16; // r8d
  int v17; // edi
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
  v7 = v18.x * v19.y;
  v8 = v18.x * v18.x + v18.y * v18.y;
  v9 = v18.y * v19.x;
  v10 = v19.x * v19.x + v19.y * v19.y;
  if ( v8 > v10 )
  {
    if ( 16LL * v8 < (v7 - v9) * (__int64)(v7 - v9) )
      return 0LL;
    v12 = v18;
  }
  else
  {
    if ( 16LL * v10 < (v9 - v7) * (__int64)(v9 - v7) )
      return 0LL;
    v12 = v19;
    v8 = v19.x * v19.x + v19.y * v19.y;
  }
  v21 = v12;
  v13 = 8;
  if ( v8 >= 64 )
  {
    v15 = v21.y;
    v14 = v21.x;
  }
  else
  {
    v14 = 8;
    v21 = (struct _POINTFIX)8LL;
    v15 = 0;
  }
  v20 = 0LL;
  v16 = abs32(v15);
  if ( v16 <= v14 )
  {
    v13 = -8;
    goto LABEL_21;
  }
  if ( (int)abs32(v14) <= -v15 )
  {
    v17 = -8;
    v20.x = -8;
    v13 = 0;
    goto LABEL_22;
  }
  if ( v16 <= -v14 )
  {
LABEL_21:
    v17 = 0;
    v20.x = 0;
LABEL_22:
    v20.y = v13;
    goto LABEL_23;
  }
  v17 = 8;
  v20 = (struct _POINTFIX)8LL;
  v13 = 0;
LABEL_23:
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  WIDEPATHOBJ::vAddPoint(this, &v21);
  WIDEPATHOBJ::vAddPoint(this, &v20);
  v21.x = -v14;
  v21.y = -v15;
  v20.x = -v17;
  v20.y = -v13;
  WIDEPATHOBJ::vAddPoint(this, &v21);
  WIDEPATHOBJ::vAddPoint(this, &v20);
  WIDEPATHOBJ::vEndFigure(this);
  return 1LL;
}
