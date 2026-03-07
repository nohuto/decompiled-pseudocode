void __fastcall sub_1401315A4(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  __int64 v3; // r15
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
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rax
  const wchar_t *v26; // r10
  const wchar_t *v27; // r8
  PVOID v28; // rdx
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rsi
  int v32; // r15d
  volatile signed __int32 *v33; // rsi
  const wchar_t *v34; // r14
  PVOID v35; // r12
  __int64 v36; // rsi
  const wchar_t *v37; // rax
  __int64 v38; // r15
  __int64 v39; // rax
  const wchar_t *v40; // rdx
  const wchar_t *v41; // rax
  volatile signed __int32 *v42; // rsi
  volatile signed __int32 *v43; // rsi
  const wchar_t *v44; // r14
  const wchar_t *v45; // rax
  __int64 v46; // rax
  const wchar_t *v47; // r8
  PVOID v48; // rdx
  const wchar_t *v49; // rax
  volatile signed __int32 *v50; // rsi
  volatile signed __int32 *v51; // rsi
  unsigned int v52; // esi
  int v53; // r15d
  volatile signed __int32 *v54; // rsi
  __int64 v55; // r14
  __int64 v56; // rax
  const wchar_t *v57; // rdx
  const wchar_t *v58; // r10
  PVOID v59; // r8
  const wchar_t *v60; // rax
  volatile signed __int32 *v61; // rsi
  volatile signed __int32 *v62; // rbx
  __int64 (__fastcall **v63)(PVOID); // [rsp+78h] [rbp-88h] BYREF
  __int16 v64; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 *v68; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v69; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v71; // [rsp+B8h] [rbp-48h]
  __int64 v72; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v73; // [rsp+C8h] [rbp-38h]
  __int64 *v74; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v75; // [rsp+D8h] [rbp-28h]
  void *(__fastcall **v76)(CUnknown *__hidden, unsigned int); // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v77; // [rsp+E8h] [rbp-18h]
  void *(__fastcall **v78)(CUnknown *__hidden, unsigned int); // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v79; // [rsp+F8h] [rbp-8h]
  __int64 v80; // [rsp+100h] [rbp+0h] BYREF
  PVOID v81; // [rsp+108h] [rbp+8h]
  __int64 v82; // [rsp+110h] [rbp+10h]
  char v83[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v84; // [rsp+128h] [rbp+28h]
  char v85[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v86; // [rsp+138h] [rbp+38h]
  char v87[8]; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v88; // [rsp+148h] [rbp+48h]
  char v89[8]; // [rsp+150h] [rbp+50h] BYREF
  volatile signed __int32 *v90; // [rsp+158h] [rbp+58h]
  char v91[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v92; // [rsp+168h] [rbp+68h]
  char v93[8]; // [rsp+170h] [rbp+70h] BYREF
  volatile signed __int32 *v94; // [rsp+178h] [rbp+78h]
  char v95[8]; // [rsp+180h] [rbp+80h] BYREF
  volatile signed __int32 *v96; // [rsp+188h] [rbp+88h]
  char v97[8]; // [rsp+190h] [rbp+90h] BYREF
  volatile signed __int32 *v98; // [rsp+198h] [rbp+98h]
  unsigned int v101; // [rsp+200h] [rbp+100h] BYREF
  int v102; // [rsp+208h] [rbp+108h]

  v2 = a2;
  v102 = 0;
  v3 = a1;
  v68 = 0LL;
  v4 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400736C0(Pool2, (__int64)L"framework::RegistryConfigurationInitializer::ReadIntegers", v3);
      if ( v7 )
        v5 = v7;
      v68 = v5;
    }
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
  sub_14008B1C4(&v80, v8);
  if ( !v82 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)(v3 + 56) + 16LL))(v3 + 56, &v68);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)(v3 + 56) + 24LL))(v3 + 56, &v74);
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)v10 + 16LL);
      if ( v13 )
        v12 = v13;
      if ( *(_QWORD *)(v9 + 16) )
        v11 = *(const wchar_t **)(v9 + 16);
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(v3 + 176) + 16LL),
        4u,
        8u,
        0xCu,
        (__int64)&unk_1400D99C8,
        v12,
        v11,
        (const wchar_t *)qword_14014EC70);
      LOBYTE(v4) = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v14 = v75;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v75 )
      {
        if ( !_InterlockedDecrement(v75 + 2) )
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
LABEL_120:
      ExFreePool(v16);
    goto LABEL_121;
  }
  v17 = (unsigned __int16 *)v81;
  v18 = (char *)v81 + 32 * v82;
  if ( v81 == v18 )
    goto LABEL_118;
  v74 = (__int64 *)(v3 + 112);
  do
  {
    v19 = *((_QWORD *)v17 + 1);
    v63 = &off_1400D41D0;
    v101 = 0;
    v64 = 0;
    P = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    if ( v19 )
      sub_1400011A8(&v63, v19, (unsigned __int64)*v17 >> 1);
    if ( (*(unsigned int (__fastcall **)(_QWORD, unsigned __int16 *, unsigned int *))(**(_QWORD **)(v3 + 208) + 24LL))(
           *(_QWORD *)(v3 + 208),
           v17,
           &v101) )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v4 |= 0xC0u;
        v44 = (const wchar_t *)&unk_1400D44E0;
        v45 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v3 + 56) + 16LL))(
                                               v3 + 56,
                                               v93)
                                + 16LL);
        if ( v45 )
          v44 = v45;
        v46 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v3 + 56) + 24LL))(v3 + 56, v91);
        v47 = (const wchar_t *)&unk_1400D44E0;
        v48 = &unk_1400D44E0;
        v49 = *(const wchar_t **)(*(_QWORD *)v46 + 16LL);
        if ( v49 )
          v47 = v49;
        if ( P )
          v48 = P;
        sub_1400AB1B8(
          *(_QWORD *)(*(_QWORD *)(v3 + 176) + 16LL),
          4u,
          8u,
          0xFu,
          (__int64)&unk_1400D99C8,
          v47,
          v44,
          (const wchar_t *)qword_14014EC70,
          (__int64)v48);
      }
      if ( (v4 & 0x80u) != 0 )
      {
        v50 = v92;
        v4 &= ~0x80u;
        if ( v92 )
        {
          if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
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
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
            if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
          }
        }
      }
      v101 = *((_DWORD *)v17 + 4);
      v52 = v101;
      sub_1400A27D4(&v72, (__int64 *)(v3 + 112));
      v78 = &off_1400D99F0;
      v79 = v52;
      v53 = sub_14008B52C((_QWORD *)(v72 + 376), (__int64)&v63, (__int64)&v78, 1, 0LL);
      v78 = &off_1400D46A0;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          v54 = v73;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
          if ( !_InterlockedDecrement(v54 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
        }
      }
      if ( v53 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v4 |= 0x300u;
          v55 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v97);
          v56 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v95);
          v57 = (const wchar_t *)&unk_1400D44E0;
          v58 = (const wchar_t *)&unk_1400D44E0;
          v59 = &unk_1400D44E0;
          v60 = *(const wchar_t **)(*(_QWORD *)v56 + 16LL);
          if ( v60 )
            v58 = v60;
          if ( P )
            v59 = P;
          if ( *(_QWORD *)(v55 + 16) )
            v57 = *(const wchar_t **)(v55 + 16);
          sub_1400AB1B8(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            2u,
            8u,
            0x10u,
            (__int64)&unk_1400D99C8,
            v58,
            v57,
            (const wchar_t *)qword_14014EC70,
            (__int64)v59);
        }
        if ( (v4 & 0x200) != 0 )
        {
          v61 = v96;
          v4 &= ~0x200u;
          if ( v96 )
          {
            if ( !_InterlockedDecrement(v96 + 2) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
              if ( !_InterlockedDecrement(v61 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
            }
          }
        }
        if ( (v4 & 0x100) != 0 )
        {
          v43 = v98;
          v4 &= ~0x100u;
          goto LABEL_110;
        }
      }
    }
    else
    {
      if ( v101 < *((_DWORD *)v17 + 5) || v101 > *((_DWORD *)v17 + 6) )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v20 = v3 + 56;
          v4 |= 0xCu;
          v21 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v3 + 56) + 16LL))(v3 + 56, v85);
          v22 = v3 + 56;
          v23 = *v21;
          v24 = *(_QWORD *)(*(_QWORD *)(v3 + 176) + 16LL);
          v25 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 24LL))(v22, v83);
          v26 = (const wchar_t *)&unk_1400D44E0;
          v27 = (const wchar_t *)&unk_1400D44E0;
          v28 = &unk_1400D44E0;
          v29 = *(const wchar_t **)(*(_QWORD *)v25 + 16LL);
          if ( v29 )
            v26 = v29;
          if ( *(_QWORD *)(v23 + 16) )
            v27 = *(const wchar_t **)(v23 + 16);
          if ( P )
            v28 = P;
          sub_1400B38B0(
            v24,
            3u,
            8u,
            0xDu,
            (__int64)&unk_1400D99C8,
            v26,
            v27,
            (const wchar_t *)qword_14014EC70,
            (__int64)v28);
        }
        if ( (v4 & 8) != 0 )
        {
          v30 = v84;
          v4 &= ~8u;
          if ( v84 )
          {
            if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
            }
          }
        }
        if ( (v4 & 4) != 0 )
        {
          v31 = v86;
          v4 &= ~4u;
          if ( v86 )
          {
            if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
              if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
            }
          }
        }
        v101 = *((_DWORD *)v17 + 4);
      }
      sub_1400A27D4(&v70, v74);
      v76 = &off_1400D99F0;
      v77 = v101;
      v32 = sub_14008B52C((_QWORD *)(v70 + 376), (__int64)&v63, (__int64)&v76, 0, 0LL);
      v76 = &off_1400D46A0;
      if ( v71 )
      {
        if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
        {
          v33 = v71;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 8LL))(v71);
          if ( !_InterlockedDecrement(v33 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 16LL))(v71);
        }
      }
      if ( v32 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v34 = (const wchar_t *)&unk_1400D44E0;
          v102 = v4 | 0x30;
          v35 = &unk_1400D44E0;
          v36 = a1 + 56;
          if ( P )
            v35 = P;
          v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v36 + 16LL))(
                                                 a1 + 56,
                                                 v89)
                                  + 16LL);
          if ( v37 )
            v34 = v37;
          v38 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v39 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v36 + 24LL))(v36, v87);
          v40 = (const wchar_t *)&unk_1400D44E0;
          v41 = *(const wchar_t **)(*(_QWORD *)v39 + 16LL);
          if ( v41 )
            v40 = v41;
          sub_1400AB1B8(
            v38,
            2u,
            8u,
            0xEu,
            (__int64)&unk_1400D99C8,
            v40,
            v34,
            (const wchar_t *)qword_14014EC70,
            (__int64)v35);
          v4 = v102;
        }
        if ( (v4 & 0x20) != 0 )
        {
          v42 = v88;
          v4 &= ~0x20u;
          if ( v88 )
          {
            if ( !_InterlockedDecrement(v88 + 2) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
              if ( !_InterlockedDecrement(v42 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
            }
          }
        }
        if ( (v4 & 0x10) != 0 )
        {
          v43 = v90;
          v4 &= ~0x10u;
LABEL_110:
          if ( v43 )
          {
            if ( !_InterlockedDecrement(v43 + 2) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
              if ( !_InterlockedDecrement(v43 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
            }
          }
        }
      }
    }
    if ( P )
      ExFreePool(P);
    v3 = a1;
    v17 += 16;
  }
  while ( v17 != (unsigned __int16 *)v18 );
  v17 = (unsigned __int16 *)v81;
  v5 = v68;
  v2 = a2;
LABEL_118:
  if ( v17 )
  {
    v16 = v17;
    goto LABEL_120;
  }
LABEL_121:
  if ( v5 )
  {
    sub_140073F78(v5);
    ExFreePool(v5);
  }
  v62 = (volatile signed __int32 *)v2[1];
  if ( v62 && !_InterlockedDecrement(v62 + 2) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
    if ( !_InterlockedDecrement(v62 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
  }
}
