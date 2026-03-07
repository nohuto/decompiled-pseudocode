__int64 __fastcall sub_14003CEB0(_QWORD *a1, unsigned int a2, unsigned int a3, _WORD *a4)
{
  __int64 v4; // rdi
  __int64 *v6; // r13
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  unsigned int v11; // r14d
  void *v12; // rsi
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rdi
  unsigned int v20; // esi
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  int v29; // eax
  void *v30; // rsi
  void *v31; // rdi
  void *v32; // rax
  __int64 v33; // rax
  int v34; // edx
  void *v35; // rax
  volatile signed __int32 *v36; // rsi
  volatile signed __int32 *v37; // rdi
  void *v38; // r12
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  int v42; // edx
  void *v43; // rax
  volatile signed __int32 *v44; // rsi
  volatile signed __int32 *v45; // rdi
  __int64 v46; // rsi
  void *v47; // r12
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // edx
  void *v51; // rax
  volatile signed __int32 *v52; // rsi
  volatile signed __int32 *v53; // rdi
  __int64 v54; // rsi
  void *v55; // r14
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // edx
  void *v59; // rax
  volatile signed __int32 *v60; // rsi
  volatile signed __int32 *v61; // rdi
  signed __int32 v63[6]; // [rsp+8h] [rbp-D9h] BYREF
  __int64 v64; // [rsp+38h] [rbp-A9h]
  const wchar_t *v65; // [rsp+40h] [rbp-A1h]
  unsigned int v66; // [rsp+48h] [rbp-99h]
  unsigned int v67; // [rsp+50h] [rbp-91h]
  unsigned int v68; // [rsp+58h] [rbp-89h] BYREF
  __int64 v69; // [rsp+60h] [rbp-81h] BYREF
  volatile signed __int32 *v70; // [rsp+68h] [rbp-79h]
  char v71[8]; // [rsp+70h] [rbp-71h] BYREF
  volatile signed __int32 *v72; // [rsp+78h] [rbp-69h]
  char v73[8]; // [rsp+80h] [rbp-61h] BYREF
  volatile signed __int32 *v74; // [rsp+88h] [rbp-59h]
  char v75[8]; // [rsp+90h] [rbp-51h] BYREF
  volatile signed __int32 *v76; // [rsp+98h] [rbp-49h]
  char v77[8]; // [rsp+A0h] [rbp-41h] BYREF
  volatile signed __int32 *v78; // [rsp+A8h] [rbp-39h]
  char v79[8]; // [rsp+B0h] [rbp-31h] BYREF
  volatile signed __int32 *v80; // [rsp+B8h] [rbp-29h]
  char v81[8]; // [rsp+C0h] [rbp-21h] BYREF
  volatile signed __int32 *v82; // [rsp+C8h] [rbp-19h]
  char v83[8]; // [rsp+D0h] [rbp-11h] BYREF
  volatile signed __int32 *v84; // [rsp+D8h] [rbp-9h]
  char v85[8]; // [rsp+E0h] [rbp-1h] BYREF
  volatile signed __int32 *v86; // [rsp+E8h] [rbp+7h]
  char v87[8]; // [rsp+F0h] [rbp+Fh] BYREF
  volatile signed __int32 *v88; // [rsp+F8h] [rbp+17h]
  char v89; // [rsp+150h] [rbp+6Fh]

  v89 = a2;
  LOWORD(v4) = 0;
  v68 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareNvm::ReadNvmRangeSafe", (__int64)a1);
      if ( v10 )
        v6 = v10;
    }
  }
  v68 = 0;
  v11 = sub_14003CAD0(a1, &v68);
  if ( v11 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = &unk_1400D44E0;
      v13 = &unk_1400D44E0;
      v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v71) + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 24LL))(a1 + 7, &v69);
      v66 = v11;
      v65 = L"GetEepromSize(eepromSize)";
      LOBYTE(v16) = 2;
      v64 = (__int64)v13;
      v17 = *(void **)(*(_QWORD *)v15 + 16LL);
      if ( v17 )
        v12 = v17;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v16,
        14,
        19,
        (__int64)&unk_1400D71D0,
        (__int64)v12,
        v64,
        (__int64)v65,
        v66);
      LOBYTE(v4) = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v18 = v70;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v70 )
      {
        if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v19 = v72;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    sub_140008390((int)a1, (__int64)L"GetEepromSize(eepromSize)", 156, 155, v11);
  }
  else if ( a2 < v68 && a3 <= v68 - a2 && a3 )
  {
    v20 = 0;
    v21 = 4 * a2;
    while ( 1 )
    {
      v22 = a1[47];
      v23 = v21 | 1u;
      v24 = *(_QWORD *)(v22 + 8);
      v25 = (_DWORD *)(v22 + 20);
      if ( !v24 || *v25 )
        break;
      *(_DWORD *)(v24 + 73748) = v23;
      _InterlockedOr(v63, 0);
      v11 = sub_14003DF70(a1);
      if ( v11 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v38 = &unk_1400D44E0;
          v4 = (__int64)&unk_1400D44E0;
          v39 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v77) + 16LL);
          if ( v39 )
            v4 = v39;
          v40 = *(_QWORD *)(a1[22] + 16LL);
          v41 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v79);
          v66 = v11;
          LOBYTE(v42) = 2;
          v43 = *(void **)(*(_QWORD *)v41 + 16LL);
          if ( v43 )
            v38 = v43;
          sub_1400A5E80(
            v40,
            v42,
            14,
            22,
            (__int64)&unk_1400D71D0,
            v4,
            (__int64)v38,
            (__int64)L"WaitForNvmReadToComplete()",
            v66);
          LOBYTE(v4) = -64;
        }
        if ( (v4 & 0x80u) != 0LL )
        {
          v44 = v78;
          LOBYTE(v4) = v4 & 0x7F;
          if ( v78 )
          {
            if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
              if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
            }
          }
        }
        if ( (v4 & 0x40) != 0 )
        {
          v45 = v80;
          if ( v80 )
          {
            if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
              if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
            }
          }
        }
        sub_1400084DC((int)a1, (__int64)L"WaitForNvmReadToComplete()", 174, 155, v11);
        goto LABEL_111;
      }
      v26 = a1[47];
      v27 = *(_QWORD *)(v26 + 8);
      if ( !v27 || *(_DWORD *)(v26 + 20) )
      {
        v29 = -1073741661;
        if ( *(_DWORD *)(v26 + 20) == 3 )
          v29 = -1073741130;
        v11 = v29;
        goto LABEL_41;
      }
      v28 = *(_DWORD *)(v27 + 73748);
      if ( v28 == -1 && *(_DWORD *)(*(_QWORD *)(v26 + 8) + 8LL) == -1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 8LL))(v26, 3LL);
        v11 = -1073741130;
LABEL_41:
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v30 = &unk_1400D44E0;
          v31 = &unk_1400D44E0;
          v32 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v75) + 16LL);
          if ( v32 )
            v31 = v32;
          v33 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v73);
          v66 = v11;
          v65 = L"m_mmioAccessor->ReadRegisterSafe(0x12014, eerdValue)";
          LOBYTE(v34) = 2;
          v64 = (__int64)v31;
          v35 = *(void **)(*(_QWORD *)v33 + 16LL);
          if ( v35 )
            v30 = v35;
          sub_1400A5E80(
            *(_QWORD *)(a1[22] + 16LL),
            v34,
            14,
            23,
            (__int64)&unk_1400D71D0,
            (__int64)v30,
            v64,
            (__int64)v65,
            v66);
          LOWORD(v4) = 768;
        }
        if ( (v4 & 0x200) != 0 )
        {
          v36 = v74;
          LOWORD(v4) = v4 & 0xFDFF;
          if ( v74 )
          {
            if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
              if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
            }
          }
        }
        if ( (v4 & 0x100) != 0 )
        {
          v37 = v76;
          if ( v76 )
          {
            if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
              if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
            }
          }
        }
        sub_14000D660((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x12014, eerdValue)", 176, 155, v11);
        goto LABEL_111;
      }
      ++v20;
      v21 += 4;
      *a4++ = HIWORD(v28);
      if ( v20 >= a3 )
      {
        v11 = 0;
        goto LABEL_111;
      }
    }
    v11 = -1073741130;
    if ( *v25 != 3 )
      v11 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v46 = *(_QWORD *)(a1[22] + 16LL);
      v47 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v48 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v83) + 16LL);
      if ( v48 )
        v4 = v48;
      v49 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v81);
      v66 = v11;
      LOBYTE(v50) = 2;
      v51 = *(void **)(*(_QWORD *)v49 + 16LL);
      if ( v51 )
        v47 = v51;
      sub_1400A5E80(
        v46,
        v50,
        14,
        21,
        (__int64)&unk_1400D71D0,
        (__int64)v47,
        v4,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x12014, eerdValue)",
        v66);
      LOBYTE(v4) = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v52 = v82;
      LOBYTE(v4) = v4 & 0xDF;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v52 + 8LL))(v52, v23);
          if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v53 = v84;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v53 + 8LL))(v53, v23);
          if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
        }
      }
    }
    sub_14000D7AC((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x12014, eerdValue)", 172, 155, v11);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v54 = *(_QWORD *)(a1[22] + 16LL);
      v55 = &unk_1400D44E0;
      v4 = (__int64)&unk_1400D44E0;
      v56 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v87) + 16LL);
      if ( v56 )
        v4 = v56;
      v57 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v85);
      v67 = a3;
      LOBYTE(v58) = 2;
      v59 = *(void **)(*(_QWORD *)v57 + 16LL);
      if ( v59 )
        v55 = v59;
      sub_1400A6AA8(v54, v58, 14, 20, (__int64)&unk_1400D71D0, (__int64)v55, v4, (__int64)qword_1400B7720, v89, v67);
      LOBYTE(v4) = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v60 = v86;
      LOBYTE(v4) = v4 & 0xF7;
      if ( v86 )
      {
        if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
          if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v61 = v88;
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
          if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
        }
      }
    }
    v11 = -1073741811;
  }
LABEL_111:
  if ( v6 )
  {
    sub_140005840(v6);
    ExFreePool(v6);
  }
  return v11;
}
