int __fastcall IVMeasureRimDevForIVPnpCreatePacket(
        struct RIMDEV *a1,
        const struct _UNICODE_STRING *a2,
        struct CIVPnPCreateSerializer *a3)
{
  __int64 v3; // rsi
  int result; // eax

  v3 = *((_QWORD *)a3 + 2);
  result = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 8), (const struct _UNICODE_STRING *)a1 + 13, 1);
  if ( result >= 0 )
  {
    *((_DWORD *)a3 + 2) += (*((_DWORD *)a1 + 82) + 7) & 0xFFFFFFF8;
    if ( *((_BYTE *)a1 + 48) != 2 )
      return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 1);
    result = CIVPnPCreateSerializer::Serialize(
               a3,
               (struct _IV_HID_DEVICE_INFO *)(v3 + 88),
               (struct RIMDEV *)((char *)a1 + 456),
               1);
    if ( result >= 0 )
      return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 1);
  }
  return result;
}
