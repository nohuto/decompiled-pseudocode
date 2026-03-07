__int64 __fastcall sub_14006B394(_QWORD *a1)
{
  char v1; // di
  __int64 v2; // r14
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  void *v7; // rdi
  void *v8; // rbx
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  _BYTE v16[8]; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v17; // [rsp+48h] [rbp-30h]
  _BYTE v18[8]; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-20h]

  v1 = 0;
  *a1 = &off_1400D8C18;
  v2 = (__int64)(a1 + 7);
  a1[7] = off_1400D8C40;
  v4 = 0LL;
  a1[25] = off_1400D8C70;
  a1[44] = off_1400D8CB8;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14005B310(Pool2, (__int64)L"os_resources::MemoryMappedIoAccessor::~MemoryMappedIoAccessor", (__int64)a1);
      if ( v6 )
        v4 = v6;
    }
  }
  if ( a1[45] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)sub_14005AEB0(v2, (__int64)v18) + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = sub_14006CDF0(v2, v16);
      LOBYTE(v11) = 2;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v7 = v12;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v11,
        4,
        10,
        (__int64)&unk_1400D8BF8,
        (__int64)v7,
        (__int64)v8,
        (__int64)qword_1400B7720);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v13 = v17;
      v1 &= ~2u;
      if ( v17 )
      {
        if ( !_InterlockedDecrement(v17 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( !_InterlockedDecrement(v13 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v14 = v19;
      if ( v19 )
      {
        if ( !_InterlockedDecrement(v19 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( !_InterlockedDecrement(v14 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_140111B78(a1);
  }
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
  a1[44] = &off_1400D8C08;
  return sub_14007134C(a1);
}
