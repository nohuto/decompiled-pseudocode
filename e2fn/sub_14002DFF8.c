void __fastcall sub_14002DFF8(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 (__fastcall ***v12)(PVOID); // rax
  __int64 v13; // rax
  void *v14; // rdx
  PVOID v15; // r15
  PVOID v16; // rdx
  __int64 v17; // rax
  void *v18; // rdx
  PVOID v19; // rsi
  PVOID v20; // rdx
  __int128 v21; // [rsp+20h] [rbp-E0h] BYREF
  PVOID v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  __int64 v24; // [rsp+40h] [rbp-C0h]
  __int128 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall **v27)(PVOID); // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall **v31)(PVOID); // [rsp+90h] [rbp-70h] BYREF
  PVOID v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  _QWORD v35[2]; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  _QWORD v38[10]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  __int64 v41; // [rsp+140h] [rbp+40h]
  _BYTE v42[16]; // [rsp+150h] [rbp+50h] BYREF
  PVOID v43; // [rsp+160h] [rbp+60h]
  unsigned __int64 v44; // [rsp+1B8h] [rbp+B8h]
  __int64 v45; // [rsp+1B8h] [rbp+B8h]

  if ( a2 )
  {
    v8 = a2;
    v10 = 0LL;
    if ( a3 )
    {
      _mm_lfence();
      do
      {
        *(_QWORD *)&v25 = v10;
        v11 = a3 - v10;
        *((_QWORD *)&v25 + 1) = 10LL;
        v26 = 10LL;
        if ( a4 < a3 - v10 )
          v11 = a4;
        v21 = v25;
        v44 = v11;
        v22 = (PVOID)10;
        sub_14000139C((__int64)v42, (__int64 *)&v21);
        v12 = (__int64 (__fastcall ***)(PVOID))sub_1400A8CF8(&v31, v42, a5);
        v13 = sub_140003EC0((__int64)&v27, (__int64)qword_1400B7400, v12);
        sub_14002D4C8((__int64)v35, v13, (__int64)L"] ");
        v27 = &off_1400D41D0;
        if ( P )
          ExFreePool(P);
        P = 0LL;
        v29 = 0LL;
        v30 = 0LL;
        v31 = &off_1400D41D0;
        if ( v32 )
          ExFreePool(v32);
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        if ( v43 )
          ExFreePool(v43);
        if ( a6 )
        {
          v14 = &unk_1400D44E0;
          if ( *(_QWORD *)(a6 + 16) )
            v14 = *(void **)(a6 + 16);
          (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 8LL))(a1, v14, 2LL * *(_QWORD *)(a6 + 24));
        }
        v15 = v36;
        v16 = &unk_1400D44E0;
        if ( v36 )
          v16 = v36;
        (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a1 + 8LL))(a1, v16, 2 * v37);
        *(_QWORD *)&v21 = &off_1400D41D0;
        WORD4(v21) = 0;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        sub_1400011A8(&v21, (__int64)L"Buffer", 6uLL);
        v45 = v8 + v44;
        sub_140021F60(v38, (__int64)&v21, v8, v45);
        if ( v22 )
          ExFreePool(v22);
        v17 = sub_140026AF0((__int64)v38, (__int64)v35);
        v18 = &unk_1400D44E0;
        if ( *(_QWORD *)(v17 + 16) )
          v18 = *(void **)(v17 + 16);
        (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 8LL))(a1, v18, 2LL * *(_QWORD *)(v17 + 24));
        v35[0] = &off_1400D41D0;
        if ( v36 )
          ExFreePool(v36);
        *(_QWORD *)&v21 = &off_1400D41D0;
        WORD4(v21) = 0;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        sub_1400011A8(&v21, (__int64)qword_1400B6F30, 1uLL);
        v19 = v22;
        v20 = &unk_1400D44E0;
        if ( v22 )
          v20 = v22;
        (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a1 + 8LL))(a1, v20, 2 * v23);
        if ( v19 )
          ExFreePool(v19);
        v8 = v45;
        v38[0] = &off_1400D6120;
        v38[1] = off_1400D6148;
        v38[9] = off_1400D4D58;
        if ( v39 )
        {
          ExFreePool(v39);
          v39 = 0LL;
        }
        v40 = 0LL;
        v41 = 0LL;
        sub_140005CFC(v38);
        if ( v15 )
          ExFreePool(v15);
        v10 += a4;
      }
      while ( v10 < a3 );
    }
  }
}
