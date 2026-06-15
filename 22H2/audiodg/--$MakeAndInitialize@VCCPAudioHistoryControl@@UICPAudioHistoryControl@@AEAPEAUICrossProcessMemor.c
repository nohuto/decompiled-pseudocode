/*
 * XREFs of ??$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Z @ 0x14005F800
 * Callers:
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z @ 0x14004F8B0 (-Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??0CCPAudioHistoryControl@@QEAA@XZ @ 0x14005FAA8 (--0CCPAudioHistoryControl@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJPEAUICrossProcessMemory@@@Z @ 0x14005FF28 (-RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJPEAUICrossProcessMemory@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryControl,ICPAudioHistoryControl,ICrossProcessMemory * &>(
        _QWORD *a1,
        struct ICrossProcessMemory **a2)
{
  CCPAudioHistoryControl *v4; // rax
  int v5; // edi
  CCPAudioHistoryControl *v6; // rbx

  *a1 = 0LL;
  v4 = (CCPAudioHistoryControl *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CCPAudioHistoryControl::CCPAudioHistoryControl(v4);
    v5 = CCPAudioHistoryControl::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(CCPAudioHistoryControl *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_e14eb825_78cf_46fa_9c77_3b7330248ba0,
             a1);
    if ( v6 )
      (*(void (__fastcall **)(CCPAudioHistoryControl *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
