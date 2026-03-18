/*
 * XREFs of ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C001EDA4
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001D14C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C001E390 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 * Callees:
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C001E92C (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?FindFaceName@@YAPEAGK@Z @ 0x1C001EF08 (-FindFaceName@@YAPEAGK@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1C001EF44 (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C001F0A4 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 */

__int64 __fastcall MAPPER::bGetFaceName(MAPPER *this)
{
  unsigned __int8 v1; // si
  int v3; // r9d
  __int64 v4; // rax
  int v5; // r8d
  int v6; // edx
  char v7; // r11
  char v8; // r10
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  const unsigned __int16 *FaceName; // rsi
  unsigned __int16 *v13; // rax

  v1 = *((_BYTE *)this + 284);
  v3 = *((_DWORD *)this + 63);
  if ( v1 == 1 )
    v1 = MAPPER::DefaultCharset;
  v4 = *((_QWORD *)this + 1);
  v5 = *((_DWORD *)this + 63) | 0x20000;
  *((_DWORD *)this + 63) = v5;
  v6 = v1 | 0x8000;
  v7 = *(_BYTE *)(v4 + 27) & 3;
  if ( v7 != 1 )
    v6 = v1;
  v8 = *(_BYTE *)(v4 + 27) & 0x70;
  if ( v8 == 16 )
  {
    v9 = v6 | 0x4000;
  }
  else
  {
    v9 = v6;
    if ( !v7 && v8 == 48 )
      v9 = v6 | 0x8000;
  }
  v10 = v9 | 0x2000;
  if ( (v5 & 0x2000000) == 0 )
    v10 = v9;
  if ( v1 || (v3 & 0x100) == 0 || (v3 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_21;
  if ( (*((_DWORD *)this + 63) & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation(this) )
    goto LABEL_21;
  v11 = *((_DWORD *)this + 44);
  if ( v11 )
  {
    if ( v11 != 900 && v11 != 1800 && v11 != 2700 )
      goto LABEL_21;
  }
  FaceName = FindFaceName(v10 | 0x1000);
  if ( MAPPER::bFindBitmapFont(this, FaceName)
    || (FaceName = FindFaceName(v10 | 0x800), MAPPER::bFindBitmapFont(this, FaceName)) )
  {
    *((_QWORD *)this + 2) = FaceName;
    return 1LL;
  }
  if ( (*((_DWORD *)this + 63) & 0x100000) == 0 )
  {
LABEL_21:
    v13 = FindFaceName(v10);
    if ( *v13 || (*((_DWORD *)this + 63) & 0x40000000) == 0 )
      *((_QWORD *)this + 2) = v13;
    return 1LL;
  }
  return 0LL;
}
