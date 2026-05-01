/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@UIApplicationViewChangeListener@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1804C6ED8
 * Callers:
 *     _AppUsageTracker::AppUsageTracker_::_1_::dtor$0 @ 0x1804C6E61 (_AppUsageTracker--AppUsageTracker_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 52) = -1073741823;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 40));
}
