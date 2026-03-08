/*
 * XREFs of ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C0115C50
 * Callers:
 *     cjCopyFontDataW @ 0x1C0004330 (cjCopyFontDataW.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01157C4 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C0115CAC (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 */

__int64 __fastcall PFEOBJ::dpNtmi(PFEOBJ *this)
{
  unsigned int v1; // ebx
  _DWORD *v2; // r8
  unsigned int v4; // edx

  v1 = 368;
  v2 = *(_DWORD **)(*(_QWORD *)this + 32LL);
  if ( (v2[12] & 0x4000) != 0 || IsVariableFont(*(struct _IFIMETRICS **)(*(_QWORD *)this + 32LL)) )
  {
    v4 = v2[1];
    if ( v4 <= 0xC )
      DbgPrint("Test it %d %Iu \n", v4, 12);
    else
      return (unsigned int)(4 * *(_DWORD *)((char *)v2 + v2[51] + 4) + 368);
  }
  return v1;
}
