/*
 * XREFs of sub_180095F78 @ 0x180095F78
 * Callers:
 *     sub_180095DC0 @ 0x180095DC0 (sub_180095DC0.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800139A8 @ 0x1800139A8 (sub_1800139A8.c)
 *     sub_180013E28 @ 0x180013E28 (sub_180013E28.c)
 *     sub_180013F64 @ 0x180013F64 (sub_180013F64.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_18006AB44 @ 0x18006AB44 (sub_18006AB44.c)
 *     sub_18007E3E4 @ 0x18007E3E4 (sub_18007E3E4.c)
 *     GsDriverEntry @ 0x180082150 (GsDriverEntry.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_180092658 @ 0x180092658 (sub_180092658.c)
 *     sub_1800926BC @ 0x1800926BC (sub_1800926BC.c)
 *     sub_18009271C @ 0x18009271C (sub_18009271C.c)
 *     sub_1800941E4 @ 0x1800941E4 (sub_1800941E4.c)
 *     sub_1800967C0 @ 0x1800967C0 (sub_1800967C0.c)
 *     sub_180098928 @ 0x180098928 (sub_180098928.c)
 *     sub_180098FF0 @ 0x180098FF0 (sub_180098FF0.c)
 *     sub_1800DCC54 @ 0x1800DCC54 (sub_1800DCC54.c)
 *     sub_1800DCEBC @ 0x1800DCEBC (sub_1800DCEBC.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
_OWORD *__fastcall sub_180095F78(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        float *a9,
        float *a10,
        char a11)
{
  _OWORD *v12; // r12
  char v14; // cl
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // rdx
  signed __int32 v18; // eax
  const char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  signed __int32 v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  volatile signed __int32 *v27; // rbx
  int v28; // r12d
  int v29; // ebx
  __int64 v30; // rdx
  unsigned __int128 v31; // kr00_16
  signed __int32 v32; // eax
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rdx
  signed __int32 v37; // eax
  __int64 *v38; // rax
  volatile signed __int32 *v39; // rbx
  __int64 v40; // rbx
  char v41; // di
  __int64 v42; // r8
  const char *v43; // r8
  __int64 v44; // rcx
  float v45; // xmm2_4
  _QWORD *v46; // rax
  volatile signed __int32 *v47; // rbx
  __int64 v48; // rbx
  volatile signed __int32 *v49; // rbx
  __int64 v51; // [rsp+28h] [rbp-E0h]
  __int64 v52; // [rsp+28h] [rbp-E0h]
  unsigned __int128 v54; // [rsp+38h] [rbp-D0h]
  __int128 v55; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v56; // [rsp+58h] [rbp-B0h]
  __int128 v57; // [rsp+68h] [rbp-A0h]
  __int128 v58; // [rsp+78h] [rbp-90h]
  __int64 *v59; // [rsp+88h] [rbp-80h] BYREF
  __int128 v60; // [rsp+90h] [rbp-78h] BYREF
  __int64 v61[4]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 *v62; // [rsp+C0h] [rbp-48h]
  __int64 *v63; // [rsp+C8h] [rbp-40h]
  _BYTE v64[8]; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v65; // [rsp+D8h] [rbp-30h]
  __int64 v66; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v67; // [rsp+E8h] [rbp-20h]
  __int64 v68; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v69; // [rsp+F8h] [rbp-10h]
  __int64 v70; // [rsp+100h] [rbp-8h] BYREF
  float Px; // [rsp+108h] [rbp+0h] BYREF
  float v72; // [rsp+110h] [rbp+8h] BYREF
  _DWORD v73[6]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v74[2]; // [rsp+130h] [rbp+28h] BYREF
  __m128i si128; // [rsp+140h] [rbp+38h]
  __int64 v76[2]; // [rsp+150h] [rbp+48h] BYREF
  __m128i v77; // [rsp+160h] [rbp+58h]
  __int128 v78; // [rsp+178h] [rbp+70h] BYREF
  float v79; // [rsp+194h] [rbp+8Ch]
  float v80; // [rsp+1A4h] [rbp+9Ch]
  float v81; // [rsp+1B4h] [rbp+ACh]

  v12 = (_OWORD *)a2;
  v61[1] = a2;
  v70 = a3;
  v61[2] = (__int64)a5;
  sub_180018AF0(&v78, a8);
  v14 = sub_1800967C0(&v78);
  if ( *((float *)&v78 + 3) != 0.0 || v79 != 0.0 || v80 != 0.0 || (v15 = 1, v81 != 1.0) )
    v15 = 0;
  if ( !v14 || !v15 )
  {
    sub_18007E3E4(&v78, &xmmword_18020DC10);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    LOBYTE(v74[0]) = 0;
    LOBYTE(v16) = 0;
    sub_18000FB34(
      v74,
      0xB5uLL,
      v16,
      "LOADED TRANSFORM IS NOT VALID Node ID=%.16X has a transform that is non-affine or not finite. Elements of the matr"
      "ix are either NaN or infinite. The matrix has been set to identity ");
    v56 = 0LL;
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      while ( 1 )
      {
        v18 = *(_DWORD *)(v17 + 8);
        if ( !v18 )
          break;
        if ( v18 == _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), v18 + 1, v18) )
        {
          v56 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v19 = (const char *)v74;
    if ( si128.m128i_i64[1] >= 0x10uLL )
      v19 = (const char *)v74[0];
    sub_1801163DC(&unk_18020C5F8, 4LL, v19, *(_QWORD *)(v56 + 368), 0);
    if ( *((_QWORD *)&v56 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v56 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v56 + 1))(*((_QWORD *)&v56 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v56 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v56 + 1) + 8LL))(*((_QWORD *)&v56 + 1));
      }
    }
    if ( si128.m128i_i64[1] >= 0x10uLL )
    {
      v20 = v74[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v20 = *(_QWORD *)(v74[0] - 8);
        if ( (unsigned __int64)(v74[0] - v20 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v20, si128.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v20);
    }
  }
  v57 = 0LL;
  v21 = *(_QWORD *)(a1 + 64);
  if ( v21 )
  {
    while ( 1 )
    {
      v22 = *(_DWORD *)(v21 + 8);
      if ( !v22 )
        break;
      if ( v22 == _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), v22 + 1, v22) )
      {
        v57 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  GsDriverEntry(v57, (__int64)&v78);
  if ( *((_QWORD *)&v57 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v57 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v57 + 1))(*((_QWORD *)&v57 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v57 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v57 + 1) + 8LL))(*((_QWORD *)&v57 + 1));
    }
  }
  v23 = sub_18006AB44(v70);
  v24 = sub_1800DCC54(v23, a6, a4);
  *v12 = 0LL;
  v61[3] = (__int64)&v60;
  v61[0] = a1;
  v25 = sub_1800941E4((__int64)v64, v61, &v70);
  v60 = 0LL;
  v60 = *(_OWORD *)v25;
  *(_QWORD *)v25 = 0LL;
  *(_QWORD *)(v25 + 8) = 0LL;
  v26 = sub_18006AB44(v70);
  sub_1800DCEBC(v26, v12, v24, &v60);
  LODWORD(v51) = 1;
  v27 = v65;
  if ( v65 )
  {
    if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    v28 = sub_18009271C(*a5);
    v29 = sub_180092658(*a5);
    sub_1801163DC(&unk_18020C5F8, 3LL, "MeshInstance: Vertex count %u", v28);
    sub_1801163DC(&unk_18020C5F8, 3LL, "MeshInstance: Index count  %u", v29);
    sub_1801163DC(&unk_18020C5F8, 3LL, "MeshInstance: Index per Vertex count %f", (float)((float)v29 / (float)v28), v51);
    if ( v28 )
    {
      v55 = 0LL;
      v54 = 0LL;
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 )
      {
        while ( 1 )
        {
          v32 = *(_DWORD *)(v30 + 8);
          if ( !v32 )
            break;
          if ( v32 == _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 8), v32 + 1, v32) )
          {
            v33 = *(_QWORD *)(a1 + 56);
            v34 = *(_QWORD *)(a1 + 64);
            *((_QWORD *)&v54 + 1) = v34;
            v31 = __PAIR128__(v34, v33);
            goto LABEL_43;
          }
        }
      }
      v31 = v54;
LABEL_43:
      sub_1800839A4(v31);
      v59 = 0LL;
      v62 = *(__int64 **)(v31 + 384);
      v63 = *(__int64 **)(v31 + 376);
      sub_180013F64(&v59, v63, v62, 0);
      if ( v59 == *(__int64 **)(v31 + 384) )
        v55 = 0LL;
      else
        sub_180013E28((__int64 *)&v55, v59);
      LODWORD(v52) = 3;
      if ( *((_QWORD *)&v31 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v54 + 1))(*((_QWORD *)&v54 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v54 + 1) + 8LL))(*((_QWORD *)&v54 + 1));
        }
      }
      v35 = v55;
      if ( !(_QWORD)v55 )
      {
        v58 = 0LL;
        v36 = *(_QWORD *)(a1 + 64);
        if ( v36 )
        {
          while ( 1 )
          {
            v37 = *(_DWORD *)(v36 + 8);
            if ( !v37 )
              break;
            if ( v37 == _InterlockedCompareExchange((volatile signed __int32 *)(v36 + 8), v37 + 1, v37) )
            {
              v58 = *(_OWORD *)(a1 + 56);
              break;
            }
          }
        }
        v38 = sub_1800139A8(v58, &v66);
        std::shared_ptr<__ExceptionPtr>::operator=(&v55, v38);
        v39 = v67;
        if ( v67 )
        {
          if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
            if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          }
        }
        if ( *((_QWORD *)&v58 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v58 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v40 = *((_QWORD *)&v58 + 1);
            (***((void (__fastcall ****)(_QWORD))&v58 + 1))(*((_QWORD *)&v58 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v58 + 1) + 8LL))(*((_QWORD *)&v58 + 1));
          }
        }
        v35 = v55;
      }
      v41 = a11;
      if ( !a11 )
        goto LABEL_86;
      Px = (float)(a10[1] + *a10) + a10[2];
      if ( fdtest(&Px) > 0 || (v72 = (float)(a9[1] + *a9) + a9[2], fdtest(&v72) > 0) )
      {
        v77 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
        LOBYTE(v76[0]) = 0;
        LOBYTE(v42) = 0;
        sub_18000FB34(
          v76,
          0xADuLL,
          v42,
          "LOADED BOUNDS ARE NOT FINITE! Node ID=%.16X has a bounding box that is not finite. Elements of the bounding bo"
          "x are either NaN or infinite The Bounding will be recalculated.");
        v43 = (const char *)v76;
        if ( v77.m128i_i64[1] >= 0x10uLL )
          v43 = (const char *)v76[0];
        sub_1801163DC(&unk_18020C5F8, 4LL, v43, a7, v52);
        v41 = 0;
        if ( v77.m128i_i64[1] >= 0x10uLL )
        {
          v44 = v76[0];
          if ( (unsigned __int64)(v77.m128i_i64[1] + 1) >= 0x1000 )
          {
            v44 = *(_QWORD *)(v76[0] - 8);
            if ( (unsigned __int64)(v76[0] - v44 - 8) > 0x1F )
            {
              o__invalid_parameter_noinfo_noreturn(v44, v77.m128i_i64[1] + 40);
              __debugbreak();
            }
          }
          j_j__o_free(v44);
        }
      }
      v45 = *a10;
      if ( *a10 == 0.0 && a10[1] == 0.0 && a10[2] == 0.0 )
        v41 = 0;
      if ( v41 )
      {
        *(float *)v73 = *a9;
        *(float *)&v73[1] = a9[1];
        *(float *)&v73[2] = a9[2];
        *(float *)&v73[3] = v45;
        *(float *)&v73[4] = a10[1];
        *(float *)&v73[5] = a10[2];
        sub_180098FF0(v35, v73);
      }
      else
      {
LABEL_86:
        v46 = sub_1800926BC(*a5, &v68, 0);
        sub_180098928(v35, v46, (unsigned int)v28);
        v47 = v69;
        if ( v69 )
        {
          if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v47)(v47);
            if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          }
        }
      }
      if ( *((_QWORD *)&v55 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v55 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v48 = *((_QWORD *)&v55 + 1);
          (***((void (__fastcall ****)(_QWORD))&v55 + 1))(*((_QWORD *)&v55 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v55 + 1) + 8LL))(*((_QWORD *)&v55 + 1));
        }
      }
    }
    v12 = (_OWORD *)a2;
  }
  v49 = (volatile signed __int32 *)a5[1];
  if ( v49 )
  {
    if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
      if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
    }
  }
  return v12;
}
