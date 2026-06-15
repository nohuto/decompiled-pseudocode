/*
 * XREFs of sub_180063460 @ 0x180063460
 * Callers:
 *     sub_180062950 @ 0x180062950 (sub_180062950.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180012180 @ 0x180012180 (sub_180012180.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180055130 @ 0x180055130 (sub_180055130.c)
 *     sub_180055514 @ 0x180055514 (sub_180055514.c)
 *     sub_180055848 @ 0x180055848 (sub_180055848.c)
 *     sub_180055D08 @ 0x180055D08 (sub_180055D08.c)
 *     sub_18005D45C @ 0x18005D45C (sub_18005D45C.c)
 *     sub_180063C00 @ 0x180063C00 (sub_180063C00.c)
 *     sub_180063D94 @ 0x180063D94 (sub_180063D94.c)
 *     sub_1800641D4 @ 0x1800641D4 (sub_1800641D4.c)
 *     sub_180064244 @ 0x180064244 (sub_180064244.c)
 *     sub_1800643F0 @ 0x1800643F0 (sub_1800643F0.c)
 *     sub_180065030 @ 0x180065030 (sub_180065030.c)
 *     sub_18006514C @ 0x18006514C (sub_18006514C.c)
 *     sub_180065184 @ 0x180065184 (sub_180065184.c)
 *     sub_1800651D0 @ 0x1800651D0 (sub_1800651D0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006CC58 @ 0x18006CC58 (sub_18006CC58.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 *     sub_1800B786C @ 0x1800B786C (sub_1800B786C.c)
 *     sub_1800B7FF4 @ 0x1800B7FF4 (sub_1800B7FF4.c)
 *     sub_1800BB368 @ 0x1800BB368 (sub_1800BB368.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180063460(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  LSTATUS ValueW; // eax
  DWORD v14; // ecx
  _QWORD *v15; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rax
  int v20; // eax
  int v22; // edx
  int v23; // edx
  double v24; // xmm6_8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // r9d
  int v29; // edx
  DWORD pvData[2]; // [rsp+48h] [rbp-C0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  DWORD *v35; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  __int64 v37; // [rsp+80h] [rbp-88h] BYREF
  __int64 v38; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v39[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v40[3]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v41; // [rsp+B8h] [rbp-50h]
  _BYTE v42[8]; // [rsp+C0h] [rbp-48h] BYREF
  std::_Ref_count_base *v43; // [rsp+C8h] [rbp-40h]
  PSECURITY_DESCRIPTOR *p_SecurityDescriptor; // [rsp+D0h] [rbp-38h]
  char v45; // [rsp+D8h] [rbp-30h]
  __int64 (__fastcall **v46)(_QWORD, __int64); // [rsp+E0h] [rbp-28h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-20h]
  int v48; // [rsp+F4h] [rbp-14h]
  _BYTE v49[64]; // [rsp+108h] [rbp+0h] BYREF
  void *retaddr; // [rsp+180h] [rbp+78h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 43LL, &unk_18016D4B0);
  }
  v2 = (__int64 *)sub_1800651D0(&v34);
  v3 = 0LL;
  if ( &v38 != v2 )
  {
    v3 = *v2;
    *v2 = 0LL;
  }
  v4 = qword_18019EED0;
  qword_18019EED0 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( !qword_18019EED0 )
  {
    v22 = 2186;
LABEL_44:
    v9 = -2147024882;
LABEL_46:
    sub_18004BD84((int)retaddr, v22, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp", v9);
    return (unsigned int)v9;
  }
  pvData[1] = 4;
  pvData[0] = 5;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"AudioHealthMonitorLimit",
         0x18u,
         0LL,
         pvData,
         &pvData[1]) )
  {
    v35 = pvData;
    v40[0] = retaddr;
    v40[1] = "avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp";
    v40[2] = 0LL;
    v41 = 2195;
    LOBYTE(v6) = 1;
    sub_180063D94(&unk_18019F860, v6);
    v39[0] = off_180154D98;
    v39[1] = &v35;
    sub_1800641D4(&v46, 16046125LL, v40);
    sub_180012180((__int64)v39, &v46);
    if ( v47 )
      *(_DWORD *)(v47 + 16) = v48;
  }
  if ( pvData[0] )
  {
    v7 = sub_18006A18C(72LL, &unk_18019F848);
    v38 = v7;
    v8 = v7 ? sub_180065184(v7, pvData[0]) : 0LL;
    qword_18019E5F0 = v8;
    if ( !v8 )
    {
      v22 = 2208;
      goto LABEL_44;
    }
  }
  v9 = sub_180055848();
  if ( v9 < 0 )
  {
    v22 = 2213;
    goto LABEL_46;
  }
  if ( !qword_18019EE40 )
  {
    v12 = sub_1800BB368(retaddr, 2214LL);
    goto LABEL_52;
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019EE40 + 24LL))(qword_18019EE40);
  if ( v9 < 0 )
  {
    v22 = 2215;
    goto LABEL_46;
  }
  v33 = 0LL;
  sub_18006514C(v10, &v33);
  v36 = v33;
  v12 = sub_180055D08(v11, &v36);
  v9 = v12;
  if ( v12 < 0 )
  {
LABEL_52:
    v23 = 2220;
LABEL_61:
    sub_18004BD84((int)retaddr, v23, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp", v12);
    goto LABEL_38;
  }
  pvData[1] = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioSrvWatchDogTimerInMs",
             0x18u,
             0LL,
             pvData,
             &pvData[1]);
  v14 = dword_18019D9F4;
  if ( !ValueW )
    v14 = pvData[0];
  dword_18019D9F4 = v14;
  memset(v49, 0, sizeof(v49));
  pcbData[0] = 64;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"RenderStreamVolumeTaperPower",
          2u,
          0LL,
          v49,
          pcbData) )
  {
    v24 = o__wtof(v49);
    if ( v24 != 0.0 )
    {
      v25 = sub_1800B786C(v42);
      sub_1800B7FF4(v26, v25);
      if ( v43 )
        sub_180052600(v43);
      sub_18005D45C(qword_18019EAE8, v27, -96.0, 0.0, 1069547520, *(__int64 *)&v24);
    }
  }
  v12 = sub_180065030();
  v9 = v12;
  if ( v12 < 0 )
  {
    v23 = 2241;
    goto LABEL_61;
  }
  v12 = sub_180055130();
  v9 = v12;
  if ( v12 < 0 )
  {
    v23 = 2243;
    goto LABEL_61;
  }
  v12 = sub_1800643F0();
  v9 = v12;
  if ( v12 < 0 )
  {
    v23 = 2248;
    goto LABEL_61;
  }
  v15 = pv;
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)sub_180057E90, pv, 0LL);
  v15[12] = ThreadpoolWork;
  if ( ThreadpoolWork )
    SubmitThreadpoolWork(ThreadpoolWork);
  v37 = qword_18019E618;
  v12 = sub_180055514(v17, &v37);
  v9 = v12;
  if ( v12 < 0 )
  {
    v23 = 2251;
    goto LABEL_61;
  }
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    v9 = sub_1800B5768(retaddr, 2254LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp");
    goto LABEL_38;
  }
  if ( !SecurityDescriptor )
  {
    sub_1800BB368(retaddr, 2255LL);
    goto LABEL_64;
  }
  p_SecurityDescriptor = &SecurityDescriptor;
  v45 = 1;
  if ( !(unsigned __int8)sub_180063C00(L"AudioClientRpc") )
  {
    v9 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
    if ( !v9 )
      goto LABEL_32;
LABEL_64:
    v9 |= 0x80010000;
    v28 = v9;
    v29 = 2270;
    goto LABEL_71;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 44LL, &unk_18016D4B0);
  }
LABEL_32:
  v18 = RpcServerRegisterIf3(&unk_180148EB0, 0LL, 0LL, 33LL, 1234, 0, sub_180045D30, SecurityDescriptor);
  if ( v18 )
  {
    v9 = v18 | 0x80010000;
    v28 = v9;
    v29 = 2277;
  }
  else
  {
    *(_DWORD *)(a1 + 100) = 1;
    v19 = sub_180064244();
    v20 = sub_18006CC58(v19);
    v9 = v20;
    if ( v20 >= 0 )
    {
      *(_DWORD *)(a1 + 104) = 1;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 45LL, &unk_18016D4B0);
      }
      v9 = 0;
      goto LABEL_37;
    }
    v28 = v20;
    v29 = 2281;
  }
LABEL_71:
  sub_18004BD84((int)retaddr, v29, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp", v28);
LABEL_37:
  LocalFree(SecurityDescriptor);
LABEL_38:
  sub_18000F708(&v33);
  return (unsigned int)v9;
}
