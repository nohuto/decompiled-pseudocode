/*
 * XREFs of Feature_594580792__private_IsEnabledDeviceUsage @ 0x1C001883C
 * Callers:
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C006011C (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 * Callees:
 *     Feature_594580792__private_IsEnabledFallback @ 0x1C0018874 (Feature_594580792__private_IsEnabledFallback.c)
 */

__int64 Feature_594580792__private_IsEnabledDeviceUsage()
{
  if ( (Feature_594580792__private_featureState & 0x10) != 0 )
    return Feature_594580792__private_featureState & 1;
  else
    return Feature_594580792__private_IsEnabledFallback((unsigned int)Feature_594580792__private_featureState, 3LL);
}
