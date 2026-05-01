/*
 * XREFs of ??1positioningOperationInfo@@QEAA@XZ @ 0x18021425C
 * Callers:
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x180214628 (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180215F48 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall positioningOperationInfo::~positioningOperationInfo(positioningOperationInfo *this)
{
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((char *)this + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
