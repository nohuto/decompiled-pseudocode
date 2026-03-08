/*
 * XREFs of ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C0125418
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C01225F4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulSimpleDeviceOrientation(struct RFONTOBJ *a1)
{
  __int16 v1; // r8
  int v2; // edx

  v1 = (*(float *)(*(_QWORD *)a1 + 396LL) > 0.0) - (*(float *)(*(_QWORD *)a1 + 396LL) < 0.0);
  v2 = (__PAIR64__(*(float *)(*(_QWORD *)a1 + 400LL) > 0.0, *(_DWORD *)(*(_QWORD *)a1 + 400LL))
      - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (((unsigned __int8)v1 ^ (unsigned __int8)v2) & 1) != 0 )
    return v2 & 0x384 | v1 & 0x708 | -v2 & 0xA8Cu;
  else
    return 3601LL;
}
