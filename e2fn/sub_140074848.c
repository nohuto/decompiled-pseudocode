void *(__fastcall **__fastcall sub_140074848(__int64 a1))(CUnknown *__hidden this, unsigned int)
{
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax
  __int64 *v3; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v5[13]; // [rsp+30h] [rbp-68h] BYREF

  result = (void *(__fastcall **)(CUnknown *__hidden, unsigned int))HIDWORD(DeviceObject->Timer);
  if ( (char)result < 0 && BYTE1(DeviceObject->Timer) >= 5u )
  {
    if ( *(_QWORD *)(a1 + 488) )
    {
      v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v4);
      sub_140073EBC((__int64)v5, v3, (__int64)sub_1400728E0);
      (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a1 + 488) + 16LL))(
        *(_QWORD *)(a1 + 488),
        v5,
        0LL);
      return sub_14007450C(v5);
    }
  }
  return result;
}
