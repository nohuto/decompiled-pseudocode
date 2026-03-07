__int64 __fastcall sub_14004A37C(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbx

  v5 = a4;
  LOBYTE(a4) = 1;
  sub_140070F24(a1, a3, a2, a4, 1000);
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)a1 = &off_1400D7360;
  *(_QWORD *)(a1 + 56) = off_1400D7388;
  *(_QWORD *)(a1 + 200) = off_1400D73B8;
  *(_QWORD *)(a1 + 352) = off_1400D7400;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A500002AuLL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_DWORD *)(a1 + 432) = v5;
  *(_DWORD *)(a1 + 436) = a5;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnQueueMsixInterruptControl::ProductE2fnQueueMsixInterruptControl",
             a1);
      v9 = v8;
      if ( v8 )
      {
        sub_14000BFA4(v8);
        ExFreePool(v9);
      }
    }
  }
  return a1;
}
