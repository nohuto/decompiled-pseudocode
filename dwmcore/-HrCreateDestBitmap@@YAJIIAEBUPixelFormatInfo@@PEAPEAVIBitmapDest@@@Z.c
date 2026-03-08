/*
 * XREFs of ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18029C1D0
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800A7C00 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1802B40B0 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800A7854 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x18027DC4C (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCSystemMemoryBitmap@@@@YAXPEAVCSystemMemoryBitmap@@@Z @ 0x18029BADC (--$ReleaseInterfaceNoNULL@VCSystemMemoryBitmap@@@@YAXPEAVCSystemMemoryBitmap@@@Z.c)
 */

__int64 __fastcall HrCreateDestBitmap(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        struct IBitmapDest **a4)
{
  CSystemMemoryBitmap *v8; // rax
  __int64 v9; // rcx
  CSystemMemoryBitmap *v10; // rax
  __int64 v11; // rsi
  char *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct IBitmapDest **); // rcx
  int v16; // r9d
  unsigned int v18; // [rsp+20h] [rbp-28h]

  *a4 = 0LL;
  v8 = (CSystemMemoryBitmap *)operator new(0xD8uLL);
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_9;
  }
  v10 = CSystemMemoryBitmap::CSystemMemoryBitmap(v8, 1);
  v11 = (__int64)v10;
  if ( !v10 )
  {
LABEL_9:
    v14 = -2147024882;
    v16 = -2147024882;
    v18 = 131;
    goto LABEL_10;
  }
  v12 = (char *)v10 + *(int *)(*((_QWORD *)v10 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = CSystemMemoryBitmap::HrInit((void **)v11, a1, a2, a3, 1);
  v14 = v13;
  if ( v13 < 0 )
  {
    v18 = 137;
    goto LABEL_6;
  }
  v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IBitmapDest **))(v11
                                                                        + *(int *)(*(_QWORD *)(v11 + 8) + 4LL)
                                                                        + 8LL);
  v13 = (**v15)(v15, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, a4);
  v14 = v13;
  if ( v13 < 0 )
  {
    v18 = 140;
LABEL_6:
    v16 = v13;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v16, v18, 0LL);
  }
  ReleaseInterfaceNoNULL<CSystemMemoryBitmap>(v11);
  return v14;
}
