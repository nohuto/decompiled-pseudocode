/*
 * XREFs of ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x1801B16E4
 * Callers:
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802AF75C (--0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802AF8F8 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CComposition::AdjustStereoEntityCount(CComposition *this, char a2)
{
  struct CComposition *v2; // rcx
  int v3; // eax
  int v4; // eax

  v2 = g_pComposition;
  v3 = *((_DWORD *)g_pComposition + 109);
  if ( a2 )
  {
    v4 = v3 + 1;
    *((_DWORD *)g_pComposition + 109) = v4;
    if ( v4 == 1 )
      CRenderTargetManager::ForceFullRender(*((CRenderTargetManager **)v2 + 27));
  }
  else
  {
    *((_DWORD *)g_pComposition + 109) = v3 - 1;
  }
}
