/*
 * XREFs of sub_1800FF83C @ 0x1800FF83C
 * Callers:
 *     sub_1800FEA0C @ 0x1800FEA0C (sub_1800FEA0C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_1800B2A9C @ 0x1800B2A9C (sub_1800B2A9C.c)
 *     sub_1800B3E3C @ 0x1800B3E3C (sub_1800B3E3C.c)
 *     sub_1800FD3F0 @ 0x1800FD3F0 (sub_1800FD3F0.c)
 *     sub_1800FD998 @ 0x1800FD998 (sub_1800FD998.c)
 *     sub_1801001C4 @ 0x1801001C4 (sub_1801001C4.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180100348 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     sub_1801003C4 @ 0x1801003C4 (sub_1801003C4.c)
 *     sub_180100438 @ 0x180100438 (sub_180100438.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800FF83C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  char v6; // r13
  char v7; // r12
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  _DWORD *v13; // rcx
  char *v14; // rsi
  unsigned __int64 v15; // rdi
  void **v16; // rax
  void **v17; // r15
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rdx
  void **v20; // rax
  void **v21; // rcx
  unsigned __int64 v22; // rax
  void **v23; // rcx
  void **v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // r15
  unsigned __int64 i; // rdi
  void **v28; // rax
  void **v29; // rax
  char v30; // al
  __int64 v31; // rdi
  unsigned __int8 v32; // al
  __int64 v33; // rax
  _QWORD *v34; // rsi
  int *v35; // rdx
  int v36; // xmm1_4
  int v37; // xmm0_4
  void *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 *v44; // rax
  char v45; // [rsp+30h] [rbp-D0h]
  char v46; // [rsp+31h] [rbp-CFh]
  char v47; // [rsp+32h] [rbp-CEh]
  char v48[5]; // [rsp+33h] [rbp-CDh] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h]
  _QWORD v50[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  _QWORD v53[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  _QWORD *v56; // [rsp+80h] [rbp-80h]
  _QWORD *v57; // [rsp+88h] [rbp-78h]
  _QWORD *v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  _BYTE v60[8]; // [rsp+A0h] [rbp-60h] BYREF
  void *Buf1[2]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v62; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v65; // [rsp+D0h] [rbp-30h]
  char v66[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v67; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h] BYREF
  __m128i si128; // [rsp+110h] [rbp+10h]
  char v71[16]; // [rsp+120h] [rbp+20h] BYREF
  __m128i v72; // [rsp+130h] [rbp+30h]
  __int64 pExceptionObject[3]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v74; // [rsp+158h] [rbp+58h]

  v56 = (_QWORD *)a3;
  v59 = a2;
  v4 = 0LL;
  v49 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v46 = 0;
  v47 = 0;
  v7 = 0;
  v45 = 0;
  *(_DWORD *)(a3 + 32) = 0;
  v8 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v68 = 15LL;
  v67 = 6LL;
  strcpy(v66, "<size>");
  v72.m128i_i64[1] = 15LL;
  v72.m128i_i64[0] = 6LL;
  strcpy(v71, "<data>");
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 7LL;
  v69 = 0x3E617461642F3CLL;
  v62 = 0LL;
  v63 = 15LL;
  LOBYTE(Buf1[0]) = 0;
  v9 = std::ios::widen(a2 + *(int *)(*(_QWORD *)a2 + 4LL), 10LL);
  v10 = sub_1800B2A9C(a2, Buf1, v9);
  result = std::ios_base::operator bool(v10 + *(int *)(*(_QWORD *)v10 + 4LL));
  if ( !(_BYTE)result )
  {
LABEL_53:
    v34 = v56;
    goto LABEL_54;
  }
  v14 = (char *)v65;
  do
  {
    v15 = v62;
    if ( !v62 )
      goto LABEL_44;
    if ( v7 )
      goto LABEL_46;
    v16 = Buf1;
    v17 = (void **)Buf1[0];
    v18 = v63;
    if ( v63 >= 0x10 )
      v16 = (void **)Buf1[0];
    if ( *((_BYTE *)v16 + v62 - 1) == 13 )
    {
      v19 = --v62;
      v20 = Buf1;
      if ( v63 >= 0x10 )
        v20 = (void **)Buf1[0];
      *((_BYTE *)v20 + v19) = 0;
      v17 = (void **)Buf1[0];
      v15 = v62;
      v18 = v63;
    }
    v21 = Buf1;
    if ( v18 >= 0x10 )
      v21 = v17;
    v22 = sub_1800FD998((__int64)v21, v15, 0LL, (unsigned __int64)&unk_1801D6190, 2LL);
    if ( v15 < v22 )
      v22 = v15;
    v23 = Buf1;
    if ( v18 >= 0x10 )
      v23 = v17;
    v62 = v15 - v22;
    memmove(v23, (char *)v23 + v22, v15 - v22 + 1);
    v24 = Buf1;
    if ( v63 >= 0x10 )
      v24 = (void **)Buf1[0];
    if ( v62 == 5 && !memcmp(v24, "<LUT>", 5uLL) )
      v6 = 1;
    if ( v6 )
    {
      v58 = v50;
      v51 = 0LL;
      v52 = 0LL;
      sub_18001CDF8(v50, (__int64)v66);
      v54 = 0LL;
      v55 = 0LL;
      sub_18001CDF8(v53, (__int64)Buf1);
      if ( (unsigned __int8)sub_1801001C4(v53, v50) )
      {
        pExceptionObject[2] = 0LL;
        v74 = 15LL;
        LOBYTE(pExceptionObject[0]) = 0;
        sub_1800B3E3C(pExceptionObject, Buf1, v67 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v49 = (int)sub_180100438(pExceptionObject, 0LL, 10LL);
        v5 = v49 * v49 * v49;
        v46 = 1;
        v12 = v74;
        if ( v74 >= 0x10 )
        {
          v25 = pExceptionObject[0];
          if ( v74 + 1 >= 0x1000 )
          {
            v25 = *(_QWORD *)(pExceptionObject[0] - 8);
            if ( (unsigned __int64)(pExceptionObject[0] - v25 - 8) > 0x1F )
            {
              o__invalid_parameter_noinfo_noreturn(v25, v74 + 40);
              __debugbreak();
            }
          }
          j_j__o_free(v25);
        }
      }
    }
    if ( v46
      && (v57 = v53,
          v54 = 0LL,
          v55 = 0LL,
          sub_18001CDF8(v53, (__int64)v71),
          v51 = 0LL,
          v52 = 0LL,
          sub_18001CDF8(v50, (__int64)Buf1),
          (unsigned __int8)sub_1801001C4(v50, v53)) )
    {
      v47 = 1;
    }
    else if ( v47 )
    {
      v57 = v53;
      v54 = 0LL;
      v55 = 0LL;
      sub_18001CDF8(v53, (__int64)&v69);
      v51 = 0LL;
      v52 = 0LL;
      sub_18001CDF8(v50, (__int64)Buf1);
      if ( (unsigned __int8)sub_1801001C4(v50, v53) )
      {
        v7 = 1;
        v45 = 1;
        goto LABEL_44;
      }
      v26 = v62 >> 1;
      for ( i = 0LL; i < v26; ++i )
      {
        v28 = Buf1;
        if ( v63 >= 0x10 )
          v28 = (void **)Buf1[0];
        v60[0] = *((_BYTE *)v28 + 2 * i);
        v29 = Buf1;
        if ( v63 >= 0x10 )
          v29 = (void **)Buf1[0];
        v60[1] = *((_BYTE *)v29 + 2 * i + 1);
        v60[2] = 0;
        v30 = o_strtoul(v60, 0LL, 16LL);
        v48[0] = v30;
        if ( *((char **)&v65 + 1) == v14 )
        {
          sub_1800FD3F0(&v64, v14, v48);
          v14 = (char *)v65;
        }
        else
        {
          *v14++ = v30;
          *(_QWORD *)&v65 = v14;
        }
      }
    }
    v7 = v45;
LABEL_44:
    v31 = v59;
    LOBYTE(v12) = 10;
    v32 = std::ios::widen(v59 + *(int *)(*(_QWORD *)v59 + 4LL), v12);
    v33 = sub_1800B2A9C(v31, Buf1, v32);
    result = std::ios_base::operator bool(v33 + *(int *)(*(_QWORD *)v33 + 4LL));
  }
  while ( (_BYTE)result );
  if ( !v7 )
  {
    v8 = v64;
    v4 = v49;
    goto LABEL_53;
  }
LABEL_46:
  v8 = v64;
  if ( &v14[-v64] != (char *)(12 * v5) )
  {
    sub_18000FD48(v50);
    v44 = sub_18000FD48(v53);
    sub_180027FF4(pExceptionObject, v44, 395, (__int64)v50, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v34 = v56;
  result = sub_1801003C4(v56 + 1, v5);
  if ( v5 )
  {
    v13 = (_DWORD *)v34[1];
    v35 = (int *)(v8 + 4);
    do
    {
      v36 = v35[1];
      v37 = *v35;
      result = (unsigned int)*(v35 - 1);
      *v13 = result;
      v13[1] = v37;
      v13[2] = v36;
      v13[3] = 1065353216;
      v35 += 3;
      v13 += 4;
      --v5;
    }
    while ( v5 );
  }
  v4 = v49;
LABEL_54:
  *v34 = v4;
  if ( v63 >= 0x10 )
  {
    v38 = Buf1[0];
    if ( v63 + 1 >= 0x1000 )
    {
      v38 = (void *)*((_QWORD *)Buf1[0] - 1);
      if ( (unsigned __int64)((char *)Buf1[0] - (char *)v38 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v38, v63 + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v38);
  }
  v62 = 0LL;
  v63 = 15LL;
  LOBYTE(Buf1[0]) = 0;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v39 = v69;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v39 = *(_QWORD *)(v69 - 8);
      if ( (unsigned __int64)(v69 - v39 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v39, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v39);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v69) = 0;
  if ( v72.m128i_i64[1] >= 0x10uLL )
  {
    v40 = *(_QWORD *)v71;
    if ( (unsigned __int64)(v72.m128i_i64[1] + 1) >= 0x1000 )
    {
      v40 = *(_QWORD *)(*(_QWORD *)v71 - 8LL);
      if ( (unsigned __int64)(*(_QWORD *)v71 - v40 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v40, v72.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v40);
  }
  v72 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  v71[0] = 0;
  if ( v68 >= 0x10 )
  {
    v41 = *(_QWORD *)v66;
    if ( v68 + 1 >= 0x1000 )
    {
      v41 = *(_QWORD *)(*(_QWORD *)v66 - 8LL);
      if ( (unsigned __int64)(*(_QWORD *)v66 - v41 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v41, v68 + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v41);
  }
  v67 = 0LL;
  v68 = 15LL;
  v66[0] = 0;
  if ( v8 )
  {
    v42 = v8;
    if ( (unsigned __int64)(*((_QWORD *)&v65 + 1) - v8) >= 0x1000 )
    {
      v43 = *((_QWORD *)&v65 + 1) - v8 + 39;
      v8 = *(_QWORD *)(v8 - 8);
      if ( (unsigned __int64)(v42 - v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v13, v43);
        __debugbreak();
      }
    }
    return j_j__o_free(v8);
  }
  return result;
}
