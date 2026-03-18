/*
 * XREFs of ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1C011B3C4
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002B6EC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     FreeTimer @ 0x1C003C040 (FreeTimer.c)
 *     NtUserKillTimer @ 0x1C011B3E0 (NtUserKillTimer.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0122FB0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget(IdentifyPrimaryDestroyTarget *this)
{
  if ( *(_BYTE *)this )
    gphePrimaryDestroyTarget = 0LL;
}
