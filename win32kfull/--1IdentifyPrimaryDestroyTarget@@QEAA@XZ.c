/*
 * XREFs of ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1C01A6EC8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget(IdentifyPrimaryDestroyTarget *this)
{
  if ( *(_BYTE *)this )
    gphePrimaryDestroyTarget = 0LL;
}
