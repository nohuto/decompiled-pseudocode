/*
 * XREFs of ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18004F7C0
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18004F650 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18004F8B4 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapLock::HrInit(
        CBitmapLock *this,
        struct IBitmapUnlock *a2,
        unsigned int a3,
        unsigned int a4,
        const struct PixelFormatInfo *a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        enum WICBitmapLockFlags a9,
        bool a10,
        struct IUnknown *a11)
{
  int v15; // eax
  unsigned int v16; // esi

  v15 = HrCheckBufferSize((enum DXGI_FORMAT)*(_DWORD *)a5, a6, a3, a4, a7);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x5Fu);
  }
  else
  {
    *((_BYTE *)this + 89) = a10;
    *((_QWORD *)this + 12) = a11;
    *((_BYTE *)this + 88) = 1;
    *((_DWORD *)this + 26) = a3;
    *((_DWORD *)this + 27) = a4;
    *(_QWORD *)((char *)this + 116) = *(_QWORD *)a5;
    *((_DWORD *)this + 31) = *((_DWORD *)a5 + 2);
    *((_QWORD *)this + 16) = a8;
    *((_DWORD *)this + 28) = a6;
    *((_DWORD *)this + 34) = a7;
    *((_QWORD *)this + 19) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_DWORD *)this + 36) = a9;
  }
  return v16;
}
