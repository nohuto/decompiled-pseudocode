__int64 __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        char a13,
        _DWORD *a14)
{
  __int64 result; // rax
  unsigned int v15; // ebx
  __int64 v16; // rbp
  int v17; // edx
  int v18; // r15d
  int v19; // edx
  char v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rcx
  _DWORD *v25; // r13
  unsigned int v26; // r12d
  char *v27; // rdi
  bool v28; // zf
  __int64 v29; // r9
  char v30; // al
  char *v31; // rbp
  __int64 v32; // r8
  char v33; // al
  __int64 v34; // rbx
  unsigned int v35; // ebx
  _QWORD *v36; // rax
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r10
  __int64 v40; // r11
  _DWORD *v41; // rbx
  char *v42; // r8
  int v43; // eax
  int v44; // r8d
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rbx
  char *v48; // r8
  __int64 v49; // rcx
  int v50; // ecx
  __int64 v51; // r9
  bool v52; // zf
  unsigned int v53; // ebx
  _QWORD *v54; // rax
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // r10
  __int64 v58; // r11
  __int64 v59; // r9
  int v60; // [rsp+20h] [rbp-88h]
  int v61; // [rsp+28h] [rbp-80h]
  int v62; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v63; // [rsp+64h] [rbp-44h]
  int v64; // [rsp+68h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  unsigned int v68; // [rsp+C8h] [rbp+20h] BYREF

  result = (__int64)&retaddr;
  v15 = *(unsigned __int16 *)(a4 + 4);
  v16 = a2;
  v17 = *(_DWORD *)(a2 + 200);
  v18 = 0;
  v68 = 0;
  v19 = v17 & 0x2000;
  v62 = 0;
  v21 = a11;
  v63 = v15;
  v22 = a9;
  v64 = v19;
  v23 = a9 + 24;
  if ( a8 )
  {
    v24 = a8;
    result = a9 + 24;
    do
    {
      *(_DWORD *)result = a1;
      result += 48LL;
      --v24;
    }
    while ( v24 );
  }
  v25 = a14;
  if ( !v19 && !v21 )
    v18 = *a14 | a1;
  v26 = 0;
  a7 = v18;
  v27 = (char *)(a4 + 8);
  v28 = v63 == 0;
  if ( v63 )
  {
    while ( 1 )
    {
      v29 = 272LL;
      if ( !*(_DWORD *)v23 && !v18 )
      {
LABEL_26:
        v28 = v26 == v63;
        break;
      }
      if ( (v27[1] & 8) == 0 && (*(_DWORD *)v23 || !*v27 || *v27 == 9) )
      {
        v30 = *v27;
        if ( !*v27 )
        {
          if ( !v19 && !v21 && v18 )
          {
            v31 = v27 + 8;
            if ( SepIsPackageSid((__int64)(v27 + 8)) )
              goto LABEL_47;
            if ( SepIsCapabilitySid((__int64)(v27 + 8)) )
            {
LABEL_51:
              v41 = v25 + 2;
              v44 = (int)v31;
              v16 = a2;
              SepMatchCapability(a2, a7, v44, *((_DWORD *)v27 + 1), (__int64)v25 + 22, (__int64)(v25 + 2));
LABEL_48:
              v43 = ~*v41;
              v18 &= v43;
              *v25 &= v43;
LABEL_46:
              v22 = a9;
              goto LABEL_23;
            }
            v16 = a2;
          }
          if ( !*(_DWORD *)v23 )
            goto LABEL_23;
          v32 = (__int64)(v27 + 8);
          goto LABEL_20;
        }
        switch ( v30 )
        {
          case 5:
            v45 = *((_DWORD *)v27 + 2);
            if ( (v45 & 1) == 0 )
              goto LABEL_59;
            if ( v27 == (char *)-12LL )
            {
              v22 = a9;
LABEL_59:
              v32 = (__int64)&v27[16 * (v45 & 1) + ((8LL * (v45 & 2)) | 0xC)];
LABEL_20:
              LOBYTE(v61) = a12;
              LOBYTE(v60) = v21;
              v33 = SepSidInTokenSidHash(v16 + (-(__int64)(v21 != 0) & 0x110) + 232, 0LL, v32, 0LL, v60, v61);
LABEL_21:
              if ( v33 )
                AuthzBasepAddAccessTypeList(v22, a8, 0, v26, *((_DWORD *)v27 + 1), 0);
              break;
            }
            if ( !a10 )
              goto LABEL_46;
            LOBYTE(v61) = a12;
            LOBYTE(v60) = v21;
            if ( !(unsigned __int8)SepSidInTokenSidHash(
                                     v16 + (-(__int64)(v21 != 0) & 0x110) + 232,
                                     0LL,
                                     &v27[16 * (v45 & 1) + ((8LL * (v45 & 2)) | 0xC)],
                                     0LL,
                                     v60,
                                     v61) )
              goto LABEL_46;
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v27 + 12, a9, a8, &v68) )
            {
              v22 = v46;
              AuthzBasepAddAccessTypeList(v46, a8, v68, v26, *((_DWORD *)v27 + 1), 0);
            }
            else
            {
              v22 = v46;
            }
            break;
          case 4:
            LOBYTE(v61) = a12;
            LOBYTE(v60) = v21;
            v47 = (-(__int64)(v21 != 0) & 0x110) + 232;
            if ( !(unsigned __int8)SepSidInTokenSidHash(
                                     v47 + v16,
                                     0LL,
                                     &v27[4 * (unsigned __int8)v27[13] + 20],
                                     0LL,
                                     v60,
                                     v61) )
              goto LABEL_46;
            v48 = v27 + 12;
            v49 = v47 + a3;
LABEL_86:
            LOBYTE(v61) = a12;
            LOBYTE(v60) = v21;
            v33 = SepSidInTokenSidHash(v49, 0LL, v48, 0LL, v60, v61);
            v22 = a9;
            goto LABEL_21;
          case 1:
            LOBYTE(v61) = a12;
            LOBYTE(v60) = v21;
            LOBYTE(v29) = 1;
            if ( (unsigned __int8)SepSidInTokenSidHash(
                                    v16 + (-(__int64)(v21 != 0) & 0x110) + 232,
                                    0LL,
                                    v27 + 8,
                                    v29,
                                    v60,
                                    v61) )
            {
              v50 = *(_DWORD *)v23 & *((_DWORD *)v27 + 1);
              if ( v50 )
              {
                v51 = *(_QWORD *)(v22 + 40);
LABEL_65:
                result = AuthzBasepSetAccessReasons(v50, 0x20000, v26, v51, 0);
                goto LABEL_26;
              }
            }
            break;
          case 6:
            LOBYTE(v61) = a12;
            LOBYTE(v60) = v21;
            LOBYTE(v29) = 1;
            if ( !(unsigned __int8)SepSidInTokenSidHash(
                                     v16 + (-(__int64)(v21 != 0) & 0x110) + 232,
                                     0LL,
                                     &v27[16 * (*((_DWORD *)v27 + 2) & 1) + ((8LL * (*((_DWORD *)v27 + 2) & 2)) | 0xC)],
                                     v29,
                                     v60,
                                     v61) )
              break;
            if ( (*((_DWORD *)v27 + 2) & 1) != 0 && v27 != (char *)-12LL && a10 )
            {
              if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v27 + 12, v22, a8, &v68) )
                break;
              result = *(unsigned int *)(v22 + 48LL * v68 + 24);
              v52 = ((unsigned int)result & *((_DWORD *)v27 + 1)) == 0;
            }
            else
            {
              result = *((unsigned int *)v27 + 1);
              v52 = ((unsigned int)result & *(_DWORD *)v23) == 0;
            }
            if ( !v52 )
              goto LABEL_26;
            break;
          case 9:
            v35 = 4 * (unsigned __int8)v27[9] + 8;
            if ( *((unsigned __int16 *)v27 + 1) - v35 == 8 )
              goto LABEL_46;
            if ( a5 && !*a6 )
              AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
            v36 = *(_QWORD **)(v16 + 1096);
            if ( v36 )
            {
              v37 = v36[72];
              v38 = v36[74];
              v39 = v36[73];
              v40 = v36[75];
            }
            else
            {
              LODWORD(v37) = 0;
              v38 = 0LL;
              v39 = 0LL;
              v40 = 0LL;
            }
            AuthzBasepEvaluateAceCondition(
              v16,
              *(_QWORD *)(v16 + 776),
              *a6,
              v37,
              v38,
              v39,
              v40,
              (__int64)&v27[v35 + 8],
              *((unsigned __int16 *)v27 + 1) - v35 - 8,
              0,
              v21,
              (__int64)&v62);
            if ( v62 != 1 )
              goto LABEL_46;
            if ( !v64 && !v21 && v18 )
            {
              v31 = v27 + 8;
              if ( SepIsPackageSid((__int64)(v27 + 8)) )
              {
LABEL_47:
                v41 = v25 + 1;
                v42 = v31;
                v16 = a2;
                SepMatchPackage(
                  a2,
                  a7,
                  v42,
                  *((unsigned int *)v27 + 1),
                  (char *)v25 + 21,
                  v25 + 1,
                  v25 + 5,
                  v25 + 4,
                  v25 + 6);
                goto LABEL_48;
              }
              if ( SepIsCapabilitySid((__int64)(v27 + 8)) )
                goto LABEL_51;
              v16 = a2;
            }
            if ( !*(_DWORD *)v23 )
              goto LABEL_46;
            v48 = v27 + 8;
            v49 = v16 + (v21 != 0 ? 504LL : 232LL);
            goto LABEL_86;
          default:
            if ( a13 && v30 == 10 && KeGetCurrentIrql() < 2u )
            {
              v53 = 4 * (unsigned __int8)v27[9] + 8;
              if ( *((unsigned __int16 *)v27 + 1) - v53 != 8 )
              {
                if ( a5 && !*a6 )
                  AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
                v54 = *(_QWORD **)(v16 + 1096);
                if ( v54 )
                {
                  v55 = v54[72];
                  v56 = v54[74];
                  v57 = v54[73];
                  v58 = v54[75];
                }
                else
                {
                  LODWORD(v55) = 0;
                  v56 = 0LL;
                  v57 = 0LL;
                  v58 = 0LL;
                }
                AuthzBasepEvaluateAceCondition(
                  v16,
                  *(_QWORD *)(v16 + 776),
                  *a6,
                  v55,
                  v56,
                  v57,
                  v58,
                  (__int64)&v27[v53 + 8],
                  *((unsigned __int16 *)v27 + 1) - v53 - 8,
                  1,
                  v21,
                  (__int64)&v62);
                if ( ((v62 + 1) & 0xFFFFFFFD) == 0 )
                {
                  LOBYTE(v59) = 1;
                  LOBYTE(v61) = a12;
                  LOBYTE(v60) = v21;
                  if ( (unsigned __int8)SepSidInTokenSidHash(
                                          v16 + (v21 != 0 ? 504LL : 232LL),
                                          0LL,
                                          v27 + 8,
                                          v59,
                                          v60,
                                          v61) )
                  {
                    v50 = *(_DWORD *)v23 & *((_DWORD *)v27 + 1);
                    if ( v50 )
                    {
                      v51 = *(_QWORD *)(a9 + 40);
                      goto LABEL_65;
                    }
                  }
                }
              }
              goto LABEL_46;
            }
            break;
        }
      }
LABEL_23:
      result = *((unsigned __int16 *)v27 + 1);
      ++v26;
      v27 += result;
      v28 = v26 == v63;
      if ( v26 >= v63 )
        break;
      v19 = v64;
    }
  }
  if ( v28 && *(_DWORD *)v23 && a8 )
  {
    v34 = a8;
    do
    {
      result = AuthzBasepSetAccessReasons(*(_DWORD *)v23, 0x800000, 0, *(_QWORD *)(v23 + 16), 0);
      v23 += 48LL;
      --v34;
    }
    while ( v34 );
  }
  return result;
}
