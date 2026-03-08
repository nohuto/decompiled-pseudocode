/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C016AED0
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C016B650 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 *     DxgkGetPathsModality @ 0x1C01BE290 (DxgkGetPathsModality.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C01BFA3C (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C4888 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01C538C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C03BB5D4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01DD5A0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall DxgkGetAdapterDefaultScaling(struct _LUID *a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // edi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  struct DXGADAPTER *v7; // rbx
  __int64 v8; // rcx
  char v9[8]; // [rsp+50h] [rbp-28h] BYREF
  struct DXGADAPTER *v10; // [rsp+58h] [rbp-20h]
  char v11; // [rsp+60h] [rbp-18h]
  unsigned __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  AdapterDefaultScaling = D3DKMDT_VPPS_STRETCHED;
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v12);
  v7 = v6;
  if ( v6 && *((_QWORD *)v6 + 365) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      WdLogSingleEntry1(1LL, 8212LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Potentinal Deadlock code path, Please contact basevid",
        8212LL,
        0LL,
        0LL,
        0LL,
        0LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, *(_QWORD *)(*((_QWORD *)v7 + 365) + 104LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v7 + 365) + 104LL));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    }
    else
    {
      v10 = v7;
      v11 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
      if ( *((_DWORD *)v7 + 50) == 1 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64)&v12,
          *(_QWORD *)(*((_QWORD *)v7 + 365) + 104LL));
        v8 = *((_QWORD *)v7 + 365);
        if ( *(_BYTE *)(v8 + 289) )
          AdapterDefaultScaling = D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v8 + 104));
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
      }
      else
      {
        WdLogSingleEntry3(3LL, v7, *((int *)v7 + 102), *((unsigned int *)v7 + 101));
      }
      if ( v11 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
    }
    DXGADAPTER::ReleaseReference(v7);
  }
  else
  {
    WdLogSingleEntry2(3LL, a1->HighPart, a1->LowPart);
  }
  *a2 = AdapterDefaultScaling;
}
