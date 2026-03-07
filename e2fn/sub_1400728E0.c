PDEVICE_OBJECT __fastcall sub_1400728E0(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT result; // rax
  void *v3; // rax
  void *v4; // r8
  void *v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-18h]

  result = (PDEVICE_OBJECT)&off_1400DF038;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    result = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
    {
      v3 = *(void **)(a2 + 16);
      v4 = &unk_1400D44E0;
      v5 = &unk_1400D44E0;
      if ( v3 )
        v5 = v3;
      v6 = (__int64)v5;
      LOBYTE(v5) = 5;
      if ( *(_QWORD *)(a1 + 16) )
        v4 = *(void **)(a1 + 16);
      return (PDEVICE_OBJECT)sub_1400B0338(
                               *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
                               (_DWORD)v5,
                               8,
                               91,
                               (__int64)&unk_1400D91A8,
                               (__int64)v4,
                               v6);
    }
  }
  return result;
}
