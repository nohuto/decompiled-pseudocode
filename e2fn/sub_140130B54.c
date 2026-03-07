void __fastcall sub_140130B54(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  int v4; // r12d
  __int64 *v5; // rsi
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  const wchar_t *v11; // r8
  const wchar_t *v12; // rdx
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  PVOID v16; // rcx
  unsigned __int16 *v17; // rbx
  char *v18; // rdi
  __int64 v19; // rdx
  char v20; // r15
  int v21; // eax
  __int64 v22; // rdx
  const wchar_t *v23; // r14
  const wchar_t *v24; // rax
  __int64 *v25; // rax
  const wchar_t *v26; // rdx
  PVOID v27; // r8
  __int64 v28; // rax
  volatile signed __int32 *v29; // rsi
  volatile signed __int32 *v30; // rsi
  int v31; // r15d
  volatile signed __int32 *v32; // rsi
  const wchar_t *v33; // r14
  PVOID v34; // r15
  __int64 v35; // rsi
  __int64 v36; // r12
  const wchar_t *v37; // rax
  __int64 v38; // rax
  const wchar_t *v39; // rdx
  const wchar_t *v40; // rax
  volatile signed __int32 *v41; // rsi
  volatile signed __int32 *v42; // rsi
  bool v43; // r15
  const wchar_t *v44; // r14
  PVOID v45; // r15
  const wchar_t *v46; // rax
  __int64 v47; // rax
  const wchar_t *v48; // rdx
  const wchar_t *v49; // rax
  volatile signed __int32 *v50; // rsi
  volatile signed __int32 *v51; // rsi
  int v52; // r15d
  volatile signed __int32 *v53; // rsi
  const wchar_t *v54; // r15
  const wchar_t *v55; // rax
  __int64 v56; // r14
  const wchar_t *v57; // rax
  const wchar_t *v58; // rdx
  PVOID v59; // rax
  volatile signed __int32 *v60; // rsi
  volatile signed __int32 *v61; // rbx
  int v62; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall **v63)(PVOID); // [rsp+68h] [rbp-98h] BYREF
  __int16 v64; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  __int64 v66; // [rsp+80h] [rbp-80h]
  __int64 v67; // [rsp+88h] [rbp-78h]
  __int64 *v68; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v69; // [rsp+98h] [rbp-68h]
  __int64 *v70; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v71; // [rsp+A8h] [rbp-58h]
  __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v73; // [rsp+B8h] [rbp-48h]
  __int64 v74; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v75; // [rsp+C8h] [rbp-38h]
  void *(__fastcall **v76)(CUnknown *__hidden, unsigned int); // [rsp+D0h] [rbp-30h] BYREF
  char v77; // [rsp+D8h] [rbp-28h]
  void *(__fastcall **v78)(CUnknown *__hidden, unsigned int); // [rsp+E0h] [rbp-20h] BYREF
  bool v79; // [rsp+E8h] [rbp-18h]
  __int64 v80; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v81; // [rsp+F8h] [rbp-8h]
  __int64 v82; // [rsp+100h] [rbp+0h]
  _BYTE v83[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v84; // [rsp+118h] [rbp+18h]
  _BYTE v85[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v86; // [rsp+128h] [rbp+28h]
  _BYTE v87[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v88; // [rsp+138h] [rbp+38h]
  _BYTE v89[8]; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v90; // [rsp+148h] [rbp+48h]
  _BYTE v91[8]; // [rsp+150h] [rbp+50h] BYREF
  volatile signed __int32 *v92; // [rsp+158h] [rbp+58h]
  _BYTE v93[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v94; // [rsp+168h] [rbp+68h]
  _BYTE v95[8]; // [rsp+170h] [rbp+70h] BYREF
  volatile signed __int32 *v96; // [rsp+178h] [rbp+78h]
  _BYTE v97[8]; // [rsp+180h] [rbp+80h] BYREF
  volatile signed __int32 *v98; // [rsp+188h] [rbp+88h]
  bool v101; // [rsp+1F0h] [rbp+F0h]
  unsigned int v102; // [rsp+1F8h] [rbp+F8h] BYREF

  v2 = a2;
  v70 = 0LL;
  v4 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400736C0(Pool2, (__int64)L"framework::RegistryConfigurationInitializer::ReadBooleans", a1);
      if ( v7 )
        v5 = v7;
      v70 = v5;
    }
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
  sub_14008B0D4(&v80, v8);
  if ( !v82 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, &v68);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, &v70);
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)v10 + 16LL);
      if ( v13 )
        v12 = v13;
      if ( *(_QWORD *)(v9 + 16) )
        v11 = *(const wchar_t **)(v9 + 16);
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        8u,
        0x11u,
        (__int64)&unk_1400D99C8,
        v12,
        v11,
        (const wchar_t *)qword_14014EC70);
      LOBYTE(v4) = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v14 = v71;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v71 )
      {
        if ( !_InterlockedDecrement(v71 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( !_InterlockedDecrement(v14 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v15 = v69;
      if ( v69 )
      {
        if ( !_InterlockedDecrement(v69 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( !_InterlockedDecrement(v15 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = v81;
    if ( v81 )
LABEL_119:
      ExFreePool(v16);
    goto LABEL_120;
  }
  v17 = (unsigned __int16 *)v81;
  v18 = (char *)v81 + 24 * v82;
  if ( v81 == v18 )
    goto LABEL_117;
  v68 = (__int64 *)(a1 + 112);
  do
  {
    v19 = *((_QWORD *)v17 + 1);
    v63 = &off_1400D41D0;
    v102 = 0;
    v64 = 0;
    P = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    if ( v19 )
      sub_1400011A8(&v63, v19, (unsigned __int64)*v17 >> 1);
    v20 = *((_BYTE *)v17 + 16);
    v21 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *, unsigned int *))(**(_QWORD **)(a1 + 208) + 24LL))(
            *(_QWORD *)(a1 + 208),
            v17,
            &v102);
    v22 = 0LL;
    if ( v21 )
    {
      v43 = *((_BYTE *)v17 + 16) != 0;
      v101 = v43;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v44 = (const wchar_t *)&unk_1400D44E0;
        v4 |= 0xC0u;
        v45 = &unk_1400D44E0;
        if ( P )
          v45 = P;
        v46 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v93)
                                + 16LL);
        if ( v46 )
          v44 = v46;
        v47 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v91);
        v48 = (const wchar_t *)&unk_1400D44E0;
        v49 = *(const wchar_t **)(*(_QWORD *)v47 + 16LL);
        if ( v49 )
          v48 = v49;
        sub_1400B3228(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          4u,
          8u,
          0x14u,
          (__int64)&unk_1400D99C8,
          v48,
          v44,
          (const wchar_t *)qword_14014EC70,
          (__int64)v45);
        v43 = v101;
      }
      if ( (v4 & 0x80u) != 0 )
      {
        v50 = v92;
        v4 &= ~0x80u;
        if ( v92 )
        {
          if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v50 + 8LL))(v50, v22);
            if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
          }
        }
      }
      if ( (v4 & 0x40) != 0 )
      {
        v51 = v94;
        v4 &= ~0x40u;
        if ( v94 )
        {
          if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v51 + 8LL))(v51, v22);
            if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
          }
        }
      }
      sub_1400A27D4(&v74, v68);
      v78 = &off_1400D99E0;
      v79 = v43;
      v52 = sub_14008B6C0((_QWORD *)(v74 + 16), (__int64)&v63, (__int64)&v78, 1, 0LL);
      v78 = &off_1400D46A0;
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          v53 = v75;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 8LL))(v75);
          if ( !_InterlockedDecrement(v53 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 16LL))(v75);
        }
      }
      if ( v52 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v4 |= 0x300u;
          v54 = (const wchar_t *)&unk_1400D44E0;
          v55 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v95)
                                  + 16LL);
          if ( v55 )
            v54 = v55;
          v56 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v57 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v97)
                                  + 16LL);
          v58 = (const wchar_t *)&unk_1400D44E0;
          if ( v57 )
            v58 = v57;
          v59 = &unk_1400D44E0;
          if ( P )
            v59 = P;
          sub_1400AB1B8(
            v56,
            2u,
            8u,
            0x15u,
            (__int64)&unk_1400D99C8,
            v54,
            v58,
            (const wchar_t *)qword_14014EC70,
            (__int64)v59);
        }
        if ( (v4 & 0x200) != 0 )
        {
          v60 = v96;
          v4 &= ~0x200u;
          if ( v96 )
          {
            if ( !_InterlockedDecrement(v96 + 2) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
              if ( !_InterlockedDecrement(v60 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
            }
          }
        }
        if ( (v4 & 0x100) != 0 )
        {
          v42 = v98;
          v4 &= ~0x100u;
          goto LABEL_109;
        }
      }
    }
    else
    {
      if ( v102 < 2 )
      {
        v20 = v102 != 0;
      }
      else
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v4 |= 0xCu;
          v23 = (const wchar_t *)&unk_1400D44E0;
          v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v85)
                                  + 16LL);
          if ( v24 )
            v23 = v24;
          v25 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v83);
          v26 = (const wchar_t *)&unk_1400D44E0;
          v27 = &unk_1400D44E0;
          v28 = *v25;
          if ( P )
            v27 = P;
          if ( *(_QWORD *)(v28 + 16) )
            v26 = *(const wchar_t **)(v28 + 16);
          sub_1400B3554(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            3u,
            8u,
            0x12u,
            (__int64)&unk_1400D99C8,
            v26,
            v23,
            (const wchar_t *)qword_14014EC70,
            (__int64)v27);
        }
        if ( (v4 & 8) != 0 )
        {
          v29 = v84;
          v4 &= ~8u;
          if ( v84 )
          {
            if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v29 + 8LL))(v29, v22);
              if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
            }
          }
        }
        if ( (v4 & 4) != 0 )
        {
          v30 = v86;
          v4 &= ~4u;
          if ( v86 )
          {
            if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v30 + 8LL))(v30, v22);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
            }
          }
        }
      }
      sub_1400A27D4(&v72, v68);
      v76 = &off_1400D99E0;
      v77 = v20;
      v31 = sub_14008B6C0((_QWORD *)(v72 + 16), (__int64)&v63, (__int64)&v76, 0, 0LL);
      v76 = &off_1400D46A0;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          v32 = v73;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
          if ( !_InterlockedDecrement(v32 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
        }
      }
      if ( v31 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v33 = (const wchar_t *)&unk_1400D44E0;
          v62 = v4 | 0x30;
          v34 = &unk_1400D44E0;
          v35 = a1 + 56;
          if ( P )
            v34 = P;
          v36 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v35 + 16LL))(
                                                 a1 + 56,
                                                 v89)
                                  + 16LL);
          if ( v37 )
            v33 = v37;
          v38 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v35 + 24LL))(v35, v87);
          v39 = (const wchar_t *)&unk_1400D44E0;
          v40 = *(const wchar_t **)(*(_QWORD *)v38 + 16LL);
          if ( v40 )
            v39 = v40;
          sub_1400AB1B8(
            v36,
            2u,
            8u,
            0x13u,
            (__int64)&unk_1400D99C8,
            v39,
            v33,
            (const wchar_t *)qword_14014EC70,
            (__int64)v34);
          v4 = v62;
        }
        if ( (v4 & 0x20) != 0 )
        {
          v41 = v88;
          v4 &= ~0x20u;
          if ( v88 )
          {
            if ( !_InterlockedDecrement(v88 + 2) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
              if ( !_InterlockedDecrement(v41 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
            }
          }
        }
        if ( (v4 & 0x10) != 0 )
        {
          v42 = v90;
          v4 &= ~0x10u;
LABEL_109:
          if ( v42 )
          {
            if ( !_InterlockedDecrement(v42 + 2) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
              if ( !_InterlockedDecrement(v42 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
            }
          }
        }
      }
    }
    if ( P )
      ExFreePool(P);
    v17 += 12;
  }
  while ( v17 != (unsigned __int16 *)v18 );
  v17 = (unsigned __int16 *)v81;
  v5 = v70;
  v2 = a2;
LABEL_117:
  if ( v17 )
  {
    v16 = v17;
    goto LABEL_119;
  }
LABEL_120:
  if ( v5 )
  {
    sub_140073F78(v5);
    ExFreePool(v5);
  }
  v61 = (volatile signed __int32 *)v2[1];
  if ( v61 && !_InterlockedDecrement(v61 + 2) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
    if ( !_InterlockedDecrement(v61 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
  }
}
