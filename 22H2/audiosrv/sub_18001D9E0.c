/*
 * XREFs of sub_18001D9E0 @ 0x18001D9E0
 * Callers:
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     sub_1800367E0 @ 0x1800367E0 (sub_1800367E0.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     sub_18005B754 @ 0x18005B754 (sub_18005B754.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180124CE8 @ 0x180124CE8 (sub_180124CE8.c)
 *     sub_180124DF8 @ 0x180124DF8 (sub_180124DF8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001D9E0(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        unsigned __int16 *a9,
        char a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14,
        unsigned int *a15,
        unsigned int *a16,
        unsigned int *a17,
        __int64 a18,
        __int64 a19,
        __int64 a20)
{
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned int v23; // r13d
  unsigned int v24; // r14d
  int *v25; // rdx
  __int128 v26; // xmm0
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rbx
  __int64 (__fastcall ***v30)(_QWORD, __int128 *); // rcx
  unsigned __int64 v31; // r8
  int v32; // eax
  int v33; // edi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r8
  _WORD *v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r15
  __int16 v40; // ax
  __int64 v41; // r8
  int v42; // r9d
  _WORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 *v46; // r14
  int v47; // ecx
  int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // edi
  char v52; // bl
  unsigned int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // r14d
  __int64 v58; // rcx
  int v60; // ecx
  unsigned __int16 v61; // ax
  int v62; // r8d
  __int16 v63; // r10
  int v64; // r9d
  __int16 v65; // r11
  __int16 v66; // dx
  int v67; // ecx
  __int16 v68; // ax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // ebx
  int *v73; // rdi
  _QWORD *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rbx
  _DWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned __int16 v81; // r9
  unsigned __int16 v82; // dx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  char v86; // al
  __int64 v87; // rdx
  int v88; // ecx
  int v89; // r8d
  int v90; // r9d
  unsigned int v92; // [rsp+54h] [rbp-ACh]
  char v93; // [rsp+58h] [rbp-A8h] BYREF
  char v94[3]; // [rsp+59h] [rbp-A7h] BYREF
  int v95; // [rsp+5Ch] [rbp-A4h]
  unsigned int v96; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v97; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v98; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v99; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v100; // [rsp+70h] [rbp-90h]
  unsigned int v101; // [rsp+74h] [rbp-8Ch]
  __int128 *p_Buf1; // [rsp+78h] [rbp-88h] BYREF
  __int64 v103; // [rsp+80h] [rbp-80h]
  unsigned int v104; // [rsp+88h] [rbp-78h]
  __int64 v105; // [rsp+90h] [rbp-70h]
  __int64 v106; // [rsp+98h] [rbp-68h]
  __int64 v107; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int *v109; // [rsp+B0h] [rbp-50h]
  unsigned int *v110; // [rsp+B8h] [rbp-48h]
  __int64 v111; // [rsp+C0h] [rbp-40h]
  __int64 v112; // [rsp+C8h] [rbp-38h]
  __int64 v113; // [rsp+D0h] [rbp-30h]
  __int64 v114; // [rsp+D8h] [rbp-28h]
  __int64 v115; // [rsp+E0h] [rbp-20h]
  __int64 v116; // [rsp+E8h] [rbp-18h]
  unsigned int *v117; // [rsp+F0h] [rbp-10h]
  __int64 v118; // [rsp+F8h] [rbp-8h]
  __int64 v119; // [rsp+100h] [rbp+0h]
  __int64 v120; // [rsp+108h] [rbp+8h]
  __int128 Buf2; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v122[24]; // [rsp+120h] [rbp+20h]
  _BYTE v123[40]; // [rsp+138h] [rbp+38h] BYREF
  __int128 Buf1; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v125[24]; // [rsp+170h] [rbp+70h]
  __int64 v126; // [rsp+198h] [rbp+98h]
  __int128 v127; // [rsp+1A0h] [rbp+A0h]
  char v128[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v129[16]; // [rsp+1C0h] [rbp+C0h] BYREF

  v104 = a4;
  v113 = a3;
  v21 = a1;
  v111 = a1;
  v105 = a8;
  v22 = a11;
  v106 = a11;
  v120 = a11;
  v103 = a12;
  v116 = a14;
  v117 = a15;
  v109 = a16;
  v110 = a17;
  v118 = a18;
  v119 = a19;
  v114 = a20;
  v23 = 0;
  v24 = 0;
  v92 = 0;
  sub_1800367E0(&unk_18019FAE0, 0LL);
  v95 = dword_18019F770[0];
  if ( a20 )
  {
    *(_OWORD *)a20 = *(_OWORD *)a3;
    *(_OWORD *)(a20 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a20 + 32) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(a20 + 48) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(a20 + 64) = *(_QWORD *)(a3 + 64);
  }
  if ( !(unsigned __int8)sub_18006C4AC() || (unsigned int)IsSpatialAllowedOnPlatform() )
  {
    v100 = -1;
    v101 = -1;
    v26 = xmmword_180160A18;
    if ( !a7 )
      goto LABEL_5;
    if ( a7 == 3 && *(_DWORD *)a3 )
    {
      v78 = *(_QWORD *)(a3 + 12);
      if ( !v78 )
        v78 = *(_QWORD *)(a3 + 20);
      if ( v78 )
LABEL_5:
        v26 = *(_OWORD *)(a3 + 12);
    }
    v127 = v26;
    if ( v95 )
    {
      v27 = 0LL;
      v112 = 0LL;
      v25 = dword_18019F770;
      v28 = v95;
      while ( 1 )
      {
        v94[0] = 0;
        v96 = 0;
        memset(v123, 0, sizeof(v123));
        if ( v23 >= dword_18019F770[0] )
          v29 = 0LL;
        else
          v29 = *(_QWORD *)&dword_18019F770[2 * v27 + 2];
        if ( !v29 )
          goto LABEL_56;
        p_Buf1 = &Buf1;
        v126 = 0LL;
        v30 = *(__int64 (__fastcall ****)(_QWORD, __int128 *))(v22 + 56);
        if ( v30 )
          v126 = (**v30)(v30, &Buf1);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, __int128 *, int, unsigned int *, char *, _BYTE *))(*(_QWORD *)v29 + 40LL))(
               v29,
               a6,
               v105,
               a9,
               &Buf1,
               a13,
               &v96,
               v94,
               v123) )
        {
          break;
        }
LABEL_55:
        v25 = dword_18019F770;
        v28 = v95;
LABEL_56:
        ++v23;
        v27 = ++v112;
        if ( v23 >= v28 )
          goto LABEL_57;
      }
      v32 = *(_DWORD *)(v21 + 6876);
      if ( v32 == 2 )
      {
        if ( *(_WORD *)&v123[2] == 2 )
        {
          if ( (unsigned int)dword_18019C448 > 4
            && __vcrt_trace_logging_provider::_TlgKeywordOn(
                 (__vcrt_trace_logging_provider *)&dword_18019C448,
                 (const struct _TlgProvider_t *)0x10,
                 v31) )
          {
            sub_1800521E8((unsigned int)&dword_18019C448, (unsigned int)&unk_18016BDD2, 0, 0, 2, (__int64)&Buf2);
          }
          goto LABEL_55;
        }
      }
      else if ( !v32 && v105 && a6 != 9 && *(_WORD *)(v105 + 2) == 8 && *(_WORD *)&v123[2] == 2 )
      {
        *(_OWORD *)(v21 + 6880) = *(_OWORD *)v123;
        *(_OWORD *)(v21 + 6896) = *(_OWORD *)&v123[16];
        *(_QWORD *)(v21 + 6912) = *(_QWORD *)&v123[32];
        *(_DWORD *)(v21 + 6876) = 1;
      }
      v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v103);
      v115 = 834LL * v24;
      v34 = v115 + v116;
      *(_DWORD *)(v115 + v116 + 784) = v33 >= 0;
      *(_OWORD *)(v34 + 768) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v29 + 16LL))(
                                            v29,
                                            v128);
      *(_DWORD *)(v34 + 788) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29);
      *(_DWORD *)(v34 + 792) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 56LL))(v29);
      *(_DWORD *)(v34 + 796) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 72LL))(v29);
      *(_DWORD *)(v34 + 800) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 64LL))(v29);
      *(_DWORD *)(v34 + 804) = *(_DWORD *)&v123[4];
      *(_DWORD *)(v34 + 808) = *(_DWORD *)&v123[20];
      *(_OWORD *)(v34 + 812) = *(_OWORD *)&v123[24];
      *(_WORD *)(v34 + 828) = *(_WORD *)&v123[2];
      *(_WORD *)(v34 + 830) = *(_WORD *)&v123[14];
      *(_WORD *)(v34 + 832) = *(_WORD *)&v123[18];
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      v36 = 256LL;
      v37 = (_WORD *)v34;
      v38 = v35 - v34;
      v39 = v113;
      while ( v36 != -2147483390 )
      {
        v40 = *(_WORD *)((char *)v37 + v38);
        if ( !v40 )
          break;
        *v37++ = v40;
        if ( !--v36 )
        {
          --v37;
          break;
        }
      }
      *v37 = 0;
      v41 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v29 + 24LL))(v29, v103, v36, v38);
      v43 = (_WORD *)(v34 + 512);
      v44 = 128LL;
      v45 = v41 - (v34 + 512);
      v46 = (__int64 *)(v34 + 768);
      while ( 1 )
      {
        v47 = v44 + 2147483518;
        if ( v44 == -2147483518 )
          break;
        v47 = *(unsigned __int16 *)((char *)v43 + v45);
        if ( !(_WORD)v47 )
          break;
        *v43++ = v47;
        if ( !--v44 )
        {
          --v43;
          break;
        }
      }
      v48 = 0;
      *v43 = 0;
      v49 = *v46;
      if ( !*v46 )
        v49 = *(_QWORD *)(v34 + 776);
      if ( !v49 )
        goto LABEL_191;
      v50 = -1LL;
      do
        ++v50;
      while ( *(_WORD *)(v34 + 2 * v50) );
      if ( !v50 )
      {
LABEL_191:
        if ( (unsigned int)dword_18019C448 > 2
          && __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&dword_18019C448,
               (const struct _TlgProvider_t *)0x10,
               0LL) )
        {
          p_Buf1 = (__int128 *)v34;
          v108 = v34 + 768;
          v24 = v92;
          v99 = v92;
          v98 = v23;
          v107 = v103;
          sub_180124CE8(
            v88,
            (unsigned int)&unk_18016BD72,
            v89,
            v90,
            (__int64)&v107,
            (__int64)&v98,
            (__int64)&v99,
            (__int64)&v108,
            (__int64)&p_Buf1);
        }
        else
        {
          v24 = v92;
        }
        memset((void *)v34, 0, 0x342uLL);
        v22 = v106;
        v21 = v111;
        goto LABEL_55;
      }
      if ( (unsigned int)dword_18019C448 > 4
        && (byte_18019C458 & 0x10) != 0
        && (qword_18019C460 & 0x10) == qword_18019C460 )
      {
        v97 = v33;
        v107 = v34;
        v108 = v34 + 768;
        v51 = v92;
        v98 = v92;
        v99 = v23;
        p_Buf1 = (__int128 *)v103;
        sub_180124DF8(
          v47,
          (unsigned int)&unk_18016BCFD,
          0,
          v42,
          (__int64)&p_Buf1,
          (__int64)&v99,
          (__int64)&v98,
          (__int64)&v108,
          (__int64)&v107,
          (__int64)&v97);
        v48 = 0;
      }
      else
      {
        v51 = v92;
      }
      v52 = a2;
      if ( !a2 || a7 )
        goto LABEL_39;
      if ( a9 )
      {
        v60 = *a9;
        v61 = a9[8];
        if ( (_WORD)v60 == 0xFFFE )
        {
          if ( v61 != 22 )
          {
            v79 = *((_QWORD *)a9 + 3) - 0x10000000000003LL;
            if ( *((_QWORD *)a9 + 3) == 0x10000000000003LL )
              v79 = *((_QWORD *)a9 + 4) - 0x719B3800AA000080LL;
            if ( v79 )
            {
              v80 = *((_QWORD *)a9 + 3) - 0x10000000000001LL;
              if ( *((_QWORD *)a9 + 3) == 0x10000000000001LL )
                v80 = *((_QWORD *)a9 + 4) - 0x719B3800AA000080LL;
              if ( v80 )
                goto LABEL_39;
            }
          }
          Buf1 = *(_OWORD *)a9;
          *(_OWORD *)v125 = *((_OWORD *)a9 + 1);
          *(_QWORD *)&v125[16] = *((_QWORD *)a9 + 4);
          *(_WORD *)v125 = 22;
          v62 = *(_DWORD *)&v125[4];
          v63 = Buf1;
        }
        else
        {
          if ( v61 && (((_WORD)v60 - 1) & 0xFFFD) != 0 )
            goto LABEL_39;
          v81 = a9[1];
          if ( (unsigned __int16)(v81 - 1) > 1u )
            goto LABEL_39;
          v82 = a9[7];
          if ( ((v82 - 8) & 0xFFE7) != 0 )
            goto LABEL_39;
          Buf1 = *(_OWORD *)a9;
          v63 = -2;
          LOWORD(Buf1) = -2;
          *(_WORD *)v125 = 22;
          *(_WORD *)&v125[2] = v82;
          *(_OWORD *)&v125[8] = xmmword_18015B740;
          *(_DWORD *)&v125[8] = v60;
          LOBYTE(v48) = v81 == 1;
          v62 = v48 + 3;
          *(_DWORD *)&v125[4] = v62;
        }
        if ( *(_WORD *)v123 == 0xFFFE )
        {
          if ( *(_WORD *)&v123[16] != 22 )
          {
            v83 = *(_QWORD *)&v123[24] - 0x10000000000003LL;
            if ( *(_QWORD *)&v123[24] == 0x10000000000003LL )
              v83 = *(_QWORD *)&v123[32] - 0x719B3800AA000080LL;
            if ( v83 )
            {
              v84 = *(_QWORD *)&v123[24] - 0x10000000000001LL;
              if ( *(_QWORD *)&v123[24] == 0x10000000000001LL )
                v84 = *(_QWORD *)&v123[32] - 0x719B3800AA000080LL;
              if ( v84 )
                goto LABEL_39;
            }
          }
          Buf2 = *(_OWORD *)v123;
          *(_OWORD *)v122 = *(_OWORD *)&v123[16];
          *(_QWORD *)&v122[16] = *(_QWORD *)&v123[32];
          *(_WORD *)v122 = 22;
          v64 = *(_DWORD *)&v123[20];
          v65 = *(_WORD *)v123;
        }
        else
        {
          if ( *(_WORD *)&v123[16] && ((*(_WORD *)v123 - 1) & 0xFFFD) != 0 )
            goto LABEL_39;
          if ( (unsigned __int16)(*(_WORD *)&v123[2] - 1) > 1u || (v65 = -2, ((*(_WORD *)&v123[14] - 8) & 0xFFE7) != 0) )
          {
            v52 = a2;
            goto LABEL_39;
          }
          Buf2 = *(_OWORD *)v123;
          LOWORD(Buf2) = -2;
          *(_WORD *)v122 = 22;
          *(_WORD *)&v122[2] = *(_WORD *)&v123[14];
          *(_OWORD *)&v122[8] = xmmword_18015B740;
          *(_DWORD *)&v122[8] = *(unsigned __int16 *)v123;
          v64 = (*(_WORD *)&v123[2] == 1) + 3;
          *(_DWORD *)&v122[4] = v64;
          v52 = a2;
        }
        if ( WORD1(Buf1) )
        {
          v66 = WORD1(Buf2);
        }
        else
        {
          v66 = 0;
          WORD1(Buf2) = 0;
          DWORD2(Buf2) = 0;
          WORD6(Buf2) = 0;
        }
        if ( DWORD1(Buf1) )
        {
          v67 = DWORD1(Buf2);
        }
        else
        {
          v67 = 0;
          *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
        }
        if ( HIWORD(Buf1) )
        {
          v68 = HIWORD(Buf2);
        }
        else
        {
          v68 = 0;
          HIDWORD(Buf2) = 0;
        }
        if ( !v62 )
        {
          v64 = 0;
          *(_DWORD *)&v122[4] = 0;
        }
        if ( !v63 )
        {
          v65 = 0;
          LOWORD(Buf2) = 0;
        }
        if ( !v66 )
        {
          WORD1(Buf1) = 0;
          DWORD2(Buf1) = 0;
          WORD6(Buf1) = 0;
        }
        if ( !v67 )
          *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
        if ( !v68 )
          HIDWORD(Buf1) = 0;
        if ( !v64 )
          *(_DWORD *)&v125[4] = 0;
        if ( !v65 )
          LOWORD(Buf1) = 0;
        v69 = *(_QWORD *)&v125[8] - *(_QWORD *)&v122[8];
        if ( *(_QWORD *)&v125[8] == *(_QWORD *)&v122[8] )
          v69 = *(_QWORD *)&v125[16] - *(_QWORD *)&v122[16];
        if ( v69 || memcmp(&Buf1, &Buf2, 0x28uLL) )
          goto LABEL_39;
      }
      if ( *(_DWORD *)(v34 + 784) )
      {
        v70 = *v46 - *(_QWORD *)(v39 + 12);
        if ( *v46 == *(_QWORD *)(v39 + 12) )
          v70 = *(_QWORD *)(v34 + 776) - *(_QWORD *)(v39 + 20);
        if ( v70 && v104 > v51 && v114 && !*(_DWORD *)(v115 + a5 + 784) )
        {
          v71 = *(_QWORD *)(v115 + a5 + 768) - *v46;
          if ( !v71 )
            v71 = *(_QWORD *)(v115 + a5 + 776) - *(_QWORD *)(v34 + 776);
          if ( !v71 )
          {
            v93 = 0;
            v97 = 0;
            v72 = 0;
            if ( dword_18019F770[0] )
            {
              while ( 1 )
              {
                v73 = &dword_18019F770[2 * v72];
                v74 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v73 + 1) + 16LL))(
                                  *((_QWORD *)v73 + 1),
                                  v129);
                v75 = *v74 - *(_QWORD *)(v39 + 12);
                if ( *v74 == *(_QWORD *)(v39 + 12) )
                  v75 = v74[1] - *(_QWORD *)(v39 + 20);
                if ( !v75 )
                  break;
                if ( (unsigned int)++v72 >= dword_18019F770[0] )
                {
                  v51 = v92;
                  goto LABEL_110;
                }
              }
              v76 = *((_QWORD *)v73 + 1);
              v51 = v92;
            }
            else
            {
LABEL_110:
              v76 = 0LL;
            }
            if ( v76 )
            {
              v85 = sub_18005B754(&Buf1, v106);
              v86 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, __int64, int, unsigned int *, char *, _BYTE *))(*(_QWORD *)v76 + 40LL))(
                      v76,
                      a6,
                      v105,
                      a9,
                      v85,
                      a13,
                      &v97,
                      &v93,
                      v123);
              v53 = v96;
              if ( v86 && (!v93 || v96 < v97) )
              {
                v87 = v114;
                *(_OWORD *)(v114 + 28) = *(_OWORD *)(v39 + 12);
                if ( *v109 != -1 )
                  *v110 = *v109;
                *(_OWORD *)(v87 + 12) = *(_OWORD *)(v115 + a5 + 768);
              }
            }
            else
            {
              v53 = v96;
            }
            v52 = a2;
LABEL_40:
            v54 = *v46 - v127;
            if ( *v46 == (_QWORD)v127 )
              v54 = *(_QWORD *)(v34 + 776) - *((_QWORD *)&v127 + 1);
            if ( !v54 )
              *v117 = v51;
            if ( v52 )
            {
              v55 = *v46 - *(_QWORD *)(v39 + 12);
              if ( *v46 == *(_QWORD *)(v39 + 12) )
                v55 = *(_QWORD *)(v34 + 776) - *(_QWORD *)(v39 + 20);
              if ( !v55 )
                *v109 = v51;
              v56 = *v46 - *(_QWORD *)(v39 + 28);
              if ( *v46 == *(_QWORD *)(v39 + 28) )
                v56 = *(_QWORD *)(v34 + 776) - *(_QWORD *)(v39 + 36);
              v57 = v92;
              if ( !v56 )
                *v110 = v92;
            }
            else
            {
              v57 = v92;
            }
            if ( !*(_DWORD *)(v34 + 784) || !v53 )
              goto LABEL_54;
            if ( v94[0] && (a10 || !*(_DWORD *)(v34 + 788)) )
            {
              if ( v53 >= v100 )
                goto LABEL_54;
              v100 = v53;
              v77 = (_DWORD *)v118;
            }
            else
            {
              if ( v53 >= v101 )
              {
LABEL_54:
                v24 = v57 + 1;
                v92 = v24;
                v22 = v106;
                v21 = v111;
                goto LABEL_55;
              }
              v101 = v53;
              v77 = (_DWORD *)v119;
            }
            *v77 = v57;
            goto LABEL_54;
          }
        }
      }
LABEL_39:
      v53 = v96;
      goto LABEL_40;
    }
  }
LABEL_57:
  if ( !*(_DWORD *)(v21 + 6876) )
    *(_DWORD *)(v21 + 6876) = 3;
  v58 = *(_QWORD *)(v22 + 56);
  if ( v58 )
  {
    if ( v58 == v22 )
      v25 = 0LL;
    else
      LOBYTE(v25) = 1;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v58 + 32LL))(v58, v25);
    *(_QWORD *)(v22 + 56) = 0LL;
  }
  return v24;
}
