void __fastcall SepExamineSaclEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        int *a8,
        _DWORD *a9,
        __int64 a10,
        char a11,
        _BYTE *a12,
        _BYTE *a13)
{
  _DWORD *v13; // r12
  __int64 v14; // r10
  _BYTE *v16; // r9
  __int64 v17; // r11
  _BYTE *v19; // r8
  int *v20; // r15
  char v21; // r13
  _WORD *v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  char *v25; // r14
  char v26; // bp
  char v27; // al
  int v28; // ecx
  int v29; // edi
  bool v30; // zf
  unsigned int j; // ebx
  int v32; // r15d
  __int64 v33; // rbx
  __int64 v34; // rdi
  char *v35; // rbx
  _DWORD *v36; // rdi
  int v37; // ecx
  unsigned int v38; // ebx
  char v39; // al
  int *v40; // rdi
  int v41; // eax
  _WORD *v42; // rbx
  unsigned int v43; // edi
  _QWORD *v44; // rax
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // ecx
  unsigned int i; // ebx
  int v52; // ecx
  unsigned int Size; // [rsp+60h] [rbp-78h]
  char Size_4; // [rsp+64h] [rbp-74h]
  int v55; // [rsp+68h] [rbp-70h] BYREF
  int v56; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v57; // [rsp+70h] [rbp-68h]
  _DWORD *v58; // [rsp+78h] [rbp-60h] BYREF
  char *v59; // [rsp+80h] [rbp-58h]
  unsigned int v60; // [rsp+E0h] [rbp+8h]

  v56 = -1;
  v13 = 0LL;
  v14 = a3;
  v58 = 0LL;
  v16 = a13;
  v17 = a2;
  Size = 0;
  v19 = a12;
  *a12 = 0;
  *a13 = 0;
  if ( a1 )
  {
    v57 = *(unsigned __int16 *)(a1 + 4);
    if ( v57 )
    {
      v20 = a8;
      v21 = 0;
      Size_4 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v21 = 0x80;
        if ( *a8 >= 0 )
          v21 = 64;
        Size_4 = v21;
      }
      v22 = **(_WORD ***)(v14 + 152);
      if ( *v22 == *(_WORD *)SeAnonymousLogonSid )
      {
        v23 = memcmp(v22, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v19 = a12;
        v16 = a13;
        v14 = a3;
        v17 = a2;
        if ( !v23 )
          Size = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
      }
      v24 = 0;
      v25 = (char *)(a1 + 8);
      v60 = 0;
      v59 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v19 || *v16) && a6 <= 1 )
        {
LABEL_80:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v26 = v25[1];
        if ( (v26 & 8) != 0 )
          goto LABEL_79;
        v55 = -1;
        v27 = *v25;
        if ( *v25 == 2 )
          break;
        if ( v27 == 7 )
        {
          v32 = *((_DWORD *)v25 + 1);
          LOBYTE(v16) = 1;
          v33 = *((_DWORD *)v25 + 2) & 1;
          v34 = -(__int64)((_DWORD)v33 != 0);
          v35 = &v25[16 * v33 + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)];
          v36 = (_DWORD *)((unsigned __int64)(v25 + 12) & v34);
          if ( v36 )
          {
            if ( (unsigned __int8)SepSidInToken(v14, a10, (__int64)v35, (__int64)v16, 0, a11)
              || Size && *(_WORD *)SeWorldSid == *(_WORD *)v35 && !memcmp(SeWorldSid, v35, Size) )
            {
              v39 = AuthzBasepObjectInTypeList(v36, a5, a6, &v55);
              v40 = a8;
              if ( !v39 )
                goto LABEL_73;
              v41 = v55;
              goto LABEL_74;
            }
            goto LABEL_76;
          }
          if ( !(unsigned __int8)SepSidInToken(v14, a10, (__int64)v35, (__int64)v16, 0, a11)
            && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)v35 || memcmp(SeWorldSid, v35, Size)) )
          {
            goto LABEL_76;
          }
          v38 = 0;
          if ( !a6 )
            goto LABEL_76;
          do
          {
            LOBYTE(v37) = v26;
            SepSetAuditInfoForObjectType(
              v37,
              v32,
              a4,
              a5,
              a6,
              a7,
              v38++,
              (__int64)a8,
              (__int64)a9,
              (__int64)a12,
              (__int64)a13);
          }
          while ( v38 < a6 );
LABEL_33:
          v25 = v59;
          v13 = v58;
          v21 = Size_4;
          goto LABEL_76;
        }
        if ( v27 == 13 )
        {
          v32 = *((_DWORD *)v25 + 1);
          v42 = v25 + 8;
          v43 = 4 * (unsigned __int8)v25[9] + 8;
          if ( v17 && !v13 )
          {
            AuthzBasepInitializeResourceClaimsFromSacl(v17, (__int64 *)&v58);
            v19 = a12;
            v24 = v60;
            v13 = v58;
          }
          if ( (int)(*((unsigned __int16 *)v25 + 1) - v43 - 8) <= 0 )
            goto LABEL_78;
          v44 = *(_QWORD **)(a3 + 1096);
          if ( v44 )
          {
            v45 = v44[72];
            v46 = v44[74];
            v47 = v44[73];
            v48 = v44[75];
          }
          else
          {
            v45 = 0LL;
            v46 = 0LL;
            v47 = 0LL;
            v48 = 0LL;
          }
          AuthzBasepEvaluateAceCondition(
            a3,
            *(void **)(a3 + 776),
            (__int64)v13,
            v45,
            v46,
            v47,
            v48,
            (_WORD *)((char *)v42 + v43),
            *((unsigned __int16 *)v25 + 1) - v43 - 8,
            1,
            0,
            &v56);
          if ( v56 != 1 )
            goto LABEL_76;
          LOBYTE(v49) = 1;
          if ( !(unsigned __int8)SepSidInToken(a3, a10, (__int64)(v25 + 8), v49, 0, a11)
            && (!Size || *(_WORD *)SeWorldSid != *v42 || memcmp(SeWorldSid, v25 + 8, Size)) )
          {
            goto LABEL_76;
          }
          v40 = a8;
          if ( a6 )
          {
            for ( i = 0; i < a6; ++i )
            {
              LOBYTE(v50) = v26;
              SepSetAuditInfoForObjectType(
                v50,
                v32,
                a4,
                a5,
                a6,
                a7,
                i,
                (__int64)a8,
                (__int64)a9,
                (__int64)a12,
                (__int64)a13);
            }
            v25 = v59;
            v13 = v58;
            v21 = Size_4;
LABEL_73:
            v41 = -1;
LABEL_74:
            if ( v41 != -1 )
            {
              v52 = (int)a9;
              LOBYTE(v52) = v26;
              SepSetAuditInfoForObjectType(
                v52,
                v32,
                a4,
                a5,
                a6,
                a7,
                v41,
                (__int64)v40,
                (__int64)a9,
                (__int64)a12,
                (__int64)a13);
            }
LABEL_76:
            v19 = a12;
LABEL_77:
            v24 = v60;
LABEL_78:
            v16 = a13;
            goto LABEL_79;
          }
          if ( *a8 >= 0 )
          {
            if ( (v26 & 0x40) == 0 || (v32 & *a9) == 0 && v21 != 64 )
              goto LABEL_76;
            goto LABEL_67;
          }
          if ( v26 >= 0 )
            goto LABEL_76;
          v30 = (v32 & a4) == 0;
LABEL_28:
          if ( v30 && v21 != (char)0x80 )
            goto LABEL_76;
          v16 = a13;
          v19 = a12;
          v24 = v60;
          *a13 = 1;
        }
LABEL_79:
        ++v24;
        v20 = a8;
        v25 += *((unsigned __int16 *)v25 + 1);
        v14 = a3;
        v17 = a2;
        v60 = v24;
        v59 = v25;
        if ( v24 >= v57 )
          goto LABEL_80;
      }
      LOBYTE(v16) = 1;
      if ( !(unsigned __int8)SepSidInToken(v14, a10, (__int64)(v25 + 8), (__int64)v16, 0, a11)
        && (!Size || *(_WORD *)SeWorldSid != *((_WORD *)v25 + 4) || memcmp(SeWorldSid, v25 + 8, Size)) )
      {
        goto LABEL_76;
      }
      v29 = *((_DWORD *)v25 + 1);
      if ( a6 )
      {
        for ( j = 0; j < a6; ++j )
        {
          LOBYTE(v28) = v26;
          SepSetAuditInfoForObjectType(
            v28,
            v29,
            a4,
            a5,
            a6,
            a7,
            j,
            (__int64)v20,
            (__int64)a9,
            (__int64)a12,
            (__int64)a13);
        }
        goto LABEL_33;
      }
      if ( *v20 >= 0 )
      {
        if ( (v26 & 0x40) == 0 || (v29 & *a9) == 0 && v21 != 64 )
          goto LABEL_76;
LABEL_67:
        v19 = a12;
        *a12 = 1;
        goto LABEL_77;
      }
      if ( v26 >= 0 )
        goto LABEL_76;
      v30 = (v29 & a4) == 0;
      goto LABEL_28;
    }
  }
}
