void __fastcall sub_140074720(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *Pool2; // rax
  _QWORD *v4; // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rbx

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 8LL, 1970304114LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = L"framework::DeviceContext::EvtCleanupCallback";
      sub_1400B1BA8();
      v1 = v4;
    }
  }
  if ( a1 )
    v5 = *(void (__fastcall ****)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_1400DF678 + 1616))(
                                                     qword_1400DF6A8,
                                                     a1,
                                                     off_1400DF018);
  else
    v5 = 0LL;
  sub_140074620((__int64)v5);
  if ( v5 )
    (**v5)(v5, 1LL);
  if ( v1 )
  {
    sub_1400B1C04(*v1);
    ExFreePool(v1);
  }
}
