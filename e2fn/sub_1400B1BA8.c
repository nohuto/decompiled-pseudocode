PDEVICE_OBJECT __fastcall sub_1400B1BA8(const wchar_t *a1)
{
  PDEVICE_OBJECT result; // rax

  result = (PDEVICE_OBJECT)&off_1400DF038;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    result = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
      return (PDEVICE_OBJECT)sub_1400A3054(
                               *(_QWORD *)(*((_QWORD *)P + 3) + 16LL),
                               8u,
                               8LL,
                               0x10u,
                               (__int64)&unk_1400D9868,
                               a1);
  }
  return result;
}
