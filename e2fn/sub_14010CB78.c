__int64 __fastcall sub_14010CB78(__int64 a1, _QWORD *a2)
{
  char v3; // bl
  __int64 *v5; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // r12
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  __int64 v11; // rsi
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r14
  volatile signed __int32 *v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rax
  const wchar_t *v22; // r12
  const wchar_t *v23; // rdx
  const wchar_t *v24; // rax
  volatile signed __int32 *v25; // rdi
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r14
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rsi
  const wchar_t *v33; // r12
  const wchar_t *v34; // rdi
  const wchar_t *v35; // rax
  const wchar_t *v36; // rax
  volatile signed __int32 *v37; // rdi
  volatile signed __int32 *v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // r14
  volatile signed __int32 *v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rax
  const wchar_t *v46; // r12
  const wchar_t *v47; // rdx
  const wchar_t *v48; // rax
  volatile signed __int32 *v49; // rdi
  volatile signed __int32 *v50; // rbx
  void (__fastcall ***v52)(_QWORD); // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v53; // [rsp+50h] [rbp-B8h]
  void (__fastcall ***v54)(_QWORD); // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v55; // [rsp+60h] [rbp-A8h]
  void (__fastcall ***v56)(_QWORD); // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v57; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v58)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v59; // [rsp+80h] [rbp-88h]
  PVOID P; // [rsp+88h] [rbp-80h]
  __int64 v61; // [rsp+90h] [rbp-78h]
  __int64 v62; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v63)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v64; // [rsp+A8h] [rbp-60h]
  PVOID v65; // [rsp+B0h] [rbp-58h]
  __int64 v66; // [rsp+B8h] [rbp-50h]
  __int64 v67; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v68)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v69; // [rsp+D0h] [rbp-38h]
  PVOID v70; // [rsp+D8h] [rbp-30h]
  __int64 v71; // [rsp+E0h] [rbp-28h]
  __int64 v72; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v73)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v74; // [rsp+F8h] [rbp-10h]
  PVOID v75; // [rsp+100h] [rbp-8h]
  __int64 v76; // [rsp+108h] [rbp+0h]
  __int64 v77; // [rsp+110h] [rbp+8h]
  char v78[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v79; // [rsp+120h] [rbp+18h]
  char v80[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v81; // [rsp+130h] [rbp+28h]
  char v82[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v83; // [rsp+140h] [rbp+38h]
  char v84[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v85; // [rsp+150h] [rbp+48h]
  char v86[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v87; // [rsp+160h] [rbp+58h]
  char v88[8]; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v89; // [rsp+170h] [rbp+68h]
  char v90[8]; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v91; // [rsp+180h] [rbp+78h]
  char v92[8]; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v93; // [rsp+190h] [rbp+88h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005A6E0(Pool2, (__int64)L"os_services::OsActivePowerScheme::EvtActivePowerschemeChange", a1);
      if ( v7 )
        v5 = v7;
    }
  }
  if ( *a2 == 0x4FAB3541A1841308LL && a2[1] == 0x4A0BF25615F781BCLL )
  {
    v59 = 0;
    v58 = &off_1400D41D0;
    P = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    sub_1400011A8(&v58, (__int64)L"Max power saving power scheme (Maximum Power Savings)", 0x35uLL);
    sub_14006FED0(*(_QWORD *)(a1 + 384), (__int64)&v58);
    v58 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v78)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v80)
                              + 16LL);
      if ( v12 )
        v8 = v12;
      sub_1400A3320(v11, 4u, 5u, 0x12u, (__int64)&unk_1400D8688, v9, v8, (const wchar_t *)qword_14014EC70);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v13 = v79;
      v3 &= ~2u;
      if ( v79 )
      {
        if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v14 = v81;
      if ( v81 )
      {
        if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    *(_DWORD *)(a1 + 368) = 1;
    v15 = a1 + 400;
    v16 = *(_QWORD *)(a1 + 440);
    v17 = *(_QWORD *)(a1 + 408);
    v18 = v17;
    if ( v16 )
      v18 = v15;
    while ( v17 != v18 )
    {
      sub_1400A27D4(&v52, (__int64 *)(v17 + 16));
      (**v52)(v52);
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          v19 = v53;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
        }
      }
      v17 = *(_QWORD *)(v17 + 8);
    }
  }
  else if ( *a2 == 0x4A96E8BF8C5E7FDALL && a2[1] == 0x5C638C3AE2A6859ALL )
  {
    v64 = 0;
    v63 = &off_1400D41D0;
    v65 = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    sub_1400011A8(&v63, (__int64)L"Min power saving power scheme (Maximum Performance)", 0x33uLL);
    sub_14006FED0(*(_QWORD *)(a1 + 384), (__int64)&v63);
    v63 = &off_1400D41D0;
    if ( v65 )
      ExFreePool(v65);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v82);
      v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v84);
      v22 = (const wchar_t *)&unk_1400D44E0;
      v23 = (const wchar_t *)&unk_1400D44E0;
      v24 = *(const wchar_t **)(*(_QWORD *)v21 + 16LL);
      if ( v24 )
        v23 = v24;
      if ( *(_QWORD *)(v20 + 16) )
        v22 = *(const wchar_t **)(v20 + 16);
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        5u,
        0x13u,
        (__int64)&unk_1400D8688,
        v22,
        v23,
        (const wchar_t *)qword_14014EC70);
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v25 = v83;
      v3 &= ~8u;
      if ( v83 )
      {
        if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v26 = v85;
      if ( v85 )
      {
        if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    *(_DWORD *)(a1 + 368) = 3;
    v27 = a1 + 448;
    v28 = *(_QWORD *)(a1 + 488);
    v29 = *(_QWORD *)(a1 + 456);
    v30 = v29;
    if ( v28 )
      v30 = v27;
    while ( v29 != v30 )
    {
      sub_1400A27D4(&v54, (__int64 *)(v29 + 16));
      (**v54)(v54);
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          v31 = v55;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
        }
      }
      v29 = *(_QWORD *)(v29 + 8);
    }
  }
  else if ( *a2 == 0x41F0F694381B4222LL && a2[1] == 0x2EDF60B25BFF8596LL )
  {
    v69 = 0;
    v68 = &off_1400D41D0;
    v70 = 0LL;
    v71 = 0LL;
    v72 = 0LL;
    sub_1400011A8(&v68, (__int64)L"Balanced (Typical) power saving power scheme", 0x2CuLL);
    sub_14006FED0(*(_QWORD *)(a1 + 384), (__int64)&v68);
    v68 = &off_1400D41D0;
    if ( v70 )
      ExFreePool(v70);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v33 = (const wchar_t *)&unk_1400D44E0;
      v34 = (const wchar_t *)&unk_1400D44E0;
      v35 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v88)
                              + 16LL);
      if ( v35 )
        v34 = v35;
      v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v86)
                              + 16LL);
      if ( v36 )
        v33 = v36;
      sub_1400A3320(v32, 4u, 5u, 0x14u, (__int64)&unk_1400D8688, v33, v34, (const wchar_t *)qword_14014EC70);
      v3 = 48;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v37 = v87;
      v3 &= ~0x20u;
      if ( v87 )
      {
        if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v38 = v89;
      if ( v89 )
      {
        if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    *(_DWORD *)(a1 + 368) = 2;
    v39 = a1 + 496;
    v40 = *(_QWORD *)(a1 + 536);
    v41 = *(_QWORD *)(a1 + 504);
    v42 = v41;
    if ( v40 )
      v42 = v39;
    while ( v41 != v42 )
    {
      sub_1400A27D4(&v56, (__int64 *)(v41 + 16));
      (**v56)(v56);
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          v43 = v57;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
        }
      }
      v41 = *(_QWORD *)(v41 + 8);
    }
  }
  else
  {
    v74 = 0;
    v73 = &off_1400D41D0;
    v75 = 0LL;
    v76 = 0LL;
    v77 = 0LL;
    sub_1400011A8(&v73, (__int64)L"Unsupported GUID", 0x10uLL);
    sub_14006FED0(*(_QWORD *)(a1 + 384), (__int64)&v73);
    v73 = &off_1400D41D0;
    if ( v75 )
      ExFreePool(v75);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v44 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v92);
      v45 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v90);
      v46 = (const wchar_t *)&unk_1400D44E0;
      v47 = (const wchar_t *)&unk_1400D44E0;
      v48 = *(const wchar_t **)(*(_QWORD *)v45 + 16LL);
      if ( v48 )
        v47 = v48;
      if ( *(_QWORD *)(v44 + 16) )
        v46 = *(const wchar_t **)(v44 + 16);
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        3u,
        5u,
        0x15u,
        (__int64)&unk_1400D8688,
        v47,
        v46,
        (const wchar_t *)qword_14014EC70);
      v3 = -64;
    }
    if ( v3 < 0 )
    {
      v49 = v91;
      v3 &= ~0x80u;
      if ( v91 )
      {
        if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
          if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
        }
      }
    }
    if ( (v3 & 0x40) != 0 )
    {
      v50 = v93;
      if ( v93 )
      {
        if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
          if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
        }
      }
    }
  }
  if ( v5 )
  {
    sub_14005A99C(v5);
    ExFreePool(v5);
  }
  return 0LL;
}
