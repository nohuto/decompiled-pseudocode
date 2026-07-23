/*
 * XREFs of FsRtlIsDbcsInExpression @ 0x14088C660
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memcmp @ 0x1403D22E0 (memcmp.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x14088C5F0 (FsRtlDoesDbcsContainWildCards.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall FsRtlIsDbcsInExpression(PANSI_STRING Expression, PANSI_STRING Name)
{
  int Length; // ebx
  __int64 v3; // r12
  PANSI_STRING v4; // r15
  PANSI_STRING v5; // r9
  void *v6; // r11
  unsigned __int16 v7; // bp
  _STRING v9; // xmm0
  char *v10; // rsi
  __int64 v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  char *v17; // rdx
  char *v18; // r14
  unsigned int v19; // r13d
  unsigned __int16 v20; // si
  __int16 v21; // bp
  char *Buffer; // r8
  __int16 v23; // dx
  __int16 v24; // ax
  char v25; // r8
  unsigned int v26; // ebx
  __int16 v27; // cx
  unsigned int v28; // r15d
  int v29; // eax
  __int16 v30; // di
  char *v31; // rcx
  __int16 v32; // dx
  __int16 v33; // si
  _OWORD *PoolWithTag; // rax
  _OWORD *v35; // rdx
  __int128 v36; // xmm1
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  unsigned __int16 v40; // r9
  char *v41; // r11
  __int16 v42; // r8
  __int16 v43; // ax
  __int16 v44; // dx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  __int16 v48; // di
  __int16 v49; // r15
  unsigned int v50; // r10d
  char *v51; // rax
  __int16 v52; // bx
  char v53; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v54; // [rsp+22h] [rbp-C6h]
  __int16 v55; // [rsp+24h] [rbp-C4h]
  __int16 v56; // [rsp+28h] [rbp-C0h]
  _STRING Namea; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v58; // [rsp+40h] [rbp-A8h]
  _OWORD *v59; // [rsp+48h] [rbp-A0h]
  PANSI_STRING v60; // [rsp+50h] [rbp-98h]
  int v61; // [rsp+58h] [rbp-90h]
  PANSI_STRING v62; // [rsp+60h] [rbp-88h]
  _WORD v63[16]; // [rsp+70h] [rbp-78h] BYREF
  char v64; // [rsp+90h] [rbp-58h] BYREF

  Length = Name->Length;
  LODWORD(v3) = 0;
  v62 = Name;
  v4 = Name;
  v60 = Expression;
  v5 = Expression;
  v56 = 0;
  v6 = 0LL;
  v59 = 0LL;
  v53 = 0;
  if ( !(_WORD)Length )
    return Expression->Length + Length == 0;
  v7 = Expression->Length;
  if ( !Expression->Length )
    return Expression->Length + Length == 0;
  if ( v7 == 1 && *Expression->Buffer == 42 )
    return 1;
  if ( *Expression->Buffer == 42 )
  {
    v9 = *Expression;
    *(_DWORD *)(&Namea.MaximumLength + 1) = HIDWORD(*(_QWORD *)&Expression->Length);
    Namea.MaximumLength = v9.MaximumLength - 1;
    v10 = (char *)(_mm_srli_si128((__m128i)v9, 8).m128i_u64[0] + 1);
    v11 = (unsigned __int16)(v9.Length - 1);
    Namea.Buffer = v10;
    Namea.Length = v9.Length - 1;
    if ( !FsRtlDoesDbcsContainWildCards(&Namea) )
    {
      if ( (unsigned __int16)Length >= (unsigned __int16)(v7 - 1) )
      {
        v12 = Length - (unsigned __int16)v11;
        if ( !(_BYTE)NlsMbOemCodePageTag )
          return memcmp(v10, &v4->Buffer[v12], (unsigned __int16)v11) == 0;
        v13 = 0;
        if ( !v12 )
          return memcmp(v10, &v4->Buffer[v12], (unsigned __int16)v11) == 0;
        do
        {
          v14 = (unsigned __int8)v4->Buffer[v13];
          if ( (unsigned __int8)v14 >= 0x80u )
            v15 = (NlsOemLeadByteInfoTable[v14] != 0) + 1;
          else
            v15 = 1;
          v13 += v15;
        }
        while ( v13 < v12 );
        if ( v13 <= v12 )
          return memcmp(v10, &v4->Buffer[v12], (unsigned __int16)v11) == 0;
      }
      return 0;
    }
    v5 = v60;
    v6 = 0LL;
  }
  v17 = (char *)v63;
  v63[0] = 0;
  *(_QWORD *)&Namea.Length = v63;
  v18 = &v64;
  v19 = 1;
  v54 = 0;
  v20 = 0;
  v21 = 2 * v7;
  do
  {
    if ( v20 >= v4->Length )
    {
      v53 = 1;
      v25 = 1;
      if ( *(_WORD *)&v17[2 * v19 - 2] == v21 )
        break;
    }
    else
    {
      Buffer = v4->Buffer;
      v23 = Buffer[v20];
      if ( (unsigned __int8)Buffer[v20] >= 0x80u
        && (_BYTE)NlsMbOemCodePageTag
        && NlsOemLeadByteInfoTable[(unsigned __int8)v23] )
      {
        v24 = 2;
        v56 = v23 + (Buffer[v20 + 1] << 8);
      }
      else
      {
        v56 = Buffer[v20];
        v24 = 1;
      }
      v17 = *(char **)&Namea.Length;
      v20 += v24;
      v25 = v53;
      v54 = v20;
    }
    v58 = 0;
    v26 = 0;
    do
    {
      v27 = 0;
      v28 = ((unsigned int)*(unsigned __int16 *)&v17[2 * (unsigned int)v3] + 1) >> 1;
      v3 = (unsigned int)(v3 + 1);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v29 = v5->Length;
            if ( (_WORD)v28 == (_WORD)v29 )
              goto LABEL_81;
            LOWORD(v28) = v27 + v28;
            v30 = 2 * v28;
            if ( (_WORD)v28 == (_WORD)v29 )
            {
              *(_WORD *)&v18[2 * v26] = v21;
              goto LABEL_69;
            }
            v31 = v5->Buffer;
            v61 = v5->Length;
            if ( (unsigned __int16)v28 == v29 - 1 )
            {
              v32 = v31[(unsigned __int16)v28];
              if ( (unsigned __int8)v31[(unsigned __int16)v28] >= 0x80u )
              {
                if ( (_BYTE)NlsMbOemCodePageTag )
                {
                  v6 = v59;
                  if ( NlsOemLeadByteInfoTable[(unsigned __int8)v32] )
                  {
                    v55 = 1;
LABEL_41:
                    v33 = v32;
                    goto LABEL_42;
                  }
                }
              }
            }
            v32 = v31[(unsigned __int16)v28];
            if ( (unsigned __int8)v31[(unsigned __int16)v28] < 0x80u
              || !(_BYTE)NlsMbOemCodePageTag
              || !NlsOemLeadByteInfoTable[(unsigned __int8)v32] )
            {
              v55 = 1;
              goto LABEL_41;
            }
            v55 = 2;
            v33 = v32 + (v31[(unsigned __int16)v28 + 1] << 8);
LABEL_42:
            if ( v26 >= 0xE && !v6 )
            {
              PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 8LL * (unsigned int)(v61 + 1), 0x64725346u);
              v35 = *(_OWORD **)&Namea.Length;
              v6 = PoolWithTag;
              v5 = v60;
              *PoolWithTag = *(_OWORD *)v18;
              v59 = PoolWithTag;
              v36 = *((_OWORD *)v18 + 1);
              v18 = (char *)PoolWithTag;
              PoolWithTag[1] = v36;
              v37 = v5->Length;
              *(_OWORD *)((char *)PoolWithTag + 4 * v37 + 4) = *v35;
              *(_OWORD *)((char *)PoolWithTag + 4 * v37 + 20) = v35[1];
              *(_QWORD *)&Namea.Length = (char *)PoolWithTag + 4 * v5->Length + 4;
            }
            v25 = v53;
            if ( v33 == 42 )
            {
              v27 = v55;
              v38 = v26;
              v39 = v26 + 1;
              *(_WORD *)&v18[2 * v38] = v30;
              *(_WORD *)&v18[2 * v39] = v30 + 1;
              v26 = v39 + 1;
              goto LABEL_47;
            }
            if ( v33 != 60 )
              break;
            v20 = v54;
            if ( !v53 && v56 == 46 )
            {
              v40 = v54;
              if ( v54 >= v62->Length )
              {
LABEL_61:
                v45 = v26++;
                *(_WORD *)&v18[2 * v45] = v30 + 1;
                goto LABEL_62;
              }
              v41 = v62->Buffer;
              while ( 1 )
              {
                v42 = v41[v40];
                if ( (unsigned __int8)v41[v40] >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && (v20 = v54, NlsOemLeadByteInfoTable[(unsigned __int8)v42]) )
                {
                  v43 = 2;
                  v44 = v42 + (v41[v40 + 1] << 8);
                }
                else
                {
                  v44 = v41[v40];
                  v43 = 1;
                }
                if ( v44 == 46 )
                  break;
                v40 += v43;
                if ( v40 >= v62->Length )
                {
                  v6 = v59;
                  v25 = 0;
                  goto LABEL_61;
                }
              }
              v6 = v59;
              v25 = 0;
            }
            v46 = v26;
            v47 = v26 + 1;
            *(_WORD *)&v18[2 * v46] = v30;
            *(_WORD *)&v18[2 * v47] = v30 + 1;
            v26 = v47 + 1;
LABEL_62:
            v5 = v60;
            v27 = v55;
          }
          v27 = v55;
          v48 = 2 * v55 + v30;
          if ( v33 != 62 )
            break;
          v20 = v54;
          if ( !v53 && v56 != 46 )
            goto LABEL_68;
        }
        if ( v33 != 34 )
        {
          if ( v53 )
          {
            v20 = v54;
          }
          else
          {
            if ( v33 != 63 )
            {
              v49 = v56;
              goto LABEL_77;
            }
LABEL_73:
            v20 = v54;
            *(_WORD *)&v18[2 * v26++] = v48;
          }
          goto LABEL_81;
        }
        if ( !v53 )
          break;
LABEL_47:
        v20 = v54;
      }
      v49 = v56;
      if ( v56 == 46 )
        goto LABEL_73;
LABEL_77:
      v16 = v33 == v49;
      v20 = v54;
      if ( v16 )
      {
LABEL_68:
        *(_WORD *)&v18[2 * v26] = v48;
LABEL_69:
        ++v26;
      }
LABEL_81:
      v17 = *(char **)&Namea.Length;
      if ( (unsigned int)v3 >= v19 )
        break;
      v50 = v58;
      do
      {
        if ( v50 >= v26 )
          break;
        for ( ; (unsigned int)v3 < v19; v3 = (unsigned int)(v3 + 1) )
        {
          if ( *(_WORD *)(*(_QWORD *)&Namea.Length + 2 * v3) >= *(_WORD *)&v18[2 * v50] )
            break;
        }
        ++v50;
      }
      while ( (unsigned int)v3 < v19 );
      v58 = v50;
    }
    while ( (unsigned int)v3 < v19 );
    LODWORD(v3) = 0;
    if ( !v26 )
    {
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      return 0;
    }
    v4 = v62;
    v51 = *(char **)&Namea.Length;
    v17 = v18;
    *(_QWORD *)&Namea.Length = v18;
    v19 = v26;
    v18 = v51;
  }
  while ( !v25 );
  v52 = *(_WORD *)&v17[2 * v19 - 2];
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v52 == v21;
}
