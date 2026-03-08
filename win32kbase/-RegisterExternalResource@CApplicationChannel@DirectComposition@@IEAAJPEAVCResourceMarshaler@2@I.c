/*
 * XREFs of ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1C00A1690
 * Callers:
 *     ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00A13E8 (-OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00A1498 (-CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00A1588 (-OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C006BE9C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     McTemplateK0qqqxxqtt_EtwWriteTransfer @ 0x1C024BA98 (McTemplateK0qqqxxqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RegisterExternalResource(
        _DWORD *a1,
        _DWORD *a2,
        unsigned int a3,
        char a4,
        int a5)
{
  int inserted; // esi

  inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
               (DirectComposition::CLinearObjectTableBase *)(a1 + 14),
               a2,
               a3);
  if ( inserted < 0 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      (DirectComposition::CApplicationChannel *)a1,
      (struct DirectComposition::CResourceMarshaler *)a2);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000000LL) != 0 )
  {
    McTemplateK0qqqxxqtt_EtwWriteTransfer(a3, a5 == 2, 0, a1[7], a2[8], a3, a2[8], a3, a4, a5 == 1, a5 == 2);
  }
  return (unsigned int)inserted;
}
