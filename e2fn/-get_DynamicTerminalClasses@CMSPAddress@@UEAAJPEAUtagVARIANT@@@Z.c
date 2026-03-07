__int64 __fastcall CMSPAddress::get_DynamicTerminalClasses(CMSPAddress *this, struct tagVARIANT *a2)
{
  char v2; // di
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  char v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // r8
  void *v12; // rdx
  void *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rdi
  char *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rax
  void *v19; // r15
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rdi
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int128 *v30; // rax
  __int64 v31; // rcx
  __int128 *v32; // rax
  __int64 v33; // rcx
  __int128 *v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // r12d
  void *v37; // rsi
  void *v38; // rdi
  void *v39; // rax
  __int64 v40; // rax
  int v41; // edx
  void *v42; // rax
  volatile signed __int32 *v43; // rsi
  volatile signed __int32 *v44; // rdi
  volatile signed __int32 *v45; // rdi
  volatile signed __int32 *v46; // rdi
  __int64 v47; // [rsp+28h] [rbp-D8h]
  _BYTE v48[8]; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v49; // [rsp+60h] [rbp-A0h]
  _BYTE v50[8]; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v51; // [rsp+70h] [rbp-90h]
  _BYTE v52[8]; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v53; // [rsp+80h] [rbp-80h]
  _BYTE v54[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v55; // [rsp+90h] [rbp-70h]
  _BYTE v56[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v57; // [rsp+A0h] [rbp-60h]
  _BYTE v58[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v59; // [rsp+B0h] [rbp-50h]
  _WORD v60[4]; // [rsp+C0h] [rbp-40h] BYREF
  char v61; // [rsp+C8h] [rbp-38h]
  int v62; // [rsp+C9h] [rbp-37h]
  __int16 v63; // [rsp+CDh] [rbp-33h]
  __int128 v64; // [rsp+CFh] [rbp-31h]
  __int128 v65; // [rsp+DFh] [rbp-21h]
  __int128 v66; // [rsp+EFh] [rbp-11h]
  __int128 v67; // [rsp+FFh] [rbp-1h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::WriteNsOffloadToFirmware",
             ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = *((_BYTE *)this + 480) + 1;
  if ( (unsigned __int8)v8 > 2u )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = *(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 8) + 16LL))(
                        (char *)this + 64,
                        v50);
      v10 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 8) + 24LL))((char *)this + 64, v48);
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v13 )
        v12 = v13;
      if ( *(_QWORD *)(v9 + 16) )
        v11 = *(void **)(v9 + 16);
      v47 = (__int64)v12;
      LOBYTE(v12) = 2;
      sub_1400A6AA8(
        *(_QWORD *)(*((_QWORD *)this + 23) + 16LL),
        (_DWORD)v12,
        14,
        27,
        (__int64)&unk_1400D6110,
        v47,
        (__int64)v11,
        (__int64)qword_1400B7720,
        *((_BYTE *)this + 480),
        2);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v49;
      v2 &= ~2u;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) == 0 )
      goto LABEL_38;
    v15 = v51;
LABEL_34:
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
LABEL_38:
    if ( v4 )
    {
      sub_140005840(v4);
      ExFreePool(v4);
    }
    v26 = (volatile signed __int32 *)*((_QWORD *)a2 + 1);
    if ( v26 && _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
      if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    return 3221225473LL;
  }
  if ( *((_BYTE *)this + 480) > 1u )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v16 = (char *)this + 64;
      v17 = *(_QWORD *)(*((_QWORD *)this + 23) + 16LL);
      v18 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 8) + 24LL))((char *)this + 64, v52);
      v19 = &unk_1400D44E0;
      v20 = &unk_1400D44E0;
      v21 = *(void **)(*(_QWORD *)v18 + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v16 + 16LL))(v16, v54);
      LOBYTE(v23) = 2;
      v24 = *(void **)(*(_QWORD *)v22 + 16LL);
      if ( v24 )
        v19 = v24;
      sub_1400A5E80(v17, v23, 14, 28, (__int64)&unk_1400D6110, (__int64)v20, (__int64)v19, (__int64)qword_1400B7720, v8);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v25 = v53;
      v2 &= ~8u;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v2 & 4) == 0 )
      goto LABEL_38;
    v15 = v55;
    goto LABEL_34;
  }
  sub_1400B6C40(v60, 0LL, 80LL);
  v28 = *(_QWORD **)a2;
  strcpy((char *)v60, "xK");
  v60[2] = 768;
  LOBYTE(v60[3]) = 2;
  HIBYTE(v60[3]) = v8;
  v61 = 1;
  v29 = *v28;
  v62 = *(_DWORD *)(*v28 + 8LL);
  v63 = *(_WORD *)(v29 + 12);
  v30 = (__int128 *)sub_1400884D0(v28[2]);
  v31 = *(_QWORD *)a2;
  v64 = *v30;
  v32 = (__int128 *)sub_1400884D0(*(_QWORD *)(v31 + 32));
  v33 = *(_QWORD *)a2;
  v65 = *v32;
  v34 = (__int128 *)sub_1400884D0(*(_QWORD *)(v33 + 48));
  v35 = *(_QWORD *)a2;
  v66 = *v34;
  v67 = *(_OWORD *)sub_1400884D0(*(_QWORD *)(v35 + 64));
  HIBYTE(v60[1]) = sub_1400237DC((__int64)this, (__int64)v60);
  v36 = (*(__int64 (__fastcall **)(CMSPAddress *, _WORD *, __int64))(*(_QWORD *)this + 48LL))(this, v60, 80LL);
  if ( v36 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v37 = &unk_1400D44E0;
      v38 = &unk_1400D44E0;
      v39 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 8) + 16LL))(
                                    (char *)this + 64,
                                    v58)
                     + 16LL);
      if ( v39 )
        v38 = v39;
      v40 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 8) + 24LL))((char *)this + 64, v56);
      LOBYTE(v41) = 2;
      v42 = *(void **)(*(_QWORD *)v40 + 16LL);
      if ( v42 )
        v37 = v42;
      sub_1400A5E80(
        *(_QWORD *)(*((_QWORD *)this + 23) + 16LL),
        v41,
        14,
        29,
        (__int64)&unk_1400D6110,
        (__int64)v37,
        (__int64)v38,
        (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))",
        v36);
      v2 = 48;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v43 = v57;
      v2 &= ~0x20u;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v44 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    sub_1400095B8((_DWORD)this + 8, (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))", 345, 45, v36);
    if ( v4 )
    {
      sub_140005840(v4);
      ExFreePool(v4);
    }
    v45 = (volatile signed __int32 *)*((_QWORD *)a2 + 1);
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
        if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
    return v36;
  }
  else
  {
    ++*((_BYTE *)this + 480);
    if ( v4 )
    {
      sub_140005840(v4);
      ExFreePool(v4);
    }
    v46 = (volatile signed __int32 *)*((_QWORD *)a2 + 1);
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
        if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
      }
    }
    return 0LL;
  }
}
