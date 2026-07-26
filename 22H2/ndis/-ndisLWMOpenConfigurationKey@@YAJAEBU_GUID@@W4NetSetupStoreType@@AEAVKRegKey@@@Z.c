/*
 * XREFs of ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@W4NetSetupStoreType@@AEAVKRegKey@@@Z @ 0x1C00F91DC
 * Callers:
 *     NdisOpenConfiguration @ 0x1C0028C90 (NdisOpenConfiguration.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116648 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0032060 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C0062EDC (WPP_RECORDER_SF__guid_d.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C00F9008 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0102B24 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 __fastcall ndisLWMOpenConfigurationKey(const struct _GUID *a1, int a2, struct KRegKey *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  char v10[8]; // [rsp+28h] [rbp-240h]
  char v11[4]; // [rsp+30h] [rbp-238h]
  wchar_t v12[256]; // [rsp+40h] [rbp-228h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x89u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (__int64)a1);
  v6 = ndisLWMBuildConfigurationKeyPath(a2, &a1->Data1, v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = KRegKey::Open(a3, 0xF003Fu, v12, 0LL);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_10;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v7;
    v8 = 139;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v7;
    v8 = 138;
  }
  *(_DWORD *)v10 = v6;
  WPP_RECORDER_SF_d(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    1u,
    v8,
    (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
    *(_QWORD *)v10);
LABEL_10:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v7;
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Cu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (__int64)a1,
      *(_DWORD *)v11);
  }
  return v7;
}
