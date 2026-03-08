/*
 * XREFs of Feature_Servicing_NullPointerDereferenceWin32kbase__private_IsEnabledDeviceUsage @ 0x1C00E1598
 * Callers:
 *     ?SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00BD400 (-SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     Feature_Servicing_NullPointerDereferenceWin32kbase__private_IsEnabledFallback @ 0x1C00E15D0 (Feature_Servicing_NullPointerDereferenceWin32kbase__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_NullPointerDereferenceWin32kbase__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_NullPointerDereferenceWin32kbase__private_featureState & 0x10) != 0 )
    return Feature_Servicing_NullPointerDereferenceWin32kbase__private_featureState & 1;
  else
    return Feature_Servicing_NullPointerDereferenceWin32kbase__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_NullPointerDereferenceWin32kbase__private_featureState,
             3LL);
}
