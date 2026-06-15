/*
 * XREFs of sub_180021130 @ 0x180021130
 * Callers:
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 * Callees:
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233E0 @ 0x1800233E0 (sub_1800233E0.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_180032210 @ 0x180032210 (sub_180032210.c)
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052550 @ 0x180052550 (sub_180052550.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 *     sub_1800DA818 @ 0x1800DA818 (sub_1800DA818.c)
 *     sub_1800DAE04 @ 0x1800DAE04 (sub_1800DAE04.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 *     sub_18011BB84 @ 0x18011BB84 (sub_18011BB84.c)
 *     sub_18011D9D4 @ 0x18011D9D4 (sub_18011D9D4.c)
 *     sub_18011E18C @ 0x18011E18C (sub_18011E18C.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_180021130(_QWORD *a1, int a2, int a3, __int128 *a4, int a5, _BYTE *a6)
{
  __int128 *v6; // r14
  unsigned __int64 v7; // rdi
  int v8; // r15d
  _QWORD *v9; // r13
  _BYTE *v10; // rsi
  BOOL v11; // ebx
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  volatile signed __int32 **v15; // rdi
  volatile signed __int32 *v16; // rbx
  int v17; // esi
  int v18; // r12d
  __int64 v19; // r15
  _QWORD *v20; // rdx
  __int64 v21; // rax
  volatile signed __int32 **v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  volatile signed __int32 **v25; // r15
  struct _RTL_CRITICAL_SECTION *v26; // rcx
  _QWORD *v27; // r13
  __int64 v28; // rdi
  struct _RTL_CRITICAL_SECTION *v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // r15
  unsigned int v32; // r12d
  unsigned int v33; // r12d
  __int64 v34; // r13
  volatile signed __int32 **v35; // rbx
  volatile signed __int32 *v36; // rdi
  int v37; // esi
  int v38; // edx
  __int64 v39; // r15
  _QWORD *v40; // r8
  __int64 v41; // rax
  volatile signed __int32 **v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rsi
  volatile signed __int32 **v45; // r15
  __int64 v46; // rax
  int v47; // edx
  int v48; // r8d
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v52; // r9
  __int64 v53; // rdx
  _QWORD *v54; // rax
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // rdx
  _QWORD *v59; // rax
  int v60; // eax
  __int64 v61; // rdi
  __int64 v62; // r9
  __int64 v63; // rdx
  _QWORD *v64; // rax
  int v65; // eax
  int v66; // eax
  unsigned int v67; // ebx
  int v68; // eax
  __int64 v69; // r9
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rbx
  int v75; // eax
  unsigned int v76; // eax
  int v77; // ebx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  char v83; // [rsp+30h] [rbp-D0h] BYREF
  char v84; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v85; // [rsp+34h] [rbp-CCh] BYREF
  int v86; // [rsp+38h] [rbp-C8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C0h]
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 **v89; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v90; // [rsp+58h] [rbp-A8h]
  volatile signed __int32 **v91; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+68h] [rbp-98h]
  __int64 v93; // [rsp+70h] [rbp-90h] BYREF
  __int64 v94; // [rsp+78h] [rbp-88h] BYREF
  __int64 v95; // [rsp+80h] [rbp-80h]
  __int128 v96; // [rsp+88h] [rbp-78h] BYREF
  __int64 v97; // [rsp+98h] [rbp-68h]
  int v98; // [rsp+A0h] [rbp-60h]
  int v99; // [rsp+A4h] [rbp-5Ch]
  _QWORD *v100; // [rsp+A8h] [rbp-58h]
  _QWORD *v101; // [rsp+B0h] [rbp-50h]
  LPCRITICAL_SECTION v102; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v103; // [rsp+C0h] [rbp-40h]
  __int128 *v104; // [rsp+C8h] [rbp-38h]
  PROPVARIANT pvar[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v106; // [rsp+E0h] [rbp-20h]
  __int128 v107; // [rsp+F0h] [rbp-10h]
  _QWORD v108[8]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v109; // [rsp+140h] [rbp+40h] BYREF
  __int128 v110; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v111[24]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v112[24]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v113[24]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v114[24]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v115[80]; // [rsp+1C0h] [rbp+C0h] BYREF
  void *retaddr; // [rsp+218h] [rbp+118h]

  v6 = a4;
  v104 = a4;
  v7 = a3;
  v98 = a3;
  v8 = a2;
  v99 = a2;
  v9 = a1;
  v101 = a1;
  v10 = a6;
  v103 = (__int64)a6;
  v86 = 0;
  v107 = *a4;
  if ( a3 )
    goto LABEL_7;
  v11 = 1;
  v12 = a1[10];
  if ( !v12 )
    goto LABEL_7;
  *(_OWORD *)pvar = 0LL;
  v106 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
         v12,
         &xmmword_18015B7F8,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v11 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( v11 )
  {
LABEL_7:
    v13 = v7;
    if ( v7 >= v9[207] )
    {
      v82 = sub_180118A38(v115, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      v86 = 1;
      sub_180118968(v82);
    }
    v14 = v9[208] + 96 * v7;
    if ( *(_BYTE *)(v14 + 52) )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)(v14 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 56));
      v108[4] = v14 + 56;
      v15 = 0LL;
      v89 = 0LL;
      v16 = 0LL;
      v90 = 0LL;
      v17 = 0;
      v18 = 0;
      if ( *(int *)(v14 + 40) > 0 )
      {
        v19 = 0LL;
        do
        {
          if ( v19 < 0 || v18 >= *(_DWORD *)(v14 + 40) )
          {
            sub_1800BB2C8(3221225612LL);
            __debugbreak();
          }
          v20 = (_QWORD *)(v19 + *(_QWORD *)(v14 + 32));
          v100 = v20;
          if ( (_DWORD)v16 == v17 )
          {
            if ( v17 )
            {
              v17 = 2 * (_DWORD)v16;
              if ( ((unsigned int)v16 & 0x40000000) != 0 )
                goto LABEL_90;
            }
            else
            {
              v17 = 1;
            }
            if ( (unsigned __int64)v17 > 0x7FFFFFF
              || (v21 = o__recalloc(v15, v17, 16LL), (v15 = (volatile signed __int32 **)v21) == 0LL) )
            {
LABEL_90:
              v52 = 2147942414LL;
              v53 = 502LL;
              goto LABEL_92;
            }
            HIDWORD(v90) = v17;
            v89 = (volatile signed __int32 **)v21;
            v20 = v100;
          }
          v22 = &v15[2 * (int)v16];
          if ( v22 )
          {
            *v22 = 0LL;
            v22[1] = 0LL;
            v23 = v20[1];
            if ( v23 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
              v17 = HIDWORD(v90);
              LODWORD(v16) = v90;
              v15 = v89;
            }
            *v22 = (volatile signed __int32 *)*v20;
            v22[1] = (volatile signed __int32 *)v20[1];
          }
          v16 = (volatile signed __int32 *)(unsigned int)((_DWORD)v16 + 1);
          LODWORD(v90) = (_DWORD)v16;
          ++v18;
          v19 += 16LL;
        }
        while ( v18 < *(_DWORD *)(v14 + 40) );
      }
      v24 = 0LL;
      if ( (int)v16 <= 0 )
      {
LABEL_29:
        if ( v15 )
        {
          if ( (int)v16 > 0 )
          {
            ++v15;
            v24 = (unsigned int)v16;
            do
            {
              v16 = *v15;
              if ( *v15 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
              {
LABEL_98:
                (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v16);
              }
              v15 += 2;
              --v24;
            }
            while ( v24 );
            v15 = v89;
          }
          _o_free(v15);
        }
        v26 = lpCriticalSection;
        if ( lpCriticalSection )
LABEL_38:
          LeaveCriticalSection(v26);
      }
      else
      {
        v25 = v15;
        while ( 1 )
        {
          if ( (int)v24 < 0 )
          {
            sub_1800BB2C8(3221225612LL);
            goto LABEL_98;
          }
          if ( *((_BYTE *)*v25 + 20) )
          {
            v54 = (_QWORD *)sub_180023320(&v89, (unsigned int)v24);
            v55 = sub_180052550(*v54, v14);
            if ( v55 < 0 )
              break;
          }
          v24 = (unsigned int)(v24 + 1);
          v25 += 2;
          if ( (int)v24 >= (int)v16 )
            goto LABEL_29;
        }
        v52 = (unsigned int)v55;
        v53 = 508LL;
LABEL_92:
        sub_18004BD84(retaddr, v53, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v52);
        sub_180032210(&v89);
        v26 = lpCriticalSection;
        if ( lpCriticalSection )
          goto LABEL_38;
      }
    }
    v27 = v101;
    if ( v13 >= v101[209] )
    {
      v81 = sub_180118A38(v114, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      v86 = 2;
      sub_180118968(v81);
    }
    v28 = v101[210] + 96 * v13;
    if ( !*(_BYTE *)(v28 + 52) )
      goto LABEL_46;
    v29 = (struct _RTL_CRITICAL_SECTION *)(v28 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v28 + 56));
    v108[5] = v28 + 56;
    v30 = 0LL;
    v94 = 0LL;
    v31 = 0LL;
    v95 = 0LL;
    v32 = 0;
    if ( *(int *)(v28 + 40) > 0 )
    {
      while ( 1 )
      {
        v56 = sub_180023320(v28 + 32, v32);
        if ( !(unsigned int)sub_1800233E0(&v94, v56) )
          break;
        if ( (signed int)++v32 >= *(_DWORD *)(v28 + 40) )
        {
          v31 = (unsigned int)v95;
          v30 = v94;
          goto LABEL_42;
        }
      }
      v57 = 2147942414LL;
      v58 = 502LL;
    }
    else
    {
LABEL_42:
      v33 = 0;
      if ( (int)v31 <= 0 )
      {
LABEL_43:
        if ( v30 )
        {
          if ( (int)v31 > 0 )
          {
            v61 = v30;
            do
            {
              sub_1800322B0(v61);
              v61 += 16LL;
              --v31;
            }
            while ( v31 );
          }
          _o_free(v30);
        }
        if ( v29 )
          goto LABEL_45;
        goto LABEL_46;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)sub_180023320(&v94, v33) + 20LL) )
        {
          v59 = (_QWORD *)sub_180023320(&v94, v33);
          v60 = sub_180052550(*v59, v28);
          if ( v60 < 0 )
            break;
        }
        if ( (int)++v33 >= (int)v31 )
          goto LABEL_43;
      }
      v57 = (unsigned int)v60;
      v58 = 508LL;
    }
    sub_18004BD84(retaddr, v58, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v57);
    sub_180032210(&v94);
    if ( v28 != -56 )
LABEL_45:
      LeaveCriticalSection(v29);
LABEL_46:
    if ( v13 >= v27[211] )
    {
      v80 = sub_180118A38(v113, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      v86 = 4;
      sub_180118968(v80);
    }
    v34 = v27[212] + 96 * v13;
    if ( *(_BYTE *)(v34 + 52) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v34 + 56));
      v108[6] = v34 + 56;
      v35 = 0LL;
      v91 = 0LL;
      v36 = 0LL;
      v92 = 0LL;
      v37 = 0;
      v38 = 0;
      LODWORD(lpCriticalSection) = 0;
      if ( *(int *)(v34 + 40) > 0 )
      {
        v39 = 0LL;
        do
        {
          if ( v39 < 0 || v38 >= *(_DWORD *)(v34 + 40) )
          {
            sub_1800BB2C8(3221225612LL);
            __debugbreak();
          }
          v40 = (_QWORD *)(v39 + *(_QWORD *)(v34 + 32));
          v100 = v40;
          if ( (_DWORD)v36 == v37 )
          {
            if ( v37 )
            {
              v37 = 2 * (_DWORD)v36;
              if ( ((unsigned int)v36 & 0x40000000) != 0 )
                goto LABEL_115;
            }
            else
            {
              v37 = 1;
            }
            if ( (unsigned __int64)v37 > 0x7FFFFFF
              || (v41 = o__recalloc(v35, v37, 16LL), (v35 = (volatile signed __int32 **)v41) == 0LL) )
            {
LABEL_115:
              v62 = 2147942414LL;
              v63 = 502LL;
              goto LABEL_117;
            }
            HIDWORD(v92) = v37;
            v91 = (volatile signed __int32 **)v41;
            v38 = (int)lpCriticalSection;
            v40 = v100;
          }
          v42 = &v35[2 * (int)v36];
          if ( v42 )
          {
            *v42 = 0LL;
            v42[1] = 0LL;
            v43 = v40[1];
            if ( v43 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
              v37 = HIDWORD(v92);
              LODWORD(v36) = v92;
              v35 = v91;
            }
            *v42 = (volatile signed __int32 *)*v40;
            v42[1] = (volatile signed __int32 *)v40[1];
          }
          v36 = (volatile signed __int32 *)(unsigned int)((_DWORD)v36 + 1);
          LODWORD(v92) = (_DWORD)v36;
          LODWORD(lpCriticalSection) = ++v38;
          v39 += 16LL;
        }
        while ( v38 < *(_DWORD *)(v34 + 40) );
      }
      v44 = 0LL;
      if ( (int)v36 <= 0 )
      {
LABEL_68:
        if ( v35 )
        {
          if ( (int)v36 > 0 )
          {
            ++v35;
            v44 = (unsigned int)v36;
            do
            {
              v36 = *v35;
              if ( *v35 && _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
              {
LABEL_123:
                (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v36);
              }
              v35 += 2;
              --v44;
            }
            while ( v44 );
            v35 = v91;
          }
          _o_free(v35);
        }
        if ( v34 == -56 )
          goto LABEL_78;
      }
      else
      {
        v45 = v35;
        while ( 1 )
        {
          if ( (int)v44 < 0 )
          {
            sub_1800BB2C8(3221225612LL);
            goto LABEL_123;
          }
          if ( *((_BYTE *)*v45 + 20) )
          {
            v64 = (_QWORD *)sub_180023320(&v91, (unsigned int)v44);
            v65 = sub_180052550(*v64, v34);
            if ( v65 < 0 )
              break;
          }
          v44 = (unsigned int)(v44 + 1);
          v45 += 2;
          if ( (int)v44 >= (int)v36 )
            goto LABEL_68;
        }
        v62 = (unsigned int)v65;
        v63 = 508LL;
LABEL_117:
        sub_18004BD84(retaddr, v63, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v62);
        sub_180032210(&v91);
        if ( v34 == -56 )
          goto LABEL_78;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v34 + 56));
    }
LABEL_78:
    v9 = v101;
    if ( v13 >= v101[19] )
    {
      v79 = sub_180118A38(v112, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      v86 = 8;
      sub_180118968(v79);
    }
    v46 = 16 * v13 + v101[20];
    LODWORD(v7) = v98;
    v10 = (_BYTE *)v103;
    v6 = v104;
    v8 = v99;
    goto LABEL_80;
  }
  v46 = (__int64)(v9 + 21);
LABEL_80:
  v47 = 0;
  v48 = *(_DWORD *)(v46 + 8);
  if ( v48 <= 0 )
    goto LABEL_86;
  v49 = *(_QWORD *)v46;
  while ( 1 )
  {
    v50 = *(_QWORD *)(v49 + 16LL * v47) - v107;
    if ( !v50 )
      v50 = *(_QWORD *)(v49 + 16LL * v47 + 8) - *((_QWORD *)&v107 + 1);
    if ( !v50 )
      break;
    if ( ++v47 >= v48 )
      goto LABEL_86;
  }
  if ( v47 == -1 )
  {
LABEL_86:
    *v10 = 0;
    return 0LL;
  }
  *v10 = 1;
  if ( !a5 || !(unsigned __int8)sub_18011E18C(v9, (unsigned int)v7) )
    return 0LL;
  pv = 0LL;
  sub_18002A504(&pv, 0LL);
  v66 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)v9[2] + 40LL))(v9[2], &pv);
  v67 = v66;
  if ( v66 >= 0 )
  {
    v93 = 0LL;
    v68 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *))(*(_QWORD *)qword_18019EE50 + 24LL))(
            qword_18019EE50,
            pv,
            &v93);
    v67 = v68;
    if ( v68 < 0 )
    {
      v69 = (unsigned int)v68;
      v70 = 707LL;
LABEL_156:
      sub_18004BD84(retaddr, v70, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v69);
LABEL_157:
      if ( v93 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
      goto LABEL_159;
    }
    v83 = 0;
    v84 = 0;
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v93 + 112LL))(v93, &v102);
    v96 = 0LL;
    v97 = 0LL;
    v71 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v93 + 80LL))(v93, &v96);
    v67 = v71;
    if ( v71 < 0 )
    {
      sub_18004BD84(retaddr, 714LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v71);
      v72 = v96;
      if ( (_QWORD)v96 )
      {
        sub_1800CD58C(v96);
        sub_1800472E0(v72, 8 * ((v97 - v72) >> 3));
        v96 = 0LL;
        v97 = 0LL;
      }
      if ( v102 )
        LeaveCriticalSection(v102);
      goto LABEL_157;
    }
    v108[0] = &v83;
    v108[1] = v6;
    v108[2] = &v84;
    sub_1800DA818(v111, v96, *((_QWORD *)&v96 + 1), v108);
    v74 = v96;
    if ( (_QWORD)v96 )
    {
      sub_1800CD58C(v96);
      sub_1800472E0(v74, 8 * ((v97 - v74) >> 3));
      v96 = 0LL;
      v97 = 0LL;
    }
    if ( v102 )
      LeaveCriticalSection(v102);
    if ( !v84 )
    {
      v75 = sub_18011BB84(v9, v73, &v85);
      v67 = v75;
      if ( v75 < 0 )
      {
        v69 = (unsigned int)v75;
        v70 = 727LL;
        goto LABEL_156;
      }
      v109 = *v6;
      if ( (unsigned __int8)sub_18011D9D4(v9, (unsigned int)v7, &v109) )
      {
        v76 = v85;
        if ( v83 )
          v76 = ++v85;
        if ( v76 <= 1
          || (v110 = *v6,
              v77 = (int)pv,
              v78 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 56LL))(v9),
              !(unsigned int)sub_1800DAE04(v77, v78, (unsigned int)&v110, v7, v8, 0)) )
        {
          *v10 = 0;
        }
      }
      else if ( !v83 && v85 <= 1 )
      {
        v67 = -2004287478;
        v69 = 2290679818LL;
        v70 = 754LL;
        goto LABEL_156;
      }
    }
    if ( v93 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
    if ( pv )
      CoTaskMemFree(pv);
    return 0LL;
  }
  sub_18004BD84(retaddr, 703LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v66);
LABEL_159:
  if ( pv )
    CoTaskMemFree(pv);
  return v67;
}
