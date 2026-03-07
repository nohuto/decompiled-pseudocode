__int64 __fastcall sub_1400E6000(__int64 a1, __int64 a2)
{
  const wchar_t **v2; // rdi
  const wchar_t **Pool2; // rax
  const wchar_t **v6; // rbx
  unsigned int v7; // ebx

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (const wchar_t **)ExAllocatePool2(64LL, 8LL, 1970304114LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = L"E2fnEvtDeviceAdd";
      sub_1400A3268(L"E2fnEvtDeviceAdd");
      v2 = v6;
    }
  }
  v7 = sub_1400E6F78(a1, a2);
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A1CFC(
        *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
        2u,
        0xEu,
        0xFu,
        (__int64)&unk_1400D41C0,
        L"ProductE2fnDeviceContext::CreateProductE2fnDeviceContext(driver, deviceInit)",
        v7);
  }
  else
  {
    v7 = 0;
  }
  if ( v2 )
  {
    sub_1400A32C4(*v2);
    ExFreePool(v2);
  }
  return v7;
}
