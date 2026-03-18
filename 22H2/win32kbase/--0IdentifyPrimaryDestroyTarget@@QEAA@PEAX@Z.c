/*
 * XREFs of ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0064C78
 * Callers:
 *     HMDestroyObject @ 0x1C0064C30 (HMDestroyObject.c)
 *     DestroyMonitor @ 0x1C00A04C0 (DestroyMonitor.c)
 *     DestroyKL @ 0x1C00BFE78 (DestroyKL.c)
 *     DestroyKF @ 0x1C00BFF3C (DestroyKF.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C0064CAC (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 */

IdentifyPrimaryDestroyTarget *__fastcall IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        _DWORD *a2)
{
  *(_BYTE *)this = 0;
  IdentifyPrimaryDestroyTarget::Identify(
    this,
    (struct _HANDLEENTRY *)((char *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*a2));
  return this;
}
