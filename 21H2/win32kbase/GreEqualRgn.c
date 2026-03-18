/*
 * XREFs of GreEqualRgn @ 0x1C0098230
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C009829C (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreEqualRgn(HRGN a1, HRGN a2)
{
  _BYTE v4[56]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v5[64]; // [rsp+58h] [rbp-40h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 1, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v4, a2, 1, 0);
  LODWORD(a2) = GreEqualRgn((struct RGNOBJAPI *)v5, (struct RGNOBJAPI *)v4);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v4);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v5);
  return (unsigned int)a2;
}
