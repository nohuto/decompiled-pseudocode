void __fastcall sub_140098E60(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 (__fastcall **v29)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v30; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v32; // [rsp+48h] [rbp-18h]
  __int64 v33; // [rsp+50h] [rbp-10h]

  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"Received Frames Count", 0x15uLL);
  v4 = *a2;
  v5 = a1 + 7;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(a1[7] + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v4 + 8))(a2, v6, &v29, a1[98]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"Ignored Fragments Count", 0x17uLL);
  v7 = *a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v7 + 8))(a2, v8, &v29, a1[99]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"Ipv4 Packet Count", 0x11uLL);
  v9 = *a2;
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v9 + 8))(a2, v10, &v29, a1[102]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"Ipv6 Packet Count", 0x11uLL);
  v11 = *a2;
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v11 + 8))(
    a2,
    v12,
    &v29,
    a1[103]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"layer3 Unspecified Packet Count", 0x1FuLL);
  v13 = *a2;
  v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v13 + 8))(
    a2,
    v14,
    &v29,
    a1[104]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"Tcp Packet Count", 0x10uLL);
  v15 = *a2;
  v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v15 + 8))(
    a2,
    v16,
    &v29,
    a1[106]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"Udp Packet Count", 0x10uLL);
  v17 = *a2;
  v18 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v17 + 8))(
    a2,
    v18,
    &v29,
    a1[107]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"both Tcp And Udp Count", 0x16uLL);
  v19 = *a2;
  v20 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v19 + 8))(
    a2,
    v20,
    &v29,
    a1[109]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"IPv4 Checksum Error Count", 0x19uLL);
  v21 = *a2;
  v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v21 + 8))(
    a2,
    v22,
    &v29,
    a1[113]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"Tcp Checksum Error Count", 0x18uLL);
  v23 = *a2;
  v24 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v23 + 8))(
    a2,
    v24,
    &v29,
    a1[114]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"Udp Checksum Error Count", 0x18uLL);
  v25 = *a2;
  v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v25 + 8))(
    a2,
    v26,
    &v29,
    a1[115]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v29 = &off_1400D41D0;
  v30 = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"Received Vlan and priority Frames Count", 0x27uLL);
  v27 = *a2;
  v28 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 8LL))(a1 + 7);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)(PVOID), _QWORD))(v27 + 8))(
    a2,
    v28,
    &v29,
    a1[116]);
  v29 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
}
