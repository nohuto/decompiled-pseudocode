/*
 * XREFs of ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0123A3C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     prfntKillList @ 0x1C00B724C (prfntKillList.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C01147B0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0116450 (prfntDeactivateEudcRFONTs.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0123828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C02B8F58 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02B9D14 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vRemove(__int64 a1, _QWORD *a2, int a3)
{
  __int64 *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rdx
  bool v7; // cf
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  _QWORD *v11; // rcx
  __int64 v12; // rax

  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v4 = (__int64 *)(*(_QWORD *)a1 + 664LL);
    v5 = *v4;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 672LL);
    v7 = *v4 != 0;
    v8 = *v4 + 664;
    v9 = v6 + 664;
  }
  else
  {
    v4 = (__int64 *)(*(_QWORD *)a1 + 488LL);
    v5 = *v4;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v7 = *v4 != 0;
    v8 = *v4 + 488;
    v9 = v6 + 488;
  }
  v10 = v8 & -(__int64)v7;
  v11 = (_QWORD *)(v9 & -(__int64)(v6 != 0));
  v12 = v4[1];
  if ( v5 )
  {
    *(_QWORD *)(v10 + 8) = v12;
    if ( v11 )
      *v11 = *v4;
  }
  else
  {
    *a2 = v12;
    if ( v11 )
      *v11 = 0LL;
  }
}
