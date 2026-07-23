/*
 * XREFs of RtlpCopyAces @ 0x1406521F0
 * Callers:
 *     RtlpInheritAcl2 @ 0x140651D50 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x1409141B8 (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x14035CF60 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlpCopyEffectiveAce @ 0x140652700 (RtlpCopyEffectiveAce.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        GENERIC_MAPPING *a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        unsigned int *a13,
        PACL Acl)
{
  char v14; // r10
  int v15; // esi
  GENERIC_MAPPING *GenericMapping; // r11
  __int64 v17; // r15
  unsigned __int8 v18; // al
  PACL v19; // rcx
  unsigned int v20; // r8d
  int *i; // rbx
  _BYTE *v22; // rdi
  unsigned int v23; // r12d
  unsigned int v24; // r13d
  int v25; // eax
  signed __int64 v26; // rsi
  int v27; // ecx
  GENERIC_MAPPING *v28; // rdx
  int v29; // ecx
  unsigned int v30; // eax
  int v31; // r8d
  int GenericAll; // eax
  int v34; // ecx
  char v35; // al
  void *v36; // r9
  bool v37; // r15
  char v38; // r8
  int v39; // edx
  char v40; // [rsp+80h] [rbp-71h]
  _WORD v42[7]; // [rsp+82h] [rbp-6Fh] BYREF
  void *v43; // [rsp+90h] [rbp-61h] BYREF
  GENERIC_MAPPING *v44; // [rsp+98h] [rbp-59h]
  int v45; // [rsp+A0h] [rbp-51h]
  __int64 v46; // [rsp+A8h] [rbp-49h]
  __int64 v47; // [rsp+B0h] [rbp-41h]
  __int64 v48; // [rsp+B8h] [rbp-39h]
  __int64 v49; // [rsp+C0h] [rbp-31h]
  unsigned int *v50; // [rsp+C8h] [rbp-29h]
  int v51; // [rsp+D0h] [rbp-21h]
  unsigned __int16 v52; // [rsp+D4h] [rbp-1Dh]

  v14 = 0;
  v15 = a3;
  v49 = a6;
  GenericMapping = a2;
  v17 = a1;
  v48 = a7;
  v47 = a8;
  v46 = a9;
  v50 = a13;
  v18 = Acl->AclRevision - 2;
  v45 = a3;
  v44 = a2;
  *(_QWORD *)&v42[3] = a1;
  v40 = 0;
  if ( v18 > 2u )
    return 3221225560LL;
  v19 = Acl + 1;
  v20 = 0;
  for ( i = 0LL; v20 < Acl->AceCount; v19 = (PACL)((char *)v19 + v19->AclSize) )
  {
    if ( v19 >= (PACL)((char *)Acl + Acl->AclSize) )
      return 3221225597LL;
    ++v20;
  }
  if ( v19 <= (PACL)((char *)Acl + Acl->AclSize) )
    i = (int *)v19;
  v22 = (_BYTE *)(v17 + 8);
  v23 = 0;
  v24 = 0;
  if ( !*(_WORD *)(v17 + 4) )
  {
LABEL_37:
    *v50 = v23;
    return v14 != 0 ? 0xC0000023 : 0;
  }
  v25 = a12;
  while ( *v22 != 17 )
  {
    if ( v25 == 3 )
      goto LABEL_34;
LABEL_9:
    switch ( v15 )
    {
      case 0:
        if ( (v22[1] & 0x10) == 0 )
          break;
LABEL_12:
        if ( !a5 )
        {
          v26 = *((unsigned __int16 *)v22 + 1);
          if ( !i || v26 > (__int64)Acl + Acl->AclSize - (_QWORD)i )
          {
            v14 = 1;
            v40 = 1;
            i = (int *)((char *)Acl + Acl->AclSize);
            goto LABEL_33;
          }
          if ( !v14 )
          {
            memmove(i, v22, *((unsigned __int16 *)v22 + 1));
            if ( (*(_BYTE *)i < 0xBu || (unsigned __int8)(*(_BYTE *)i - 13) <= 1u) && (*((_BYTE *)i + 1) & 8) == 0 )
            {
              v27 = i[1];
              v28 = v44;
              if ( v27 < 0 )
              {
                v27 |= v44->GenericRead;
                i[1] = v27;
              }
              if ( (v27 & 0x40000000) != 0 )
              {
                v27 |= v28->GenericWrite;
                i[1] = v27;
              }
              if ( (v27 & 0x20000000) != 0 )
              {
                v27 |= v28->GenericExecute;
                i[1] = v27;
              }
              if ( (v27 & 0x10000000) != 0 )
                v27 |= v28->GenericAll;
              v29 = v27 & 0xFFFFFFF;
              i[1] = v29;
              v30 = *(unsigned __int8 *)i;
              if ( (unsigned __int8)v30 <= 0xAu && (v31 = 1651, _bittest(&v31, v30)) )
                GenericAll = v28->GenericAll;
              else
                GenericAll = v28->GenericAll | 0x1000000;
              i[1] = v29 & GenericAll;
            }
            *((_BYTE *)i + 1) &= ~a4;
            goto LABEL_31;
          }
LABEL_61:
          i = (int *)((char *)Acl + Acl->AclSize);
          goto LABEL_33;
        }
        v34 = 0;
        v35 = v22[1];
        v36 = i;
        *(_DWORD *)&v42[1] = 0;
        LODWORD(v26) = 0;
        HIBYTE(v42[0]) = 0;
        v43 = i;
        v37 = a10 && (v35 & 3) != 0;
        if ( (v35 & 8) == 0 )
        {
          LOBYTE(v42[0]) = 0;
          if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                                   v22,
                                   v48,
                                   v47,
                                   v46,
                                   GenericMapping,
                                   0LL,
                                   0,
                                   (__int64)&v43,
                                   (__int64)&v42[1],
                                   (__int64)Acl,
                                   0LL,
                                   (__int64)v42 + 1,
                                   (__int64)v42) )
            return 3221225597LL;
          if ( LOBYTE(v42[0]) )
          {
            v14 = 1;
            v40 = 1;
          }
          else
          {
            v14 = v40;
          }
          v34 = *(_DWORD *)&v42[1];
          LODWORD(v26) = *(_DWORD *)&v42[1];
          if ( !v14 && *(_DWORD *)&v42[1] )
          {
            v38 = a4;
            *((_BYTE *)i + 1) &= ~a4;
            v36 = v43;
            v34 = *(_DWORD *)&v42[1];
LABEL_47:
            if ( !v37 )
              goto LABEL_48;
            v39 = *(_DWORD *)(v22 + 10);
            v51 = 0;
            v52 = 768;
            if ( !v39 )
              v39 = *((unsigned __int16 *)v22 + 7) - v52;
            if ( v34 && !HIBYTE(v42[0]) )
            {
              v17 = *(_QWORD *)&v42[3];
              if ( !v14 )
              {
                *((_BYTE *)i + 1) = ~v38 & (*((_BYTE *)i + 1) | v22[1] & 0x1F);
                goto LABEL_32;
              }
              goto LABEL_61;
            }
            if ( *v22 > 8u || *((_DWORD *)v22 + 1) || !v39 )
            {
              LODWORD(v26) = *((unsigned __int16 *)v22 + 1) + (_DWORD)v26;
              if ( (unsigned int)v26 > 0xFFFF )
                return 3221225597LL;
              if ( *((unsigned __int16 *)v22 + 1) > (__int64)Acl + Acl->AclSize - (_QWORD)v36 )
              {
                v14 = 1;
                v40 = 1;
              }
              else if ( !v14 )
              {
                memmove(v36, v22, *((unsigned __int16 *)v22 + 1));
                v17 = *(_QWORD *)&v42[3];
                *((_BYTE *)v43 + 1) |= 8u;
                *((_BYTE *)v43 + 1) &= ~a4;
LABEL_31:
                v14 = v40;
                ++Acl->AceCount;
LABEL_32:
                i = (int *)((char *)i + (unsigned int)v26);
LABEL_33:
                v23 += v26;
                v15 = v45;
                break;
              }
            }
            else
            {
LABEL_48:
              if ( !v14 )
              {
                v17 = *(_QWORD *)&v42[3];
                goto LABEL_32;
              }
            }
            v17 = *(_QWORD *)&v42[3];
            goto LABEL_61;
          }
          v36 = v43;
        }
        v38 = a4;
        goto LABEL_47;
      case 1:
        if ( (v22[1] & 0x10) != 0 )
          break;
        goto LABEL_12;
      case 2:
        goto LABEL_12;
    }
LABEL_34:
    GenericMapping = v44;
    v22 += *((unsigned __int16 *)v22 + 1);
    ++v24;
    v25 = a12;
    if ( v24 >= *(unsigned __int16 *)(v17 + 4) )
      goto LABEL_35;
  }
  if ( v25 != 3 )
    goto LABEL_34;
  if ( !RtlFindAceByType(Acl, 0x11u, 0LL) )
  {
    v14 = v40;
    GenericMapping = v44;
    goto LABEL_9;
  }
LABEL_35:
  if ( v23 <= 0xFFFF )
  {
    v14 = v40;
    goto LABEL_37;
  }
  return 3221225597LL;
}
