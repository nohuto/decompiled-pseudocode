void __fastcall NaptrDnsRecordConvert(_QWORD *a1)
{
  __int64 *v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rsi
  void *v6; // r15
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rax
  const wchar_t *v9; // rbx
  const wchar_t *v10; // rax
  __int64 v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rsi
  volatile signed __int32 *v14; // rbx
  void *v15; // rcx
  void *v16; // r15
  const wchar_t *v17; // rsi
  const wchar_t *v18; // rax
  const wchar_t *v19; // rbx
  const wchar_t *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  volatile signed __int32 *v23; // rsi
  volatile signed __int32 *v24; // rsi
  __int64 v25; // rsi
  const wchar_t *v26; // r15
  const wchar_t *v27; // rdi
  const wchar_t *v28; // rax
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rbx
  __int64 v32; // [rsp+20h] [rbp-E0h]
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall **v36)(PVOID); // [rsp+68h] [rbp-98h] BYREF
  __int16 v37; // [rsp+70h] [rbp-90h]
  void *v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  _BYTE v41[8]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v42; // [rsp+98h] [rbp-68h]
  _BYTE v43[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v44; // [rsp+A8h] [rbp-58h]
  _BYTE v45[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v46; // [rsp+B8h] [rbp-48h]
  _BYTE v47[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v48; // [rsp+C8h] [rbp-38h]
  _BYTE v49[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v50; // [rsp+D8h] [rbp-28h]
  _BYTE v51[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v52; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall **v53)(PVOID); // [rsp+F0h] [rbp-10h] BYREF
  PVOID P; // [rsp+100h] [rbp+0h]
  _QWORD v55[5]; // [rsp+118h] [rbp+18h] BYREF
  __int64 (__fastcall **v56)(); // [rsp+140h] [rbp+40h] BYREF
  int v57; // [rsp+148h] [rbp+48h] BYREF
  __int16 v58; // [rsp+14Ch] [rbp+4Ch]

  v2 = (__int64 *)a1[26];
  v56 = off_1400D69E8;
  v3 = 0;
  v57 = 0;
  v58 = 0;
  v4 = *v2;
  v35 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64 *, __int64 (__fastcall ***)()))(v4 + 40))(v2, &v56) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v25 = *(_QWORD *)(a1[22] + 16LL);
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = (const wchar_t *)&unk_1400D44E0;
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v49)
                              + 16LL);
      if ( v28 )
        v27 = v28;
      v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v51)
                              + 16LL);
      if ( v29 )
        v26 = v29;
      sub_1400A5E80(v25, 4u, 8u, 0x1Cu, (__int64)&unk_1400D99C8, v27, v26, (const wchar_t *)qword_14014EC70);
      v3 = -64;
    }
    if ( v3 < 0 )
    {
      v30 = v50;
      v3 &= ~0x80u;
      if ( v50 )
      {
        if ( !_InterlockedDecrement(v50 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( !_InterlockedDecrement(v30 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    if ( (v3 & 0x40) != 0 )
    {
      v31 = v52;
      if ( v52 )
      {
        if ( !_InterlockedDecrement(v52 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( !_InterlockedDecrement(v31 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)sub_1400892A0() == 6
      && !sub_1400892D0((__int64)&v56)
      && !sub_1400892A8(&v56)
      && !sub_1400892D8((__int64)&v56) )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v5 = *(_QWORD *)(a1[22] + 16LL);
        v6 = &unk_1400D44E0;
        v7 = (const wchar_t *)&unk_1400D44E0;
        v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v41)
                               + 16LL);
        if ( v8 )
          v7 = v8;
        v9 = (const wchar_t *)&unk_1400D44E0;
        v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v43)
                                + 16LL);
        if ( v10 )
          v9 = v10;
        v11 = sub_140088C90((__int64)&v56, (__int64)&v53);
        if ( *(_QWORD *)(v11 + 16) )
          v6 = *(void **)(v11 + 16);
        sub_1400A9338(v5, 4u, 8u, 0x1Bu, (__int64)&unk_1400D99C8, v7, v9, (const wchar_t *)qword_14014EC70, (__int64)v6);
        v3 = 56;
      }
      if ( (v3 & 0x20) != 0 )
      {
        v12 = v42;
        v3 &= ~0x20u;
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
            if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
          }
        }
      }
      if ( (v3 & 0x10) != 0 )
      {
        v13 = v44;
        v3 &= ~0x10u;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
            if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
      }
      if ( (v3 & 8) != 0 )
      {
        v53 = &off_1400D41D0;
        if ( P )
          ExFreePool(P);
      }
      v36 = &off_1400D41D0;
      v37 = 0;
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      sub_1400011A8(&v36, (__int64)L"LocalAdministeredMacAddress", 0x1BuLL);
      sub_1400A27D4(&v33, a1 + 14);
      LODWORD(v32) = 0;
      sub_14008B9FC((_QWORD *)(v33 + 736), (__int64)&v36, (__int64)&v57, 6LL, v32, 0LL);
      if ( v34 )
      {
        if ( !_InterlockedDecrement(v34 + 2) )
        {
          v14 = v34;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( !_InterlockedDecrement(v14 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
      v15 = v38;
      goto LABEL_52;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v16 = &unk_1400D44E0;
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v47)
                              + 16LL);
      if ( v18 )
        v17 = v18;
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v45)
                              + 16LL);
      if ( v20 )
        v19 = v20;
      v21 = *(_QWORD *)(a1[22] + 16LL);
      v22 = sub_140088C90((__int64)&v56, (__int64)v55);
      if ( *(_QWORD *)(v22 + 16) )
        v16 = *(void **)(v22 + 16);
      sub_1400A9338(
        v21,
        4u,
        8u,
        0x1Au,
        (__int64)&unk_1400D99C8,
        v19,
        v17,
        (const wchar_t *)qword_14014EC70,
        (__int64)v16);
      v3 = 7;
    }
    if ( (v3 & 4) != 0 )
    {
      v23 = v46;
      v3 &= ~4u;
      if ( v46 )
      {
        if ( !_InterlockedDecrement(v46 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( !_InterlockedDecrement(v23 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v3 & 2) != 0 )
    {
      v24 = v48;
      v3 &= ~2u;
      if ( v48 )
      {
        if ( !_InterlockedDecrement(v48 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( !_InterlockedDecrement(v24 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v15 = (void *)v55[2];
      v55[0] = &off_1400D41D0;
LABEL_52:
      if ( v15 )
        ExFreePool(v15);
    }
  }
}
