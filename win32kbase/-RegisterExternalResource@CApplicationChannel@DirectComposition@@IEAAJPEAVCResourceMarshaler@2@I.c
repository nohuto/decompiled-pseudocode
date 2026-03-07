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
