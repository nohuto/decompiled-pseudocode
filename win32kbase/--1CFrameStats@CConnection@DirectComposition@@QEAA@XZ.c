/*
 * XREFs of ??1CFrameStats@CConnection@DirectComposition@@QEAA@XZ @ 0x1C00BFC70
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ @ 0x1C00BFC88 (-FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::CFrameStats::~CFrameStats(
        DirectComposition::CConnection::CFrameStats *this)
{
  DirectComposition::CConnection::CFrameStats::FreeTargetPool(this);
}
