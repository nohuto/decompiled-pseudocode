/*
 * XREFs of ??1MULTIFONT@@QEAA@XZ @ 0x1C014E292
 * Callers:
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C02B1980 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02B3BA0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?DestroyTable@MULTIFONT@@QEAAXXZ @ 0x1C014E2EC (-DestroyTable@MULTIFONT@@QEAAXXZ.c)
 */

void __fastcall MULTIFONT::~MULTIFONT(MULTIFONT *this)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    v2 = *((_QWORD *)this + 1);
    if ( v2 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)v2 + 32LL);
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v3) )
        MULTIFONT::DestroyTable(this);
    }
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)this + 1);
  }
}
