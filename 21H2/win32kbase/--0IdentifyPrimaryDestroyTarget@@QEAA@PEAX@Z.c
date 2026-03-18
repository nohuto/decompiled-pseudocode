/*
 * XREFs of ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C004E70C
 * Callers:
 *     HMDestroyObject @ 0x1C004E3A0 (HMDestroyObject.c)
 *     DestroyMonitor @ 0x1C0050630 (DestroyMonitor.c)
 *     DestroyKF @ 0x1C0051F60 (DestroyKF.c)
 *     DestroyKL @ 0x1C005206C (DestroyKL.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C004E740 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 */

IdentifyPrimaryDestroyTarget *__fastcall IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        _DWORD *a2)
{
  *(_BYTE *)this = 0;
  IdentifyPrimaryDestroyTarget::Identify(
    this,
    (struct _HANDLEENTRY *)((char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*a2));
  return this;
}
