/*
 * XREFs of _EnforceDriverModelScalingPolicy @ 0x1C01C5508
 * Callers:
 *     EnforceDriverModelScalingPolicy @ 0x1C01C5434 (EnforceDriverModelScalingPolicy.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C03BB5D4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01DD5A0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(__int64 a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  __int64 v4; // rdx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v5; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  struct _KTHREAD **v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 2920);
  if ( !*(_BYTE *)(v4 + 289) )
  {
    v5 = *a2;
    if ( *(int *)(*(_QWORD *)(v4 + 16) + 2820LL) < 1105 )
    {
      if ( (unsigned int)(v5 - 4) > 1 )
        return;
    }
    else if ( v5 != D3DKMDT_VPPS_NOTSPECIFIED )
    {
      return;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v8, *(_QWORD *)(v4 + 104));
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*(_QWORD *)(a1 + 2920) + 104LL));
    v7 = (struct _KTHREAD **)(v8 + 40);
    *a2 = AdapterDefaultScaling;
    DXGFASTMUTEX::Release(v7);
  }
}
