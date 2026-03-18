/*
 * XREFs of ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C0015178
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C00150D4 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00585EC (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     McTemplateK0qqqxxqtt_EtwWriteTransfer @ 0x1C02152D0 (McTemplateK0qqqxxqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  char v4; // si
  int InternalSharedResource; // eax
  int inserted; // ebx
  int v10; // ecx
  struct DirectComposition::CResourceMarshaler *v12[2]; // [rsp+60h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v4 = a3;
  if ( a4 )
    InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalSharedResource(this, a3, v12);
  else
    InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalResource(
                               this,
                               (DirectComposition *)a3,
                               v12);
  inserted = InternalSharedResource;
  if ( InternalSharedResource >= 0 )
  {
    inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
                 (DirectComposition::CApplicationChannel *)((char *)this + 56),
                 v12[0],
                 a2);
    if ( inserted < 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(this, v12[0]);
    }
    else if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000000LL) != 0 )
    {
      McTemplateK0qqqxxqtt_EtwWriteTransfer(
        v10,
        a2,
        0,
        *((_DWORD *)this + 7),
        *((_DWORD *)v12[0] + 8),
        a2,
        *((_DWORD *)v12[0] + 8),
        a2,
        v4,
        a4,
        0);
    }
  }
  return (unsigned int)inserted;
}
