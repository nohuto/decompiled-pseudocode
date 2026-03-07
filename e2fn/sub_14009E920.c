void __fastcall sub_14009E920(__int64 a1, _DWORD *a2)
{
  __int64 *v3; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax

  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_1400736C0(Pool2, (__int64)L"framework::LinkEventViewerLogger::PostLinkState", a1);
      if ( v6 )
        v3 = v6;
    }
  }
  if ( *(_BYTE *)(a1 + 360) )
  {
    if ( *a2 == 1 )
      sub_14009E9E4(a1, a2);
    else
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 368) + 8LL))(
        *(_QWORD *)(a1 + 368),
        2684616731LL,
        0LL,
        0LL,
        0LL);
  }
  if ( v3 )
  {
    sub_140073F78(v3);
    ExFreePool(v3);
  }
}
