/*
 * XREFs of sub_18010D978 @ 0x18010D978
 * Callers:
 *     sub_1801051F8 @ 0x1801051F8 (sub_1801051F8.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800EF77C @ 0x1800EF77C (sub_1800EF77C.c)
 *     sub_18010C6F8 @ 0x18010C6F8 (sub_18010C6F8.c)
 *     sub_18010CB28 @ 0x18010CB28 (sub_18010CB28.c)
 *     sub_18010D0D0 @ 0x18010D0D0 (sub_18010D0D0.c)
 *     sub_18010E270 @ 0x18010E270 (sub_18010E270.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010D978(__int64 a1)
{
  _QWORD *v2; // rsi
  HRESULT Instance; // ebx
  int v4; // edx
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx
  LPVOID v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  LPVOID v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r9d
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  const CHAR *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v31; // [rsp+48h] [rbp-19h] BYREF
  __int64 v32; // [rsp+50h] [rbp-11h] BYREF
  __int128 v33; // [rsp+58h] [rbp-9h]
  __int64 v34; // [rsp+68h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+88h] [rbp+27h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh]

  v2 = (_QWORD *)(a1 + 56);
  Instance = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, (LPVOID *)(a1 + 56));
  if ( Instance < 0 )
  {
    v4 = 37;
LABEL_3:
    sub_18004BD84(
      (int)retaddr,
      v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 48LL))(*v2, a1);
  if ( Instance < 0 )
  {
    v4 = 38;
    goto LABEL_3;
  }
  v36 = 0LL;
  sub_1800EF77C(&hstringHeader, L"Windows.Graphics.Holographic.HolographicDisplay", 0x30u, 0x2Fu);
  v5 = (__int64 *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  Instance = RoGetActivationFactory(v36, &unk_18015C0E0, a1 + 64);
  if ( Instance < 0 )
  {
    v4 = 40;
    goto LABEL_3;
  }
  v7 = *v5;
  v8 = (__int64 *)(a1 + 72);
  v9 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Instance = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, a1 + 72);
  if ( Instance < 0 )
  {
    v4 = 41;
    goto LABEL_3;
  }
  *(_QWORD *)&v33 = sub_18010D0D0;
  DWORD2(v33) = 0;
  hstringHeader.Reserved.Reserved1 = (PVOID)a1;
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v33;
  v10 = 0LL;
  v11 = sub_18006A18C(0x58uLL);
  v12 = 0LL;
  if ( v11 )
  {
    v10 = sub_18010C6F8((__int64)v11, (__int64)&hstringHeader);
    v12 = v10;
  }
  v34 = v10;
  if ( v12 )
  {
    *(_QWORD *)&v33 = sub_18010D340;
    DWORD2(v33) = 0;
    hstringHeader.Reserved.Reserved1 = (PVOID)a1;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v33;
    v13 = 0LL;
    v14 = sub_18006A18C(0x58uLL);
    v15 = 0LL;
    if ( v14 )
    {
      v13 = sub_18010C6F8((__int64)v14, (__int64)&hstringHeader);
      v15 = v13;
    }
    *(_QWORD *)&v33 = v13;
    if ( !v15 )
    {
      Instance = -2147024882;
      sub_18004BD84(
        (int)retaddr,
        47,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        -2147024882);
      goto LABEL_44;
    }
    v16 = *v5;
    v32 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 64LL))(v16, &v32) >= 0
      && v32
      && (v17 = sub_18010D0D0(a1, *v8, v32), Instance = v17, v17 < 0) )
    {
      v18 = v17;
      v19 = 53;
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)*v8 + 56LL))(*v8, v12, a1 + 120);
      Instance = v20;
      if ( v20 >= 0 )
      {
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)*v8 + 72LL))(*v8, v15, a1 + 128);
        Instance = v21;
        if ( v21 >= 0 )
        {
          v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 120LL))(*v8);
          Instance = v22;
          if ( v22 >= 0 )
          {
            v31 = 0;
            v23 = RtlQueryWnfStateData(&v31, 0xD83063EA3BDD875LL, sub_18010E230, a1, 0LL);
            Instance = v23 | 0x10000000;
            if ( v23 >= 0 )
            {
              v24 = RtlSubscribeWnfStateChangeNotification(
                      a1 + 352,
                      0xD83063EA3BDD875LL,
                      v31,
                      sub_18010E230,
                      a1,
                      0LL,
                      0,
                      0);
              Instance = v24 | 0x10000000;
              if ( v24 >= 0 )
              {
                v31 = 0;
                v25 = RtlQueryWnfStateData(&v31, 0xE8A0125A3BCA875LL, sub_18010CAB0, a1, 0LL);
                Instance = v25 | 0x10000000;
                if ( v25 >= 0 )
                {
                  v26 = RtlSubscribeWnfStateChangeNotification(
                          a1 + 360,
                          0xE8A0125A3BCA875LL,
                          v31,
                          sub_18010CAB0,
                          a1,
                          0LL,
                          0,
                          0);
                  Instance = v26 | 0x10000000;
                  if ( v26 >= 0 )
                  {
                    sub_18010CB28(v27, 1, v28, v29);
                    *(_BYTE *)(a1 + 377) = 1;
                    Instance = sub_18010E270(a1);
                    goto LABEL_43;
                  }
                  v19 = 96;
                }
                else
                {
                  v19 = 87;
                }
              }
              else
              {
                v19 = 77;
              }
            }
            else
            {
              v19 = 68;
            }
            v18 = Instance;
          }
          else
          {
            v18 = v22;
            v19 = 58;
          }
        }
        else
        {
          v18 = v21;
          v19 = 57;
        }
      }
      else
      {
        v18 = v20;
        v19 = 56;
      }
    }
    sub_18004BD84(
      (int)retaddr,
      v19,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      v18);
LABEL_43:
    sub_18000F708(&v32);
LABEL_44:
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_46;
  }
  Instance = -2147024882;
  sub_18004BD84(
    (int)retaddr,
    44,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    -2147024882);
LABEL_46:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)Instance;
}
