/*
 * XREFs of ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C01839C4
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0184190 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     PATHOBJ_bEnum @ 0x1C000BC40 (PATHOBJ_bEnum.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C0183400 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFillWrapper(RGNMEMOBJ *this, struct EPATHOBJ *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // esi
  ULONG count; // edi
  BOOL v7; // eax
  unsigned int v8; // ecx
  BOOL v9; // r12d
  ULONG v10; // r14d
  POINTFIX *pptfx; // r9
  ULONG v12; // r8d
  __int64 v13; // rcx
  PATHDATA ppd; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[40]; // [rsp+30h] [rbp-D0h] BYREF

  *(_DWORD *)a2 &= ~8u;
  v3 = *((_QWORD *)a2 + 1);
  ppd = 0LL;
  v5 = 0;
  *(_QWORD *)(v3 + 72) = *(_QWORD *)(v3 + 32);
  if ( PATHOBJ_bEnum((PATHOBJ *)a2, &ppd) )
  {
    if ( (ppd.flags & 2) == 0 && *((_DWORD *)a2 + 1) <= 0x28u )
    {
      count = ppd.count;
      if ( ppd.count > 0x28 )
        count = 40;
      memmove(v16, ppd.pptfx, 8LL * count);
      while ( 1 )
      {
        v7 = PATHOBJ_bEnum((PATHOBJ *)a2, &ppd);
        v8 = -1;
        v9 = v7;
        v10 = ppd.count + count;
        if ( ppd.count + count >= count )
          v8 = ppd.count + count;
        if ( (ppd.flags & 1) != 0 || v8 > 0x28 || v10 < count )
          break;
        memmove(&v16[count], ppd.pptfx, 8LL * ppd.count);
        count = v10;
        if ( !v9 )
        {
          pptfx = (POINTFIX *)v16;
          v12 = v10;
          goto LABEL_16;
        }
      }
    }
  }
  else
  {
    v12 = ppd.count;
    if ( ppd.count <= 1 )
    {
      v5 = 1;
    }
    else
    {
      pptfx = ppd.pptfx;
LABEL_16:
      v5 = RGNMEMOBJ::bFastFill(this, a2, v12, pptfx);
    }
  }
  v13 = *((_QWORD *)a2 + 1);
  *(_DWORD *)a2 &= ~8u;
  *(_QWORD *)(v13 + 72) = *(_QWORD *)(v13 + 32);
  return v5;
}
