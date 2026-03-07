__int64 __fastcall sub_14006BA70(__int64 a1, int a2, __int64 a3)
{
  int v5; // eax
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 (__fastcall **v10)(PVOID); // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  v5 = sub_14006B854((__int64)&v10, a3, (__int64)L" Common Buffer");
  sub_140070F24(a1, v5, a2, 0, 1000);
  v10 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_DWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)a1 = &off_1400D8CD8;
  *(_QWORD *)(a1 + 56) = off_1400D8D00;
  *(_QWORD *)(a1 + 200) = off_1400D8D30;
  *(_QWORD *)(a1 + 352) = off_1400D8D78;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A5000045uLL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005B310(Pool2, (__int64)L"os_resources::CommonBuffer::CommonBuffer", a1);
      v8 = v7;
      if ( v7 )
      {
        sub_14005B5AC(v7);
        ExFreePool(v8);
      }
    }
  }
  return a1;
}
