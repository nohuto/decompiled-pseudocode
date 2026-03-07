void __fastcall sub_1400984B0(__int64 a1, int *a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  int v8; // eax
  char v9; // cl
  void *v10; // rsi
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  void *v15; // rax
  __int64 v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _QWORD v19[2]; // [rsp+60h] [rbp-48h]
  _BYTE v20[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v21; // [rsp+78h] [rbp-30h]
  _BYTE v22[8]; // [rsp+80h] [rbp-28h] BYREF
  volatile signed __int32 *v23; // [rsp+88h] [rbp-20h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::UpdateSegmentationOffloadConfiguration", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = *a2;
  *(_DWORD *)(a1 + 544) = *a2;
  v9 = v8 | *(_BYTE *)(a1 + 545) | *(_BYTE *)(a1 + 547) | *(_BYTE *)(a1 + 546);
  v19[0] = "Disabled";
  v19[1] = "Enabled";
  *(_BYTE *)(a1 + 600) = v9;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v10 = &unk_1400D44E0;
    v11 = &unk_1400D44E0;
    v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                  a1 + 56,
                                  v22)
                   + 16LL);
    if ( v12 )
      v11 = v12;
    v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v20);
    v14 = *(unsigned __int8 *)(a1 + 546);
    v15 = *(void **)(*(_QWORD *)v13 + 16LL);
    if ( v15 )
      v10 = v15;
    v16 = v19[v14];
    LOBYTE(v14) = 4;
    sub_1400B56B8(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      v14,
      12,
      29,
      (__int64)&unk_1400DA108,
      (__int64)v10,
      (__int64)v11,
      (__int64)qword_1400B7720,
      v19[*(unsigned __int8 *)(a1 + 544)],
      v19[*(unsigned __int8 *)(a1 + 545)],
      v16,
      v19[*(unsigned __int8 *)(a1 + 547)]);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v17 = v21;
    v2 &= ~2u;
    if ( v21 )
    {
      if ( !_InterlockedDecrement(v21 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( !_InterlockedDecrement(v17 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v18 = v23;
    if ( v23 )
    {
      if ( !_InterlockedDecrement(v23 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( !_InterlockedDecrement(v18 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( v4 )
  {
    sub_1400953B8(v4);
    ExFreePool(v4);
  }
}
