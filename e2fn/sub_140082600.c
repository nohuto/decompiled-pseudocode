bool __fastcall sub_140082600(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  bool v5; // di

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(
             Pool2,
             (__int64)L"hardware_abstraction::HardwareTxQueue::CheckIfHardwareQueueIsStuck",
             a1 - 496);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 - 40) + 8LL))(*(_QWORD *)(a1 - 40)) == 2
    && *(_DWORD *)(a1 - 12) != *(_DWORD *)(a1 - 8);
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
  return v5;
}
