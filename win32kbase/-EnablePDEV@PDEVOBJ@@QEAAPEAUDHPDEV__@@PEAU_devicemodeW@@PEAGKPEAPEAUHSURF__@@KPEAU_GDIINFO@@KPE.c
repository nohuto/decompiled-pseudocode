/*
 * XREFs of ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00CD3F8
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

struct DHPDEV__ *__fastcall PDEVOBJ::EnablePDEV(
        PDEVOBJ *this,
        struct _devicemodeW *a2,
        unsigned __int16 *a3,
        __int64 a4,
        HSURF *a5,
        unsigned int a6,
        struct _GDIINFO *a7,
        unsigned int a8,
        struct tagDEVINFO *a9,
        HDEV a10,
        unsigned __int16 *a11,
        void *a12)
{
  return (struct DHPDEV__ *)(*(__int64 (__fastcall **)(struct _devicemodeW *, unsigned __int16 *, __int64, HSURF *, int, struct _GDIINFO *, int, struct tagDEVINFO *, HDEV, unsigned __int16 *, void *))(*(_QWORD *)this + 2664LL))(
                              a2,
                              a3,
                              6LL,
                              a5,
                              320,
                              a7,
                              312,
                              a9,
                              a10,
                              a11,
                              a12);
}
