__int64 __fastcall sub_14010D550(char *Context, __int64 *a2, __int64 a3)
{
  char v3; // di
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  const wchar_t *v9; // r12
  const wchar_t *v10; // rdi
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  const wchar_t *v23; // r12
  const wchar_t *v24; // rbx
  const wchar_t *v25; // rax
  __int64 v26; // rdi
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  _QWORD *v32; // rax
  const wchar_t *v33; // r12
  const wchar_t *v34; // rbx
  const wchar_t *v35; // rax
  const wchar_t *v36; // rax
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  struct _DEVICE_OBJECT *v40; // rax
  unsigned int v41; // r12d
  const wchar_t *v42; // rdi
  const wchar_t *v43; // rbx
  const wchar_t *v44; // rax
  const wchar_t *v45; // rax
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  volatile signed __int32 *v48; // rbx
  volatile signed __int32 *v49; // rbx
  __int64 v50; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v51; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall **v52)(PVOID); // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  _BYTE v56[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v57; // [rsp+90h] [rbp-70h]
  _BYTE v58[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v61; // [rsp+B0h] [rbp-50h]
  _BYTE v62[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v63; // [rsp+C0h] [rbp-40h]
  _BYTE v64[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v65; // [rsp+D0h] [rbp-30h]
  _BYTE v66[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v67; // [rsp+E0h] [rbp-20h]
  _BYTE v68[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v69; // [rsp+F0h] [rbp-10h]
  _BYTE v70[8]; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v71; // [rsp+100h] [rbp+0h]
  _BYTE v72[8]; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v73; // [rsp+110h] [rbp+10h]
  _QWORD v74[9]; // [rsp+118h] [rbp+18h] BYREF

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_14005A6E0(Pool2, (__int64)L"os_services::OsActivePowerScheme::Initialize", (__int64)Context);
      if ( v8 )
        v5 = v8;
    }
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)Context + 7) + 16LL))(
                                             Context + 56,
                                             v58)
                              + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)Context + 7) + 24LL))(
                                             Context + 56,
                                             v56)
                              + 16LL);
      if ( v12 )
        v9 = v12;
      sub_1400A3320(
        *(_QWORD *)(*((_QWORD *)Context + 22) + 16LL),
        2u,
        5u,
        0xAu,
        (__int64)&unk_1400D8688,
        v9,
        v10,
        L"lockFactory");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v13 = v57;
      v3 &= ~2u;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v14 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_14000B954((int)Context, (__int64)L"lockFactory", 55, 170);
LABEL_76:
    if ( v5 )
    {
      sub_14005A99C(v5);
      ExFreePool(v5);
    }
    v39 = (volatile signed __int32 *)a2[1];
    if ( v39 && _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
      if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
    }
    return 3221225485LL;
  }
  sub_1400A27D4(&v50, (__int64 *)Context + 12);
  v15 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)Context + 7) + 8LL))(Context + 56);
  v16 = sub_140064C38((__int64)&v52, v15, (__int64)L" Events History");
  v17 = sub_1400AE0FC(&v60, 0x30306539u, v16, &v50, a2);
  v18 = *((_QWORD *)Context + 49);
  *((_QWORD *)Context + 49) = v17[1];
  v19 = *v17;
  v17[1] = v18;
  v20 = *((_QWORD *)Context + 48);
  *((_QWORD *)Context + 48) = v19;
  *v17 = v20;
  v21 = v61;
  if ( v61 )
  {
    if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  v52 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  if ( v51 )
  {
    if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
    {
      v22 = v51;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
    }
  }
  if ( *((_QWORD *)Context + 48) )
  {
    v32 = sub_1400A27D4(v74, (__int64 *)Context + 48);
    sub_1400714D4(Context, v32, 0);
    if ( !a3 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v33 = (const wchar_t *)&unk_1400D44E0;
        v34 = (const wchar_t *)&unk_1400D44E0;
        v35 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)Context + 7) + 16LL))(
                                               Context + 56,
                                               v68)
                                + 16LL);
        if ( v35 )
          v34 = v35;
        v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)Context + 7) + 24LL))(
                                               Context + 56,
                                               v66)
                                + 16LL);
        if ( v36 )
          v33 = v36;
        sub_1400A3320(
          *(_QWORD *)(*((_QWORD *)Context + 22) + 16LL),
          2u,
          5u,
          0xCu,
          (__int64)&unk_1400D8688,
          v33,
          v34,
          L"device");
        v3 = 48;
      }
      if ( (v3 & 0x20) != 0 )
      {
        v37 = v67;
        v3 &= ~0x20u;
        if ( v67 )
        {
          if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
            if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
          }
        }
      }
      if ( (v3 & 0x10) != 0 )
      {
        v38 = v69;
        if ( v69 )
        {
          if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
            if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
          }
        }
      }
      sub_14000B00C((int)Context, (__int64)L"device", 63, 170);
      goto LABEL_76;
    }
    v40 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(__int64))(qword_1400DF678 + 248))(qword_1400DF6A8);
    v41 = PoRegisterPowerSettingCallback(
            v40,
            &SettingGuid,
            (PPOWER_SETTING_CALLBACK)Callback,
            Context,
            (PVOID *)Context + 47);
    if ( v41 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v42 = (const wchar_t *)&unk_1400D44E0;
        v43 = (const wchar_t *)&unk_1400D44E0;
        v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)Context + 7) + 16LL))(
                                               Context + 56,
                                               v72)
                                + 16LL);
        if ( v44 )
          v43 = v44;
        v45 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)Context + 7) + 24LL))(
                                               Context + 56,
                                               v70)
                                + 16LL);
        if ( v45 )
          v42 = v45;
        sub_1400A5E80(
          *(_QWORD *)(*((_QWORD *)Context + 22) + 16LL),
          2u,
          5u,
          0xDu,
          (__int64)&unk_1400D8688,
          v42,
          v43,
          L"PoRegisterPowerSettingCallback(WdfDeviceWdmGetDeviceObject(device), &GUID_POWERSCHEME_PERSONALITY, EvtActivePo"
           "werschemeChangeCallback, this, &m_activePowerschemeChangeCallbackHandle)");
        v3 = -64;
      }
      if ( v3 < 0 )
      {
        v46 = v71;
        v3 &= ~0x80u;
        if ( v71 )
        {
          if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
            if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
          }
        }
      }
      if ( (v3 & 0x40) != 0 )
      {
        v47 = v73;
        if ( v73 )
        {
          if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
            if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
          }
        }
      }
      sub_140064E54(
        (int)Context,
        (__int64)L"PoRegisterPowerSettingCallback(WdfDeviceWdmGetDeviceObject(device), &GUID_POWERSCHEME_PERSONALITY, EvtA"
                  "ctivePowerschemeChangeCallback, this, &m_activePowerschemeChangeCallbackHandle)",
        68,
        170,
        v41);
      if ( v5 )
      {
        sub_14005A99C(v5);
        ExFreePool(v5);
      }
      v48 = (volatile signed __int32 *)a2[1];
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
          if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
        }
      }
      return v41;
    }
    else
    {
      if ( v5 )
      {
        sub_14005A99C(v5);
        ExFreePool(v5);
      }
      v49 = (volatile signed __int32 *)a2[1];
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
          if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
        }
      }
      return 0LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = (const wchar_t *)&unk_1400D44E0;
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)Context + 7) + 16LL))(
                                             Context + 56,
                                             v64)
                              + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = *(_QWORD *)(*((_QWORD *)Context + 22) + 16LL);
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)Context + 7) + 24LL))(
                                             Context + 56,
                                             v62)
                              + 16LL);
      if ( v27 )
        v23 = v27;
      sub_1400A3320(v26, 2u, 5u, 0xBu, (__int64)&unk_1400D8688, v23, v24, L"m_eventHistory");
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v28 = v63;
      v3 &= ~8u;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v29 = v65;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_140022208((int)Context, (__int64)L"m_eventHistory", 60, 170);
    if ( v5 )
    {
      sub_14005A99C(v5);
      ExFreePool(v5);
    }
    v30 = (volatile signed __int32 *)a2[1];
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
    return 3221225495LL;
  }
}
