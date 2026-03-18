/*
 * XREFs of ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0083D68
 * Callers:
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C0083C84 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C021B798 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x1C00838D4 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqxxqtz_EtwWriteTransfer @ 0x1C021BDE0 (McTemplateK0qqqxxqtz_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::EnsureInteraction(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char a3,
        const unsigned __int16 *a4,
        struct DirectComposition::CInteractionMarshaler **a5)
{
  int v5; // edi
  int v10; // ecx
  struct DirectComposition::CResourceMarshaler *v11; // [rsp+60h] [rbp-28h] BYREF
  char v12; // [rsp+90h] [rbp+8h] BYREF

  v5 = 0;
  v12 = 0;
  if ( !*((_QWORD *)this + 28) )
  {
    v11 = 0LL;
    v5 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, (DirectComposition *)0x57, &v11);
    if ( v5 < 0
      || (v5 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)this + 152LL))(
                 this,
                 a2,
                 23LL,
                 v11,
                 &v12),
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v11),
          v5 < 0)
      || a3 && (v5 = DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(v11), v5 < 0) )
    {
      if ( v11 )
        (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 152LL))(
          this,
          a2,
          23LL);
    }
    else
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
        McTemplateK0qqqxxqtz_EtwWriteTransfer(
          v10,
          *((_DWORD *)v11 + 8),
          0,
          *((_DWORD *)a2 + 7),
          *((_DWORD *)this + 8),
          *((_DWORD *)v11 + 8),
          *((_DWORD *)this + 8),
          *((_DWORD *)v11 + 8));
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v11);
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, this);
    }
  }
  *a5 = (struct DirectComposition::CInteractionMarshaler *)*((_QWORD *)this + 28);
  return (unsigned int)v5;
}
