/*
 * XREFs of ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0087C30
 * Callers:
 *     prfntKillList @ 0x1C007BFA0 (prfntKillList.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0087828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C01315E4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C013FC0C (vDeactivateEudcRFONTsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::cInactive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    return *(unsigned int *)(*(_QWORD *)(v1 + 3496) + 1528LL);
  else
    return *(unsigned int *)(v1 + 1528);
}
