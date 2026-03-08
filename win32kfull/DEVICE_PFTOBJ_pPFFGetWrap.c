/*
 * XREFs of DEVICE_PFTOBJ_pPFFGetWrap @ 0x1C026E440
 * Callers:
 *     <none>
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00039AC (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 */

struct PFF *__fastcall DEVICE_PFTOBJ_pPFFGetWrap(DEVICE_PFTOBJ *a1, unsigned __int64 a2, struct PFF ***a3)
{
  return DEVICE_PFTOBJ::pPFFGet(a1, a2, a3);
}
