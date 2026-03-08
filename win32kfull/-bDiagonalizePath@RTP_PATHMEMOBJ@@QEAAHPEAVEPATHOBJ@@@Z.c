/*
 * XREFs of ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1C02E1B1C
 * Callers:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C0267E54 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 * Callees:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02E1BB8 (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 */

__int64 __fastcall RTP_PATHMEMOBJ::bDiagonalizePath(struct _PATHDATA *this, POINTFIX *a2)
{
  POINTFIX *pptfx; // rdx
  int v4; // eax
  bool v5; // zf
  __int64 result; // rax
  POINTFIX *v7; // rax

  this->flags &= ~8u;
  this[9].pptfx = a2;
  pptfx = this->pptfx;
  LODWORD(this[7].pptfx) = 1;
  pptfx[9] = pptfx[4];
  while ( LODWORD(this[7].pptfx) )
  {
    while ( 1 )
    {
      v4 = EPATHOBJ::bEnum((EPATHOBJ *)this, this + 8);
      v5 = this[8].count == 0;
      LODWORD(this[7].pptfx) = v4;
      if ( !v5 )
        break;
      if ( !v4 )
        return 1LL;
    }
    if ( (this[8].flags & 1) == 0 )
      break;
    v7 = this[8].pptfx;
    if ( !v7 )
      break;
    *(POINTFIX *)&this[9].flags = *v7;
    result = RTP_PATHMEMOBJ::bDiagonalizeSubPath((RTP_PATHMEMOBJ *)this);
    if ( !(_DWORD)result )
      return result;
  }
  return 1LL;
}
