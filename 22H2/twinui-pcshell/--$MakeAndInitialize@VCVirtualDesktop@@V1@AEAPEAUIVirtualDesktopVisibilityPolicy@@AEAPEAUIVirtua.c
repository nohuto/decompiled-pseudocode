/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktop@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktop@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1804BBF58
 * Callers:
 *     ?CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BC398 (-CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B05E0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1802F70A8 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktop@@QEAA@XZ @ 0x1804BC110 (--0CVirtualDesktop@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z @ 0x1804BC218 (-Attach@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1804BC708 (-RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualD.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktop,CVirtualDesktop,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
        CVirtualDesktop **a1,
        struct IVirtualDesktopVisibilityPolicy **a2,
        struct IVirtualDesktopLock **a3)
{
  CVirtualDesktop *v6; // rax
  int v7; // edi
  CVirtualDesktop *v8; // rax
  struct IVirtualDesktopLock *v9; // r8
  CVirtualDesktop *v10; // rbx
  volatile int *v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  CVirtualDesktop *v15; // [rsp+30h] [rbp+8h] BYREF
  CVirtualDesktop *v16; // [rsp+48h] [rbp+20h]

  *a1 = 0LL;
  v6 = (CVirtualDesktop *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v6;
  if ( v6 )
  {
    v8 = CVirtualDesktop::CVirtualDesktop(v6);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<CVirtualDesktop>::Attach(&v15, v8);
    v9 = *a3;
    v10 = v15;
    v7 = CVirtualDesktop::RuntimeClassInitialize(v15, *a2, v9);
    if ( v7 >= 0 )
    {
      if ( v10 )
      {
        v12 = *((_QWORD *)v10 + 9);
        while ( v12 >= 0 )
        {
          if ( (_DWORD)v12 != 0x7FFFFFFF )
          {
            v13 = v12;
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 9, v12 + 1, v12);
            if ( v13 != v12 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
          (Microsoft::WRL::Details *)(2 * v12 + 16),
          v11);
LABEL_11:
        v10 = v15;
      }
      *a1 = v10;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
