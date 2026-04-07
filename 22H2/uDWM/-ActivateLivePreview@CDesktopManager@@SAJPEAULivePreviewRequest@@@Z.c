/*
 * XREFs of ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18003F9B4
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18003F8F8 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003FA3C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::ActivateLivePreview(struct LivePreviewRequest *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  bool v6; // [rsp+30h] [rbp-18h]

  v6 = *((_DWORD *)a1 + 8) != 0;
  LOBYTE(a2) = *(_DWORD *)a1 != 0;
  v3 = CLivePreview::Activate(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64),
         a2,
         *((_QWORD *)a1 + 1),
         *((_QWORD *)a1 + 2),
         *((_DWORD *)a1 + 6),
         *((_DWORD *)a1 + 7),
         v6,
         (char *)a1 + 36);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xAE9u);
  (*(void (__fastcall **)(WPF::HeapBase *, struct LivePreviewRequest *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a1);
  return v4;
}
