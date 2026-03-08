/*
 * XREFs of ?ReleaseRootVisual@CDesktopTreeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D0A70
 * Callers:
 *     ?ReleaseAllReferences@CDesktopTreeMarshaler@DirectComposition@@EEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D0990 (-ReleaseAllReferences@CDesktopTreeMarshaler@DirectComposition@@EEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetReferenceProperty@CDesktopTreeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00D09B0 (-SetReferenceProperty@CDesktopTreeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDesktopTreeMarshaler::ReleaseRootVisual(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 312LL))(v4);
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *((struct DirectComposition::CResourceMarshaler **)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    *((_DWORD *)this + 4) |= 0x40u;
  }
}
