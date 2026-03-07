__int64 __fastcall sub_140037660(_QWORD *a1, int a2, unsigned int a3, int a4)
{
  __int64 v4; // rdi
  __int64 *v6; // r12
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  unsigned int v12; // r14d
  void *v13; // r13
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  void *v23; // r13
  void *v24; // rdx
  void *v25; // rax
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rcx
  volatile signed __int32 *v29; // rsi
  volatile signed __int32 *v30; // rdi
  void *v31; // r13
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // rsi
  volatile signed __int32 *v38; // rdi
  unsigned int v39; // ebx
  unsigned int v40; // eax
  __int64 v41; // rdi
  __int64 v42; // rax
  void *v43; // r13
  void *v44; // rdx
  void *v45; // rax
  __int64 v46; // rcx
  void *v47; // rax
  __int64 v48; // rcx
  volatile signed __int32 *v49; // rsi
  volatile signed __int32 *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rcx
  void *v53; // r13
  void *v54; // rdi
  void *v55; // rax
  __int64 v56; // rax
  int v57; // edx
  void *v58; // rax
  volatile signed __int32 *v59; // rsi
  volatile signed __int32 *v60; // rdi
  signed __int32 v62[8]; // [rsp+8h] [rbp-C9h] BYREF
  __int64 v63; // [rsp+38h] [rbp-99h]
  const wchar_t *v64; // [rsp+40h] [rbp-91h]
  unsigned int v65; // [rsp+48h] [rbp-89h]
  unsigned int v66; // [rsp+58h] [rbp-79h] BYREF
  char v67[8]; // [rsp+60h] [rbp-71h] BYREF
  volatile signed __int32 *v68; // [rsp+68h] [rbp-69h]
  char v69[8]; // [rsp+70h] [rbp-61h] BYREF
  volatile signed __int32 *v70; // [rsp+78h] [rbp-59h]
  char v71[8]; // [rsp+80h] [rbp-51h] BYREF
  volatile signed __int32 *v72; // [rsp+88h] [rbp-49h]
  char v73[8]; // [rsp+90h] [rbp-41h] BYREF
  volatile signed __int32 *v74; // [rsp+98h] [rbp-39h]
  char v75[8]; // [rsp+A0h] [rbp-31h] BYREF
  volatile signed __int32 *v76; // [rsp+A8h] [rbp-29h]
  char v77[8]; // [rsp+B0h] [rbp-21h] BYREF
  volatile signed __int32 *v78; // [rsp+B8h] [rbp-19h]
  char v79[8]; // [rsp+C0h] [rbp-11h] BYREF
  volatile signed __int32 *v80; // [rsp+C8h] [rbp-9h]
  char v81[8]; // [rsp+D0h] [rbp-1h] BYREF
  volatile signed __int32 *v82; // [rsp+D8h] [rbp+7h]
  char v83[8]; // [rsp+E0h] [rbp+Fh] BYREF
  volatile signed __int32 *v84; // [rsp+E8h] [rbp+17h]
  char v85[8]; // [rsp+F0h] [rbp+1Fh] BYREF
  volatile signed __int32 *v86; // [rsp+F8h] [rbp+27h]

  LOWORD(v4) = 0;
  v66 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_1400045E8(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::ConfigureFlowControl",
              (__int64)a1);
      if ( v11 )
        v6 = v11;
    }
  }
  v12 = sub_140037248(a1);
  if ( v12 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = &unk_1400D44E0;
      v14 = &unk_1400D44E0;
      v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v69) + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v67);
      v65 = v12;
      v64 = L"ConfigureCollisionDetection()";
      LOBYTE(v17) = 2;
      v63 = (__int64)v14;
      v18 = *(void **)(*(_QWORD *)v16 + 16LL);
      if ( v18 )
        v13 = v18;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v17,
        14,
        26,
        (__int64)&unk_1400D6CE0,
        (__int64)v13,
        v63,
        (__int64)v64,
        v65);
      LOBYTE(v4) = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v19 = v68;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v20 = v70;
      if ( v70 )
      {
        if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    sub_1400088C0((int)a1, (__int64)L"ConfigureCollisionDetection()", 237, 48, v12);
  }
  else
  {
    v66 = 0;
    v12 = sub_1400364E8(a1, a2, &v66);
    if ( v12 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v21 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v71);
        v22 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v73);
        v65 = v12;
        v23 = &unk_1400D44E0;
        v64 = L"CalculateFlowControlMode(requestedFlowControl, flowControlMode)";
        v24 = &unk_1400D44E0;
        v25 = *(void **)(*(_QWORD *)v22 + 16LL);
        v26 = a1[22];
        if ( v25 )
          v24 = v25;
        v27 = *(void **)(v21 + 16);
        v63 = (__int64)v24;
        v28 = *(_QWORD *)(v26 + 16);
        LOBYTE(v24) = 2;
        if ( v27 )
          v23 = v27;
        sub_1400A5E80(v28, (_DWORD)v24, 14, 27, (__int64)&unk_1400D6CE0, (__int64)v23, v63, (__int64)v64, v65);
        LOBYTE(v4) = 12;
      }
      if ( (v4 & 8) != 0 )
      {
        v29 = v72;
        LOBYTE(v4) = v4 & 0xF7;
        if ( v72 )
        {
          if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
            if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
          }
        }
      }
      if ( (v4 & 4) != 0 )
      {
        v30 = v74;
        if ( v74 )
        {
          if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
      }
      sub_14000A018((int)a1, (__int64)L"CalculateFlowControlMode(requestedFlowControl, flowControlMode)", 240, 48, v12);
    }
    else
    {
      v12 = sub_140037ED8(a1, v66);
      if ( v12 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v31 = &unk_1400D44E0;
          v4 = (__int64)&unk_1400D44E0;
          v32 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v77) + 16LL);
          if ( v32 )
            v4 = v32;
          v33 = *(_QWORD *)(a1[22] + 16LL);
          v34 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v75);
          v65 = v12;
          LOBYTE(v35) = 2;
          v36 = *(void **)(*(_QWORD *)v34 + 16LL);
          if ( v36 )
            v31 = v36;
          sub_1400A5E80(
            v33,
            v35,
            14,
            28,
            (__int64)&unk_1400D6CE0,
            (__int64)v31,
            v4,
            (__int64)L"SetFlowControl(flowControlMode)",
            v65);
          LOBYTE(v4) = 48;
        }
        if ( (v4 & 0x20) != 0 )
        {
          v37 = v76;
          LOBYTE(v4) = v4 & 0xDF;
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
        if ( (v4 & 0x10) != 0 )
        {
          v38 = v78;
          if ( v78 )
          {
            if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
              if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
            }
          }
        }
        sub_140008B58((int)a1, (__int64)L"SetFlowControl(flowControlMode)", 242, 48, v12);
      }
      else
      {
        v39 = sub_140035F10(a1, a3, a4);
        v40 = sub_140036448((__int64)a1, a3, v39);
        v12 = sub_140038878(a1, v66, v40, v39);
        if ( v12 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v41 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v79);
            v42 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v81);
            v65 = v12;
            v43 = &unk_1400D44E0;
            v64 = L"SetWaterMarks(flowControlMode, lowWaterMark, highWaterMark)";
            v44 = &unk_1400D44E0;
            v45 = *(void **)(*(_QWORD *)v42 + 16LL);
            v46 = a1[22];
            if ( v45 )
              v44 = v45;
            v47 = *(void **)(v41 + 16);
            v63 = (__int64)v44;
            v48 = *(_QWORD *)(v46 + 16);
            LOBYTE(v44) = 2;
            if ( v47 )
              v43 = v47;
            sub_1400A5E80(v48, (_DWORD)v44, 14, 29, (__int64)&unk_1400D6CE0, (__int64)v43, v63, (__int64)v64, v65);
            LOBYTE(v4) = -64;
          }
          if ( (v4 & 0x80u) != 0LL )
          {
            v49 = v80;
            LOBYTE(v4) = v4 & 0x7F;
            if ( v80 )
            {
              if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
                if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
              }
            }
          }
          if ( (v4 & 0x40) != 0 )
          {
            v50 = v82;
            if ( v82 )
            {
              if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
                if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
              }
            }
          }
          sub_140028FA0((int)a1, (__int64)L"SetWaterMarks(flowControlMode, lowWaterMark, highWaterMark)", 257, 48, v12);
        }
        else
        {
          v51 = a1[45];
          v52 = *(_QWORD *)(v51 + 8);
          if ( !v52 || *(_DWORD *)(v51 + 20) )
          {
            v12 = -1073741130;
            if ( *(_DWORD *)(v51 + 20) != 3 )
              v12 = -1073741661;
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v53 = &unk_1400D44E0;
              v54 = &unk_1400D44E0;
              v55 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v85)
                             + 16LL);
              if ( v55 )
                v54 = v55;
              v56 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v83);
              v65 = v12;
              v64 = L"m_mmioAccessor->WriteRegisterSafe(0x00170, pauseTime)";
              LOBYTE(v57) = 2;
              v63 = (__int64)v54;
              v58 = *(void **)(*(_QWORD *)v56 + 16LL);
              if ( v58 )
                v53 = v58;
              sub_1400A5E80(
                *(_QWORD *)(a1[22] + 16LL),
                v57,
                14,
                30,
                (__int64)&unk_1400D6CE0,
                (__int64)v53,
                v63,
                (__int64)v64,
                v65);
              LOWORD(v4) = 768;
            }
            if ( (v4 & 0x200) != 0 )
            {
              v59 = v84;
              LOWORD(v4) = v4 & 0xFDFF;
              if ( v84 )
              {
                if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
                  if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
                }
              }
            }
            if ( (v4 & 0x100) != 0 )
            {
              v60 = v86;
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
            sub_14000D7AC((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x00170, pauseTime)", 260, 48, v12);
          }
          else
          {
            *(_DWORD *)(v52 + 368) = 1664;
            _InterlockedOr(v62, 0);
            v12 = 0;
          }
        }
      }
    }
  }
  if ( v6 )
  {
    sub_140005840(v6);
    ExFreePool(v6);
  }
  return v12;
}
