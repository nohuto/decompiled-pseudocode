PDEVICE_OBJECT __fastcall sub_1400AC870(const wchar_t *a1, const wchar_t *a2, const wchar_t *a3)
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
                               5u,
                               0x16u,
                               (__int64)&unk_1400D7C78,
                               a3,
                               a2,
                               a1);
  }
  return result;
}
