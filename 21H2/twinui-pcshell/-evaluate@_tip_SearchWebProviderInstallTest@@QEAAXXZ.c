/*
 * XREFs of ?evaluate@_tip_SearchWebProviderInstallTest@@QEAAXXZ @ 0x1800AC834
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXXZ @ 0x1800AC4C0 (-evaluate@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ @ 0x1800AB610 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ.c)
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800ADC10 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchWebProviderInstallTest::evaluate(_tip_SearchWebProviderInstallTest *this, const char *a2)
{
  const char *v3; // rax
  __int64 v4; // rdx
  __int16 v5; // cx
  const char *v6; // rdx
  __int64 v7; // r9
  char v8; // cl
  __int16 v9; // ax
  const char *v10; // rax
  __int64 v11; // r9

  if ( *((_BYTE *)this + 20) )
  {
    v3 = tip::details::reason_string((tip::details *)"Reason::install_package_regkeys_not_set", a2);
    v4 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_BYTE *)(v4 + 152) = 4;
    v5 = 1;
    goto LABEL_4;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370823>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_55370823>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 56) )
      goto LABEL_11;
    if ( !*((_BYTE *)this + 57) )
    {
LABEL_15:
      v3 = tip::details::reason_string((tip::details *)"Reason::app_not_registered", v6);
      v4 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        v5 = 3;
        *(_BYTE *)(v4 + 152) = 3;
        goto LABEL_4;
      }
      return;
    }
LABEL_21:
    v7 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v7 + 56) & 0x200) != 0 )
    {
      if ( *((int *)this + 24) < 0 )
      {
        v10 = tip::details::reason_string((tip::details *)"Reason::app_installed_regkey_set_failed", v6);
        if ( !*(_BYTE *)(v11 + 152) )
        {
          *(_QWORD *)(v11 + 160) = v10;
          *(_BYTE *)(v11 + 152) = 2;
          *(_WORD *)(v11 + 154) = 4;
        }
        return;
      }
      if ( *(_BYTE *)(v7 + 152) )
        return;
      v8 = 1;
      v9 = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v7 + 152) )
        return;
      v8 = 3;
      v9 = 16385;
    }
    *(_QWORD *)(v7 + 160) = 0LL;
    *(_WORD *)(v7 + 154) = v9;
    *(_BYTE *)(v7 + 152) = v8;
    return;
  }
  if ( *((_BYTE *)this + 169) )
  {
    v3 = tip::details::reason_string((tip::details *)"Reason::app_uninstalled_by_user", v6);
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_BYTE *)(v4 + 152) = 4;
      v5 = 6;
LABEL_4:
      *(_WORD *)(v4 + 154) = v5;
      *(_QWORD *)(v4 + 160) = v3;
      return;
    }
    return;
  }
  if ( !*((_BYTE *)this + 56) || *((_BYTE *)this + 168) )
  {
    if ( !*((_BYTE *)this + 57) )
    {
      if ( *((_BYTE *)this + 168) )
      {
        v3 = tip::details::reason_string((tip::details *)"Reason::app_update_not_registered", v6);
        v4 = *((_QWORD *)this + 1);
        if ( !*(_BYTE *)(v4 + 152) )
        {
          *(_BYTE *)(v4 + 152) = 3;
          v5 = 5;
          goto LABEL_4;
        }
        return;
      }
      goto LABEL_15;
    }
    goto LABEL_21;
  }
LABEL_11:
  v3 = tip::details::reason_string((tip::details *)"Reason::app_already_installed", v6);
  v4 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v4 + 152) )
  {
    *(_BYTE *)(v4 + 152) = 4;
    v5 = 2;
    goto LABEL_4;
  }
}
