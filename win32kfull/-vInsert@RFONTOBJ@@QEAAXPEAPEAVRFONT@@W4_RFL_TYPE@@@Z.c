/*
 * XREFs of ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0122EF0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     prfntKillList @ 0x1C00B724C (prfntKillList.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0116450 (prfntDeactivateEudcRFONTs.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C01225F4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C02B8F58 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::vInsert(unsigned __int64 *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v5; // r10
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int128 v8; // rax

  if ( a3 )
  {
    if ( a3 != 1 )
      return v8;
    v5 = *a2;
    v6 = (_QWORD *)(*a1 + 664);
    v7 = *a2 + 664;
  }
  else
  {
    v5 = *a2;
    v6 = (_QWORD *)(*a1 + 488);
    v7 = *a2 + 488;
  }
  v8 = -(__int128)v5;
  *((_QWORD *)&v8 + 1) &= v7;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = v5;
    if ( *((_QWORD *)&v8 + 1) )
      **((_QWORD **)&v8 + 1) = *a1;
    *(_QWORD *)&v8 = *a1;
    *a2 = *a1;
  }
  return v8;
}
