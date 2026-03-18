/*
 * XREFs of ?SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00AD7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::SetIntegerProperty(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  void *v8; // rcx

  v5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( (a4 != 0) == *((_BYTE *)this + 64) )
      return v5;
    *((_BYTE *)this + 64) = a4 != 0;
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( (a4 != 0) == *((_BYTE *)this + 65) )
      return v5;
    *((_BYTE *)this + 65) = a4 != 0;
LABEL_11:
    *a5 = 1;
    return v5;
  }
  if ( v7 == 1 && (v8 = (void *)*((_QWORD *)this + 7)) != 0LL )
    return (unsigned int)DxgkSetCompositionSurfaceInkCookie(v8, a4);
  else
    return (unsigned int)-1073741811;
}
