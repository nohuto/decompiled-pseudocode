/*
 * XREFs of _lambda_a17036ab546c309d72641a479b5ef0ed_::__lambda_a17036ab546c309d72641a479b5ef0ed_ @ 0x18024B614
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed___::_scalar_deleting_destructor_ @ 0x18024BCC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a17036ab546c309d72641a479b5ef0ed___--_scala.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18024BDBC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x18024B788 (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_a17036ab546c309d72641a479b5ef0ed_::__lambda_a17036ab546c309d72641a479b5ef0ed_(__int64 *a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 2));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
