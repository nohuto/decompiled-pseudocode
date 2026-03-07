__int64 __fastcall sub_14012B110(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 *v7; // rbx
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx

  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceD0EntryFlows::Bind", (__int64)(a1 - 44));
      if ( v12 )
        v7 = v12;
    }
  }
  v13 = a1[3];
  a1[3] = a2[1];
  v14 = *a2;
  a2[1] = v13;
  v15 = a1[2];
  a1[2] = v14;
  *a2 = v15;
  v16 = a1[5];
  a1[5] = a3[1];
  v17 = *a3;
  a3[1] = v16;
  v18 = a1[4];
  a1[4] = v17;
  *a3 = v18;
  v19 = a1[7];
  a1[7] = a4[1];
  v20 = *a4;
  a4[1] = v19;
  v21 = a1[6];
  a1[6] = v20;
  *a4 = v21;
  v22 = a1[9];
  a1[9] = a5[1];
  v23 = *a5;
  a5[1] = v22;
  v24 = a1[8];
  a1[8] = v23;
  *a5 = v24;
  v25 = a1[11];
  a1[11] = a6[1];
  v26 = *a6;
  a6[1] = v25;
  v27 = a1[10];
  a1[10] = v26;
  *a6 = v27;
  if ( v7 )
  {
    sub_140073F78(v7);
    ExFreePool(v7);
  }
  v28 = (volatile signed __int32 *)a2[1];
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  v29 = (volatile signed __int32 *)a3[1];
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  v30 = (volatile signed __int32 *)a4[1];
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
  v31 = (volatile signed __int32 *)a5[1];
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  v32 = (volatile signed __int32 *)a6[1];
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
    }
  }
  return 0LL;
}
