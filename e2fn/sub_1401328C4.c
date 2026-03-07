void __fastcall sub_1401328C4(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  int v4; // r12d
  __int64 *v5; // r13
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  const wchar_t *v12; // r14
  __int64 v13; // rcx
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _QWORD *v19; // rcx
  char *v20; // rbx
  char *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  volatile signed __int32 *v24; // rdi
  PVOID v25; // r14
  __int64 v26; // rsi
  const wchar_t *v27; // rax
  const wchar_t *v28; // r8
  const wchar_t *v29; // rdx
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  const wchar_t *v32; // rsi
  const wchar_t *v33; // rax
  const wchar_t *v34; // rax
  const wchar_t *v35; // r8
  const wchar_t *v36; // rdx
  const wchar_t *v37; // rax
  volatile signed __int32 *v38; // rdi
  volatile signed __int32 *v39; // rdi
  volatile signed __int32 *v40; // rdi
  __int64 v41; // rdi
  const wchar_t *v42; // rsi
  PVOID v43; // r14
  const wchar_t *v44; // rax
  __int64 v45; // rax
  const wchar_t *v46; // rdx
  const wchar_t *v47; // rax
  volatile signed __int32 *v48; // rdi
  volatile signed __int32 *v49; // rbx
  __int64 (__fastcall **v50)(PVOID); // [rsp+50h] [rbp-B0h] BYREF
  __int16 v51; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall **v55)(PVOID); // [rsp+78h] [rbp-88h] BYREF
  __int16 v56; // [rsp+80h] [rbp-80h]
  PVOID v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  __int64 *v60; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v61; // [rsp+A8h] [rbp-58h]
  __int64 v62; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v63; // [rsp+B8h] [rbp-48h]
  __int64 v64; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v65; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall **v66)(PVOID); // [rsp+D0h] [rbp-30h] BYREF
  __int16 v67; // [rsp+D8h] [rbp-28h]
  PVOID v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  __int64 v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  _BYTE v74[8]; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v75; // [rsp+120h] [rbp+20h]
  _BYTE v76[8]; // [rsp+128h] [rbp+28h] BYREF
  volatile signed __int32 *v77; // [rsp+130h] [rbp+30h]
  _BYTE v78[8]; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v79; // [rsp+140h] [rbp+40h]
  _BYTE v80[8]; // [rsp+148h] [rbp+48h] BYREF
  volatile signed __int32 *v81; // [rsp+150h] [rbp+50h]
  _BYTE v82[8]; // [rsp+158h] [rbp+58h] BYREF
  volatile signed __int32 *v83; // [rsp+160h] [rbp+60h]
  _BYTE v84[8]; // [rsp+168h] [rbp+68h] BYREF
  volatile signed __int32 *v85; // [rsp+170h] [rbp+70h]
  _BYTE v86[8]; // [rsp+178h] [rbp+78h] BYREF
  volatile signed __int32 *v87; // [rsp+180h] [rbp+80h]
  int v90; // [rsp+1F0h] [rbp+F0h]
  int v91; // [rsp+1F0h] [rbp+F0h]
  char *v92; // [rsp+1F8h] [rbp+F8h]

  v2 = a2;
  v60 = 0LL;
  v4 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400736C0(Pool2, (__int64)L"framework::RegistryConfigurationInitializer::ReadStrings", a1);
      if ( v7 )
        v5 = v7;
      v60 = v5;
    }
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 24LL))(*v2);
  sub_14008B264(&v71, v8);
  if ( v73 )
  {
    v19 = v72;
    v20 = (char *)v72 + 56 * v73;
    if ( v72 == v20 )
      goto LABEL_104;
    v21 = (char *)v72 + 32;
    v92 = (char *)v72 + 32;
    while ( 1 )
    {
      v22 = *((_QWORD *)v21 - 3);
      v66 = &off_1400D41D0;
      v67 = 0;
      v68 = 0LL;
      v69 = 0LL;
      v70 = 0LL;
      if ( v22 )
        sub_1400011A8(&v66, v22, (unsigned __int64)*((unsigned __int16 *)v21 - 16) >> 1);
      v50 = &off_1400D41D0;
      v56 = 0;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      v51 = 0;
      P = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = &off_1400D41D0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, char *, __int64 (__fastcall ***)(PVOID)))(**(_QWORD **)(a1 + 208)
                                                                                           + 32LL))(
             *(_QWORD *)(a1 + 208),
             v21 - 32,
             &v50) )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v4 |= 0x30u;
          v32 = (const wchar_t *)&unk_1400D44E0;
          v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v82)
                                  + 16LL);
          if ( v33 )
            v32 = v33;
          v34 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v80)
                                  + 16LL);
          v35 = (const wchar_t *)&unk_1400D44E0;
          v36 = (const wchar_t *)&unk_1400D44E0;
          if ( v34 )
            v35 = v34;
          if ( *(_QWORD *)v21 )
            v36 = *(const wchar_t **)v21;
          v37 = (const wchar_t *)&unk_1400D44E0;
          if ( v68 )
            v37 = (const wchar_t *)v68;
          sub_1400ACF4C(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            4u,
            8u,
            0x18u,
            (__int64)&unk_1400D99C8,
            v35,
            v32,
            (const wchar_t *)qword_14014EC70,
            v37,
            v36);
        }
        if ( (v4 & 0x20) != 0 )
        {
          v38 = v81;
          v4 &= ~0x20u;
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
        if ( (v4 & 0x10) != 0 )
        {
          v39 = v83;
          v4 &= ~0x10u;
          if ( v83 )
          {
            if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
              if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
            }
          }
        }
        if ( &v55 != (__int64 (__fastcall ***)(PVOID))(v21 - 16) )
          sub_1400011A8(&v55, *(_QWORD *)v21, *((_QWORD *)v21 + 1));
        sub_1400A27D4(&v64, (__int64 *)(a1 + 112));
        v91 = sub_14008B854((_QWORD *)(v64 + 616), (__int64)&v66, (__int64)&v55, 1, 0LL);
        if ( v65 )
        {
          if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
          {
            v40 = v65;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
            if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
          }
        }
        if ( !v91 )
          goto LABEL_95;
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v41 = a1 + 56;
          v42 = (const wchar_t *)&unk_1400D44E0;
          v4 |= 0xC0u;
          v43 = &unk_1400D44E0;
          if ( v68 )
            v43 = v68;
          v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 v41,
                                                 v86)
                                  + 16LL);
          if ( v44 )
            v42 = v44;
          v45 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v41 + 24LL))(a1 + 56, v84);
          v46 = (const wchar_t *)&unk_1400D44E0;
          v47 = *(const wchar_t **)(*(_QWORD *)v45 + 16LL);
          if ( v47 )
            v46 = v47;
          sub_1400AB1B8(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            2u,
            8u,
            0x19u,
            (__int64)&unk_1400D99C8,
            v46,
            v42,
            (const wchar_t *)qword_14014EC70,
            (__int64)v43);
          v21 = v92;
        }
        if ( (v4 & 0x80u) != 0 )
        {
          v48 = v85;
          v4 &= ~0x80u;
          if ( v85 )
          {
            if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
              if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
            }
          }
        }
        if ( (v4 & 0x40) == 0 )
          goto LABEL_95;
        v31 = v87;
        v4 &= ~0x40u;
      }
      else
      {
        v57 = P;
        v58 = v53;
        v23 = v54;
        v54 = 0LL;
        P = 0LL;
        v53 = 0LL;
        v59 = v23;
        sub_1400A27D4(&v62, (__int64 *)(a1 + 112));
        v90 = sub_14008B854((_QWORD *)(v62 + 616), (__int64)&v66, (__int64)&v55, 0, 0LL);
        if ( v63 )
        {
          if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
          {
            v24 = v63;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 16LL))(v63);
          }
        }
        if ( !v90 )
          goto LABEL_95;
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v4 |= 0xCu;
          v25 = &unk_1400D44E0;
          v26 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v78);
          if ( v68 )
            v25 = v68;
          v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v76)
                                  + 16LL);
          v28 = (const wchar_t *)&unk_1400D44E0;
          v29 = (const wchar_t *)&unk_1400D44E0;
          if ( v27 )
            v28 = v27;
          if ( *(_QWORD *)(v26 + 16) )
            v29 = *(const wchar_t **)(v26 + 16);
          sub_1400AB1B8(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            2u,
            8u,
            0x17u,
            (__int64)&unk_1400D99C8,
            v28,
            v29,
            (const wchar_t *)qword_14014EC70,
            (__int64)v25);
          v21 = v92;
        }
        if ( (v4 & 8) != 0 )
        {
          v30 = v77;
          v4 &= ~8u;
          if ( v77 )
          {
            if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
            }
          }
        }
        if ( (v4 & 4) == 0 )
          goto LABEL_95;
        v31 = v79;
        v4 &= ~4u;
      }
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
LABEL_95:
      v50 = &off_1400D41D0;
      if ( P )
        ExFreePool(P);
      P = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      if ( v57 )
        ExFreePool(v57);
      if ( v68 )
        ExFreePool(v68);
      v21 += 56;
      v92 = v21;
      if ( v21 - 32 == v20 )
      {
        v5 = v60;
        v2 = a2;
        goto LABEL_103;
      }
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v9 = a1 + 56;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, &v60);
    v12 = (const wchar_t *)&unk_1400D44E0;
    v13 = a1 + 56;
    v14 = (const wchar_t *)&unk_1400D44E0;
    v15 = *(const wchar_t **)(*(_QWORD *)v11 + 16LL);
    if ( v15 )
      v14 = v15;
    v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 16LL))(v13, v74)
                            + 16LL);
    if ( v16 )
      v12 = v16;
    sub_1400A3320(v10, 4u, 8u, 0x16u, (__int64)&unk_1400D99C8, v14, v12, (const wchar_t *)qword_14014EC70);
    v2 = a2;
    LOBYTE(v4) = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v17 = v61;
    LOBYTE(v4) = v4 & 0xFD;
    if ( v61 )
    {
      if ( !_InterlockedDecrement(v61 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( !_InterlockedDecrement(v17 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v18 = v75;
    if ( v75 )
    {
      if ( !_InterlockedDecrement(v75 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( !_InterlockedDecrement(v18 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
LABEL_103:
  v19 = v72;
LABEL_104:
  if ( v19 )
    sub_1400A639C(v19, 3);
  if ( v5 )
  {
    sub_140073F78(v5);
    ExFreePool(v5);
  }
  v49 = (volatile signed __int32 *)v2[1];
  if ( v49 && !_InterlockedDecrement(v49 + 2) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
    if ( !_InterlockedDecrement(v49 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
  }
}
