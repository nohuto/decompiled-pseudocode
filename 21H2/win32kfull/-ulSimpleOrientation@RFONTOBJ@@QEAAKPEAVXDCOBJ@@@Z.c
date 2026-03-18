/*
 * XREFs of ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C0108E70
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0016754 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall RFONTOBJ::ulSimpleOrientation(RFONTOBJ *this, struct XDCOBJ *a2)
{
  int v2; // edi
  __int16 v3; // r9
  int v4; // ecx
  unsigned int v5; // ebx
  float v6; // xmm0_4
  BOOL v7; // edx
  bool v8; // r8
  bool v9; // cf
  bool v10; // zf
  float v11; // xmm0_4
  int v12; // r8d
  bool v13; // r9
  float v14; // xmm0_4
  int v15; // r9d
  int v16; // r10d
  int v17; // r11d
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v21; // ecx
  float *v22; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (*(float *)(*(_QWORD *)this + 396LL) > 0.0) - (*(float *)(*(_QWORD *)this + 396LL) < 0.0);
  v4 = (__PAIR64__(*(float *)(*(_QWORD *)this + 400LL) > 0.0, *(_DWORD *)(*(_QWORD *)this + 400LL))
      - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v4) & 1) != 0 )
  {
    v5 = v3 & 0x708 | v4 & 0xA8C | -v4 & 0x384;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
      return v5;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v22, a2, 516);
    v6 = v22[1];
    v7 = *v22 > 0.0;
    v8 = v6 > 0.0;
    v9 = v6 > 0.0;
    v10 = v6 == 0.0;
    v11 = v22[2];
    v12 = v8 - (!v9 && !v10);
    v13 = v11 > 0.0;
    v9 = v11 > 0.0;
    v10 = v11 == 0.0;
    v14 = v22[3];
    v15 = v13 - (!v9 && !v10);
    LOBYTE(v2) = v14 < 0.0;
    v16 = (v14 > 0.0) - v2;
    v17 = (v7 ^ (unsigned __int8)~(_BYTE)v12) & 1;
    if ( !(v17 | (v15 + v12) | (v7 - v16)) )
    {
      v18 = (v12 & 0x384) + (v15 & 0xA8C) + v5 + (v7 & 0x708);
      v19 = v18 - 3600;
      if ( v18 < 0xE10 )
        return v18;
      return v19;
    }
    if ( !(v17 | (v16 + v7) | (v12 - v15)) )
    {
      v21 = (v16 & 0xE10) + (v7 & 0x1518) + (v12 & 0x189C) + (-v12 & 0x1194) - v5;
      v19 = v21 - 3600;
      if ( v21 < 0xE10 )
        return v21;
      return v19;
    }
  }
  return 3601LL;
}
