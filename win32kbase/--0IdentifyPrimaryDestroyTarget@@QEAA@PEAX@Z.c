/*
 * XREFs of ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0086878
 * Callers:
 *     HMDestroyObject @ 0x1C0086830 (HMDestroyObject.c)
 *     DestroyMonitor @ 0x1C00B5C00 (DestroyMonitor.c)
 *     DestroyKL @ 0x1C00CF5A8 (DestroyKL.c)
 *     DestroyKF @ 0x1C00CF66C (DestroyKF.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C00868AC (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 */

IdentifyPrimaryDestroyTarget *__fastcall IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        _DWORD *a2)
{
  *(_BYTE *)this = 0;
  IdentifyPrimaryDestroyTarget::Identify(
    this,
    (struct _HANDLEENTRY *)((char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*a2));
  return this;
}
