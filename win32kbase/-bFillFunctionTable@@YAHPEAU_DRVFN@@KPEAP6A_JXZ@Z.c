/*
 * XREFs of ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C0027350
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00272A0 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall bFillFunctionTable(struct _DRVFN *a1, int a2, __int64 (**a3)(void))
{
  __int64 iFunc; // rcx
  __int64 (*pfn)(void); // rax

  memset(a3, 0, 0x340uLL);
  while ( 1 )
  {
    if ( !a2 )
      return 1LL;
    --a2;
    if ( a1->iFunc >= 0x68 )
      break;
    iFunc = a1->iFunc;
    pfn = a1->pfn;
    ++a1;
    a3[iFunc] = pfn;
  }
  return 0LL;
}
