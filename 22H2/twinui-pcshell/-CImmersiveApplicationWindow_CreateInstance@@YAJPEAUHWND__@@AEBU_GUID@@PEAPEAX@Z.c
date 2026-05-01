/*
 * XREFs of ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F68B4
 * Callers:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180043220 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@@Z @ 0x1801EBBE0 (-GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0CImmersiveApplicationWindow@@QEAA@PEAUHWND__@@@Z @ 0x1801F683C (--0CImmersiveApplicationWindow@@QEAA@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CImmersiveApplicationWindow_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  CImmersiveApplicationWindow *v5; // rax
  CImmersiveApplicationWindow *v6; // rax
  CImmersiveApplicationWindow *v7; // rdi
  unsigned int v8; // ebx

  *a3 = 0LL;
  v5 = (CImmersiveApplicationWindow *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 && (v6 = CImmersiveApplicationWindow::CImmersiveApplicationWindow(v5, a1), (v7 = v6) != 0LL) )
  {
    v8 = (**(__int64 (__fastcall ***)(CImmersiveApplicationWindow *, GUID *, void **))v6)(
           v6,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           a3);
    (*(void (__fastcall **)(CImmersiveApplicationWindow *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
