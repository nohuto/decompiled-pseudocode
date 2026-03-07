__int64 __fastcall sub_1400E6F78(__int64 a1, __int64 a2)
{
  char v3; // r15
  const wchar_t **v4; // r12
  const wchar_t **Pool2; // rax
  const wchar_t **v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // r9
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  volatile signed __int32 *v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  volatile signed __int32 *v22; // rsi
  __int64 v23; // rdi
  _QWORD *v24; // r13
  _QWORD *v25; // rax
  _QWORD *v26; // r14
  unsigned __int16 v27; // r9
  __int64 v28; // rcx
  const wchar_t *v29; // rax
  unsigned __int16 v30; // r9
  __int64 v31; // rcx
  const wchar_t *v32; // rax
  _QWORD *v33; // rax
  volatile signed __int32 *v34; // rbx
  volatile signed __int32 *v35; // rbx
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  __int64 v39; // [rsp+40h] [rbp-99h] BYREF
  volatile signed __int32 *v40; // [rsp+48h] [rbp-91h]
  __int64 v41; // [rsp+50h] [rbp-89h] BYREF
  volatile signed __int32 *v42; // [rsp+58h] [rbp-81h]
  __int64 v43; // [rsp+60h] [rbp-79h] BYREF
  volatile signed __int32 *v44; // [rsp+68h] [rbp-71h]
  __int64 *v45; // [rsp+70h] [rbp-69h] BYREF
  volatile signed __int32 *v46; // [rsp+78h] [rbp-61h]
  __int64 (__fastcall **v47)(PVOID); // [rsp+80h] [rbp-59h] BYREF
  __int16 v48; // [rsp+88h] [rbp-51h]
  PVOID P; // [rsp+90h] [rbp-49h]
  __int64 v50; // [rsp+98h] [rbp-41h]
  __int64 v51; // [rsp+A0h] [rbp-39h]
  __int64 v52[2]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v53[2]; // [rsp+B8h] [rbp-21h] BYREF
  _QWORD v54[2]; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-1h] BYREF
  __int64 v56[9]; // [rsp+E8h] [rbp+Fh] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (const wchar_t **)ExAllocatePool2(64LL, 8LL, 1970304114LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = L"product_e2fn::ProductE2fnDeviceContext::CreateProductE2fnDeviceContext";
      sub_1400A3268(L"product_e2fn::ProductE2fnDeviceContext::CreateProductE2fnDeviceContext");
      v4 = v6;
    }
  }
  v7 = ExAllocatePool2(64LL, 32LL, 808465202LL);
  if ( v7 )
  {
    v8 = sub_1400A38D4(v7);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 )
      {
        v42 = (volatile signed __int32 *)v8;
        v41 = v9;
        v10 = sub_140106C20(v9, a1);
        if ( v10 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            sub_1400A1CFC(
              *(_QWORD *)(*((_QWORD *)::P + 1) + 16LL),
              2u,
              0xEu,
              0xBu,
              (__int64)&unk_1400D4690,
              L"lockFactory->Bind(driver)",
              v10);
          goto LABEL_79;
        }
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 8LL))(v9, &v43);
        if ( !v43 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            sub_1400A3054(
              *(_QWORD *)(*((_QWORD *)::P + 1) + 16LL),
              2u,
              14LL,
              0xCu,
              (__int64)&unk_1400D4690,
              L"treeObjectsLock");
          v10 = -1073741801;
LABEL_72:
          v36 = v44;
          if ( v44 )
          {
            if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
              if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
            }
          }
          goto LABEL_79;
        }
        v11 = ExAllocatePool2(64LL, 32LL, 808465203LL);
        if ( !v11 || (v12 = sub_1400A393C(v11)) == 0 || !*(_QWORD *)(v12 + 16) )
        {
          v40 = 0LL;
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            sub_1400A3054(
              *(_QWORD *)(*((_QWORD *)::P + 1) + 16LL),
              2u,
              14LL,
              0xDu,
              (__int64)&unk_1400D4690,
              L"uniqueIdFactory");
          v10 = -1073741801;
          goto LABEL_68;
        }
        v39 = *(_QWORD *)(v12 + 16);
        v40 = (volatile signed __int32 *)v12;
        sub_1400E69D4(&v45);
        if ( !v45 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v13 = 14;
            v14 = *((_QWORD *)::P + 1);
            v15 = L"deviceContextResources";
LABEL_59:
            sub_1400A3054(*(_QWORD *)(v14 + 16), 2u, 14LL, v13, (__int64)&unk_1400D4690, v15);
            goto LABEL_60;
          }
          goto LABEL_60;
        }
        v16 = ExAllocatePool2(64LL, 32LL, 808477744LL);
        if ( !v16
          || (v17 = sub_1400A3A30(v16, &v39, &v41), (v18 = (volatile signed __int32 *)v17) == 0LL)
          || (v19 = *(_QWORD *)(v17 + 16)) == 0 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v13 = 15;
            v14 = *((_QWORD *)::P + 1);
            v15 = L"logger";
            goto LABEL_59;
          }
LABEL_60:
          v10 = -1073741801;
LABEL_61:
          if ( v46 )
          {
            if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
            {
              v34 = v46;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
              if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
            }
          }
LABEL_68:
          if ( v40 )
          {
            if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
            {
              v35 = v40;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
              if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
            }
          }
          goto LABEL_72;
        }
        v20 = ExAllocatePool2(64LL, 32LL, 808477745LL);
        if ( v20
          && (v21 = sub_1400A39A8(v20, &v41), (v22 = (volatile signed __int32 *)v21) != 0LL)
          && (v23 = *(_QWORD *)(v21 + 16)) != 0 )
        {
          v24 = (_QWORD *)ExAllocatePool2(64LL, 560LL, 1697801838LL);
          if ( v24 )
          {
            v47 = &off_1400D41D0;
            v48 = 0;
            P = 0LL;
            v50 = 0LL;
            v51 = 0LL;
            sub_1400011A8(&v47, (__int64)L"Unknown", 7uLL);
            v54[1] = v44;
            v53[1] = (__int64)v22;
            v22 = 0LL;
            v52[1] = (__int64)v18;
            v18 = 0LL;
            v54[0] = v43;
            v44 = 0LL;
            v43 = 0LL;
            v53[0] = v23;
            v52[0] = v19;
            v25 = sub_1400A27D4(&v55, &v39);
            v26 = sub_1400052EC(v24, v54, v25, v53, v52, (__int64)&v47);
            v3 = 1;
          }
          else
          {
            v26 = 0LL;
          }
          if ( (v3 & 1) != 0 )
          {
            v47 = &off_1400D41D0;
            if ( P )
              ExFreePool(P);
            P = 0LL;
            v50 = 0LL;
            v51 = 0LL;
          }
          if ( v26 )
          {
            v10 = sub_140116258(v26, a2);
            if ( v10 )
            {
              if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
                goto LABEL_49;
              v30 = 18;
              v31 = *((_QWORD *)::P + 1);
              v32 = L"productE2fnDeviceContext->CreateDevice(deviceInit)";
            }
            else
            {
              v33 = sub_1400A27D4(v56, (__int64 *)&v45);
              v10 = sub_140118DE4(v26, v33);
              if ( !v10 )
              {
                v10 = 0;
                goto LABEL_49;
              }
              if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
                goto LABEL_49;
              v30 = 19;
              v31 = *((_QWORD *)::P + 1);
              v32 = L"productE2fnDeviceContext->Initialize(deviceContextResources)";
            }
            sub_1400A1CFC(*(_QWORD *)(v31 + 16), 2u, 0xEu, v30, (__int64)&unk_1400D4690, v32, v10);
            goto LABEL_49;
          }
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v27 = 17;
            v28 = *((_QWORD *)::P + 1);
            v29 = L"productE2fnDeviceContext";
LABEL_47:
            sub_1400A3054(*(_QWORD *)(v28 + 16), 2u, 14LL, v27, (__int64)&unk_1400D4690, v29);
          }
        }
        else
        {
          v22 = 0LL;
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v27 = 16;
            v28 = *((_QWORD *)::P + 1);
            v29 = L"attributesStore";
            goto LABEL_47;
          }
        }
        v10 = -1073741801;
LABEL_49:
        if ( v22 )
        {
          if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
        if ( v18 )
        {
          if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
        goto LABEL_61;
      }
    }
  }
  v42 = 0LL;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    sub_1400A3054(*(_QWORD *)(*((_QWORD *)::P + 1) + 16LL), 2u, 14LL, 0xAu, (__int64)&unk_1400D4690, L"lockFactory");
  v10 = -1073741801;
LABEL_79:
  if ( v42 )
  {
    if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
    {
      v37 = v42;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
      if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
    }
  }
  if ( v4 )
  {
    sub_1400A32C4(*v4);
    ExFreePool(v4);
  }
  return v10;
}
