void __fastcall sub_140091144(_QWORD *a1)
{
  __int64 *v2; // rax
  _BYTE v3[16]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v4[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    v2 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v3);
    sub_140073EBC((__int64)v4, v2, (__int64)sub_14008FB90);
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 24LL))(a1, v4);
    sub_14007450C(v4);
  }
}
