/*
 * XREFs of GetConfigurationFlag @ 0x1800CBCCC
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800CC2E0 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18003A580 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 */

bool __fastcall GetConfigurationFlag(wchar_t *a1)
{
  return (unsigned int)RegistryHelpers::GetDwordWithDefault(
                         (RegistryHelpers *)a1,
                         (const WCHAR *)&stru_1801C4430,
                         a1,
                         0LL) == 1;
}
