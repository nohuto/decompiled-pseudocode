__int64 __fastcall sub_1400939C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *Pool2; // rax
  __int64 *v14; // rax
  __int64 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v18; // [rsp+38h] [rbp-51h] BYREF
  int v19; // [rsp+40h] [rbp-49h]
  _QWORD v20[2]; // [rsp+48h] [rbp-41h] BYREF
  PVOID v21; // [rsp+58h] [rbp-31h]
  __int64 v22; // [rsp+60h] [rbp-29h]
  __int64 v23; // [rsp+68h] [rbp-21h]
  __int64 (__fastcall **v24)(PVOID); // [rsp+70h] [rbp-19h] BYREF
  PVOID P; // [rsp+80h] [rbp-9h]
  __int64 v26; // [rsp+88h] [rbp-1h]
  __int64 v27; // [rsp+90h] [rbp+7h]
  __int64 (__fastcall **v28)(PVOID); // [rsp+98h] [rbp+Fh] BYREF
  PVOID v29; // [rsp+A8h] [rbp+1Fh]
  __int64 v30; // [rsp+B0h] [rbp+27h]
  __int64 v31; // [rsp+B8h] [rbp+2Fh]

  v18 = a4 | 0xA00000000LL;
  v19 = 10;
  sub_1400042F0((__int64)v20, (int *)&v18);
  v9 = sub_14002D2AC((__int64)&v28, a2, (__int64)qword_1400B7720);
  v10 = sub_140053644((__int64)&v24, v9, (__int64)v20);
  sub_140070F24(a1, v10, a3, 1, 1000);
  v24 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = &off_1400D41D0;
  if ( v29 )
    ExFreePool(v29);
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v20[0] = &off_1400D41D0;
  if ( v21 )
    ExFreePool(v21);
  *(_QWORD *)a1 = &off_1400DA038;
  *(_QWORD *)(a1 + 56) = off_1400DA090;
  *(_QWORD *)(a1 + 200) = off_1400DA0C0;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 368) = a4;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  *(_QWORD *)(a1 + 352) = 0xA5A5A5A5A500003DuLL;
  *(_QWORD *)(a1 + 400) = a5[1];
  v11 = *a5;
  a5[1] = 0LL;
  v12 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = v11;
  *a5 = v12;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v14 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterQueue::NetAdapterQueue", a1);
      v15 = v14;
      if ( v14 )
      {
        sub_140075108(v14);
        ExFreePool(v15);
      }
    }
  }
  v16 = (volatile signed __int32 *)a5[1];
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  return a1;
}
