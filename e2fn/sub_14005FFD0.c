__int64 __fastcall sub_14005FFD0(_QWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  char v4; // r14
  __int64 *v6; // r12
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rbx
  void *v16; // rsi
  void *v17; // rdi
  void *v18; // rax
  __int64 v19; // rax
  int v20; // edx
  void *v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rbx
  __int64 v29; // r15
  void *v30; // r15
  void *v31; // rdi
  void *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  unsigned int v42; // ebx
  __int64 v43; // rsi
  __int64 v44; // r15
  void *v45; // rdi
  void *v46; // r14
  void *v47; // rax
  void *v48; // rax
  __int64 v49; // rdi
  char v50; // bl
  char v51; // al
  int v52; // edx
  volatile signed __int32 *v53; // rbx
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  volatile signed __int32 *v56; // rbx
  unsigned int v57; // r15d
  void *v58; // rsi
  void *v59; // rdi
  void *v60; // rax
  __int64 v61; // rax
  int v62; // edx
  void *v63; // rax
  volatile signed __int32 *v64; // rbx
  volatile signed __int32 *v65; // rbx
  volatile signed __int32 *v66; // rbx
  volatile signed __int32 *v67; // rbx
  volatile signed __int32 *v68; // rbx
  volatile signed __int32 *v69; // rbx
  __int64 v70; // [rsp+58h] [rbp-89h] BYREF
  volatile signed __int32 *v71; // [rsp+60h] [rbp-81h]
  _BYTE v72[8]; // [rsp+68h] [rbp-79h] BYREF
  volatile signed __int32 *v73; // [rsp+70h] [rbp-71h]
  _BYTE v74[8]; // [rsp+78h] [rbp-69h] BYREF
  volatile signed __int32 *v75; // [rsp+80h] [rbp-61h]
  _BYTE v76[8]; // [rsp+88h] [rbp-59h] BYREF
  volatile signed __int32 *v77; // [rsp+90h] [rbp-51h]
  _BYTE v78[8]; // [rsp+98h] [rbp-49h] BYREF
  volatile signed __int32 *v79; // [rsp+A0h] [rbp-41h]
  _BYTE v80[8]; // [rsp+A8h] [rbp-39h] BYREF
  volatile signed __int32 *v81; // [rsp+B0h] [rbp-31h]
  _BYTE v82[8]; // [rsp+B8h] [rbp-29h] BYREF
  volatile signed __int32 *v83; // [rsp+C0h] [rbp-21h]
  _BYTE v84[8]; // [rsp+C8h] [rbp-19h] BYREF
  volatile signed __int32 *v85; // [rsp+D0h] [rbp-11h]
  _BYTE v86[8]; // [rsp+D8h] [rbp-9h] BYREF
  volatile signed __int32 *v87; // [rsp+E0h] [rbp-1h]
  _BYTE v88[8]; // [rsp+E8h] [rbp+7h] BYREF
  volatile signed __int32 *v89; // [rsp+F0h] [rbp+Fh]
  __int64 v90; // [rsp+148h] [rbp+67h]

  v4 = 0;
  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14005A6E0(Pool2, (__int64)L"os_services::SerializedWorkItem::Init", (__int64)a1);
      if ( v10 )
        v6 = v10;
    }
  }
  v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v8 + 8LL))(*v8, &v70);
  v12 = a1[50];
  a1[50] = v11[1];
  v13 = *v11;
  v11[1] = v12;
  v14 = a1[49];
  a1[49] = v13;
  *v11 = v14;
  v15 = v71;
  if ( v71 )
  {
    if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  if ( !a1[49] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v16 = &unk_1400D44E0;
      v17 = &unk_1400D44E0;
      v18 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v74) + 16LL);
      if ( v18 )
        v17 = v18;
      v19 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v72);
      LOBYTE(v20) = 2;
      v21 = *(void **)(*(_QWORD *)v19 + 16LL);
      if ( v21 )
        v16 = v21;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v20,
        5,
        11,
        (__int64)&unk_1400D7DC8,
        (__int64)v16,
        (__int64)v17,
        (__int64)L"m_dataLock");
      v8 = a3;
      v4 = 3;
      v7 = a4;
    }
    if ( (v4 & 2) != 0 )
    {
      v22 = v73;
      v4 &= ~2u;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v23 = v75;
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_14000B87C((int)a1, (__int64)L"m_dataLock", 158, 150);
LABEL_50:
    if ( v6 )
    {
      sub_14005A99C(v6);
      ExFreePool(v6);
    }
    v39 = (volatile signed __int32 *)v8[1];
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    v40 = (volatile signed __int32 *)v7[1];
    if ( v40 && _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
      if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
    }
    return 3221225495LL;
  }
  v24 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v7 + 8LL))(*v7, v76);
  v25 = a1[52];
  a1[52] = v24[1];
  v26 = *v24;
  v24[1] = v25;
  v27 = a1[51];
  a1[51] = v26;
  *v24 = v27;
  v28 = v77;
  if ( v77 )
  {
    if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  v29 = a1[51];
  if ( !v29 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v30 = &unk_1400D44E0;
      v31 = &unk_1400D44E0;
      v32 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v78) + 16LL);
      if ( v32 )
        v31 = v32;
      v33 = *(_QWORD *)(a1[22] + 16LL);
      v34 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v80);
      v4 = 12;
      LOBYTE(v35) = 2;
      v36 = *(void **)(*(_QWORD *)v34 + 16LL);
      if ( v36 )
        v30 = v36;
      sub_1400A3320(v33, v35, 5, 12, (__int64)&unk_1400D7DC8, (__int64)v31, (__int64)v30, (__int64)L"m_executionLock");
      v8 = a3;
      v7 = a4;
    }
    if ( (v4 & 8) != 0 )
    {
      v37 = v79;
      v4 &= ~8u;
      if ( v79 )
      {
        if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v38 = v81;
      if ( v81 )
      {
        if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    sub_14000B1BC((int)a1, (__int64)L"m_executionLock", 162, 150);
    goto LABEL_50;
  }
  v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[49] + 32LL))(a1[49]);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29) <= v42 )
  {
    v57 = sub_14005FCC0(a1, a2);
    if ( v57 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v58 = &unk_1400D44E0;
        v59 = &unk_1400D44E0;
        v60 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v88) + 16LL);
        if ( v60 )
          v59 = v60;
        v61 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v86);
        LOBYTE(v62) = 2;
        v63 = *(void **)(*(_QWORD *)v61 + 16LL);
        if ( v63 )
          v58 = v63;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v62,
          5,
          14,
          (__int64)&unk_1400D7DC8,
          (__int64)v58,
          (__int64)v59,
          (__int64)L"BaseWorkItem::Init(device)",
          v57);
        v8 = a3;
        v4 = -64;
        v7 = a4;
      }
      if ( v4 < 0 )
      {
        v64 = v87;
        v4 &= ~0x80u;
        if ( v87 )
        {
          if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
            if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
          }
        }
      }
      if ( (v4 & 0x40) != 0 )
      {
        v65 = v89;
        if ( v89 )
        {
          if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
            if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
          }
        }
      }
      sub_1400084DC((int)a1, (__int64)L"BaseWorkItem::Init(device)", 173, 150, v57);
      if ( v6 )
      {
        sub_14005A99C(v6);
        ExFreePool(v6);
      }
      v66 = (volatile signed __int32 *)v8[1];
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
          if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
        }
      }
      v67 = (volatile signed __int32 *)v7[1];
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
          if ( _InterlockedExchangeAdd(v67 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
        }
      }
      return v57;
    }
    else
    {
      if ( v6 )
      {
        sub_14005A99C(v6);
        ExFreePool(v6);
      }
      v68 = (volatile signed __int32 *)v8[1];
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
          if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
        }
      }
      v69 = (volatile signed __int32 *)v7[1];
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
          if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 16LL))(v69);
        }
      }
      return 0LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v43 = a1[49];
      v44 = a1[51];
      v45 = &unk_1400D44E0;
      v46 = &unk_1400D44E0;
      v47 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v84) + 16LL);
      if ( v47 )
        v46 = v47;
      v48 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v82) + 16LL);
      if ( v48 )
        v45 = v48;
      v90 = (__int64)v45;
      v49 = *(_QWORD *)(a1[22] + 16LL);
      v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
      v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
      LOBYTE(v52) = 2;
      sub_1400A6AA8(v49, v52, 5, 13, (__int64)&unk_1400D7DC8, v90, (__int64)v46, (__int64)qword_1400B7720, v51, v50);
      v8 = a3;
      v4 = 48;
      v7 = a4;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v53 = v83;
      v4 &= ~0x20u;
      if ( v83 )
      {
        if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v54 = v85;
      if ( v85 )
      {
        if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
          if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
        }
      }
    }
    if ( v6 )
    {
      sub_14005A99C(v6);
      ExFreePool(v6);
    }
    v55 = (volatile signed __int32 *)v8[1];
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
      }
    }
    v56 = (volatile signed __int32 *)v7[1];
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
        if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
      }
    }
    return 3221225485LL;
  }
}
