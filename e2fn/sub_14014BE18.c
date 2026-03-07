__int64 __fastcall sub_14014BE18(__int64 a1)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall **v11)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v12; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_1400736C0(Pool2, (__int64)L"framework::LinkEventViewerLogger::Initialize", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v12 = 0;
  v11 = &off_1400D41D0;
  P = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  sub_1400011A8(&v11, (__int64)L"LogLinkStateEvent", 0x11uLL);
  sub_1400A27D4(&v9, (__int64 *)(a1 + 112));
  v5 = sub_14003E2F0(v9, (__int64)&v11, v9 + 16);
  v6 = v10;
  *(_BYTE *)(a1 + 360) = v5;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      v7 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( P )
    ExFreePool(P);
  if ( v2 )
  {
    sub_140073F78(v2);
    ExFreePool(v2);
  }
  return 0LL;
}
