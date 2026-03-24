/*
 * XREFs of bInitBMOBJ @ 0x1C0299888
 * Callers:
 *     InitializeGre @ 0x1C02990FC (InitializeGre.c)
 * Callees:
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0017240 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C001DA78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreCreateBitmap @ 0x1C0028610 (GreCreateBitmap.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002CB94 (--1SURFREF@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C00368E0 (HmgSetOwner.c)
 */

HSURF bInitBMOBJ()
{
  unsigned int v0; // ebx
  HSURF result; // rax
  unsigned __int64 v2; // rdi
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v4; // [rsp+50h] [rbp-18h]

  v0 = 0;
  result = (HSURF)GreCreateBitmap(1, 1, 1u, 1u, 0LL);
  v2 = (unsigned __int64)result;
  if ( result )
  {
    SURFREF::SURFREF((SURFREF *)v3, result);
    if ( v4 )
    {
      HmgSetOwner(v4[4], 0, 5);
      bSetStockObject(v2, 21, 0);
      v0 = 1;
      v4[4] = v2 | 0x800000;
      SURFACE::pdibDefault = (SURFACE *)v4;
    }
    SURFREF::~SURFREF((SURFREF *)v3);
    return (HSURF)v0;
  }
  return result;
}
