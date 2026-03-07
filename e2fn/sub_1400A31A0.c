PDEVICE_OBJECT __fastcall sub_1400A31A0(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT result; // rax
  __int64 v4; // [rsp+30h] [rbp-18h]

  result = (PDEVICE_OBJECT)&off_1400DF038;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    result = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
    {
      v4 = a2;
      LOBYTE(a2) = 8;
      return (PDEVICE_OBJECT)sub_1400A3320(
                               *(_QWORD *)(*((_QWORD *)P + 3) + 16LL),
                               a2,
                               14,
                               12,
                               (__int64)&unk_1400D4668,
                               a3,
                               v4,
                               a1);
    }
  }
  return result;
}
