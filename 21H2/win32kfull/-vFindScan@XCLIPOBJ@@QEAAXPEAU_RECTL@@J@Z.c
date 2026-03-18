/*
 * XREFs of ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0008F24
 * Callers:
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0008BA0 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00E05C0 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0125760 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0170B40 (-vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02C2C10 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02C30E0 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02C3400 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D7B80 (-vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D7DA0 (-vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D8160 (-vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D8390 (-vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D8730 (-vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D89D0 (-vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D8D70 (-vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XCLIPOBJ::vFindScan(XCLIPOBJ *this, struct _RECTL *a2, LONG a3)
{
  _DWORD *v5; // rdx
  LONG v7; // r8d
  LONG v8; // eax
  LONG v9; // ecx
  LONG v10; // eax
  LONG right; // eax
  int v12; // eax
  __int64 v13; // rcx
  LONG v14; // r8d
  LONG v15; // ecx
  LONG v16; // eax
  LONG v17; // eax

  v5 = (_DWORD *)*((_QWORD *)this + 10);
  if ( a3 >= v5[1] )
  {
    if ( a3 < v5[2] )
      return;
    do
    {
      v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      *((_QWORD *)this + 10) = v5;
      v7 = v5[2];
    }
    while ( a3 >= v7 );
    v8 = *((_DWORD *)this + 2);
    v9 = v5[1];
    if ( v9 <= v8 )
      v9 = *((_DWORD *)this + 2);
    v10 = *((_DWORD *)this + 4);
    a2->top = v9;
    if ( v7 >= v10 )
      v7 = v10;
    right = a2->right;
    a2->bottom = v7;
    a2->left = right;
    if ( v9 >= v7 )
    {
      a2->bottom = 0x7FFFFFFF;
    }
    else if ( v7 != 0x7FFFFFFF )
    {
      return;
    }
    a2->top = 0x7FFFFFFF;
    return;
  }
  do
  {
    v12 = *(v5 - 1);
    v13 = (__int64)v5 - (unsigned int)(4 * v12 + 16) - 4;
    v5 = (_DWORD *)((char *)v5 - (unsigned int)(4 * v12 + 16));
    *((_QWORD *)this + 10) = v5;
    v14 = v5[1];
  }
  while ( a3 < v14 );
  v15 = *(_DWORD *)(v13 + 12);
  if ( v14 <= *((_DWORD *)this + 2) )
    v14 = *((_DWORD *)this + 2);
  v16 = *((_DWORD *)this + 4);
  a2->top = v14;
  if ( v15 >= v16 )
    v15 = v16;
  v17 = a2->right;
  a2->bottom = v15;
  a2->left = v17;
  if ( v14 >= v15 )
  {
    a2->top = 0x80000000;
LABEL_21:
    a2->bottom = 0x80000000;
    return;
  }
  if ( v14 == 0x80000000 )
    goto LABEL_21;
}
