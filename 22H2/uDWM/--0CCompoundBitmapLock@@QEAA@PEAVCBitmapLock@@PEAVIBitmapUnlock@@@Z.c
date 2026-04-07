/*
 * XREFs of ??0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z @ 0x18004FC44
 * Callers:
 *     ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18004F8D0 (-Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CCompoundBitmapLock *__fastcall CCompoundBitmapLock::CCompoundBitmapLock(
        CCompoundBitmapLock *this,
        struct CBitmapLock *a2,
        struct IBitmapUnlock *a3)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CCompoundBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 2) = &CCompoundBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 3) = &CCompoundBitmapLock::`vftable'{for `IWICBitmapLock'};
  (*(void (__fastcall **)(struct CBitmapLock *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 5) = a3;
  (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
