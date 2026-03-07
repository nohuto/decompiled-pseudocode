__int64 sub_14011B704()
{
  const wchar_t **Pool2; // rax
  const wchar_t **v1; // rbx

  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (const wchar_t **)ExAllocatePool2(64LL, 8LL, 1970304114LL);
    v1 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = L"framework::DeviceContext::InitializeTreeGlobals";
      sub_1400B1BA8(L"framework::DeviceContext::InitializeTreeGlobals");
      sub_1400B1C04(*v1);
      ExFreePool(v1);
    }
  }
  return 0LL;
}
