/*
 * XREFs of ObGetObjectInformation @ 0x140978914
 * Callers:
 *     ExpGetObjectInformation @ 0x1409F3854 (ExpGetObjectInformation.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x140206AE0 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x140300B7C (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     ObpCreateTypeArray @ 0x140978F7C (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x140979084 (ObpDestroyTypeArray.c)
 *     ObQueryTypeName @ 0x14097937C (ObQueryTypeName.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObGetObjectInformation(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // r15
  __int64 Pool2; // rax
  unsigned __int16 *v6; // r12
  unsigned int v8; // r14d
  unsigned int v9; // esi
  unsigned int *TypeArray; // rbx
  unsigned int v11; // edx
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  unsigned int *v14; // r13
  __int64 v15; // r11
  char v16; // dl
  unsigned int i; // eax
  __int64 v18; // rdi
  __int64 v19; // r10
  __int64 v20; // rcx
  _DWORD *v21; // r8
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned int v25; // r8d
  int *v26; // rax
  int v27; // ecx
  int v28; // edx
  __int64 *v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // rax
  int v34; // edi
  unsigned __int16 *v35; // rcx
  int v36; // eax
  unsigned int v37; // eax
  unsigned __int16 *v38; // rbx
  unsigned __int64 v39; // rbx
  unsigned __int16 *v40; // rbx
  __int16 v41; // ax
  __int16 v42; // di
  unsigned int v43; // [rsp+30h] [rbp-B8h] BYREF
  int v44; // [rsp+34h] [rbp-B4h]
  char v45; // [rsp+38h] [rbp-B0h]
  unsigned int v46; // [rsp+3Ch] [rbp-ACh]
  unsigned __int16 *v47; // [rsp+40h] [rbp-A8h]
  int v48; // [rsp+48h] [rbp-A0h]
  unsigned int v49; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v50; // [rsp+50h] [rbp-98h]
  __int64 v51; // [rsp+58h] [rbp-90h]
  unsigned int *v52; // [rsp+60h] [rbp-88h]
  unsigned __int16 *v53; // [rsp+68h] [rbp-80h]
  _DWORD *v54; // [rsp+70h] [rbp-78h]
  __int64 v55; // [rsp+78h] [rbp-70h]
  unsigned int *v56; // [rsp+80h] [rbp-68h]
  char *v57; // [rsp+88h] [rbp-60h]
  __int64 v58; // [rsp+90h] [rbp-58h]
  __int64 v59; // [rsp+98h] [rbp-50h]
  unsigned __int16 *v60; // [rsp+A0h] [rbp-48h]

  v43 = 0;
  v4 = 0LL;
  v52 = 0LL;
  v55 = 536LL;
  Pool2 = ExAllocatePool2(256LL, 536LL, 1916887631LL);
  v6 = (unsigned __int16 *)Pool2;
  v53 = (unsigned __int16 *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v47 = (unsigned __int16 *)Pool2;
  v8 = 0;
  v9 = 0;
  v51 = 0LL;
  TypeArray = (unsigned int *)ObpCreateTypeArray(ObpTypeObjectType);
  v56 = TypeArray;
  if ( !TypeArray )
  {
    ExFreePoolWithTag(v6, 0x7241624Fu);
    return 3221225473LL;
  }
  v11 = 0;
LABEL_6:
  v49 = v11;
  if ( v11 < *TypeArray )
  {
    v12 = *(_QWORD *)&TypeArray[2 * v11 + 2];
    if ( !v12 )
      goto LABEL_22;
    v13 = (_DWORD *)(v12 + 80);
    v54 = v13;
    if ( v13 == ObpTypeObjectType )
      goto LABEL_22;
    v14 = (unsigned int *)ObpCreateTypeArray(v13);
    v52 = v14;
    LODWORD(v15) = 0;
    if ( !v14 )
      goto LABEL_21;
    v16 = 1;
    v45 = 1;
    for ( i = 0; ; ++i )
    {
      v50 = i;
      if ( i >= *v14 )
      {
LABEL_20:
        ObpDestroyTypeArray(v14);
        v52 = 0LL;
        TypeArray = v56;
LABEL_21:
        v11 = v49;
LABEL_22:
        ++v11;
        goto LABEL_6;
      }
      v18 = *(_QWORD *)&v14[2 * i + 2];
      if ( v18 )
        break;
LABEL_71:
      ;
    }
    v19 = v18 + 80;
    v57 = (char *)(v18 + 80);
    if ( v16 )
    {
      v45 = v15;
      if ( v51 && v9 < a3 )
        *(_DWORD *)v51 = v9;
      v20 = a2 + v9;
      v51 = v20;
      v58 = v20;
      v9 += 48;
      v46 = v9;
      if ( v9 < 0x30 )
        goto LABEL_18;
      if ( v9 >= a3 )
        goto LABEL_24;
      *(_DWORD *)v20 = v15;
      v21 = v54;
      *(_DWORD *)(v20 + 4) = v54[11];
      *(_DWORD *)(v20 + 8) = v21[12];
      *(_DWORD *)(v20 + 12) = *((unsigned __int8 *)v21 + 40);
      *(_DWORD *)(v20 + 16) = v21[18];
      *(_OWORD *)(v20 + 20) = *(_OWORD *)(v21 + 19);
      *(_DWORD *)(v20 + 36) = v21[23];
      *(_DWORD *)(v20 + 40) = v21[25];
      *(_BYTE *)(v20 + 44) = (*((_BYTE *)v21 + 66) & 8) != 0;
      v43 = v15;
      v22 = ObQueryTypeName(v18 + 80, v20 + 48, a3 - v9, &v43);
      v48 = v22;
      v23 = (v43 + 7) & 0xFFFFFFF8;
      v43 = v23;
      LODWORD(v15) = 0;
      if ( v22 < 0 )
      {
        v8 = v22;
        v44 = v22;
      }
      else
      {
        v24 = v51;
        *(_WORD *)(v51 + 50) = v23 - 16;
        *(_QWORD *)(v24 + 56) += a1 - a2;
        v23 = v43;
      }
      v9 += v23;
      v46 = v9;
      if ( v9 < v23 )
      {
LABEL_18:
        v8 = -1073741675;
LABEL_19:
        v44 = v8;
        goto LABEL_20;
      }
      v19 = v18 + 80;
      v25 = a3;
    }
    else
    {
      v25 = a3;
      if ( v9 < a3 )
        *(_DWORD *)v4 = v9;
    }
    v4 = a2 + v9;
    v59 = v4;
    v9 += 64;
    v46 = v9;
    if ( v9 < 0x40 )
      goto LABEL_18;
    if ( v9 >= v25 )
    {
LABEL_24:
      v8 = -1073741820;
      goto LABEL_19;
    }
    *(_DWORD *)v4 = v15;
    *(_QWORD *)(v4 + 8) = v19;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(v18 + 16);
    *(_WORD *)(v4 + 24) = *(_WORD *)(v18 + 24);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v18 + 32);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v18 + 40);
    *(_WORD *)(v4 + 26) = *(unsigned __int8 *)(v18 + 59);
    *(_QWORD *)(v4 + 56) = *(_QWORD *)(v18 + 72) & 0xFFFFFFFFFFFFFFF0uLL;
    v26 = (int *)OBJECT_HEADER_TO_QUOTA_INFO(v18 + 32);
    v27 = v54[26];
    v28 = v54[27];
    if ( v26 )
    {
      v27 = *v26;
      v28 = v26[1];
    }
    *(_DWORD *)(v4 + 36) = v27;
    *(_DWORD *)(v4 + 40) = v28;
    v29 = (__int64 *)OBJECT_HEADER_TO_PROCESS_INFO(v18 + 32);
    if ( v29 )
    {
      v33 = *v29;
      if ( v33 )
        *(_QWORD *)(v4 + 48) = *(_QWORD *)(v33 + 1088);
    }
    v43 = v15;
    v34 = v15;
    v48 = v15;
    if ( *(_QWORD *)(v31 + 160) != v15 && (POBJECT_TYPE *)v31 == IoFileObjectType )
    {
      v35 = v47;
      *(_OWORD *)v47 = *(_OWORD *)(v32 + 88);
      v36 = *v35;
      if ( (_WORD)v36 && *((_QWORD *)v35 + 1) != v15 )
      {
        v37 = v36 + 2;
        v43 = v37;
        if ( v37 > 0x208 )
        {
          v43 = 520;
          *v35 = 518;
          v37 = v43;
        }
        v38 = v35 + 8;
        memmove(v35 + 8, *((const void **)v35 + 1), v37 - 2LL);
        v35 = v47;
        *((_QWORD *)v47 + 1) = v38;
        v35[1] = v43;
        LODWORD(v15) = 0;
        v38[*v35 >> 1] = 0;
        v43 += 16;
        v30 = a3;
      }
LABEL_53:
      if ( v43 )
      {
        v43 = (v43 + 7) & 0xFFFFFFF8;
        v9 += v43;
        v46 = v9;
        if ( v9 < v43 )
          goto LABEL_18;
        if ( v34 < 0 )
        {
          v9 += 16;
          v46 = v9;
          if ( v9 < 0x10 )
            goto LABEL_18;
          if ( v9 < v30 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
            v8 = v34;
            v44 = v34;
            goto LABEL_69;
          }
        }
        else
        {
          v41 = *v35;
          if ( *v35 && v9 < v30 )
          {
            v42 = v41 + 2;
            *(_WORD *)(v4 + 64) = v41;
            memmove((void *)(v4 + 80), *((const void **)v35 + 1), (unsigned __int16)(v41 + 2));
            *(_QWORD *)(v4 + 72) = a1 + v4 + 80 - a2;
            *(_WORD *)(v4 + 66) = v42;
LABEL_69:
            LODWORD(v15) = 0;
            goto LABEL_70;
          }
          if ( *v35 == (_WORD)v15 )
            goto LABEL_66;
        }
LABEL_67:
        v8 = -1073741820;
        v44 = -1073741820;
LABEL_70:
        i = v50;
        v16 = v45;
        goto LABEL_71;
      }
      v9 += 16;
      v46 = v9;
      if ( v9 < 0x10 )
        goto LABEL_18;
LABEL_66:
      if ( v9 < v30 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
        goto LABEL_69;
      }
      goto LABEL_67;
    }
    v39 = v55;
    v34 = ObQueryNameStringMode((char *)v32, (__int64)v47, v55, &v43, v15);
    v48 = v34;
    v30 = a3;
    if ( v34 == -1073741820 && v43 > v39 && v9 + v43 < a3 )
    {
      v40 = v6;
      v6 = (unsigned __int16 *)ExAllocatePool2(256LL, v43, 1916887631LL);
      v53 = v6;
      LODWORD(v15) = 0;
      if ( !v6 )
      {
        v6 = v40;
        v53 = v40;
        v34 = -1073741670;
        v48 = -1073741670;
        v30 = a3;
        goto LABEL_52;
      }
      ExFreePoolWithTag(v40, 0x7241624Fu);
      v55 = v43;
      v47 = v6;
      v60 = v6;
      v34 = ObQueryNameStringMode(v57, (__int64)v6, v43, &v43, 0);
      v48 = v34;
      v30 = a3;
    }
    LODWORD(v15) = 0;
LABEL_52:
    v35 = v47;
    goto LABEL_53;
  }
  if ( a4 )
    *a4 = v9;
  ObpDestroyTypeArray(TypeArray);
  ExFreePoolWithTag(v6, 0x7241624Fu);
  if ( !v51 )
    return (unsigned int)-1073741823;
  return v8;
}
