/*
 * XREFs of ?SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00BD400
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_NullPointerDereferenceWin32kbase__private_IsEnabledDeviceUsage @ 0x1C00E1598 (Feature_Servicing_NullPointerDereferenceWin32kbase__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::SetIntegerProperty(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // esi
  int v8; // r8d
  int v9; // r8d
  int IsEnabledDeviceUsage; // eax
  void *v11; // rcx

  v5 = 0;
  v6 = a4;
  v8 = a3 - 1;
  if ( !v8 )
  {
    if ( (a4 != 0) == *((_BYTE *)this + 64) )
      return v5;
    *((_BYTE *)this + 64) = a4 != 0;
    goto LABEL_13;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( (a4 != 0) == *((_BYTE *)this + 65) )
      return v5;
    *((_BYTE *)this + 65) = a4 != 0;
LABEL_13:
    *a5 = 1;
    return v5;
  }
  if ( v9 == 1
    && ((IsEnabledDeviceUsage = Feature_Servicing_NullPointerDereferenceWin32kbase__private_IsEnabledDeviceUsage(
                                  this,
                                  a2),
         v11 = (void *)*((_QWORD *)this + 7),
         !IsEnabledDeviceUsage)
     || v11) )
  {
    return (unsigned int)DxgkSetCompositionSurfaceInkCookie(v11, v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
