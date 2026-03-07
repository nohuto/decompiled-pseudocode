__int64 __fastcall sub_140092694(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 *v4; // r15
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // r12d
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  void *v22; // rsi
  void *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  void *v26; // rdx
  void *v27; // rax
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  _QWORD *v30; // r15
  __int64 v31; // r12
  __m128i v32; // xmm6
  __int64 *v33; // rax
  void *v34; // rdi
  void *v35; // rax
  __int64 v36; // rax
  void *v37; // rdx
  void *v38; // rax
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  __int64 v41; // rcx
  __int64 v43; // [rsp+30h] [rbp-91h]
  __int64 v44; // [rsp+38h] [rbp-89h]
  __int64 *v45; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v46; // [rsp+70h] [rbp-51h]
  _BYTE v47[8]; // [rsp+78h] [rbp-49h] BYREF
  volatile signed __int32 *v48; // [rsp+80h] [rbp-41h]
  _BYTE v49[8]; // [rsp+88h] [rbp-39h] BYREF
  volatile signed __int32 *v50; // [rsp+90h] [rbp-31h]
  _BYTE v51[8]; // [rsp+98h] [rbp-29h] BYREF
  volatile signed __int32 *v52; // [rsp+A0h] [rbp-21h]
  _BYTE v53[8]; // [rsp+A8h] [rbp-19h] BYREF
  volatile signed __int32 *v54; // [rsp+B0h] [rbp-11h]
  _BYTE v55[8]; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v56; // [rsp+C0h] [rbp-1h]
  int v59; // [rsp+130h] [rbp+6Fh]
  unsigned int v60; // [rsp+138h] [rbp+77h]
  int v61; // [rsp+140h] [rbp+7Fh]

  LODWORD(v3) = 0;
  v4 = 0LL;
  v45 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterReceiveScaling::PrepareHardwareIndireactionTable", a1);
      if ( v9 )
        v4 = v9;
      v45 = v4;
    }
  }
  v10 = a2[1];
  if ( *(_QWORD *)(a3 + 16) == v10 )
    goto LABEL_28;
  if ( !(unsigned int)sub_140092C34(a3, a2[1]) )
    *(_QWORD *)(a3 + 16) = v10;
  if ( *(_QWORD *)(a3 + 16) == v10 )
  {
LABEL_28:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = a1 + 56;
      v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v49);
      v21 = a1 + 56;
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)v20 + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v25 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 16LL))(v21, v51);
      v26 = &unk_1400D44E0;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v26 = v27;
      v44 = (__int64)v26;
      LOBYTE(v26) = 4;
      sub_1400AA268(
        v24,
        (_DWORD)v26,
        13,
        30,
        (__int64)&unk_1400D9F78,
        (__int64)v22,
        v44,
        (__int64)qword_1400B7720,
        a2[1]);
      LODWORD(v3) = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v28 = v50;
      LODWORD(v3) = v3 & 0xFFFFFFF7;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v29 = v52;
      LODWORD(v3) = v3 & 0xFFFFFFFB;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    v60 = 0;
    if ( a2[1] )
    {
      v30 = a2;
      v31 = 0LL;
      do
      {
        v32 = *(__m128i *)(*v30 + 16 * v31);
        v33 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD, void *))(qword_1400DF678 + 1616))(
                           qword_1400DF6A8,
                           *(_QWORD *)(*v30 + 16 * v31),
                           off_1400DF340);
        v59 = sub_14008AA24(*v33);
        v61 = _mm_cvtsi128_si32(_mm_srli_si128(v32, 12));
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          LODWORD(v3) = v3 | 0x30;
          v34 = &unk_1400D44E0;
          v35 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v55)
                         + 16LL);
          if ( v35 )
            v34 = v35;
          v36 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v53);
          v37 = &unk_1400D44E0;
          v38 = *(void **)(*(_QWORD *)v36 + 16LL);
          if ( v38 )
            v37 = v38;
          v43 = (__int64)v37;
          LOBYTE(v37) = 4;
          sub_1400AB5B8(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            (_DWORD)v37,
            13,
            31,
            (__int64)&unk_1400D9F78,
            v43,
            (__int64)v34,
            (__int64)qword_1400B7720,
            v60,
            v61,
            v59);
        }
        if ( (v3 & 0x20) != 0 )
        {
          v39 = v54;
          LODWORD(v3) = v3 & 0xFFFFFFDF;
          if ( v54 )
          {
            if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
              if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
            }
          }
        }
        if ( (v3 & 0x10) != 0 )
        {
          v40 = (volatile signed __int32 *)v56;
          LODWORD(v3) = v3 & 0xFFFFFFEF;
          if ( (_QWORD)v56 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 8), 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
              if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
            }
          }
        }
        v41 = 3 * v31;
        *(_DWORD *)(*(_QWORD *)(a3 + 8) + 4 * v41 + 8) = v59;
        v31 = ++v60;
        *(_DWORD *)(*(_QWORD *)(a3 + 8) + 4 * v41 + 4) = v61;
      }
      while ( (unsigned __int64)v60 < v30[1] );
      v4 = v45;
    }
    v11 = 0;
  }
  else
  {
    v11 = -1073741801;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 = (__int64)&unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v47)
                     + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, &v45);
      LOBYTE(v15) = 2;
      v16 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v3 = v16;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v15,
        13,
        29,
        (__int64)&unk_1400D9F78,
        v3,
        (__int64)v12,
        (__int64)L"ResizeVector(indirectionTable, indirectionEntries->Length)",
        23);
      LOBYTE(v3) = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v17 = v46;
      LOBYTE(v3) = v3 & 0xFD;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v18 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140028E54(a1, (__int64)L"ResizeVector(indirectionTable, indirectionEntries->Length)", 239, 107, 0xC0000017);
  }
  if ( v4 )
  {
    sub_140091BA8(v4);
    ExFreePool(v4);
  }
  return v11;
}
