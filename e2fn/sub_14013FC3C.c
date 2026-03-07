__int64 __fastcall sub_14013FC3C(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // r10
  unsigned int v9; // edi

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::GetWakePacketId", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 152LL))(*(_QWORD *)(a1 + 520));
  v6 = *(_QWORD *)(a1 + 408);
  v7 = 0;
  v8 = v6;
  if ( *(_QWORD *)(a1 + 496) )
    v8 = a1 + 400;
  while ( 1 )
  {
    if ( v6 == v8 )
    {
      v9 = 0;
      goto LABEL_13;
    }
    if ( v7 == v5 )
      break;
    v6 = *(_QWORD *)(v6 + 8);
    ++v7;
  }
  v9 = *(_DWORD *)(v6 + 16);
LABEL_13:
  if ( v1 )
  {
    sub_140075108(v1);
    ExFreePool(v1);
  }
  return v9;
}
