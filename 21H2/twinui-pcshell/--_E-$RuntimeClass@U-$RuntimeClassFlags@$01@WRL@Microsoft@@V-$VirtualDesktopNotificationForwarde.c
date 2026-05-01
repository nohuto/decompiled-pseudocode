/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804A2C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@0AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1801B50A0 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  void *v3; // rdi

  *((_DWORD *)a1 + 29) = -1073741823;
  v3 = (void *)*((_QWORD *)a1 + 8);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(*((_QWORD *)a1 + 8), *((_QWORD *)a1 + 9));
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)a1 + 10) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)a1 + 8) = 0LL;
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 10) = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1 + 7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1 + 5);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x78);
  return a1;
}
