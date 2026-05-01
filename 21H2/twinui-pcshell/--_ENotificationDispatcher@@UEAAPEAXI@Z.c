/*
 * XREFs of ??_ENotificationDispatcher@@UEAAPEAXI@Z @ 0x1801FDC90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

NotificationDispatcher *__fastcall NotificationDispatcher::`vector deleting destructor'(
        NotificationDispatcher *this,
        char a2)
{
  _QWORD *v4; // rcx
  unsigned __int64 i; // rdi
  __int64 v6; // rdx

  v4 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 7); ++i )
    {
      v4 = (_QWORD *)*((_QWORD *)this + 6);
      v6 = v4[i];
      if ( v6 )
      {
        v4[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v4 = (_QWORD *)*((_QWORD *)this + 6);
      }
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
