__int64 __fastcall sub_140144474(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 *v6; // rsi
  char v9; // r14
  __int64 *v10; // r15
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  const wchar_t *v13; // r14
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v22; // rdi
  const wchar_t *v24; // r14
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rdi
  volatile signed __int32 *v29; // rdi
  int v30; // r8d
  const wchar_t *v31; // rdx
  volatile signed __int32 *v32; // rdi
  volatile signed __int32 *v33; // rdi
  volatile signed __int32 *v34; // rdi
  volatile signed __int32 *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  const wchar_t *v39; // r14
  const wchar_t *v40; // rdi
  const wchar_t *v41; // rax
  const wchar_t *v42; // rax
  __int64 v43; // rcx
  volatile signed __int32 *v44; // rdi
  volatile signed __int32 *v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  const wchar_t *v49; // r14
  const wchar_t *v50; // rdi
  const wchar_t *v51; // rax
  __int64 v52; // rsi
  const wchar_t *v53; // rax
  volatile signed __int32 *v54; // rdi
  volatile signed __int32 *v55; // rdi
  volatile signed __int32 *v56; // rdi
  volatile signed __int32 *v57; // rdi
  volatile signed __int32 *v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  volatile signed __int32 *v62; // rdi
  volatile signed __int32 *v63; // rdi
  volatile signed __int32 *v64; // rdi
  volatile signed __int32 *v65; // rdi
  const wchar_t *v66; // [rsp+30h] [rbp-99h]
  const wchar_t *v67; // [rsp+58h] [rbp-71h] BYREF
  volatile signed __int32 *v68; // [rsp+60h] [rbp-69h]
  __int64 v69[2]; // [rsp+68h] [rbp-61h] BYREF
  char v70[8]; // [rsp+78h] [rbp-51h] BYREF
  volatile signed __int32 *v71; // [rsp+80h] [rbp-49h]
  char v72[8]; // [rsp+88h] [rbp-41h] BYREF
  volatile signed __int32 *v73; // [rsp+90h] [rbp-39h]
  char v74[8]; // [rsp+98h] [rbp-31h] BYREF
  volatile signed __int32 *v75; // [rsp+A0h] [rbp-29h]
  char v76[8]; // [rsp+A8h] [rbp-21h] BYREF
  volatile signed __int32 *v77; // [rsp+B0h] [rbp-19h]
  char v78[8]; // [rsp+B8h] [rbp-11h] BYREF
  volatile signed __int32 *v79; // [rsp+C0h] [rbp-9h]
  char v80[8]; // [rsp+C8h] [rbp-1h] BYREF
  volatile signed __int32 *v81; // [rsp+D0h] [rbp+7h]
  char v82[8]; // [rsp+D8h] [rbp+Fh] BYREF
  volatile signed __int32 *v83; // [rsp+E0h] [rbp+17h]

  LODWORD(v67) = 0;
  v6 = a4;
  v9 = 0;
  v10 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::Bind", (__int64)a1);
      if ( v12 )
        v10 = v12;
    }
  }
  v69[1] = a3[1];
  v69[0] = *a3;
  a3[1] = 0LL;
  *a3 = 0LL;
  LODWORD(v67) = sub_140143B58(a1, v69);
  if ( (_DWORD)v67 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v72)
                              + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v70)
                              + 16LL);
      if ( v16 )
        v13 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xCu,
        0xAu,
        (__int64)&unk_1400DA108,
        v13,
        v14,
        L"__super::Bind(kstd::move(osServices))");
      v9 = 3;
    }
    if ( (v9 & 2) != 0 )
    {
      v17 = v71;
      v9 &= ~2u;
      if ( v71 )
      {
        if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v9 & 1) != 0 )
    {
      v18 = v73;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140008F3C((int)a1, (__int64)L"__super::Bind(kstd::move(osServices))", 136, 112, (unsigned int)v67);
    if ( v10 )
    {
      sub_1400953B8(v10);
      ExFreePool(v10);
    }
    v19 = (volatile signed __int32 *)a2[1];
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v20 = (volatile signed __int32 *)a3[1];
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    v21 = (volatile signed __int32 *)v6[1];
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    v22 = (volatile signed __int32 *)a5[1];
    if ( v22 && _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return (unsigned int)v67;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v74)
                              + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, const wchar_t **))(a1[7] + 24LL))(
                                             a1 + 7,
                                             &v67)
                              + 16LL);
      if ( v27 )
        v24 = v27;
      v66 = v24;
      v9 = 12;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xCu, 0xBu, (__int64)&unk_1400DA108, v66, v25, L"hardwareTxQueue");
    }
    if ( (v9 & 8) != 0 )
    {
      v28 = v68;
      v9 &= ~8u;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v9 & 4) != 0 )
    {
      v29 = v75;
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    v30 = 138;
    v31 = L"hardwareTxQueue";
LABEL_60:
    sub_14000B1BC((int)a1, (__int64)v31, v30, 112);
    if ( v10 )
    {
      sub_1400953B8(v10);
      ExFreePool(v10);
    }
    v32 = (volatile signed __int32 *)a2[1];
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
    v33 = (volatile signed __int32 *)a3[1];
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
    v34 = (volatile signed __int32 *)v6[1];
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
    v35 = (volatile signed __int32 *)a5[1];
LABEL_125:
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
    return 3221225485LL;
  }
  v36 = a1[58];
  a1[58] = a2[1];
  v37 = *a2;
  a2[1] = v36;
  v38 = a1[57];
  a1[57] = v37;
  *a2 = v38;
  if ( !*v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v39 = (const wchar_t *)&unk_1400D44E0;
      v40 = (const wchar_t *)&unk_1400D44E0;
      v41 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v78)
                              + 16LL);
      if ( v41 )
        v40 = v41;
      v42 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v76)
                              + 16LL);
      if ( v42 )
        v39 = v42;
      v43 = *(_QWORD *)(a1[22] + 16LL);
      v67 = v39;
      sub_1400A3320(v43, 2u, 0xCu, 0xCu, (__int64)&unk_1400DA108, v39, v40, L"checksumOffload");
      v9 = 48;
    }
    if ( (v9 & 0x20) != 0 )
    {
      v44 = v77;
      v9 &= ~0x20u;
      if ( v77 )
      {
        if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    if ( (v9 & 0x10) != 0 )
    {
      v45 = v79;
      if ( v79 )
      {
        if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
          if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
        }
      }
    }
    v30 = 141;
    v31 = L"checksumOffload";
    goto LABEL_60;
  }
  v46 = a1[60];
  a1[60] = v6[1];
  v47 = *v6;
  v6[1] = v46;
  v48 = a1[59];
  a1[59] = v47;
  *v6 = v48;
  if ( !*a5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v49 = (const wchar_t *)&unk_1400D44E0;
      v50 = (const wchar_t *)&unk_1400D44E0;
      v51 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v80)
                              + 16LL);
      if ( v51 )
        v50 = v51;
      v52 = *(_QWORD *)(a1[22] + 16LL);
      v53 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v82)
                              + 16LL);
      if ( v53 )
        v49 = v53;
      sub_1400A3320(v52, 2u, 0xCu, 0xDu, (__int64)&unk_1400DA108, v50, v49, L"segmentationOffload");
      v6 = a4;
      v9 = -64;
    }
    if ( v9 < 0 )
    {
      v54 = v81;
      v9 &= ~0x80u;
      if ( v81 )
      {
        if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
          if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
        }
      }
    }
    if ( (v9 & 0x40) != 0 )
    {
      v55 = v83;
      if ( v83 )
      {
        if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
          if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
        }
      }
    }
    sub_14000B444((int)a1, (__int64)L"segmentationOffload", 144, 112);
    if ( v10 )
    {
      sub_1400953B8(v10);
      ExFreePool(v10);
    }
    v56 = (volatile signed __int32 *)a2[1];
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
        if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
      }
    }
    v57 = (volatile signed __int32 *)a3[1];
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
        if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
      }
    }
    v58 = (volatile signed __int32 *)v6[1];
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
        if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
      }
    }
    v35 = (volatile signed __int32 *)a5[1];
    goto LABEL_125;
  }
  v59 = a1[65];
  a1[65] = a5[1];
  v60 = *a5;
  a5[1] = v59;
  v61 = a1[64];
  a1[64] = v60;
  *a5 = v61;
  if ( v10 )
  {
    sub_1400953B8(v10);
    ExFreePool(v10);
  }
  v62 = (volatile signed __int32 *)a2[1];
  if ( v62 )
  {
    if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
      if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
    }
  }
  v63 = (volatile signed __int32 *)a3[1];
  if ( v63 )
  {
    if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
      if ( _InterlockedExchangeAdd(v63 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 16LL))(v63);
    }
  }
  v64 = (volatile signed __int32 *)v6[1];
  if ( v64 )
  {
    if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
      if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
    }
  }
  v65 = (volatile signed __int32 *)a5[1];
  if ( v65 )
  {
    if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
      if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
    }
  }
  return 0LL;
}
