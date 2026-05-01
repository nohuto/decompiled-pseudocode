/*
 * XREFs of ??1positioningOperationInfo@@QEAA@XZ @ 0x1802140AC
 * Callers:
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x180214478 (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180215D98 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall positioningOperationInfo::~positioningOperationInfo(positioningOperationInfo *this)
{
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((char *)this + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
