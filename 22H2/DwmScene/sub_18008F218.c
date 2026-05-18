/*
 * XREFs of sub_18008F218 @ 0x18008F218
 * Callers:
 *     sub_1800E9890 @ 0x1800E9890 (sub_1800E9890.c)
 *     sub_1800EA640 @ 0x1800EA640 (sub_1800EA640.c)
 * Callees:
 *     sub_180012AA8 @ 0x180012AA8 (sub_180012AA8.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18008D750 @ 0x18008D750 (sub_18008D750.c)
 *     sub_18008D800 @ 0x18008D800 (sub_18008D800.c)
 *     sub_18008D8F0 @ 0x18008D8F0 (sub_18008D8F0.c)
 *     sub_18008D9E0 @ 0x18008D9E0 (sub_18008D9E0.c)
 *     sub_18008DB4C @ 0x18008DB4C (sub_18008DB4C.c)
 *     sub_18008DC38 @ 0x18008DC38 (sub_18008DC38.c)
 *     sub_18009FD8C @ 0x18009FD8C (sub_18009FD8C.c)
 *     sub_1800A5574 @ 0x1800A5574 (sub_1800A5574.c)
 *     sub_1800EC6C8 @ 0x1800EC6C8 (sub_1800EC6C8.c)
 *     sub_1800ECEEC @ 0x1800ECEEC (sub_1800ECEEC.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=32
void __fastcall sub_18008F218(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int128 v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v17[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v18[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v19[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v20[4]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v21[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v22[4]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v23[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v24[4]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v25[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v26[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v27[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v28[4]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v29[4]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v30[4]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v31[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v32[4]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v33[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v34[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v35[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __m128i v36; // [rsp+310h] [rbp+210h] BYREF
  _QWORD *v37; // [rsp+320h] [rbp+220h]
  __int128 v38; // [rsp+328h] [rbp+228h] BYREF
  __int128 v39; // [rsp+338h] [rbp+238h] BYREF
  __m128i si128; // [rsp+348h] [rbp+248h] BYREF
  __int128 v41; // [rsp+358h] [rbp+258h] BYREF
  _QWORD Src[4]; // [rsp+368h] [rbp+268h] BYREF
  _QWORD v43[4]; // [rsp+388h] [rbp+288h] BYREF
  _QWORD v44[4]; // [rsp+3A8h] [rbp+2A8h] BYREF
  _QWORD v45[4]; // [rsp+3C8h] [rbp+2C8h] BYREF
  _QWORD v46[4]; // [rsp+3E8h] [rbp+2E8h] BYREF
  _QWORD v47[4]; // [rsp+408h] [rbp+308h] BYREF
  _QWORD v48[5]; // [rsp+428h] [rbp+328h] BYREF
  __int128 v49; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v50[64]; // [rsp+460h] [rbp+360h] BYREF
  _BYTE v51[64]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v52[64]; // [rsp+4E0h] [rbp+3E0h] BYREF
  _BYTE v53[64]; // [rsp+520h] [rbp+420h] BYREF
  _BYTE v54[64]; // [rsp+560h] [rbp+460h] BYREF
  _BYTE v55[64]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v56[64]; // [rsp+5E0h] [rbp+4E0h] BYREF
  _BYTE v57[64]; // [rsp+620h] [rbp+520h] BYREF
  _BYTE v58[64]; // [rsp+660h] [rbp+560h] BYREF
  _BYTE v59[64]; // [rsp+6A0h] [rbp+5A0h] BYREF
  _BYTE v60[64]; // [rsp+6E0h] [rbp+5E0h] BYREF
  _BYTE v61[64]; // [rsp+720h] [rbp+620h] BYREF
  _BYTE v62[64]; // [rsp+760h] [rbp+660h] BYREF
  _BYTE v63[64]; // [rsp+7A0h] [rbp+6A0h] BYREF
  _BYTE v64[64]; // [rsp+7E0h] [rbp+6E0h] BYREF
  _BYTE v65[64]; // [rsp+820h] [rbp+720h] BYREF
  _BYTE v66[64]; // [rsp+860h] [rbp+760h] BYREF
  _BYTE v67[64]; // [rsp+8A0h] [rbp+7A0h] BYREF
  _BYTE v68[64]; // [rsp+8E0h] [rbp+7E0h] BYREF
  _BYTE v69[64]; // [rsp+920h] [rbp+820h] BYREF
  _BYTE v70[64]; // [rsp+960h] [rbp+860h] BYREF
  _BYTE v71[64]; // [rsp+9A0h] [rbp+8A0h] BYREF
  _BYTE v72[64]; // [rsp+9E0h] [rbp+8E0h] BYREF
  _BYTE v73[64]; // [rsp+A20h] [rbp+920h] BYREF
  _BYTE v74[64]; // [rsp+A60h] [rbp+960h] BYREF
  _BYTE v75[64]; // [rsp+AA0h] [rbp+9A0h] BYREF
  _BYTE v76[64]; // [rsp+AE0h] [rbp+9E0h] BYREF
  _BYTE v77[64]; // [rsp+B20h] [rbp+A20h] BYREF
  _BYTE v78[64]; // [rsp+B60h] [rbp+A60h] BYREF
  _BYTE v79[64]; // [rsp+BA0h] [rbp+AA0h] BYREF

  v37 = a2;
  v49 = 0LL;
  sub_18009FD8C(a1, &v49, 2LL);
  v20[2] = 0LL;
  v20[3] = 0LL;
  sub_18001CDF8(v20, (__int64)&qword_18020B418);
  v38 = xmmword_1801CEFB0;
  sub_18008D800((__int64)v50, v20, 6LL, &v38);
  v21[2] = 0LL;
  v21[3] = 0LL;
  sub_18001CDF8(v21, (__int64)&qword_18020B438);
  v39 = xmmword_1801CEFA0;
  sub_18008D800((__int64)v51, v21, 6LL, &v39);
  v22[2] = 0LL;
  v22[3] = 0LL;
  sub_18001CDF8(v22, (__int64)&qword_18020B458);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801CEFC0);
  sub_18008D8F0((__int64)v52, v22, 5LL, (__int128 *)si128.m128i_i8);
  v3 = sub_180012AA8(Src, (__int64)&qword_18020B4D8, (__int64)aEnabled);
  sub_18008DC38((__int64)v53, v3, 0LL, 0);
  v4 = sub_180012AA8(v43, (__int64)&qword_18020B4F8, (__int64)aEnabled);
  sub_18008DC38((__int64)v54, v4, 0LL, 0);
  v5 = sub_180012AA8(v44, (__int64)&qword_18020B518, (__int64)aEnabled);
  sub_18008DC38((__int64)v55, v5, 0LL, 0);
  v6 = sub_180012AA8(v45, (__int64)&qword_18020B538, (__int64)aEnabled);
  sub_18008DC38((__int64)v56, v6, 0LL, 0);
  v7 = sub_180012AA8(v46, (__int64)&qword_18020B558, (__int64)aEnabled);
  sub_18008DC38((__int64)v57, v7, 0LL, 0);
  v8 = sub_180012AA8(v47, (__int64)&qword_18020B578, (__int64)aEnabled);
  sub_18008DC38((__int64)v58, v8, 0LL, 0);
  v9 = sub_180012AA8(v48, (__int64)&qword_18020B598, (__int64)aEnabled);
  sub_18008DC38((__int64)v59, v9, 0LL, 0);
  v23[2] = 0LL;
  v23[3] = 0LL;
  sub_18001CDF8(v23, (__int64)&qword_18020B5B8);
  sub_18008D750((__int64)v60, v23, 0);
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18001CDF8(v24, (__int64)&qword_18020B5D8);
  sub_18008D750((__int64)v61, v24, 0);
  v25[2] = 0LL;
  v25[3] = 0LL;
  sub_18001CDF8(v25, (__int64)&qword_18020B498);
  sub_18008DB4C((__int64)v62, v25, 2LL, 1.0);
  v15[2] = 0LL;
  v15[3] = 0LL;
  sub_18001CDF8(v15, (__int64)&qword_18020B5F8);
  sub_18008D9E0((__int64)v63, v15, 1LL, 0);
  v16[2] = 0LL;
  v16[3] = 0LL;
  sub_18001CDF8(v16, (__int64)&qword_18020B618);
  sub_18008DB4C((__int64)v64, v16, 2LL, 0.5);
  v17[2] = 0LL;
  v17[3] = 0LL;
  sub_18001CDF8(v17, (__int64)&qword_18020B638);
  sub_18008D750((__int64)v65, v17, 5);
  v18[2] = 0LL;
  v18[3] = 0LL;
  sub_18001CDF8(v18, (__int64)&qword_18020B4B8);
  v41 = 0LL;
  sub_18008D800((__int64)v66, v18, 6LL, &v41);
  v19[2] = 0LL;
  v19[3] = 0LL;
  sub_18001CDF8(v19, (__int64)&qword_18020B478);
  v36 = _mm_load_si128((const __m128i *)&xmmword_1801CEFC0);
  sub_18008D8F0((__int64)v67, v19, 5LL, (__int128 *)v36.m128i_i8);
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001CDF8(v13, (__int64)&qword_18020B658);
  sub_18008DC38((__int64)v68, v13, 0LL, 0);
  v14[2] = 0LL;
  v14[3] = 0LL;
  sub_18001CDF8(v14, (__int64)&qword_18020B678);
  sub_18008DC38((__int64)v69, v14, 0LL, 0);
  v26[2] = 0LL;
  v26[3] = 0LL;
  sub_18001CDF8(v26, (__int64)&qword_18020B698);
  sub_18008DC38((__int64)v70, v26, 0LL, 0);
  v27[2] = 0LL;
  v27[3] = 0LL;
  sub_18001CDF8(v27, (__int64)&qword_18020B6B8);
  sub_18008DC38((__int64)v71, v27, 0LL, 0);
  v28[2] = 0LL;
  v28[3] = 0LL;
  sub_18001CDF8(v28, (__int64)&qword_18020B6D8);
  sub_18008DC38((__int64)v72, v28, 0LL, 0);
  v29[2] = 0LL;
  v29[3] = 0LL;
  sub_18001CDF8(v29, (__int64)&qword_18020B4D8);
  sub_18008D750((__int64)v73, v29, 8);
  v30[2] = 0LL;
  v30[3] = 0LL;
  sub_18001CDF8(v30, (__int64)&qword_18020B4F8);
  sub_18008D750((__int64)v74, v30, 8);
  v31[2] = 0LL;
  v31[3] = 0LL;
  sub_18001CDF8(v31, (__int64)&qword_18020B518);
  sub_18008D750((__int64)v75, v31, 8);
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_18001CDF8(v32, (__int64)&qword_18020B538);
  sub_18008D750((__int64)v76, v32, 8);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18001CDF8(v33, (__int64)&qword_18020B578);
  sub_18008D750((__int64)v77, v33, 8);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18001CDF8(v34, (__int64)&qword_18020B558);
  sub_18008D750((__int64)v78, v34, 8);
  v35[2] = 0LL;
  v35[3] = 0LL;
  sub_18001CDF8(v35, (__int64)&qword_18020B598);
  sub_18008D750((__int64)v79, v35, 8);
  sub_1800EC6C8(v49, v50, 30LL, 0LL);
  sub_1800ECEEC(v49);
  v12 = 0LL;
  if ( *((_QWORD *)&v49 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
  v12 = v49;
  sub_1800A5574(*a2, &v12);
  `eh vector destructor iterator'(v50, 0x40uLL, 0x1EuLL, (void (*)(void *))sub_18008DD30);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v49 + 1);
  if ( *((_QWORD *)&v49 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v10 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)a2[1];
  if ( v11 && !_InterlockedDecrement(v11 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
    if ( !_InterlockedDecrement(v11 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
}
