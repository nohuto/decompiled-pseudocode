__int64 __fastcall sub_14013FB80(_BYTE *a1, bool *a2)
{
  __int64 *v3; // rdi
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  bool v7; // al

  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::GetArmedWakes", (__int64)a1);
      if ( v6 )
        v3 = v6;
    }
  }
  a2[3] = a1[364];
  v7 = a1[361] || a1[362];
  *a2 = v7;
  a2[1] = a1[360];
  a2[2] = a1[363];
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return 0LL;
}
