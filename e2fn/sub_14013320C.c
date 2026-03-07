__int64 __fastcall sub_14013320C(_QWORD *a1, _QWORD *a2)
{
  char v4; // r15
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rdx
  const wchar_t *v15; // rsi
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v24; // rcx
  _QWORD *v25; // rdi
  __int64 v26; // rbx
  __int64 *v27; // rax
  _QWORD *v28; // rax
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rbx
  const wchar_t *v33; // r15
  const wchar_t *v34; // rdi
  const wchar_t *v35; // rax
  const wchar_t *v36; // rax
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 *v42; // rbx
  __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v44; // [rsp+50h] [rbp-B8h]
  __int128 v45; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v46; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v47; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v48)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v49; // [rsp+80h] [rbp-88h]
  PVOID P; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  char v53[8]; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v54; // [rsp+A8h] [rbp-60h]
  char v55[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v56; // [rsp+B8h] [rbp-50h]
  char v57[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v58; // [rsp+C8h] [rbp-40h]
  char v59[8]; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v60; // [rsp+D8h] [rbp-30h]
  __int128 v61; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v62; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v63; // [rsp+100h] [rbp-8h]
  char v64[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v65; // [rsp+110h] [rbp+8h]
  char v66[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v67; // [rsp+120h] [rbp+18h]
  __int64 v68; // [rsp+128h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400736C0(Pool2, (__int64)L"framework::EventViewerLogger::Initialize", (__int64)a1);
      if ( v7 )
        v5 = v7;
    }
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v55)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v53)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 8u, 0xAu, (__int64)&unk_1400D9A10, v8, v9, L"osResources");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v12 = v54;
      v4 &= ~2u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v13 = v56;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14000B954((int)a1, (__int64)L"osResources", 58, 79);
LABEL_45:
    if ( v5 )
    {
      sub_140073F78(v5);
      ExFreePool(v5);
    }
    v22 = (volatile signed __int32 *)a2[1];
    if ( v22 && _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return 3221225485LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 56LL))(*a2, &v43);
  v14 = v43;
  if ( !v43 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = (const wchar_t *)&unk_1400D44E0;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v59)
                              + 16LL);
      if ( v17 )
        v16 = v17;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v57)
                              + 16LL);
      if ( v18 )
        v15 = v18;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 8u, 0xBu, (__int64)&unk_1400D9A10, v15, v16, L"eventDispatcher");
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v19 = v58;
      v4 &= ~8u;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v20 = v60;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    sub_14000B1BC((int)a1, (__int64)L"eventDispatcher", 61, 79);
    v21 = v44;
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    goto LABEL_45;
  }
  v24 = (volatile signed __int32 *)a1[52];
  a1[52] = v44;
  v43 = a1[51];
  v44 = v24;
  a1[51] = v14;
  *(_QWORD *)&v45 = sub_14008C7B0;
  DWORD2(v45) = 0;
  sub_1400A27D4(&v46, a1 + 18);
  v25 = v46;
  v61 = v45;
  v26 = *v46;
  v27 = sub_14008C4C4(&v62, a1, (__int64)&v61);
  v28 = sub_1400A27D4(&v68, v27);
  (*(void (__fastcall **)(_QWORD *, _QWORD *))(v26 + 24))(v25, v28);
  v29 = v63;
  if ( v63 )
  {
    if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  if ( v47 )
  {
    if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
    {
      v30 = v47;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
    }
  }
  v49 = 0;
  v48 = &off_1400D41D0;
  P = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  sub_1400011A8(&v48, (__int64)L"DriverDesc", 0xAuLL);
  sub_1400A27D4(&v45, a1 + 14);
  v31 = sub_14008C410(v45, (__int64)&v48, v45 + 616);
  if ( *((_QWORD *)&v45 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v32 = *((_QWORD *)&v45 + 1);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v45 + 1) + 8LL))(*((_QWORD *)&v45 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v45 + 1) + 16LL))(*((_QWORD *)&v45 + 1));
    }
  }
  if ( P )
    ExFreePool(P);
  if ( v31 )
  {
    if ( a1 + 46 != (_QWORD *)v31 )
      sub_1400011A8(a1 + 46, *(_QWORD *)(v31 + 16), *(_QWORD *)(v31 + 24));
    v41 = v44;
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
        if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
    if ( v5 )
    {
      sub_140073F78(v5);
      ExFreePool(v5);
    }
    v42 = (volatile signed __int32 *)a2[1];
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
        if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
      }
    }
    return 0LL;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v33 = (const wchar_t *)&unk_1400D44E0;
      v34 = (const wchar_t *)&unk_1400D44E0;
      v35 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v66)
                              + 16LL);
      if ( v35 )
        v34 = v35;
      v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v64)
                              + 16LL);
      if ( v36 )
        v33 = v36;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 8u, 0xCu, (__int64)&unk_1400D9A10, v33, v34, L"deviceName");
      v4 = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v37 = v65;
      v4 &= ~0x20u;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v38 = v67;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    sub_14000B87C((int)a1, (__int64)L"deviceName", 69, 79);
    v39 = v44;
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    if ( v5 )
    {
      sub_140073F78(v5);
      ExFreePool(v5);
    }
    v40 = (volatile signed __int32 *)a2[1];
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    return 3221225635LL;
  }
}
