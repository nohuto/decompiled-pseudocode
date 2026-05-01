/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView@@UIApplicationView2@@UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180058930
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042D90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCApplicationViewBase@@@Details@23@UIWeakReferenceSource@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180202210 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U-$ImplementsMarker@VC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // eax
  __int64 v5; // rdx

  v3 = *a2;
  if ( *a2 == 925769019
    && a2[1] == *(_DWORD *)&GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data2
    && a2[2] == *(_DWORD *)GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data4
    && a2[3] == *(_DWORD *)&GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v5 = a1 + 8;
    if ( v3 == 2133140026
      && a2[1] == *(_DWORD *)&GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1.Data2
      && a2[2] == *(_DWORD *)GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1.Data4
      && a2[3] == *(_DWORD *)&GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1.Data4[4]
      || (v5 = a1 + 16, v3 == -1751327192)
      && a2[1] == *(_DWORD *)&GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data2
      && a2[2] == *(_DWORD *)GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data4
      && a2[3] == *(_DWORD *)&GUID_979cde28_2164_437c_b963_55e5d4ac1d02.Data4[4] )
    {
      *a3 = v5;
      return 0LL;
    }
    else if ( v3 == 480212245
           && a2[1] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data2
           && a2[2] == *(_DWORD *)GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4
           && a2[3] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4[4] )
    {
      *a3 = a1 + 24;
      return 0LL;
    }
    else
    {
      return 2147500034LL;
    }
  }
}
