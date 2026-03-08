/*
 * XREFs of _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14034::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14034 @ 0x1C018C84C
 * Callers:
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C019183C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14034::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14034(
        __int64 *a1)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = 0; i < *((_DWORD *)a1 + 2); *(_DWORD *)(v3 + *a1 + 256) &= ~0x80u )
  {
    v2 = i++;
    v3 = 296 * v2;
    *(_BYTE *)(v3 + *a1 + 288) = 0;
    result = *a1;
  }
  return result;
}
