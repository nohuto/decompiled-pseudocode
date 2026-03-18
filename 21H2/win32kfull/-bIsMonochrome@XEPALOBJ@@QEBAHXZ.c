/*
 * XREFs of ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C00FDBF8
 * Callers:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003BF70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C009222C (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     NtGdiMonoBitmap @ 0x1C02B5DC0 (NtGdiMonoBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::bIsMonochrome(XEPALOBJ *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 24) & 0x2000) != 0;
  return v2;
}
