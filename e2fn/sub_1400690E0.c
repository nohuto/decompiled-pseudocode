__int64 __fastcall sub_1400690E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  PVOID v5; // rbx
  PVOID v6; // rdx
  PVOID v7; // rbx
  PVOID v8; // rdx
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  PVOID v11; // rsi
  PVOID v12; // rdx
  __int64 v13; // r13
  int v14; // eax
  PVOID v15; // rsi
  PVOID v16; // rdx
  PVOID v17; // rsi
  PVOID v18; // rdx
  __int64 v19; // rax
  void *v20; // rdx
  __int64 v21; // rsi
  __int128 v23; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-D0h]
  __int64 v25; // [rsp+40h] [rbp-C8h]
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h]
  __int64 (__fastcall **v28)(PVOID); // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  __int64 v32; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall **v33)(PVOID); // [rsp+90h] [rbp-78h] BYREF
  __int16 v34; // [rsp+98h] [rbp-70h]
  PVOID v35; // [rsp+A0h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  __int64 (__fastcall **v38)(PVOID); // [rsp+B8h] [rbp-50h] BYREF
  __int16 v39; // [rsp+C0h] [rbp-48h]
  PVOID v40; // [rsp+C8h] [rbp-40h]
  __int64 v41; // [rsp+D0h] [rbp-38h]
  __int64 v42; // [rsp+D8h] [rbp-30h]
  __int128 v43; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-10h]
  char v45[16]; // [rsp+108h] [rbp+0h] BYREF
  PVOID v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  char v48[16]; // [rsp+130h] [rbp+28h] BYREF
  PVOID v49; // [rsp+140h] [rbp+38h]
  __int64 v50; // [rsp+148h] [rbp+40h]

  v2 = a1[49];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v28 = &off_1400D41D0;
  LOWORD(v29) = 0;
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v28, (__int64)L"Num Allocated Interrupts: ", 0x1AuLL);
  v5 = P;
  v6 = &unk_1400D44E0;
  if ( P )
    v6 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v31);
  if ( v5 )
    ExFreePool(v5);
  *(_QWORD *)&v23 = a1[63];
  *((_QWORD *)&v23 + 1) = 10LL;
  v24 = 10LL;
  v43 = v23;
  v44 = 10LL;
  sub_14000139C((__int64)v45, (__int64 *)&v43);
  v7 = v46;
  v8 = &unk_1400D44E0;
  if ( v46 )
    v8 = v46;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v47);
  if ( v7 )
    ExFreePool(v7);
  sub_140003840(a2, 0);
  v9 = (_QWORD *)a1[59];
  v10 = v9;
  if ( a1[63] )
    v10 = a1 + 58;
  if ( v9 != v10 )
  {
    HIDWORD(v25) = 10;
    do
    {
      sub_1400A27D4(&v23, v9 + 2);
      v33 = &off_1400D41D0;
      v34 = 0;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      sub_1400011A8(&v33, (__int64)L"Interrupt message ID ", 0x15uLL);
      v11 = v35;
      v12 = &unk_1400D44E0;
      if ( v35 )
        v12 = v35;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v12, 2 * v36);
      if ( v11 )
        ExFreePool(v11);
      v13 = v23;
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v23 + 352) + 8LL))(v23 + 352);
      LODWORD(v27) = 10;
      LODWORD(v25) = v14;
      v26 = v25;
      sub_1400042F0((__int64)v48, (int *)&v26);
      v15 = v49;
      v16 = &unk_1400D44E0;
      if ( v49 )
        v16 = v49;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v16, 2 * v50);
      if ( v15 )
        ExFreePool(v15);
      v38 = &off_1400D41D0;
      v39 = 0;
      v40 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      sub_1400011A8(&v38, (__int64)L"allocated to ", 0xDuLL);
      v17 = v40;
      v18 = &unk_1400D44E0;
      if ( v40 )
        v18 = v40;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v18, 2 * v41);
      if ( v17 )
        ExFreePool(v17);
      v19 = sub_14006CE14(v13);
      v20 = &unk_1400D44E0;
      if ( *(_QWORD *)(v19 + 16) )
        v20 = *(void **)(v19 + 16);
      (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v20, 2LL * *(_QWORD *)(v19 + 24));
      sub_140003840(a2, 0);
      if ( *((_QWORD *)&v23 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v21 = *((_QWORD *)&v23 + 1);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 16LL))(*((_QWORD *)&v23 + 1));
        }
      }
      v9 = (_QWORD *)v9[1];
    }
    while ( v9 != v10 );
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
}
