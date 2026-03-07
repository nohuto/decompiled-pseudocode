void __fastcall sub_1400993E0(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned int i; // r8d
  unsigned __int64 v7; // rcx

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140098860(Pool2, (__int64)L"net_adapter::NetAdapterRxQueue::EvtCancel", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  sub_140099844(a1);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 40LL))(*(_QWORD *)(a1 + 456));
  v5 = *(_QWORD *)(a1 + 376);
  for ( i = *(_DWORD *)(v5 + 48); i != *(_DWORD *)(v5 + 12); i = (i + 1) & *(_DWORD *)(v5 + 8) )
  {
    v7 = i * (unsigned __int64)*(unsigned __int16 *)(v5 + 2);
    *(_BYTE *)(v7 + v5 + 75) |= 1u;
    v5 = *(_QWORD *)(a1 + 376);
  }
  *(_DWORD *)(v5 + 48) = i;
  *(_DWORD *)(*(_QWORD *)(a1 + 384) + 48LL) = *(_DWORD *)(*(_QWORD *)(a1 + 384) + 12LL);
  if ( v2 )
  {
    sub_140098C48(v2);
    ExFreePool(v2);
  }
}
