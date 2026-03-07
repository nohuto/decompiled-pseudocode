__int64 __fastcall sub_14005D550(_QWORD *a1, _QWORD *a2)
{
  char v2; // si
  __int64 *v3; // r14
  _QWORD *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // r8
  void *v11; // rdx
  void *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v17; // rbx
  _QWORD *v18; // r13
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // r14
  void *v25; // rsi
  void *v26; // r12
  void *v27; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  void *v31; // r14
  void *v32; // rdi
  __int64 v33; // rax
  int v34; // edx
  void *v35; // rax
  volatile signed __int32 *v36; // r15
  volatile signed __int32 *v37; // rsi
  volatile signed __int32 *v38; // rbx
  __int64 v39; // rax
  _QWORD *v40; // rdi
  void *v41; // rsi
  void *v42; // r14
  void *v43; // rax
  __int64 v44; // rax
  void *v45; // rdx
  void *v46; // rax
  volatile signed __int32 *v47; // r15
  volatile signed __int32 *v48; // rsi
  _QWORD *v49; // rdx
  volatile signed __int32 *v50; // rbx
  __int64 v51; // [rsp+30h] [rbp-61h]
  __int64 v52; // [rsp+30h] [rbp-61h]
  char v53[8]; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v54; // [rsp+60h] [rbp-31h]
  char v55[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v56; // [rsp+70h] [rbp-21h]
  char v57[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v58; // [rsp+80h] [rbp-11h]
  char v59[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v60; // [rsp+90h] [rbp-1h]
  char v61[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v62; // [rsp+A0h] [rbp+Fh]
  char v63[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v64; // [rsp+B0h] [rbp+1Fh]
  __int64 *v67; // [rsp+108h] [rbp+77h]

  v2 = 0;
  v3 = 0LL;
  v5 = a2;
  v67 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x20) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005C614(Pool2, (__int64)L"os_services::IoctlDispatcher::RegisterHandler", (__int64)(a1 - 44));
      if ( v7 )
        v3 = v7;
      v67 = v3;
    }
  }
  if ( *v5 )
  {
    v17 = a1[2];
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v18 = a1 + 4;
    v19 = a1[9];
    if ( v19 )
      v20 = a1 + 4;
    else
      v20 = (_QWORD *)a1[5];
    v21 = (_QWORD *)a1[5];
    if ( v21 == v20 )
    {
LABEL_37:
      v21 = v20;
    }
    else
    {
      while ( v21[2] != *v5 )
      {
        v21 = (_QWORD *)v21[1];
        if ( v21 == v20 )
          goto LABEL_37;
      }
    }
    if ( v19 )
      v22 = a1 + 4;
    else
      v22 = (_QWORD *)a1[5];
    if ( v21 == v22 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v39 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 40LL))(*v5);
        v40 = a1 - 37;
        v41 = &unk_1400D44E0;
        v42 = &unk_1400D44E0;
        if ( *(_QWORD *)(v39 + 16) )
          v42 = *(void **)(v39 + 16);
        v43 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 16LL))(v40, v63) + 16LL);
        if ( v43 )
          v41 = v43;
        v44 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v40 + 24LL))(a1 - 37, v61);
        v45 = &unk_1400D44E0;
        v46 = *(void **)(*(_QWORD *)v44 + 16LL);
        if ( v46 )
          v45 = v46;
        v52 = (__int64)v45;
        LOBYTE(v45) = 4;
        sub_1400A9338(
          *(_QWORD *)(*(a1 - 22) + 16LL),
          (_DWORD)v45,
          6,
          18,
          (__int64)&unk_1400D7CC0,
          v52,
          (__int64)v41,
          (__int64)qword_1400B7720,
          (__int64)v42);
        v3 = v67;
        v2 = 48;
      }
      if ( (v2 & 0x20) != 0 )
      {
        v47 = v62;
        v2 &= ~0x20u;
        if ( v62 )
        {
          if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
            if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
          }
        }
      }
      if ( (v2 & 0x10) != 0 )
      {
        v48 = v64;
        if ( v64 )
        {
          if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
            if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
          }
        }
      }
      if ( v18[5] )
        v49 = v18;
      else
        v49 = (_QWORD *)v18[1];
      sub_1400A440C(v18, v49, v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
      if ( v3 )
      {
        sub_14005C8D0(v3);
        ExFreePool(v3);
      }
      v50 = (volatile signed __int32 *)v5[1];
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
          if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
        }
      }
      return 0LL;
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v23 = v21[2];
        v24 = *v5;
        v25 = &unk_1400D44E0;
        v26 = &unk_1400D44E0;
        v27 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 24LL))(a1 - 37, v57)
                       + 16LL);
        if ( v27 )
          v26 = v27;
        v28 = *(_QWORD *)(*(a1 - 22) + 16LL);
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23);
        if ( *(_QWORD *)(v29 + 16) )
          v25 = *(void **)(v29 + 16);
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
        v31 = &unk_1400D44E0;
        v32 = &unk_1400D44E0;
        if ( *(_QWORD *)(v30 + 16) )
          v32 = *(void **)(v30 + 16);
        v33 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 16LL))(a1 - 37, v59);
        LOBYTE(v34) = 2;
        v35 = *(void **)(*(_QWORD *)v33 + 16LL);
        if ( v35 )
          v31 = v35;
        sub_1400ACF4C(
          v28,
          v34,
          6,
          17,
          (__int64)&unk_1400D7CC0,
          (__int64)v26,
          (__int64)v31,
          (__int64)qword_1400B7720,
          (__int64)v32,
          (__int64)v25);
        v3 = v67;
        v2 = 12;
        v5 = a2;
      }
      if ( (v2 & 8) != 0 )
      {
        v36 = v58;
        v2 &= ~8u;
        if ( v58 )
        {
          if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
            if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v37 = v60;
        if ( v60 )
        {
          if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
            if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
          }
        }
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
      if ( v3 )
      {
        sub_14005C8D0(v3);
        ExFreePool(v3);
      }
      v38 = (volatile signed __int32 *)v5[1];
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
      return 3221225473LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 16LL))(a1 - 37, v55);
      v9 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 24LL))(a1 - 37, v53);
      v10 = &unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)v9 + 16LL);
      if ( v12 )
        v11 = v12;
      if ( *(_QWORD *)(v8 + 16) )
        v10 = *(void **)(v8 + 16);
      v51 = (__int64)v11;
      LOBYTE(v11) = 2;
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        (_DWORD)v11,
        6,
        16,
        (__int64)&unk_1400D7CC0,
        v51,
        (__int64)v10,
        (__int64)L"handler");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v13 = v54;
      v2 &= ~2u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v14 = v56;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_14000B0E4((_DWORD)a1 - 352, (__int64)L"handler", 177, 134);
    if ( v3 )
    {
      sub_14005C8D0(v3);
      ExFreePool(v3);
    }
    v15 = (volatile signed __int32 *)v5[1];
    if ( v15 && _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return 3221225485LL;
  }
}
