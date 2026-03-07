void __fastcall sub_1400550B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  PVOID v14; // rbx
  PVOID v15; // rdx
  PVOID v16; // rbx
  PVOID v17; // rdx
  unsigned int *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  PVOID v24; // rbx
  PVOID v25; // rdx
  __int64 v26; // [rsp+20h] [rbp-E0h] BYREF
  int v27; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+38h] [rbp-C8h]
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall **v34)(PVOID); // [rsp+60h] [rbp-A0h] BYREF
  __int16 v35; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  _QWORD v39[2]; // [rsp+88h] [rbp-78h] BYREF
  PVOID v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  _QWORD v43[2]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int64 v46; // [rsp+D0h] [rbp-30h]
  _QWORD v47[2]; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+10h] BYREF
  int v53; // [rsp+118h] [rbp+18h]
  __int64 (__fastcall **v54)(PVOID); // [rsp+120h] [rbp+20h] BYREF
  PVOID v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  __int64 v57; // [rsp+140h] [rbp+40h]
  _BYTE v58[16]; // [rsp+148h] [rbp+48h] BYREF
  PVOID v59; // [rsp+158h] [rbp+58h]
  __int64 v60; // [rsp+160h] [rbp+60h]
  _BYTE v61[16]; // [rsp+170h] [rbp+70h] BYREF
  PVOID v62; // [rsp+180h] [rbp+80h]
  __int64 (__fastcall **v63[2])(PVOID); // [rsp+198h] [rbp+98h] BYREF
  PVOID v64; // [rsp+1A8h] [rbp+A8h]
  __int64 v65; // [rsp+1B0h] [rbp+B0h]
  __int64 (__fastcall **v66[2])(PVOID); // [rsp+1C0h] [rbp+C0h] BYREF
  PVOID v67; // [rsp+1D0h] [rbp+D0h]
  __int64 v68; // [rsp+220h] [rbp+120h]

  v3 = a1 + 504;
  v68 = v3;
  if ( *(_DWORD *)(*(_QWORD *)v3 + 20LL) )
  {
    v34 = &off_1400D41D0;
    v35 = 0;
    P = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    sub_1400011A8(&v34, (__int64)L"MMIO is not available\n", 0x16uLL);
    v16 = P;
    v17 = &unk_1400D44E0;
    if ( P )
      v17 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v17, 2 * v37);
    if ( v16 )
      ExFreePool(v16);
    v18 = dword_1400D76E0;
    HIDWORD(v32) = 16;
    v19 = a1 - (_QWORD)dword_1400D76E0;
    HIDWORD(v28) = 16;
    v20 = 3LL;
    do
    {
      LODWORD(v32) = *(unsigned int *)((char *)v18 + v19 + 536);
      v30 = v32;
      v31 = 10;
      sub_1400042F0((__int64)v61, (int *)&v30);
      LODWORD(v28) = *v18;
      v26 = v28;
      v27 = 10;
      sub_1400042F0((__int64)v63, (int *)&v26);
      v21 = sub_140052A5C((__int64)v39, (__int64)L"IVAR 0x", v63);
      v22 = sub_140052E8C((__int64)v43, v21, (__int64)L" shadow = 0x");
      v23 = sub_140053644((__int64)v47, v22, (__int64)v61);
      sub_14002D2AC((__int64)v58, v23, (__int64)qword_1400B6F30);
      v47[0] = &off_1400D41D0;
      if ( v48 )
        ExFreePool(v48);
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
      v43[0] = &off_1400D41D0;
      if ( v44 )
        ExFreePool(v44);
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v39[0] = &off_1400D41D0;
      if ( v40 )
        ExFreePool(v40);
      v40 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      if ( v64 )
        ExFreePool(v64);
      if ( v62 )
        ExFreePool(v62);
      v24 = v59;
      v25 = &unk_1400D44E0;
      if ( v59 )
        v25 = v59;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v25, 2 * v60);
      if ( v24 )
        ExFreePool(v24);
      ++v18;
      --v20;
    }
    while ( v20 );
  }
  else
  {
    v5 = dword_1400D76E0;
    HIDWORD(v51) = 16;
    v6 = a1 - (_QWORD)dword_1400D76E0;
    HIDWORD(v26) = 16;
    HIDWORD(v30) = 16;
    v7 = 3LL;
    do
    {
      v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + *v5);
      LODWORD(v51) = *(unsigned int *)((char *)v5 + v6 + 536);
      v52 = v51;
      v53 = 10;
      sub_1400042F0((__int64)v61, (int *)&v52);
      LODWORD(v26) = v8;
      v28 = v26;
      v29 = 10;
      sub_1400042F0((__int64)v58, (int *)&v28);
      LODWORD(v30) = *v5;
      v32 = v30;
      v33 = 10;
      sub_1400042F0((__int64)v66, (int *)&v32);
      v9 = sub_140052A5C((__int64)v47, (__int64)L"IVAR 0x", v66);
      v10 = sub_140052C70((__int64)v43, v9, (__int64)L" = 0x");
      v11 = sub_140053644((__int64)v39, v10, (__int64)v58);
      v12 = sub_1400530A8((__int64)&v54, v11, (__int64)L" (shadow = 0x");
      v13 = sub_140053644((__int64)&v34, v12, (__int64)v61);
      sub_14002D4C8((__int64)v63, v13, (__int64)L")\n");
      v34 = &off_1400D41D0;
      if ( P )
        ExFreePool(P);
      P = 0LL;
      v37 = 0LL;
      v38 = 0LL;
      v54 = &off_1400D41D0;
      if ( v55 )
        ExFreePool(v55);
      v55 = 0LL;
      v56 = 0LL;
      v57 = 0LL;
      v39[0] = &off_1400D41D0;
      if ( v40 )
        ExFreePool(v40);
      v40 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      v43[0] = &off_1400D41D0;
      if ( v44 )
        ExFreePool(v44);
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47[0] = &off_1400D41D0;
      if ( v48 )
        ExFreePool(v48);
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
      if ( v67 )
        ExFreePool(v67);
      if ( v59 )
        ExFreePool(v59);
      if ( v62 )
        ExFreePool(v62);
      v14 = v64;
      v15 = &unk_1400D44E0;
      if ( v64 )
        v15 = v64;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v15, 2 * v65);
      if ( v14 )
        ExFreePool(v14);
      v3 = v68;
      ++v5;
      --v7;
    }
    while ( v7 );
  }
}
