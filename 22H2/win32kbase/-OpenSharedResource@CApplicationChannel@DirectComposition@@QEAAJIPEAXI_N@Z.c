/*
 * XREFs of ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C004BE9C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C007F5B4 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C00298EC (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C004BF3C (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0060A08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     McTemplateK0qqqxxqtt_EtwWriteTransfer @ 0x1C01D5710 (McTemplateK0qqqxxqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenSharedResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        bool a5)
{
  char v7; // r14
  int inserted; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdi
  struct DirectComposition::CResourceMarshaler *v11; // [rsp+60h] [rbp-18h] BYREF

  v11 = 0LL;
  v7 = a4;
  inserted = DirectComposition::CApplicationChannel::OpenInternalSharedResource(this, a3, a4, a5, &v11);
  if ( inserted >= 0 )
  {
    v9 = v11;
    inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
                 (DirectComposition::CApplicationChannel *)((char *)this + 56),
                 v11,
                 a2);
    if ( inserted < 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(this, v9);
    }
    else if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000000LL) != 0 )
    {
      McTemplateK0qqqxxqtt_EtwWriteTransfer(
        0,
        a2,
        *((_DWORD *)v9 + 6),
        *((_DWORD *)this + 7),
        *((_DWORD *)v9 + 6),
        a2,
        *((_DWORD *)v9 + 6),
        a2,
        v7,
        0,
        1);
    }
  }
  return (unsigned int)inserted;
}
