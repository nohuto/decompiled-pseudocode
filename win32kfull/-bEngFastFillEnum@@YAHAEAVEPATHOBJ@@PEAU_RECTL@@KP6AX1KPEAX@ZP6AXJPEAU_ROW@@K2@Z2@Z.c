/*
 * XREFs of ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C02F6D08
 * Callers:
 *     ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02F6ADC (-bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02F6C34 (-bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x1C02F8210 (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C02F6EC8 (-bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C02F79C4 (-bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z.c)
 */

__int64 __fastcall bEngFastFillEnum(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        unsigned int a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *),
        void *a6)
{
  bool v6; // cf
  int v11; // edi
  int v12; // r14d
  unsigned int v13; // eax
  unsigned int v14; // ebx
  void *Src[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+40h] [rbp-C0h]
  unsigned int v17; // [rsp+44h] [rbp-BCh]
  void (*v18)(int, struct _ROW *, unsigned int, void *); // [rsp+48h] [rbp-B8h]
  struct _POINTFIX v19[40]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = *((_DWORD *)a1 + 1) < 2u;
  v18 = a5;
  *(_OWORD *)Src = 0LL;
  v17 = a3;
  if ( v6 )
    return 1LL;
  *(_DWORD *)a1 &= ~8u;
  *(_QWORD *)(*((_QWORD *)a1 + 1) + 72LL) = *(_QWORD *)(*((_QWORD *)a1 + 1) + 32LL);
  if ( EPATHOBJ::bEnum(a1, (struct _PATHDATA *)Src) )
  {
    if ( ((__int64)Src[0] & 2) == 0 && *((_DWORD *)a1 + 1) <= 0x28u )
    {
      v11 = HIDWORD(Src[0]);
      if ( HIDWORD(Src[0]) <= 0x28 )
      {
        memmove(v19, Src[1], 8LL * HIDWORD(Src[0]));
        while ( 1 )
        {
          v16 = EPATHOBJ::bEnum(a1, (struct _PATHDATA *)Src);
          if ( ((__int64)Src[0] & 1) != 0 )
            break;
          v12 = v11 + HIDWORD(Src[0]);
          if ( (unsigned int)(v11 + HIDWORD(Src[0])) > 0x28 )
            break;
          memmove(&v19[v11], Src[1], 8LL * HIDWORD(Src[0]));
          v11 = v12;
          if ( !v16 )
          {
            if ( !v12 )
              return (unsigned int)bFill(a1, a2, v17, a4, a6);
            v13 = bFastFill(v12, v19, a2, a4, v18, a6);
            goto LABEL_15;
          }
        }
      }
    }
  }
  else
  {
    v14 = 1;
    if ( HIDWORD(Src[0]) <= 1 )
      return v14;
    v13 = bFastFill(SHIDWORD(Src[0]), (struct _POINTFIX *)Src[1], a2, a4, a5, a6);
LABEL_15:
    v14 = v13;
    if ( v13 )
      return v14;
  }
  return (unsigned int)bFill(a1, a2, v17, a4, a6);
}
