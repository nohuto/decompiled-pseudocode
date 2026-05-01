/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITaskDataCacheBroker@Activities@Data@Internal@Windows@@UISetActivityMonitor@5678@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180042960
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042890 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActiv.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v4; // r8
  _DWORD *v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r11
  __int64 v14; // r11
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rcx

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_212b9f5d_14a9_510f_b027_ff423fa69cf8, a3) )
  {
    *v4 = v6;
    return 0LL;
  }
  else
  {
    if ( *v5 == 438378839
      && v5[1] == *(_DWORD *)&GUID_1a212157_be49_4892_afc4_1a168e546329.Data2
      && v5[2] == *(_DWORD *)GUID_1a212157_be49_4892_afc4_1a168e546329.Data4
      && v5[3] == *(_DWORD *)&GUID_1a212157_be49_4892_afc4_1a168e546329.Data4[4] )
    {
      *v4 = v6 + 8;
      return 0;
    }
    if ( (unsigned int)InlineIsEqualGUID(v5, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352, v4) )
    {
      *v8 = v10;
      v15 = 0;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4, v8) )
    {
      *v12 = v13;
      v15 = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, v12) )
      {
        *a3 = v14 + 8;
        v15 = 0;
      }
      else
      {
        v15 = -2147467262;
      }
      if ( v15 != -2147467262 )
        return v15;
    }
    if ( v15 != -2147467262 )
      return v15;
    if ( !(unsigned int)InlineIsEqualGUID(v9, &GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea, 0LL)
      && !(unsigned int)InlineIsEqualGUID(v16, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, v17)
      && !(unsigned int)InlineIsEqualGUID(v19, &GUID_00000003_0000_0000_c000_000000000046, v17) )
    {
      return (unsigned int)-2147467262;
    }
    *a3 = v18;
    return (unsigned int)v17;
  }
}
