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
