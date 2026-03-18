/*
 * XREFs of VidMmCreateDevice @ 0x1C0004BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005F60 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C00911C0 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 */

VIDMM_DEVICE *__fastcall VidMmCreateDevice(struct VIDMM_GLOBAL *a1, struct DXGDEVICE *a2)
{
  VIDMM_DEVICE *v4; // rcx
  VIDMM_DEVICE *result; // rax

  v4 = (VIDMM_DEVICE *)operator new(320LL, 942696790LL, 64LL);
  result = 0LL;
  if ( v4 )
    return VIDMM_DEVICE::VIDMM_DEVICE(v4, a1, a2);
  return result;
}
