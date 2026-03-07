__int64 __fastcall sub_140025C10(__int64 a1, char *a2, unsigned int a3)
{
  char *v3; // r13
  __int64 v4; // r15
  __int16 v5; // r14
  __int64 *v6; // r12
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  char *v14; // rbx
  __int64 v15; // rcx
  void *v16; // rax
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // r14
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  char *v31; // rcx
  void *v32; // rdx
  unsigned __int64 v33; // rcx
  _WORD *v34; // rax
  signed __int64 v35; // rdx
  __int16 v36; // r8
  volatile signed __int32 *v37; // rdi
  volatile signed __int32 *v38; // rdi
  void *v39; // rdi
  void *v40; // rax
  __int64 v41; // rax
  void *v42; // rdx
  void *v43; // rax
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  unsigned int v46; // r15d
  void *v47; // rdi
  void *v48; // rax
  __int64 v49; // rax
  void *v50; // rdx
  void *v51; // rax
  volatile signed __int32 *v52; // rbx
  volatile signed __int32 *v53; // rbx
  void *v54; // rdi
  void *v55; // rax
  __int64 v56; // rax
  int v57; // edx
  void *v58; // r8
  void *v59; // rax
  volatile signed __int32 *v60; // rbx
  volatile signed __int32 *v61; // rbx
  __int64 v63; // [rsp+30h] [rbp-D8h]
  __int64 v64; // [rsp+30h] [rbp-D8h]
  __int64 v65; // [rsp+50h] [rbp-B8h]
  __int16 v66; // [rsp+58h] [rbp-B0h] BYREF
  char v67; // [rsp+5Ah] [rbp-AEh]
  __int64 (__fastcall **v68)(PVOID); // [rsp+68h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+70h] [rbp-98h]
  PVOID v70; // [rsp+78h] [rbp-90h]
  unsigned __int64 v71; // [rsp+80h] [rbp-88h]
  unsigned __int64 v72; // [rsp+88h] [rbp-80h]
  _BYTE *v73; // [rsp+90h] [rbp-78h]
  __int64 v74; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v75)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v76; // [rsp+A8h] [rbp-60h]
  PVOID v77; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v78; // [rsp+B8h] [rbp-50h]
  __int64 v79; // [rsp+C0h] [rbp-48h]
  __int64 *v80; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v81; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v82; // [rsp+D8h] [rbp-30h]
  __int64 v83; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v84; // [rsp+E8h] [rbp-20h]
  __int64 v85; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v86; // [rsp+F8h] [rbp-10h]
  __int64 v87; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v88; // [rsp+108h] [rbp+0h]
  __int64 (__fastcall **v89)(PVOID); // [rsp+110h] [rbp+8h] BYREF
  __int16 v90; // [rsp+118h] [rbp+10h]
  PVOID P; // [rsp+120h] [rbp+18h]
  __int64 v92; // [rsp+128h] [rbp+20h]
  __int64 v93; // [rsp+130h] [rbp+28h]
  __int64 (__fastcall **v94)(PVOID); // [rsp+138h] [rbp+30h] BYREF
  PVOID v95; // [rsp+148h] [rbp+40h]
  __int64 v96; // [rsp+150h] [rbp+48h]
  __int64 v97; // [rsp+158h] [rbp+50h]
  char v98[8]; // [rsp+160h] [rbp+58h] BYREF
  volatile signed __int32 *v99; // [rsp+168h] [rbp+60h]
  char v100[8]; // [rsp+170h] [rbp+68h] BYREF
  volatile signed __int32 *v101; // [rsp+178h] [rbp+70h]
  char v102[8]; // [rsp+180h] [rbp+78h] BYREF
  volatile signed __int32 *v103; // [rsp+188h] [rbp+80h]
  char v104[8]; // [rsp+190h] [rbp+88h] BYREF
  volatile signed __int32 *v105; // [rsp+198h] [rbp+90h]
  _QWORD v106[10]; // [rsp+1A8h] [rbp+A0h] BYREF
  PVOID v107; // [rsp+1F8h] [rbp+F0h]
  __int64 v108; // [rsp+200h] [rbp+F8h]
  __int64 v109; // [rsp+208h] [rbp+100h]
  _BYTE v110[16]; // [rsp+218h] [rbp+110h] BYREF
  PVOID v111; // [rsp+228h] [rbp+120h]
  __int16 v115; // [rsp+2B0h] [rbp+1A8h]

  v3 = a2;
  v4 = a1;
  v5 = 0;
  v6 = 0LL;
  v80 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::SendCommandToFirmware",
             (v4 + 8) & -(__int64)(v4 != 0));
      if ( v8 )
        v6 = v8;
      v80 = v6;
    }
  }
  if ( v3[1] )
  {
    v90 = 0;
    v89 = &off_1400D41D0;
    P = 0LL;
    v92 = 0LL;
    v93 = 0LL;
    sub_1400011A8(&v89, (__int64)L"Payload", 7uLL);
    sub_140021F60(v106, (__int64)&v89, (__int64)(v3 + 4), (__int64)&v3[(unsigned __int8)v3[1] + 4]);
    if ( P )
      ExFreePool(P);
    if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
    {
      v14 = (char *)v70;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v4 + 64) + 16LL))(v4 + 64, v100);
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)v9 + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = *(_QWORD *)(v4 + 64);
      v83 = (__int64)v10;
      v13 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(v12 + 24))(v4 + 64, v98);
      v14 = 0LL;
      LOWORD(v69) = 0;
      v70 = 0LL;
      v71 = 0LL;
      v15 = *v13;
      v72 = 0LL;
      v76 = 0;
      v77 = 0LL;
      v16 = *(void **)(v15 + 16);
      v17 = &unk_1400D44E0;
      v78 = 0LL;
      v79 = 0LL;
      if ( v16 )
        v17 = v16;
      v18 = *(_QWORD *)(v4 + 184);
      v85 = (__int64)v17;
      v87 = *(_QWORD *)(v18 + 16);
      v68 = &off_1400D41D0;
      v75 = &off_1400D41D0;
      sub_1400011A8(&v75, (__int64)qword_1400B7720, 1uLL);
      v19 = v108;
      v20 = v77;
      v73 = v107;
      if ( v108 )
      {
        v21 = v78;
        HIBYTE(v115) = 16;
        while ( 1 )
        {
          v74 = v19 - 1;
          if ( v14 )
            sub_140001480(&v68, (__int64)L"0x", 2LL);
          else
            sub_1400011A8(&v68, (__int64)L"0x", 2uLL);
          v67 = 10;
          LOBYTE(v115) = *v73;
          v66 = v115;
          sub_140022394((__int64)v110, (unsigned __int8 *)&v66);
          v22 = sub_1400A8CF8(&v94, v110, 2LL);
          v23 = *(_QWORD *)(v22 + 24);
          v24 = *(_QWORD *)(v22 + 16);
          if ( v70 )
            sub_140001480(&v68, v24, v23);
          else
            sub_1400011A8(&v68, v24, v23);
          v94 = &off_1400D41D0;
          if ( v95 )
            ExFreePool(v95);
          v95 = 0LL;
          v96 = 0LL;
          v97 = 0LL;
          if ( v111 )
            ExFreePool(v111);
          if ( !v74 )
            goto LABEL_48;
          v14 = (char *)v70;
          if ( !v70 )
            break;
          if ( !v21 || !v20 )
            goto LABEL_49;
          v25 = 2 * (v21 + v71);
          v82 = v21 + v71;
          if ( v72 <= v21 + v71 )
          {
            _mm_lfence();
            v26 = 2 * (v21 + v71);
            if ( v72 > v25 )
              v26 = v72;
            if ( v26 <= 0x40 )
            {
              v27 = 64LL;
            }
            else
            {
              v27 = 2 * (v21 + v71);
              if ( v72 > v25 )
                v27 = v72;
            }
            v28 = 2 * v27;
            if ( !is_mul_ok(v27, 2uLL) )
              v28 = -1LL;
            v29 = ExAllocatePool2(64LL, v28, 1802728562LL);
            v14 = (char *)v29;
            if ( !v29 )
            {
              v21 = v78;
              v20 = v77;
LABEL_48:
              v14 = (char *)v70;
              goto LABEL_49;
            }
            v30 = v71;
            if ( v71 )
              sub_1400B6980(v29, v70, 2 * v71);
            v21 = v78;
            v31 = &v14[2 * v30];
            v20 = v77;
            sub_1400B6980(v31, v77, 2 * v78);
            ExFreePool(v70);
            v72 = v27;
            v70 = v14;
          }
          else
          {
            sub_1400B6980((char *)v70 + 2 * v71, v20, 2 * v21);
          }
          v71 = v82;
          *(_WORD *)&v14[v25] = 0;
LABEL_49:
          ++v73;
          v19 = v74;
          if ( !v74 )
          {
            v3 = a2;
            v6 = v80;
            v4 = a1;
            goto LABEL_51;
          }
        }
        if ( !v20 || !v21 )
          goto LABEL_49;
        v70 = 0LL;
        v71 = 0LL;
        v72 = 0LL;
        if ( !(unsigned int)sub_140001070(&v68, v21, 0LL) )
        {
          v14 = (char *)v70;
          v33 = 0LL;
          v71 = 0LL;
          v34 = v70;
          v35 = v20 - (_BYTE *)v70;
          do
          {
            v36 = *(_WORD *)((char *)v34 + v35);
            if ( !v36 )
              break;
            *v34 = v36;
            ++v33;
            ++v34;
          }
          while ( v33 < v21 );
          v71 = v33;
          *(_WORD *)&v14[2 * v21] = 0;
          goto LABEL_49;
        }
        goto LABEL_48;
      }
LABEL_51:
      if ( v20 )
        ExFreePool(v20);
      v32 = &unk_1400D44E0;
      if ( v14 )
        v32 = v14;
      v65 = (__int64)v32;
      LOBYTE(v32) = 4;
      sub_1400A8E20(v87, (_DWORD)v32, 14, 20, (__int64)&unk_1400D6110, v85, v83, (__int64)qword_1400B7720, *v3, v65);
      v5 = 7;
    }
    if ( (v5 & 4) != 0 )
    {
      v37 = v99;
      v5 &= ~4u;
      if ( v99 )
      {
        if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
        v14 = (char *)v70;
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v38 = v101;
      v5 &= ~2u;
      if ( v101 )
      {
        if ( _InterlockedExchangeAdd(v101 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
        v14 = (char *)v70;
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      if ( v14 )
        ExFreePool(v14);
    }
    v106[0] = &off_1400D6120;
    v106[1] = off_1400D6148;
    v106[9] = off_1400D4D58;
    if ( v107 )
    {
      ExFreePool(v107);
      v107 = 0LL;
    }
    v108 = 0LL;
    v109 = 0LL;
    sub_140005CFC(v106);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v39 = &unk_1400D44E0;
      v40 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v4 + 64) + 16LL))(
                                    v4 + 64,
                                    &v85)
                     + 16LL);
      if ( v40 )
        v39 = v40;
      v41 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v4 + 64) + 24LL))(v4 + 64, &v87);
      v42 = &unk_1400D44E0;
      v43 = *(void **)(*(_QWORD *)v41 + 16LL);
      if ( v43 )
        v42 = v43;
      v63 = (__int64)v42;
      LOBYTE(v42) = 4;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(v4 + 184) + 16LL),
        (_DWORD)v42,
        14,
        21,
        (__int64)&unk_1400D6110,
        v63,
        (__int64)v39,
        (__int64)qword_1400B7720,
        *v3);
      v5 = 24;
    }
    if ( (v5 & 0x10) != 0 )
    {
      v44 = v88;
      v5 &= ~0x10u;
      if ( v88 )
      {
        if ( !_InterlockedDecrement(v88 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          if ( !_InterlockedDecrement(v44 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    if ( (v5 & 8) != 0 )
    {
      v45 = v86;
      v5 &= ~8u;
      if ( v86 )
      {
        if ( !_InterlockedDecrement(v86 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
          if ( !_InterlockedDecrement(v45 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
        }
      }
    }
  }
  v46 = sub_140026694(v4, v3, a3);
  if ( v46 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v5) = v5 | 0x60;
      v47 = &unk_1400D44E0;
      v48 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)(a1 + 64) + 16LL))(
                                    a1 + 64,
                                    &v80)
                     + 16LL);
      if ( v48 )
        v47 = v48;
      v49 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 64) + 24LL))(a1 + 64, &v83);
      v50 = &unk_1400D44E0;
      v51 = *(void **)(*(_QWORD *)v49 + 16LL);
      if ( v51 )
        v50 = v51;
      v64 = (__int64)v50;
      LOBYTE(v50) = 2;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL),
        (_DWORD)v50,
        14,
        22,
        (__int64)&unk_1400D6110,
        v64,
        (__int64)v47,
        (__int64)L"SendHostInterfaceCommand(firmwareCommand, commandLength)",
        v46);
    }
    if ( (v5 & 0x40) != 0 )
    {
      v52 = v84;
      LOBYTE(v5) = v5 & 0xBF;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
          if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
        }
      }
    }
    if ( (v5 & 0x20) != 0 )
    {
      v53 = v81;
      if ( v81 )
      {
        if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
        }
      }
    }
    sub_140009AE8(a1 + 8, (__int64)L"SendHostInterfaceCommand(firmwareCommand, commandLength)", 227, 45, v46);
  }
  else if ( v3[2] == 1 )
  {
    v46 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v5 |= 0x180u;
      v54 = &unk_1400D44E0;
      v55 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 64) + 16LL))(
                                    a1 + 64,
                                    v104)
                     + 16LL);
      if ( v55 )
        v54 = v55;
      v56 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 64) + 24LL))(a1 + 64, v102);
      v57 = (unsigned __int8)*v3;
      v58 = &unk_1400D44E0;
      v59 = *(void **)(*(_QWORD *)v56 + 16LL);
      if ( v59 )
        v58 = v59;
      LOBYTE(v57) = 2;
      sub_1400A6AA8(
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL),
        v57,
        14,
        23,
        (__int64)&unk_1400D6110,
        (__int64)v58,
        (__int64)v54,
        (__int64)qword_1400B7720,
        *v3,
        v3[2]);
    }
    if ( (v5 & 0x100) != 0 )
    {
      v60 = v103;
      if ( v103 )
      {
        if ( _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
          if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
        }
      }
    }
    if ( (v5 & 0x80u) != 0 )
    {
      v61 = v105;
      if ( v105 )
      {
        if ( _InterlockedExchangeAdd(v105 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
          if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
        }
      }
    }
    v46 = -1073741823;
  }
  if ( v6 )
  {
    sub_140005840(v6);
    ExFreePool(v6);
  }
  return v46;
}
