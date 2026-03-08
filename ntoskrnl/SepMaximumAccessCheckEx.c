/*
 * XREFs of SepMaximumAccessCheckEx @ 0x1403C8AF0
 * Callers:
 *     SepAccessCheckEx @ 0x140206B24 (SepAccessCheckEx.c)
 * Callees:
 *     AuthzBasepAddAccessTypeList @ 0x140206EC4 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepSetAccessReasons @ 0x140207750 (AuthzBasepSetAccessReasons.c)
 *     SepIsPackageSid @ 0x140208A9C (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140208AF4 (SepIsCapabilitySid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x14024717C (SepMatchPackage.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepMatchCapability @ 0x1402E8F24 (SepMatchCapability.c)
 *     SepSidInTokenSidHash @ 0x14033DEA0 (SepSidInTokenSidHash.c)
 *     AuthzBasepObjectInTypeList @ 0x14066CAA0 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned int a11,
        char a12,
        char a13,
        __int64 a14)
{
  int v15; // ecx
  int v17; // ecx
  char v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 result; // rax
  unsigned int v22; // r15d
  char *v23; // rdi
  __int64 v24; // r12
  char v25; // al
  char v26; // al
  unsigned int v27; // r8d
  __int64 v28; // rbx
  __int64 v29; // r15
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r15
  _DWORD *v33; // rbx
  int v34; // eax
  unsigned __int8 *v35; // r8
  char v36; // bl
  __int64 v37; // r9
  int v38; // ecx
  unsigned int v39; // ebx
  _QWORD *v40; // rax
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r10
  __int64 v44; // r11
  unsigned int v45; // ebx
  _QWORD *v46; // rax
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // r10
  __int64 v50; // r11
  _DWORD *v51; // rcx
  int v52; // edx
  __int64 v53; // r8
  int v54; // [rsp+28h] [rbp-90h]
  unsigned int v55; // [rsp+60h] [rbp-58h]
  unsigned int v56; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v57; // [rsp+C8h] [rbp+10h]
  int v58; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v59; // [rsp+D8h] [rbp+20h]

  v59 = a4;
  v57 = a2;
  v56 = 0;
  v15 = *(_DWORD *)(a1 + 200);
  v58 = 0;
  v17 = v15 & 0x2000;
  v18 = a11;
  v19 = a8;
  v20 = a7;
  a6 = v17;
  if ( (_BYTE)a11 && a7 )
  {
    v28 = a8 + 28;
    v29 = a7;
    do
    {
      AuthzBasepSetAccessReasons(*(_DWORD *)v28, 0x800000, 0, *(_QWORD *)(v28 + 12), 1);
      v30 = *(_DWORD *)v28;
      *(_DWORD *)v28 &= v31;
      *(_DWORD *)(v28 - 4) = v30;
      v28 += 48LL;
      --v29;
    }
    while ( v29 );
    v17 = a6;
    a4 = v59;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v22 = 0;
  v23 = (char *)(a3 + 8);
  v55 = result;
  a11 = 0;
  if ( (_DWORD)result )
  {
    v24 = a14;
    do
    {
      if ( (v23[1] & 8) != 0 )
        goto LABEL_12;
      v25 = *v23;
      if ( *v23 )
      {
        if ( v25 == 5 )
        {
          v34 = *((_DWORD *)v23 + 2);
          if ( (v34 & 1) != 0 && v23 != (char *)-12LL )
          {
            if ( !a9
              || !SepSidInTokenSidHash(
                    (_DWORD *)(a1 + (v18 != 0 ? 504LL : 232LL)),
                    0LL,
                    (unsigned __int8 *)&v23[16 * (v34 & 1) + ((8LL * (v34 & 2)) | 0xC)],
                    0,
                    v18,
                    a12)
              || !(unsigned __int8)AuthzBasepObjectInTypeList(v23 + 12, v19, (unsigned int)v20, &v56) )
            {
              goto LABEL_12;
            }
            v54 = 1;
            goto LABEL_33;
          }
          v35 = (unsigned __int8 *)&v23[16 * (v34 & 1) + ((8LL * (v34 & 2)) | 0xC)];
LABEL_36:
          v26 = SepSidInTokenSidHash((_DWORD *)(a1 + (v18 != 0 ? 504LL : 232LL)), 0LL, v35, 0, v18, a12);
          goto LABEL_8;
        }
        if ( v25 != 4 )
        {
          if ( v25 == 1 )
            goto LABEL_74;
          if ( v25 == 6 )
          {
            if ( !SepSidInTokenSidHash(
                    (_DWORD *)(a1 + (v18 != 0 ? 504LL : 232LL)),
                    0LL,
                    (unsigned __int8 *)&v23[16 * (*((_DWORD *)v23 + 2) & 1) + ((8LL * (*((_DWORD *)v23 + 2) & 2)) | 0xC)],
                    1,
                    v18,
                    a12) )
              goto LABEL_12;
            if ( (*((_DWORD *)v23 + 2) & 1) != 0 && v23 != (char *)-12LL )
            {
              if ( !a9 )
              {
                v37 = *(_QWORD *)(v19 + 40);
                v38 = *((_DWORD *)v23 + 1) & ~*(_DWORD *)(v19 + 28);
                *(_DWORD *)(v19 + 32) |= v38;
                AuthzBasepSetAccessReasons(v38, 0x20000, v22, v37, 0);
                goto LABEL_12;
              }
              if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v23 + 12, v19, (unsigned int)v20, &v56) )
                goto LABEL_12;
              v54 = 2;
LABEL_33:
              v27 = v56;
LABEL_11:
              AuthzBasepAddAccessTypeList(v19, (unsigned int)v20, v27, v22, *((_DWORD *)v23 + 1), v54);
              goto LABEL_12;
            }
LABEL_75:
            v54 = 2;
LABEL_10:
            v27 = 0;
            goto LABEL_11;
          }
          if ( v25 != 9 )
          {
            if ( !a13 )
              goto LABEL_12;
            if ( v25 != 10 )
              goto LABEL_12;
            if ( KeGetCurrentIrql() >= 2u )
              goto LABEL_12;
            v45 = 4 * (unsigned __int8)v23[9] + 8;
            if ( *((unsigned __int16 *)v23 + 1) - v45 == 8 )
              goto LABEL_12;
            if ( a4 && !*a5 )
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
            v46 = *(_QWORD **)(a1 + 1096);
            if ( v46 )
            {
              v47 = v46[72];
              v48 = v46[74];
              v49 = v46[73];
              v50 = v46[75];
            }
            else
            {
              v47 = 0LL;
              v48 = 0LL;
              v49 = 0LL;
              v50 = 0LL;
            }
            AuthzBasepEvaluateAceCondition(
              a1,
              *(void **)(a1 + 776),
              *a5,
              v47,
              v48,
              v49,
              v50,
              &v23[v45 + 8],
              *((unsigned __int16 *)v23 + 1) - v45 - 8,
              1,
              v18,
              &v58);
            if ( ((v58 + 1) & 0xFFFFFFFD) != 0 )
              goto LABEL_12;
LABEL_74:
            if ( !SepSidInTokenSidHash(
                    (_DWORD *)(a1 + (v18 != 0 ? 504LL : 232LL)),
                    0LL,
                    (unsigned __int8 *)v23 + 8,
                    1,
                    v18,
                    a12) )
              goto LABEL_12;
            goto LABEL_75;
          }
          v39 = 4 * (unsigned __int8)v23[9] + 8;
          if ( *((unsigned __int16 *)v23 + 1) - v39 == 8 )
            goto LABEL_12;
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v40 = *(_QWORD **)(a1 + 1096);
          if ( v40 )
          {
            v41 = v40[72];
            v42 = v40[74];
            v43 = v40[73];
            v44 = v40[75];
          }
          else
          {
            v41 = 0LL;
            v42 = 0LL;
            v43 = 0LL;
            v44 = 0LL;
          }
          AuthzBasepEvaluateAceCondition(
            a1,
            *(void **)(a1 + 776),
            *a5,
            v41,
            v42,
            v43,
            v44,
            &v23[v39 + 8],
            *((unsigned __int16 *)v23 + 1) - v39 - 8,
            0,
            v18,
            &v58);
          if ( v58 != 1 )
            goto LABEL_12;
          if ( !a6 && !v18 )
          {
            v32 = (__int64)(v23 + 8);
            if ( SepIsPackageSid((__int64)(v23 + 8)) )
            {
LABEL_23:
              v33 = (_DWORD *)(v24 + 4);
              SepMatchPackage(
                a1,
                -1,
                v32,
                *((_DWORD *)v23 + 1),
                (_BYTE *)(v24 + 21),
                (_DWORD *)(v24 + 4),
                (_BYTE *)(v24 + 20),
                (_DWORD *)(v24 + 16),
                (_BYTE *)(v24 + 24));
LABEL_25:
              v22 = a11;
              *(_DWORD *)v24 &= ~*v33;
              goto LABEL_12;
            }
            if ( SepIsCapabilitySid((__int64)(v23 + 8)) )
              goto LABEL_24;
            v22 = a11;
          }
          v35 = (unsigned __int8 *)(v23 + 8);
          goto LABEL_36;
        }
        v36 = a12;
        if ( !SepSidInTokenSidHash(
                (_DWORD *)(a1 + (v18 != 0 ? 504LL : 232LL)),
                0LL,
                (unsigned __int8 *)&v23[4 * (unsigned __int8)v23[13] + 20],
                0,
                v18,
                a12) )
          goto LABEL_12;
        v26 = SepSidInTokenSidHash((_DWORD *)(v57 + 232), 0LL, (unsigned __int8 *)v23 + 12, 0, 0, v36);
      }
      else
      {
        if ( !v17 && !v18 )
        {
          v32 = (__int64)(v23 + 8);
          if ( SepIsPackageSid((__int64)(v23 + 8)) )
            goto LABEL_23;
          if ( SepIsCapabilitySid((__int64)(v23 + 8)) )
          {
LABEL_24:
            v33 = (_DWORD *)(v24 + 8);
            SepMatchCapability(a1, -1, v32, *((_DWORD *)v23 + 1), (_BYTE *)(v24 + 22), (_DWORD *)(v24 + 8));
            goto LABEL_25;
          }
          v22 = a11;
        }
        v26 = SepSidInTokenSidHash(
                (_DWORD *)(a1 + (v18 != 0 ? 504LL : 232LL)),
                0LL,
                (unsigned __int8 *)v23 + 8,
                0,
                v18,
                a12);
      }
LABEL_8:
      if ( v26 )
      {
        v54 = 1;
        goto LABEL_10;
      }
LABEL_12:
      result = *((unsigned __int16 *)v23 + 1);
      ++v22;
      v17 = a6;
      v23 += result;
      a4 = v59;
      a11 = v22;
    }
    while ( v22 < v55 );
  }
  if ( v18 && (_DWORD)v20 )
  {
    v51 = (_DWORD *)(v19 + 28);
    v52 = ~a10;
    v53 = v20;
    do
    {
      result = *(v51 - 1) & (*v51 | (unsigned int)v52);
      *v51 = result;
      v51 += 12;
      --v53;
    }
    while ( v53 );
  }
  return result;
}
