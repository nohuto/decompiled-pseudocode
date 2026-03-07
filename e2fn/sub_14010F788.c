__int64 __fastcall sub_14010F788(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rbx
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  unsigned int v10; // r13d
  _UNKNOWN **v11; // rdx
  const wchar_t *v12; // rdi
  _BYTE *v13; // rax
  const wchar_t *v14; // rax
  __int64 v15; // rax
  const wchar_t *v16; // rdx
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  bool v20; // zf
  __int64 *v21; // rdx
  const wchar_t *v22; // rax
  __int64 v23; // rax
  const wchar_t *v24; // rdx
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  __int64 v28; // rsi
  const wchar_t *v29; // rax
  __int64 v30; // rax
  const wchar_t *v31; // rdx
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  __int64 v35; // rsi
  const wchar_t *v36; // rax
  const wchar_t *v37; // rax
  const wchar_t *v38; // rcx
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  __int64 *v41; // rdx
  unsigned int v42; // ebx
  __int64 v44; // rsi
  const wchar_t *v45; // rax
  const wchar_t *v46; // rax
  const wchar_t *v47; // rcx
  volatile signed __int32 *v48; // rbx
  volatile signed __int32 *v49; // rbx
  _BYTE v50[8]; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v51; // [rsp+60h] [rbp-A0h]
  _BYTE v52[8]; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v53; // [rsp+70h] [rbp-90h]
  _BYTE v54[8]; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v55; // [rsp+80h] [rbp-80h]
  _BYTE v56[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v57; // [rsp+90h] [rbp-70h]
  _BYTE v58[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v59; // [rsp+A0h] [rbp-60h]
  _BYTE v60[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v61; // [rsp+B0h] [rbp-50h]
  _BYTE v62[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v63; // [rsp+C0h] [rbp-40h]
  _BYTE v64[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v65; // [rsp+D0h] [rbp-30h]
  _BYTE v66[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v67; // [rsp+E0h] [rbp-20h]
  _BYTE v68[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v69; // [rsp+F0h] [rbp-10h]
  unsigned int v72; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v73; // [rsp+168h] [rbp+68h] BYREF

  v3 = 0;
  v72 = 0;
  v5 = 0LL;
  v6 = a2;
  v7 = a1;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterruptsPool::FindInterruptResources", v7);
      if ( v9 )
        v5 = v9;
    }
  }
  while ( *(_QWORD *)(a3 + 32) )
    sub_1400A4398((_QWORD *)a3, *(_QWORD **)(a3 + 8));
  v10 = 0;
  v73 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_1400DF678 + 2432))(qword_1400DF6A8, v6);
  v11 = &off_1400DF038;
  v12 = (const wchar_t *)&unk_1400D44E0;
  if ( v73 )
  {
    _mm_lfence();
    while ( 1 )
    {
      v13 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(qword_1400DF678 + 2440))(
                       qword_1400DF6A8,
                       v6,
                       v10);
      if ( v13 && *v13 == 2 )
      {
        if ( (v13[2] & 2) != 0 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v3 |= 3u;
            v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v7 + 56)
                                                                                             + 16LL))(
                                                   v7 + 56,
                                                   v52)
                                    + 16LL);
            if ( v14 )
              v12 = v14;
            v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v7 + 56) + 24LL))(v7 + 56, v50);
            v16 = (const wchar_t *)&unk_1400D44E0;
            v17 = *(const wchar_t **)(*(_QWORD *)v15 + 16LL);
            if ( v17 )
              v16 = v17;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
              4u,
              4u,
              0x11u,
              (__int64)&unk_1400D89D0,
              v16,
              v12,
              (const wchar_t *)qword_14014EC70);
            v12 = (const wchar_t *)&unk_1400D44E0;
          }
          if ( (v3 & 2) != 0 )
          {
            v18 = v51;
            v3 &= ~2u;
            if ( v51 )
            {
              if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
                if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
              }
            }
          }
          if ( (v3 & 1) != 0 )
          {
            v19 = v53;
            v3 &= ~1u;
            if ( v53 )
            {
              if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
                if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
              }
            }
          }
          v20 = *(_QWORD *)(a3 + 32) == 0LL;
          v72 = v10;
          if ( v20 )
            v21 = *(__int64 **)(a3 + 8);
          else
            v21 = (__int64 *)a3;
          sub_1400A2E00((__int64 *)a3, v21, (int *)&v72);
        }
        else
        {
          if ( !*(_QWORD *)(a3 + 32) )
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              _mm_lfence();
              LOBYTE(v3) = v3 | 0xC;
              v28 = *(_QWORD *)(*(_QWORD *)(v7 + 176) + 16LL);
              v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v7 + 56)
                                                                                               + 24LL))(
                                                     v7 + 56,
                                                     v58)
                                      + 16LL);
              if ( v29 )
                v12 = v29;
              v30 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v7 + 56) + 16LL))(v7 + 56, v60);
              v31 = (const wchar_t *)&unk_1400D44E0;
              v32 = *(const wchar_t **)(*(_QWORD *)v30 + 16LL);
              if ( v32 )
                v31 = v32;
              sub_1400A6AA8(v28, 3u, 4u, 0x12u, (__int64)&unk_1400D89D0, v12, v31, (const wchar_t *)qword_14014EC70);
              v12 = (const wchar_t *)&unk_1400D44E0;
            }
            if ( (v3 & 8) != 0 )
            {
              v33 = v59;
              LOBYTE(v3) = v3 & 0xF7;
              if ( v59 )
              {
                if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
                  if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
                }
              }
            }
            if ( (v3 & 4) != 0 )
            {
              v34 = v61;
              LOBYTE(v3) = v3 & 0xFB;
              if ( v61 )
              {
                if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
                  if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
                }
              }
            }
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              LOBYTE(v3) = v3 | 0x30;
              v35 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
              v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                               + 16LL))(
                                                     a1 + 56,
                                                     v64)
                                      + 16LL);
              if ( v36 )
                v12 = v36;
              v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                               + 24LL))(
                                                     a1 + 56,
                                                     v62)
                                      + 16LL);
              v38 = (const wchar_t *)&unk_1400D44E0;
              if ( v37 )
                v38 = v37;
              sub_1400A3320(v35, 3u, 4u, 0x13u, (__int64)&unk_1400D89D0, v38, v12, (const wchar_t *)qword_14014EC70);
            }
            if ( (v3 & 0x20) != 0 )
            {
              v39 = v63;
              LOBYTE(v3) = v3 & 0xDF;
              if ( v63 )
              {
                if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
                  if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
                }
              }
            }
            if ( (v3 & 0x10) != 0 )
            {
              v40 = v65;
              if ( v65 )
              {
                if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
                  if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
                }
              }
            }
            v20 = *(_QWORD *)(a3 + 32) == 0LL;
            v73 = v10;
            if ( v20 )
              v41 = *(__int64 **)(a3 + 8);
            else
              v41 = (__int64 *)a3;
            sub_1400A2E00((__int64 *)a3, v41, (int *)&v73);
LABEL_90:
            v42 = 0;
            goto LABEL_91;
          }
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v3 |= 0xC0u;
            v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v7 + 56)
                                                                                             + 16LL))(
                                                   v7 + 56,
                                                   v56)
                                    + 16LL);
            if ( v22 )
              v12 = v22;
            v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v7 + 56) + 24LL))(v7 + 56, v54);
            v24 = (const wchar_t *)&unk_1400D44E0;
            v25 = *(const wchar_t **)(*(_QWORD *)v23 + 16LL);
            if ( v25 )
              v24 = v25;
            sub_1400A6AA8(
              *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
              3u,
              4u,
              0x14u,
              (__int64)&unk_1400D89D0,
              v24,
              v12,
              (const wchar_t *)qword_14014EC70);
            v12 = (const wchar_t *)&unk_1400D44E0;
          }
          if ( (v3 & 0x80u) != 0 )
          {
            v26 = v55;
            v3 &= ~0x80u;
            if ( v55 )
            {
              if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
                if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
              }
            }
          }
          if ( (v3 & 0x40) != 0 )
          {
            v27 = v57;
            v3 &= ~0x40u;
            if ( v57 )
            {
              if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
                if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
              }
            }
          }
        }
        v7 = a1;
      }
      if ( ++v10 >= v73 )
      {
        v11 = &off_1400DF038;
        break;
      }
      v6 = a2;
    }
  }
  if ( *(_QWORD *)(a3 + 32) )
    goto LABEL_90;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOWORD(v3) = v3 | 0x300;
    v44 = *(_QWORD *)(*(_QWORD *)(v7 + 176) + 16LL);
    v45 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v7 + 56) + 24LL))(
                                           v7 + 56,
                                           v66)
                            + 16LL);
    if ( v45 )
      v12 = v45;
    v46 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v7 + 56) + 16LL))(
                                           v7 + 56,
                                           v68)
                            + 16LL);
    v47 = (const wchar_t *)&unk_1400D44E0;
    if ( v46 )
      v47 = v46;
    sub_1400A3320(v44, 2u, 4u, 0x15u, (__int64)&unk_1400D89D0, v12, v47, (const wchar_t *)qword_14014EC70);
  }
  if ( (v3 & 0x200) != 0 )
  {
    v48 = v67;
    LOWORD(v3) = v3 & 0xFDFF;
    if ( v67 )
    {
      if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, _UNKNOWN **))(*(_QWORD *)v48 + 8LL))(v48, v11);
        if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
      }
    }
  }
  if ( (v3 & 0x100) != 0 )
  {
    v49 = v69;
    if ( v69 )
    {
      if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, _UNKNOWN **))(*(_QWORD *)v49 + 8LL))(v49, v11);
        if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
      }
    }
  }
  v42 = -1073741637;
LABEL_91:
  if ( v5 )
  {
    sub_14005B5AC(v5);
    ExFreePool(v5);
  }
  return v42;
}
