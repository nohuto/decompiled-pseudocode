/*
 * XREFs of ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1C029BCF4
 * Callers:
 *     ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02C0610 (-UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUS.c)
 *     ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02C08F0 (-UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@P.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C029B708 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 */

__int64 __fastcall UMPDOBJ::ThunkLINEATTRS(char **this, struct _LINEATTRS **a2)
{
  char *v4; // rcx
  int v6; // esi
  unsigned int v7; // esi
  char *KernelPtr; // rax
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = (char *)*a2;
  if ( !*a2 )
    return 1LL;
  v6 = *((_DWORD *)v4 + 5);
  v9 = (void *)*((_QWORD *)v4 + 3);
  v7 = 4 * v6;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock((UMPDOBJ *)this, (void **)a2, 0x28u)
    && (unsigned int)UMPDOBJ::ThunkMemBlock((UMPDOBJ *)this, &v9, v7) )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr(this, (char *)*a2);
    *((_QWORD *)KernelPtr + 3) = v9;
    return 1LL;
  }
  return 0LL;
}
