/*
 * XREFs of ?_SubscribeToWNF@CVisibilityOverride@@AEAAJXZ @ 0x1801CBE1C
 * Callers:
 *     ?RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x1801CBD18 (-RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisibilityOverride::_SubscribeToWNF(CVisibilityOverride *this)
{
  int v2; // ebx
  unsigned int v4; // [rsp+58h] [rbp+10h] BYREF

  v2 = RtlQueryWnfStateData(&v4, WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, CVisibilityOverride::s_DXModeWNFCallback, this);
  if ( v2 >= 0 )
  {
    v2 = RtlSubscribeWnfStateChangeNotification(
           (char *)this + 56,
           WNF_DX_OCCLUSION_CHANGE_NOTIFICATION,
           v4,
           CVisibilityOverride::s_DXModeWNFCallback);
    if ( v2 >= 0
      && (int)RtlQueryWnfStateData(&v4, WNF_HOLO_SHELL_STATE, CVisibilityOverride::s_HoloShellWNFCallback, this) >= 0 )
    {
      RtlSubscribeWnfStateChangeNotification(
        (char *)this + 64,
        WNF_HOLO_SHELL_STATE,
        v4,
        CVisibilityOverride::s_HoloShellWNFCallback);
    }
  }
  if ( v2 > 0 )
    return (unsigned __int16)v2 | 0x80070000;
  return (unsigned int)v2;
}
