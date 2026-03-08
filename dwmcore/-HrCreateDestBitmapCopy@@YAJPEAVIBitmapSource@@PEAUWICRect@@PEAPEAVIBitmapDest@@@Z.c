/*
 * XREFs of ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802B211C
 * Callers:
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x1802B1DC8 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800A7854 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x18027DD60 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCSystemMemoryBitmap@@@@YAXPEAVCSystemMemoryBitmap@@@Z @ 0x18029BADC (--$ReleaseInterfaceNoNULL@VCSystemMemoryBitmap@@@@YAXPEAVCSystemMemoryBitmap@@@Z.c)
 */

__int64 __fastcall HrCreateDestBitmapCopy(struct IBitmapSource *a1, struct WICRect *a2, struct IBitmapDest **a3)
{
  CSystemMemoryBitmap *v5; // rax
  __int64 v6; // rcx
  CSystemMemoryBitmap *v7; // rax
  CSystemMemoryBitmap *v8; // rsi
  __int64 v9; // rcx
  struct WICRect *v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct IBitmapDest **); // rcx
  int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  v5 = (CSystemMemoryBitmap *)operator new(0xD8uLL);
  if ( !v5 )
  {
    v8 = 0LL;
    goto LABEL_9;
  }
  v7 = CSystemMemoryBitmap::CSystemMemoryBitmap(v5, 1);
  v8 = v7;
  if ( !v7 )
  {
LABEL_9:
    v12 = -2147024882;
    v14 = -2147024882;
    v16 = 101;
    goto LABEL_10;
  }
  v9 = (__int64)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = CSystemMemoryBitmap::HrInit(v8, a1, v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v16 = 106;
    goto LABEL_6;
  }
  v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IBitmapDest **))((char *)v8
                                                                        + *(int *)(*((_QWORD *)v8 + 1) + 4LL)
                                                                        + 8);
  v11 = (**v13)(v13, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    v16 = 109;
LABEL_6:
    v14 = v11;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v14, v16, 0LL);
  }
  ReleaseInterfaceNoNULL<CSystemMemoryBitmap>((__int64)v8);
  return v12;
}
