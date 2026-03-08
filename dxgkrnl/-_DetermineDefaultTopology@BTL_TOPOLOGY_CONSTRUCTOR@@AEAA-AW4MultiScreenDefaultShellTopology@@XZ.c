/*
 * XREFs of ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C03BDAAC
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03BD220 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C0049BEC (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int16 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(__int64 a1)
{
  int MultiScreenDefaultShellTopology; // eax
  char v3; // bl
  __int16 result; // ax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  DXGADAPTER *v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  LOWORD(v9) = 0;
  MultiScreenDefaultShellTopology = GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v9);
  v3 = 1;
  if ( MultiScreenDefaultShellTopology >= 0 )
  {
    result = v9;
  }
  else
  {
    WdLogSingleEntry1(1LL, MultiScreenDefaultShellTopology);
    result = 0;
  }
  if ( !result )
  {
    Global = DXGGLOBAL::GetGlobal();
    v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a1 + 12), &v9);
    v7 = v6;
    if ( v6 )
    {
      v8 = *((_QWORD *)v6 + 365);
      if ( (!*(_BYTE *)(v8 + 289) || !*(_BYTE *)(v8 + 290))
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 27) + 64LL) + 40LL) + 28LL) < 0x4003u )
      {
        v3 = 0;
      }
      DXGADAPTER::ReleaseReference(v7);
    }
    if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a1 + 28)) )
    {
      if ( !*(_BYTE *)(a1 + 52) || *(_BYTE *)(a1 + 60) )
        return 3;
      else
        return 4 - (v3 != 0);
    }
    else
    {
      return 4;
    }
  }
  return result;
}
