/*
 * XREFs of ?GetIids@MeetNowExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800BBB80
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801656F0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UINetworkFlyoutExp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MeetNowExperienceManager::GetIids(
        MeetNowExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_c9ddc674_b44b_4c67_9d79_2b237d9be05a;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
    v6[3] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
