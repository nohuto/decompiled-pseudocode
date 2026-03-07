void __fastcall sub_14014A828(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v7; // r15
  __int64 *v8; // r13
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  int v11; // edx
  int v12; // r8d
  const wchar_t *v13; // rsi
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  const wchar_t *v19; // rsi
  const wchar_t *v20; // rdi
  const wchar_t *v21; // rax
  __int64 v22; // rax
  const wchar_t *v23; // rdx
  const wchar_t *v24; // rax
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  const wchar_t *v27; // rdi
  const wchar_t *v28; // rax
  __int64 v29; // rax
  const wchar_t *v30; // rdx
  const wchar_t *v31; // rax
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  __int64 v34; // rsi
  const wchar_t *v35; // rdi
  const wchar_t *v36; // rax
  __int64 v37; // rax
  const wchar_t *v38; // rdx
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  const wchar_t *v42; // rdi
  const wchar_t *v43; // rax
  __int64 v44; // rax
  const wchar_t *v45; // rdx
  const wchar_t *v46; // rax
  volatile signed __int32 *v47; // rbx
  volatile signed __int32 *v48; // rbx
  const wchar_t *v49; // rdi
  const wchar_t *v50; // rax
  __int64 v51; // rax
  const wchar_t *v52; // rdx
  const wchar_t *v53; // rax
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  const wchar_t *v56; // rdi
  const wchar_t *v57; // rax
  const wchar_t *v58; // rax
  volatile signed __int32 *v59; // rbx
  volatile signed __int32 *v60; // rbx
  _DWORD v61[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v62; // [rsp+5Ch] [rbp-A4h]
  __int16 v63; // [rsp+5Eh] [rbp-A2h]
  __int64 v64; // [rsp+60h] [rbp-A0h]
  __int64 v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h]
  _BYTE v67[8]; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v68; // [rsp+80h] [rbp-80h]
  _BYTE v69[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v70; // [rsp+90h] [rbp-70h]
  _BYTE v71[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v72; // [rsp+A0h] [rbp-60h]
  _BYTE v73[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v74; // [rsp+B0h] [rbp-50h]
  _BYTE v75[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v76; // [rsp+C0h] [rbp-40h]
  _BYTE v77[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v78; // [rsp+D0h] [rbp-30h]
  _BYTE v79[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v80; // [rsp+E0h] [rbp-20h]
  _BYTE v81[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v82; // [rsp+F0h] [rbp-10h]
  _BYTE v83[8]; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v84; // [rsp+100h] [rbp+0h]
  _BYTE v85[8]; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v86; // [rsp+110h] [rbp+10h]
  _BYTE v87[8]; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v88; // [rsp+120h] [rbp+20h]
  _BYTE v89[8]; // [rsp+128h] [rbp+28h] BYREF
  volatile signed __int32 *v90; // [rsp+130h] [rbp+30h]
  _BYTE v91[8]; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v92; // [rsp+140h] [rbp+40h]
  _BYTE v93[8]; // [rsp+148h] [rbp+48h] BYREF
  volatile signed __int32 *v94; // [rsp+150h] [rbp+50h]

  v7 = 0;
  v8 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterSegmentationOffload::AdvertiseCapabilities", a1);
      if ( v10 )
        v8 = v10;
    }
  }
  v11 = (*(_BYTE *)(a4 + 48) != 0) | (*(_BYTE *)(a4 + 49) != 0 ? 2 : 0) | (*(_BYTE *)(a4 + 50) != 0 ? 4 : 0) | (*(_BYTE *)(a4 + 51) != 0 ? 8 : 0);
  v12 = (*(_BYTE *)(a4 + 52) != 0) | (*(_BYTE *)(a4 + 53) != 0 ? 2 : 0) | (*(_BYTE *)(a4 + 54) != 0 ? 4 : 0);
  if ( v11 || v12 )
  {
    v64 = *(unsigned int *)(a4 + 60);
    v65 = *(unsigned int *)(a4 + 64);
    v62 = *(_WORD *)(a4 + 56);
    v63 = 0;
    v61[0] = 40;
    v61[1] = v11;
    v61[2] = v12;
    v66 = a3;
    v19 = (const wchar_t *)&unk_1400D44E0;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v73)
                              + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v71);
      v23 = (const wchar_t *)&unk_1400D44E0;
      v24 = *(const wchar_t **)(*(_QWORD *)v22 + 16LL);
      if ( v24 )
        v23 = v24;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xCu,
        0xFu,
        (__int64)&unk_1400DA460,
        v23,
        v20,
        (const wchar_t *)qword_14014EC70);
      v7 = 12;
    }
    if ( (v7 & 8) != 0 )
    {
      v25 = v72;
      v7 &= ~8u;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v7 & 4) != 0 )
    {
      v26 = v74;
      v7 &= ~4u;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 |= 0x30u;
      v27 = (const wchar_t *)&unk_1400D44E0;
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v75)
                              + 16LL);
      if ( v28 )
        v27 = v28;
      v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v77);
      v30 = (const wchar_t *)&unk_1400D44E0;
      v31 = *(const wchar_t **)(*(_QWORD *)v29 + 16LL);
      if ( v31 )
        v30 = v31;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xCu,
        0x10u,
        (__int64)&unk_1400DA460,
        v27,
        v30,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v7 & 0x20) != 0 )
    {
      v32 = v76;
      v7 &= ~0x20u;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    if ( (v7 & 0x10) != 0 )
    {
      v33 = v78;
      v7 &= ~0x10u;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 |= 0xC0u;
      v34 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v35 = (const wchar_t *)&unk_1400D44E0;
      v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v81)
                              + 16LL);
      if ( v36 )
        v35 = v36;
      v37 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v79);
      v38 = (const wchar_t *)&unk_1400D44E0;
      v39 = *(const wchar_t **)(*(_QWORD *)v37 + 16LL);
      if ( v39 )
        v38 = v39;
      sub_1400A5E80(v34, 4u, 0xCu, 0x11u, (__int64)&unk_1400DA460, v38, v35, (const wchar_t *)qword_14014EC70);
      v19 = (const wchar_t *)&unk_1400D44E0;
    }
    if ( (v7 & 0x80u) != 0 )
    {
      v40 = v80;
      v7 &= ~0x80u;
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v7 & 0x40) != 0 )
    {
      v41 = v82;
      v7 &= ~0x40u;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 |= 0x300u;
      v42 = (const wchar_t *)&unk_1400D44E0;
      v43 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v85)
                              + 16LL);
      if ( v43 )
        v42 = v43;
      v44 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v83);
      v45 = (const wchar_t *)&unk_1400D44E0;
      v46 = *(const wchar_t **)(*(_QWORD *)v44 + 16LL);
      if ( v46 )
        v45 = v46;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xCu,
        0x12u,
        (__int64)&unk_1400DA460,
        v45,
        v42,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v7 & 0x200) != 0 )
    {
      v47 = v84;
      v7 &= ~0x200u;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
        }
      }
    }
    if ( (v7 & 0x100) != 0 )
    {
      v48 = v86;
      v7 &= ~0x100u;
      if ( v86 )
      {
        if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
          if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
        }
      }
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 |= 0xC00u;
      v49 = (const wchar_t *)&unk_1400D44E0;
      v50 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v89)
                              + 16LL);
      if ( v50 )
        v49 = v50;
      v51 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v87);
      v52 = (const wchar_t *)&unk_1400D44E0;
      v53 = *(const wchar_t **)(*(_QWORD *)v51 + 16LL);
      if ( v53 )
        v52 = v53;
      sub_1400AA268(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xCu,
        0x13u,
        (__int64)&unk_1400DA460,
        v52,
        v49,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v7 & 0x800) != 0 )
    {
      v54 = v88;
      v7 &= ~0x800u;
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
          if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
        }
      }
    }
    if ( (v7 & 0x400) != 0 )
    {
      v55 = v90;
      v7 &= ~0x400u;
      if ( v90 )
      {
        if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
          if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
        }
      }
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 |= 0x3000u;
      v56 = (const wchar_t *)&unk_1400D44E0;
      v57 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v93)
                              + 16LL);
      if ( v57 )
        v56 = v57;
      v58 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v91)
                              + 16LL);
      if ( v58 )
        v19 = v58;
      sub_1400AA268(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xCu,
        0x14u,
        (__int64)&unk_1400DA460,
        v19,
        v56,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v7 & 0x2000) != 0 )
    {
      v59 = v92;
      v7 &= ~0x2000u;
      if ( v92 )
      {
        if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
          if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
        }
      }
    }
    if ( (v7 & 0x1000) != 0 )
    {
      v60 = v94;
      if ( v94 )
      {
        if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
          if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
        }
      }
    }
    ((void (__fastcall *)(__int64, __int64, _DWORD *))qword_1400DFA28)(qword_1400DF700, a2, v61);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v69)
                              + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v67)
                              + 16LL);
      if ( v16 )
        v13 = v16;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xCu,
        0xEu,
        (__int64)&unk_1400DA460,
        v13,
        v14,
        (const wchar_t *)qword_14014EC70);
      LOBYTE(v7) = 3;
    }
    if ( (v7 & 2) != 0 )
    {
      v17 = v68;
      LOBYTE(v7) = v7 & 0xFD;
      if ( v68 )
      {
        if ( !_InterlockedDecrement(v68 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( !_InterlockedDecrement(v17 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v7 & 1) != 0 )
    {
      v18 = v70;
      if ( v70 )
      {
        if ( !_InterlockedDecrement(v70 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( !_InterlockedDecrement(v18 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
  }
  if ( v8 )
  {
    sub_1400953B8(v8);
    ExFreePool(v8);
  }
}
