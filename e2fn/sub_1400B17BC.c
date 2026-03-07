PDEVICE_OBJECT __fastcall sub_1400B17BC(const wchar_t *a1, const wchar_t *a2, const wchar_t *a3)
{
  PDEVICE_OBJECT result; // rax

  result = (PDEVICE_OBJECT)&off_1400DF038;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    result = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
      return (PDEVICE_OBJECT)sub_1400A3320(
                               *(_QWORD *)(*((_QWORD *)P + 3) + 16LL),
                               8u,
                               0xBu,
                               0x2Bu,
                               (__int64)&unk_1400D9868,
                               a3,
                               a2,
                               a1);
  }
  return result;
}
