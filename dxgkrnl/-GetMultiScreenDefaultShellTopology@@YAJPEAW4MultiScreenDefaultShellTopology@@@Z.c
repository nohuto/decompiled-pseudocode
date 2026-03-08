/*
 * XREFs of ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C0049BEC
 * Callers:
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C02F4BCC (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C03BDAAC (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 * Callees:
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x1C0049A9C (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 *     ?IsMultiScreenClonedByDefault@@YA_NXZ @ 0x1C0049D40 (-IsMultiScreenClonedByDefault@@YA_NXZ.c)
 *     ?IsXbox@@YA_NXZ @ 0x1C0049E6C (-IsXbox@@YA_NXZ.c)
 */

__int64 __fastcall GetMultiScreenDefaultShellTopology(enum MultiScreenDefaultShellTopology *a1)
{
  int v2; // edi
  __int16 v3; // ax
  enum MultiScreenShellCapabilities *v4; // rdx
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !`IsWindowsTeamEdition'::`2'::s_dwProductType
    && !RtlGetProductInfo(0xAu, 0, 0, 0, &`IsWindowsTeamEdition'::`2'::s_dwProductType) )
  {
    `IsWindowsTeamEdition'::`2'::s_dwProductType = 0;
  }
  if ( `IsWindowsTeamEdition'::`2'::s_dwProductType == 119 )
    goto LABEL_8;
  if ( IsXbox() )
  {
    v3 = 1;
LABEL_9:
    *(_WORD *)a1 = v3;
    return (unsigned int)v2;
  }
  if ( IsMultiScreenClonedByDefault() )
  {
LABEL_8:
    v3 = 3;
    goto LABEL_9;
  }
  *(_WORD *)a1 = 0;
  v6 = 0;
  v2 = DefaultMultiScreenConfig::DetermineMultiScreenCapabilities((DefaultMultiScreenConfig *)&v6, v4);
  if ( v2 >= 0 && (v6 & 0x20000000) != 0 )
    *(_WORD *)a1 = (v6 & 0x4000000) != 0 ? 5 : 3;
  return (unsigned int)v2;
}
