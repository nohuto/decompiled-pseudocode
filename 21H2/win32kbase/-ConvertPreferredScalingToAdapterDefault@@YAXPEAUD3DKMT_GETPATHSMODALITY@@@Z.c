/*
 * XREFs of ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01705B4
 * Callers:
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C017318C (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0170504 (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

void __fastcall ConvertPreferredScalingToAdapterDefault(struct D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int i; // ebx

  for ( i = 0;
        i < *((unsigned __int16 *)a1 + 10);
        ConvertPathPreferredScalingToAdapterDefault((struct D3DKMT_GETPATHSMODALITY *)((char *)a1 + 296 * i++ + 56)) )
  {
    ;
  }
}
