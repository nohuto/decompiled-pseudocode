/*
 * XREFs of sub_1800E4960 @ 0x1800E4960
 * Callers:
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18008D750 @ 0x18008D750 (sub_18008D750.c)
 *     sub_18008D800 @ 0x18008D800 (sub_18008D800.c)
 *     sub_18008D8F0 @ 0x18008D8F0 (sub_18008D8F0.c)
 *     sub_18008DB4C @ 0x18008DB4C (sub_18008DB4C.c)
 *     sub_18008DD30 @ 0x18008DD30 (sub_18008DD30.c)
 *     sub_18009FD8C @ 0x18009FD8C (sub_18009FD8C.c)
 *     sub_1800A5574 @ 0x1800A5574 (sub_1800A5574.c)
 *     sub_1800E48E0 @ 0x1800E48E0 (sub_1800E48E0.c)
 *     sub_1800EC274 @ 0x1800EC274 (sub_1800EC274.c)
 *     sub_1800EC6C8 @ 0x1800EC6C8 (sub_1800EC6C8.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800ECEEC @ 0x1800ECEEC (sub_1800ECEEC.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 *     sub_1800EDB98 @ 0x1800EDB98 (sub_1800EDB98.c)
 *     sub_1800EDCA0 @ 0x1800EDCA0 (sub_1800EDCA0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_1800E4960(__int64 a1, __int128 *a2)
{
  unsigned __int16 v4; // ax
  volatile signed __int32 *v5; // rbx
  unsigned __int16 v6; // ax
  volatile signed __int32 *v7; // rbx
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // bx
  volatile signed __int32 *v10; // rbx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // di
  unsigned __int16 v13; // bx
  volatile signed __int32 *v14; // rbx
  __int64 result; // rax
  volatile signed __int32 *v16; // rbx
  __int128 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  __int128 v22; // [rsp+90h] [rbp-70h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v26[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v27[4]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v28[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v29[4]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v30[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v31[4]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v32[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v33[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v34[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v35[4]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v36[4]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v37[4]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v38[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v39[4]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v40[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v41[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v42[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v43[4]; // [rsp+310h] [rbp+210h] BYREF
  __int64 v44[4]; // [rsp+330h] [rbp+230h] BYREF
  __int64 v45[4]; // [rsp+350h] [rbp+250h] BYREF
  __int64 v46[4]; // [rsp+370h] [rbp+270h] BYREF
  __int64 v47[4]; // [rsp+390h] [rbp+290h] BYREF
  __int64 v48[4]; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v49[4]; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v50[4]; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v51[4]; // [rsp+410h] [rbp+310h] BYREF
  __int64 v52[4]; // [rsp+430h] [rbp+330h] BYREF
  __int64 v53[4]; // [rsp+450h] [rbp+350h] BYREF
  __m128i si128; // [rsp+470h] [rbp+370h] BYREF
  __m128i v55; // [rsp+480h] [rbp+380h] BYREF
  __m128i v56; // [rsp+490h] [rbp+390h] BYREF
  __m128i v57; // [rsp+4A0h] [rbp+3A0h] BYREF
  __int128 v58; // [rsp+4B0h] [rbp+3B0h] BYREF
  __m128i v59; // [rsp+4C0h] [rbp+3C0h] BYREF
  __int128 v60; // [rsp+4D0h] [rbp+3D0h] BYREF
  __int128 v61; // [rsp+4E0h] [rbp+3E0h] BYREF
  _OWORD v62[4]; // [rsp+4F0h] [rbp+3F0h] BYREF
  _OWORD v63[4]; // [rsp+530h] [rbp+430h] BYREF
  __int64 v64[8]; // [rsp+570h] [rbp+470h] BYREF
  __int64 v65[8]; // [rsp+5B0h] [rbp+4B0h] BYREF
  __int64 v66[8]; // [rsp+5F0h] [rbp+4F0h] BYREF
  __int64 v67[8]; // [rsp+630h] [rbp+530h] BYREF
  __int64 v68[8]; // [rsp+670h] [rbp+570h] BYREF
  __int64 v69[8]; // [rsp+6B0h] [rbp+5B0h] BYREF
  __int64 v70[8]; // [rsp+6F0h] [rbp+5F0h] BYREF
  __int64 v71[8]; // [rsp+730h] [rbp+630h] BYREF
  __int128 v72; // [rsp+770h] [rbp+670h] BYREF
  __int128 v73; // [rsp+780h] [rbp+680h] BYREF
  __int128 v74; // [rsp+790h] [rbp+690h] BYREF
  __int128 v75; // [rsp+7A0h] [rbp+6A0h] BYREF
  __int128 v76; // [rsp+7B0h] [rbp+6B0h] BYREF
  _BYTE v77[64]; // [rsp+7C0h] [rbp+6C0h] BYREF
  _BYTE v78[64]; // [rsp+800h] [rbp+700h] BYREF
  _BYTE v79[64]; // [rsp+840h] [rbp+740h] BYREF
  _BYTE v80[64]; // [rsp+880h] [rbp+780h] BYREF
  _BYTE v81[64]; // [rsp+8C0h] [rbp+7C0h] BYREF
  _BYTE v82[64]; // [rsp+900h] [rbp+800h] BYREF
  _BYTE v83[64]; // [rsp+940h] [rbp+840h] BYREF
  _BYTE v84[64]; // [rsp+980h] [rbp+880h] BYREF
  _BYTE v85[64]; // [rsp+9C0h] [rbp+8C0h] BYREF
  _BYTE v86[64]; // [rsp+A00h] [rbp+900h] BYREF
  _BYTE v87[64]; // [rsp+A40h] [rbp+940h] BYREF
  _BYTE v88[64]; // [rsp+A80h] [rbp+980h] BYREF
  _BYTE v89[64]; // [rsp+AC0h] [rbp+9C0h] BYREF
  _BYTE v90[64]; // [rsp+B00h] [rbp+A00h] BYREF
  _BYTE v91[64]; // [rsp+B40h] [rbp+A40h] BYREF
  _BYTE v92[64]; // [rsp+B80h] [rbp+A80h] BYREF
  _BYTE v93[64]; // [rsp+BC0h] [rbp+AC0h] BYREF
  _BYTE v94[64]; // [rsp+C00h] [rbp+B00h] BYREF
  _BYTE v95[64]; // [rsp+C40h] [rbp+B40h] BYREF
  _BYTE v96[64]; // [rsp+C80h] [rbp+B80h] BYREF
  _BYTE v97[64]; // [rsp+CC0h] [rbp+BC0h] BYREF
  _BYTE v98[64]; // [rsp+D00h] [rbp+C00h] BYREF

  v76 = 0LL;
  sub_18009FD8C(a2, &v76, 0);
  v37[2] = 0LL;
  v37[3] = 0LL;
  sub_18001CDF8(v37, (__int64)&qword_18020CCB8);
  sub_18008D750((__int64)v64, v37, 7);
  sub_1800EC774(v76, v64, 0LL);
  sub_18008DD30(v64);
  sub_1800ED08C(v76, &qword_18020CCB8);
  v62[0] = xmmword_18020DC10;
  v62[1] = xmmword_18020DC20;
  v62[2] = xmmword_18020DC30;
  v62[3] = xmmword_18020DC40;
  sub_1800EDB98(v76, v4, v62);
  sub_1800ECEEC(v76);
  v20 = 0LL;
  if ( *((_QWORD *)&v76 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v76 + 1) + 8LL), 1u);
  v20 = v76;
  sub_1800A5574(*(_QWORD *)(a1 + 56), (__int64 *)&v20);
  v5 = (volatile signed __int32 *)*((_QWORD *)&v76 + 1);
  if ( *((_QWORD *)&v76 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v76 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v75 = 0LL;
  sub_18009FD8C(a2, &v75, 4u);
  v38[2] = 0LL;
  v38[3] = 0LL;
  sub_18001CDF8(v38, (__int64)&qword_18020C058);
  sub_18008D750((__int64)v65, v38, 7);
  sub_1800EC774(v75, v65, 1LL);
  sub_18008DD30(v65);
  sub_1800ED08C(v75, &qword_18020C058);
  v63[0] = xmmword_18020DC10;
  v63[1] = xmmword_18020DC20;
  v63[2] = xmmword_18020DC30;
  v63[3] = xmmword_18020DC40;
  sub_1800EDB98(v75, v6, v63);
  v39[2] = 0LL;
  v39[3] = 0LL;
  sub_18001CDF8(v39, (__int64)&qword_18020C078);
  sub_18008D750((__int64)v66, v39, 5);
  sub_1800EC774(v75, v66, 1LL);
  sub_18008DD30(v66);
  sub_1800ECEEC(v75);
  v21 = 0LL;
  if ( *((_QWORD *)&v75 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v75 + 1) + 8LL), 1u);
  v21 = v75;
  sub_1800A5574(*(_QWORD *)(a1 + 56), (__int64 *)&v21);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v75 + 1);
  if ( *((_QWORD *)&v75 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v75 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v73 = 0LL;
  sub_18009FD8C(a2, &v73, 2u);
  v40[2] = 0LL;
  v40[3] = 0LL;
  sub_18001CDF8(v40, (__int64)&qword_18020CCD8);
  sub_18008D750((__int64)v67, v40, 8);
  v8 = sub_1800EC774(v73, v67, 0LL);
  sub_18008DD30(v67);
  sub_1800EDCA0(v73, v8, 11LL);
  v41[2] = 0LL;
  v41[3] = 0LL;
  sub_18001CDF8(v41, (__int64)&qword_18020CEB8);
  sub_18008D750((__int64)v68, v41, 8);
  v9 = sub_1800EC774(v73, v68, 0LL);
  sub_18008DD30(v68);
  sub_1800EDCA0(v73, v9, 12LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801CEFC0);
  v55 = si128;
  v56 = si128;
  v57 = si128;
  v22 = 0LL;
  v23 = 0LL;
  sub_1800E48E0(0.25, 0.25, 0.25, (__int64)&v22, (__int64)&v23);
  v42[2] = 0LL;
  v42[3] = 0LL;
  sub_18001CDF8(v42, (__int64)&qword_18020CCF8);
  sub_18008D750((__int64)v81, v42, 2);
  v43[2] = 0LL;
  v43[3] = 0LL;
  sub_18001CDF8(v43, (__int64)&qword_18020CD18);
  sub_18008DB4C((__int64)v82, v43, 2LL, 1.0);
  v44[2] = 0LL;
  v44[3] = 0LL;
  sub_18001CDF8(v44, (__int64)&qword_18020CD38);
  sub_18008D750((__int64)v83, v44, 2);
  v45[2] = 0LL;
  v45[3] = 0LL;
  sub_18001CDF8(v45, (__int64)&qword_18020CD58);
  sub_18008D750((__int64)v84, v45, 2);
  v46[2] = 0LL;
  v46[3] = 0LL;
  sub_18001CDF8(v46, (__int64)&qword_18020CD78);
  sub_18008D8F0((__int64)v85, v46, 5LL, &v22);
  v47[2] = 0LL;
  v47[3] = 0LL;
  sub_18001CDF8(v47, (__int64)&qword_18020CD98);
  sub_18008D8F0((__int64)v86, v47, 5LL, &v23);
  v48[2] = 0LL;
  v48[3] = 0LL;
  sub_18001CDF8(v48, (__int64)&qword_18020CDB8);
  sub_18008D800((__int64)v87, v48, 6LL, (__int128 *)si128.m128i_i8);
  v49[2] = 0LL;
  v49[3] = 0LL;
  sub_18001CDF8(v49, (__int64)&qword_18020CDD8);
  sub_18008D800((__int64)v88, v49, 6LL, (__int128 *)v55.m128i_i8);
  v50[2] = 0LL;
  v50[3] = 0LL;
  sub_18001CDF8(v50, (__int64)&qword_18020CDF8);
  sub_18008D800((__int64)v89, v50, 6LL, (__int128 *)v56.m128i_i8);
  v51[2] = 0LL;
  v51[3] = 0LL;
  sub_18001CDF8(v51, (__int64)&qword_18020CE18);
  sub_18008D800((__int64)v90, v51, 6LL, (__int128 *)v57.m128i_i8);
  v52[2] = 0LL;
  v52[3] = 0LL;
  sub_18001CDF8(v52, (__int64)&qword_18020CE38);
  sub_18008D750((__int64)v91, v52, 5);
  v53[2] = 0LL;
  v53[3] = 0LL;
  sub_18001CDF8(v53, (__int64)&qword_18020CE58);
  sub_18008D750((__int64)v92, v53, 5);
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18001CDF8(v24, (__int64)&qword_18020CE78);
  sub_18008D750((__int64)v93, v24, 5);
  v25[2] = 0LL;
  v25[3] = 0LL;
  sub_18001CDF8(v25, (__int64)&qword_18020CE98);
  sub_18008D750((__int64)v94, v25, 5);
  v26[2] = 0LL;
  v26[3] = 0LL;
  sub_18001CDF8(v26, (__int64)&qword_18020CED8);
  v58 = 0LL;
  sub_18008D8F0((__int64)v95, v26, 5LL, &v58);
  v27[2] = 0LL;
  v27[3] = 0LL;
  sub_18001CDF8(v27, (__int64)&qword_18020CEF8);
  v59 = _mm_load_si128((const __m128i *)&xmmword_1801CEFC0);
  sub_18008D800((__int64)v96, v27, 6LL, (__int128 *)v59.m128i_i8);
  v28[2] = 0LL;
  v28[3] = 0LL;
  sub_18001CDF8(v28, (__int64)&qword_18020CF18);
  v60 = 0LL;
  sub_18008D800((__int64)v97, v28, 6LL, &v60);
  v29[2] = 0LL;
  v29[3] = 0LL;
  sub_18001CDF8(v29, (__int64)&qword_18020CF38);
  v61 = 0LL;
  sub_18008D800((__int64)v98, v29, 6LL, &v61);
  sub_1800EC6C8(v73, v81, 18LL, 0LL);
  sub_1800ECEEC(v73);
  v17 = 0LL;
  if ( *((_QWORD *)&v73 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v73 + 1) + 8LL), 1u);
  v17 = v73;
  sub_1800A5574(*(_QWORD *)(a1 + 56), (__int64 *)&v17);
  `eh vector destructor iterator'(v81, 0x40uLL, 0x12uLL, (void (*)(void *))sub_18008DD30);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v73 + 1);
  if ( *((_QWORD *)&v73 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v73 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v72 = 0LL;
  sub_18009FD8C(a2, &v72, 6u);
  v30[2] = 0LL;
  v30[3] = 0LL;
  sub_18001CDF8(v30, (__int64)&qword_18020BB58);
  sub_18008D750((__int64)v77, v30, 2);
  v31[2] = 0LL;
  v31[3] = 0LL;
  sub_18001CDF8(v31, (__int64)&qword_18020BB78);
  sub_18008D750((__int64)v78, v31, 2);
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_18001CDF8(v32, (__int64)&qword_18020BB98);
  sub_18008D750((__int64)v79, v32, 2);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18001CDF8(v33, (__int64)&qword_18020BBF8);
  sub_18008D750((__int64)v80, v33, 2);
  sub_1800EC6C8(v72, v77, 4LL, 1LL);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18001CDF8(v34, (__int64)&qword_18020BED8);
  sub_18008D750((__int64)v69, v34, 8);
  v11 = sub_1800EC774(v72, v69, 1LL);
  sub_18008DD30(v69);
  v35[2] = 0LL;
  v35[3] = 0LL;
  sub_18001CDF8(v35, (__int64)&qword_18020BEF8);
  sub_18008D750((__int64)v70, v35, 8);
  v12 = sub_1800EC774(v72, v70, 1LL);
  sub_18008DD30(v70);
  v36[2] = 0LL;
  v36[3] = 0LL;
  sub_18001CDF8(v36, (__int64)&qword_18020BF18);
  sub_18008D750((__int64)v71, v36, 8);
  v13 = sub_1800EC774(v72, v71, 1LL);
  sub_18008DD30(v71);
  sub_1800EDCA0(v72, v11, 5LL);
  sub_1800EDCA0(v72, v12, 6LL);
  sub_1800EDCA0(v72, v13, 7LL);
  sub_1800ECEEC(v72);
  v18 = 0LL;
  if ( *((_QWORD *)&v72 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v72 + 1) + 8LL));
  v18 = v72;
  sub_1800A5574(*(_QWORD *)(a1 + 56), (__int64 *)&v18);
  `eh vector destructor iterator'(v77, 0x40uLL, 4uLL, (void (*)(void *))sub_18008DD30);
  v14 = (volatile signed __int32 *)*((_QWORD *)&v72 + 1);
  if ( *((_QWORD *)&v72 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v72 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v74 = 0LL;
  sub_18009FD8C(a2, &v74, 9u);
  sub_1800EC274(v74, &qword_18020B918, 7LL, 3LL);
  sub_1800EC274(v74, &qword_18020B938, 5LL, 3LL);
  sub_1800EC274(v74, &qword_18020B978, 5LL, 3LL);
  sub_1800EC274(v74, &qword_18020B8D8, 5LL, 3LL);
  sub_1800EC274(v74, &qword_18020B8F8, 5LL, 3LL);
  sub_1800ECEEC(v74);
  v19 = 0LL;
  if ( *((_QWORD *)&v74 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v74 + 1) + 8LL));
  v19 = v74;
  result = sub_1800A5574(*(_QWORD *)(a1 + 56), (__int64 *)&v19);
  v16 = (volatile signed __int32 *)*((_QWORD *)&v74 + 1);
  if ( *((_QWORD *)&v74 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v74 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return result;
}
