/*
 * XREFs of ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00A1EAC
 * Callers:
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C00A1DC0 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0252A34 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005C4B4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0069D34 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x1C00A2014 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqxxqtz_EtwWriteTransfer @ 0x1C02530E0 (McTemplateK0qqqxxqtz_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::EnsureWriteableInteraction(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char a3,
        char a4,
        const unsigned __int16 *a5,
        struct DirectComposition::CInteractionMarshaler **a6)
{
  __int64 v8; // rcx
  int v9; // edi
  struct DirectComposition::CResourceMarshaler *v11; // rbx
  int v13; // edx
  struct DirectComposition::CResourceMarshaler *v14; // [rsp+60h] [rbp-28h] BYREF
  char v15; // [rsp+90h] [rbp+8h] BYREF

  v8 = *((_QWORD *)this + 27);
  v9 = 0;
  if ( !v8 || a4 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 128LL))(v8);
    v11 = v14;
    if ( v14 )
    {
LABEL_4:
      *a6 = v11;
      return (unsigned int)v9;
    }
  }
  v15 = 0;
  v9 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0x59uLL, &v14);
  if ( v9 >= 0 )
  {
    v11 = v14;
    if ( !a3 || (v9 = DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(v14), v9 >= 0) )
    {
      v9 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)this + 248LL))(
             this,
             a2,
             22LL,
             v11,
             &v15);
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
      if ( v9 >= 0 )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
          McTemplateK0qqqxxqtz_EtwWriteTransfer(
            *((_DWORD *)this + 8),
            v13,
            *((_DWORD *)v11 + 8),
            *((_DWORD *)a2 + 7),
            *((_DWORD *)this + 8),
            *((_DWORD *)v11 + 8),
            *((_DWORD *)this + 8),
            *((_DWORD *)v11 + 8));
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v11);
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, this);
        goto LABEL_4;
      }
    }
  }
  return (unsigned int)v9;
}
