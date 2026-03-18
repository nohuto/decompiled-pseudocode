/*
 * XREFs of ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0150A68
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C003E800 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C005E540 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00605C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007D19C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     GreCreateRectRgn @ 0x1C008A630 (GreCreateRectRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C008A780 (NtGdiCreateRectRgn.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00BA604 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0152CD0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0049F70 (PushThreadGuardedObject.c)
 */

HmgInsertObjectHelper *__fastcall HmgInsertObjectHelper::HmgInsertObjectHelper(HmgInsertObjectHelper *this)
{
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  PushThreadGuardedObject(
    this,
    (__int64)this,
    (__int64)UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
