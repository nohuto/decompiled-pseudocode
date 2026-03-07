__int64 __fastcall sub_1400340B4(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // r14
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // r15d
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  void (__fastcall ***v18)(_QWORD, __int64); // rbx
  void (__fastcall ***v19)(_QWORD, __int64); // rdi
  unsigned int v20; // eax
  _QWORD *v21; // r14
  void *v22; // r12
  void *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  void *v26; // rsi
  __int64 v27; // rax
  void *v28; // rdx
  void *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rax
  void *v35; // r15
  __int64 v36; // rax
  __int64 v37; // rax
  void *v38; // rdx
  void *v39; // rax
  volatile signed __int32 *v40; // rsi
  volatile signed __int32 *v41; // rsi
  __int64 v42; // r10
  __int64 v43; // r9
  _DWORD *v44; // r8
  __int64 v45; // r12
  _QWORD *v46; // rbx
  __int64 v47; // rax
  void *v48; // rdi
  _QWORD *v49; // rcx
  void *v50; // rax
  __int64 v51; // rax
  int v52; // edx
  void *v53; // rax
  void *v54; // rcx
  volatile signed __int32 *v55; // rbx
  volatile signed __int32 *v56; // rbx
  signed __int32 v58[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v59; // [rsp+28h] [rbp-D8h]
  __int64 v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+40h] [rbp-C0h]
  int v62; // [rsp+50h] [rbp-B0h]
  __int64 *v63; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v64; // [rsp+60h] [rbp-A0h]
  _QWORD *v65; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v66; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall **v67)(PVOID); // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall ***v68)(_QWORD, __int64); // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+88h] [rbp-78h]
  __int64 v70; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall **v71)(PVOID); // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall **v75)(PVOID); // [rsp+C0h] [rbp-40h] BYREF
  PVOID v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  __int64 v78; // [rsp+E0h] [rbp-20h]
  char v79[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v80; // [rsp+F0h] [rbp-10h]
  char v81[8]; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v82; // [rsp+100h] [rbp+0h]
  char v83[8]; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v84; // [rsp+110h] [rbp+10h]
  char v85[8]; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v86; // [rsp+120h] [rbp+20h]
  char v87[8]; // [rsp+128h] [rbp+28h] BYREF
  volatile signed __int32 *v88; // [rsp+130h] [rbp+30h]
  char v89[8]; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v90; // [rsp+140h] [rbp+40h]
  _DWORD v91[128]; // [rsp+150h] [rbp+50h] BYREF

  v65 = a1;
  v2 = a1;
  v62 = 0;
  LODWORD(v4) = 0;
  v63 = 0LL;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareRxFilter::SetMulticastAddressListInHardware",
             (__int64)v2);
      if ( v7 )
        v5 = v7;
      v63 = v5;
    }
  }
  if ( a2[2] )
  {
    sub_1400B6C40(v91, 0LL, 512LL);
    sub_1400325BC(&v67, a2);
    v18 = v68;
    if ( v69 )
    {
      v19 = &v68[2 * v69];
      if ( v68 != v19 )
      {
        do
        {
          if ( (unsigned __int8)sub_1400892D0(v18) )
          {
            v20 = sub_140033A60((__int64)v2, (__int64)v18);
            v17 = (unsigned __int64)v20 >> 5;
            v16 = (unsigned int)(1 << (v20 & 0x1F));
            v91[v17] |= v16;
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 && LOWORD(DeviceObject->DeviceType) )
            {
              v62 = v4 | 0x1C;
              v21 = v2 + 7;
              v22 = &unk_1400D44E0;
              v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v2[7] + 24LL))(v2 + 7, v79)
                             + 16LL);
              if ( v23 )
                v22 = v23;
              v24 = *(_QWORD *)(v2[22] + 16LL);
              v25 = sub_140088C90(v18, &v71);
              v26 = &unk_1400D44E0;
              if ( *(_QWORD *)(v25 + 16) )
                v26 = *(void **)(v25 + 16);
              v27 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v21 + 16LL))(v21, v81);
              v61 = (__int64)v26;
              v28 = &unk_1400D44E0;
              v29 = *(void **)(*(_QWORD *)v27 + 16LL);
              if ( v29 )
                v28 = v29;
              v60 = (__int64)v28;
              LOBYTE(v28) = 5;
              sub_1400A9338(
                v24,
                (_DWORD)v28,
                14,
                18,
                (__int64)&unk_1400D69D8,
                (__int64)v22,
                v60,
                (__int64)qword_1400B7720,
                v61);
              LODWORD(v4) = v62;
            }
            if ( (v4 & 0x10) != 0 )
            {
              v30 = v80;
              LODWORD(v4) = v4 & 0xFFFFFFEF;
              if ( v80 )
              {
                if ( !_InterlockedDecrement(v80 + 2) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
                  if ( !_InterlockedDecrement(v30 + 3) )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
                }
              }
            }
            if ( (v4 & 8) != 0 )
            {
              v31 = v82;
              LODWORD(v4) = v4 & 0xFFFFFFF7;
              if ( v82 )
              {
                if ( !_InterlockedDecrement(v82 + 2) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
                  if ( !_InterlockedDecrement(v31 + 3) )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
                }
              }
            }
            if ( (v4 & 4) != 0 )
            {
              LODWORD(v4) = v4 & 0xFFFFFFFB;
              v71 = &off_1400D41D0;
              if ( P )
                ExFreePool(P);
              P = 0LL;
              v73 = 0LL;
              v74 = 0LL;
            }
          }
          else
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v32 = v2[22];
              v62 = v4 | 0xE0;
              v33 = *(_QWORD *)(v32 + 16);
              v34 = sub_140088C90(v18, &v75);
              v4 = (__int64)&unk_1400D44E0;
              v35 = &unk_1400D44E0;
              if ( *(_QWORD *)(v34 + 16) )
                v35 = *(void **)(v34 + 16);
              v36 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v2[7] + 16LL))(v2 + 7, v85)
                              + 16LL);
              if ( v36 )
                v4 = v36;
              v37 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v2[7] + 24LL))(v2 + 7, v83);
              v61 = (__int64)v35;
              v38 = &unk_1400D44E0;
              v39 = *(void **)(*(_QWORD *)v37 + 16LL);
              if ( v39 )
                v38 = v39;
              v59 = (__int64)v38;
              LOBYTE(v38) = 3;
              sub_1400A9338(v33, (_DWORD)v38, 14, 19, (__int64)&unk_1400D69D8, v59, v4, (__int64)qword_1400B7720, v61);
              LODWORD(v4) = v62;
            }
            if ( (v4 & 0x80u) != 0LL )
            {
              v40 = v84;
              LODWORD(v4) = v4 & 0xFFFFFF7F;
              if ( v84 )
              {
                if ( !_InterlockedDecrement(v84 + 2) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
                  if ( !_InterlockedDecrement(v40 + 3) )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
                }
              }
            }
            if ( (v4 & 0x40) != 0 )
            {
              v41 = v86;
              LODWORD(v4) = v4 & 0xFFFFFFBF;
              if ( v86 )
              {
                if ( !_InterlockedDecrement(v86 + 2) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
                  if ( !_InterlockedDecrement(v41 + 3) )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
                }
              }
            }
            if ( (v4 & 0x20) != 0 )
            {
              LODWORD(v4) = v4 & 0xFFFFFFDF;
              v75 = &off_1400D41D0;
              if ( v76 )
                ExFreePool(v76);
              v76 = 0LL;
              v77 = 0LL;
              v78 = 0LL;
            }
          }
          v2 = v65;
          v18 += 2;
        }
        while ( v18 != v19 );
        v18 = v68;
        v5 = v63;
      }
    }
    v67 = off_1400D6A08;
    if ( v18 )
    {
      if ( *(v18 - 1) )
      {
        (**v18)(v18, 3LL);
      }
      else if ( v18 != (void (__fastcall ***)(_QWORD, __int64))8 )
      {
        ExFreePool(v18 - 1);
      }
      v68 = 0LL;
    }
    v42 = v2[59];
    v43 = 20992LL;
    v69 = 0LL;
    v70 = 0LL;
    if ( !*(_QWORD *)(v42 + 8) || *(_DWORD *)(v42 + 20) )
    {
      v15 = -1073741130;
      if ( *(_DWORD *)(v42 + 20) != 3 )
        v15 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v46 = v2 + 7;
        LOWORD(v4) = v4 | 0x300;
        v47 = (*(__int64 (__fastcall **)(_QWORD *, char *, unsigned __int64, __int64))(v2[7] + 24LL))(
                v2 + 7,
                v87,
                v17,
                20992LL);
        v48 = &unk_1400D44E0;
        v49 = v2 + 7;
        v50 = *(void **)(*(_QWORD *)v47 + 16LL);
        if ( v50 )
          v48 = v50;
        v2 = *(_QWORD **)(v2[22] + 16LL);
        v51 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v46 + 16LL))(v49, v89);
        LODWORD(v61) = v15;
        LOBYTE(v52) = 2;
        v53 = *(void **)(*(_QWORD *)v51 + 16LL);
        v54 = &unk_1400D44E0;
        if ( v53 )
          v54 = v53;
        sub_1400A5E80(
          (_DWORD)v2,
          v52,
          14,
          20,
          (__int64)&unk_1400D69D8,
          (__int64)v48,
          (__int64)v54,
          (__int64)L"m_mmioAccessor->WriteRegistersRangeSafe((0x05200 + (0) * 4), mtaShadow, sc_multicastHashTableSize)",
          v61);
        LODWORD(v2) = (_DWORD)v65;
      }
      if ( (v4 & 0x200) != 0 )
      {
        v55 = v88;
        LOWORD(v4) = v4 & 0xFDFF;
        if ( v88 )
        {
          if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, unsigned __int64, __int64))(*(_QWORD *)v55 + 8LL))(
              v55,
              v16,
              v17,
              v43);
            if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
          }
        }
      }
      if ( (v4 & 0x100) != 0 )
      {
        v56 = v90;
        if ( v90 )
        {
          if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, unsigned __int64, __int64))(*(_QWORD *)v56 + 8LL))(
              v56,
              v16,
              v17,
              v43);
            if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
          }
        }
      }
      sub_140017A30(
        (int)v2,
        (__int64)L"m_mmioAccessor->WriteRegistersRangeSafe((0x05200 + (0) * 4), mtaShadow, sc_multicastHashTableSize)",
        237,
        56,
        v15);
    }
    else
    {
      v44 = v91;
      v45 = 128LL;
      do
      {
        *(_DWORD *)((unsigned int)v43 + *(_QWORD *)(v42 + 8)) = *v44;
        _InterlockedOr(v58, 0);
        LODWORD(v43) = v43 + 4;
        ++v44;
        --v45;
      }
      while ( v45 );
      v5 = v63;
      v15 = 0;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 = (__int64)&unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD **))(v2[7] + 24LL))(v2 + 7, &v65) + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64 **))(v2[7] + 16LL))(v2 + 7, &v63);
      LOBYTE(v11) = 4;
      v12 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v4 = v12;
      sub_1400A3320(
        *(_QWORD *)(v2[22] + 16LL),
        v11,
        14,
        17,
        (__int64)&unk_1400D69D8,
        (__int64)v8,
        v4,
        (__int64)qword_1400B7720);
      LOBYTE(v4) = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v13 = v66;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v14 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    v15 = sub_140033604(v2);
  }
  if ( v5 )
  {
    sub_140005840(v5);
    ExFreePool(v5);
  }
  return v15;
}
