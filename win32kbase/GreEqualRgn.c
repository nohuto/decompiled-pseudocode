/*
 * XREFs of GreEqualRgn @ 0x1C00099E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005173C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C00AD744 (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreEqualRgn(HRGN a1, HRGN a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[32]; // [rsp+38h] [rbp-20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 1, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v4, a2, 1, 0);
  LODWORD(a2) = GreEqualRgn((struct RGNOBJAPI *)v5, (struct RGNOBJAPI *)v4);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v4);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v5);
  return (unsigned int)a2;
}
