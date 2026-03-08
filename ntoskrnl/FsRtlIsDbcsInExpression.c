/*
 * XREFs of FsRtlIsDbcsInExpression @ 0x14093C0C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x1408A0090 (FsRtlDoesDbcsContainWildCards.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall FsRtlIsDbcsInExpression(PANSI_STRING Expression, PANSI_STRING Name)
{
  int Length; // ebx
  PANSI_STRING v3; // r15
  void *v5; // r11
  unsigned __int16 v6; // bp
  STRING v8; // xmm0
  __int64 v9; // rdi
  char *v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  int v14; // eax
  bool v15; // zf
  char *v16; // rdx
  char *v17; // r14
  int v18; // edi
  unsigned __int16 v19; // si
  __int16 v20; // bp
  char *Buffer; // r9
  __int16 v22; // dx
  __int16 v23; // ax
  char v24; // r8
  __int64 v25; // r12
  unsigned int v26; // ebx
  __int16 v27; // cx
  unsigned int v28; // r15d
  int v29; // eax
  __int16 v30; // di
  int v31; // r9d
  char *v32; // rax
  __int16 v33; // dx
  char *v34; // r9
  __int16 v35; // cx
  __int16 v36; // si
  _OWORD *Pool2; // rax
  __int128 v38; // xmm0
  _OWORD *v39; // rdx
  __int128 v40; // xmm1
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  unsigned __int16 v44; // r9
  char *v45; // r11
  __int16 v46; // dx
  __int16 v47; // ax
  __int16 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int16 v52; // di
  __int64 v53; // rax
  __int16 v54; // r15
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // r9d
  char *v58; // rax
  __int16 v59; // bx
  char v60; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v61; // [rsp+22h] [rbp-B6h]
  __int16 v62; // [rsp+24h] [rbp-B4h]
  __int16 v63; // [rsp+28h] [rbp-B0h]
  STRING Namea; // [rsp+30h] [rbp-A8h] BYREF
  int v65; // [rsp+40h] [rbp-98h]
  unsigned int v66; // [rsp+44h] [rbp-94h]
  unsigned int v67; // [rsp+48h] [rbp-90h]
  _OWORD *v68; // [rsp+50h] [rbp-88h]
  PANSI_STRING v69; // [rsp+58h] [rbp-80h]
  _WORD v70[16]; // [rsp+60h] [rbp-78h] BYREF
  char v71; // [rsp+80h] [rbp-58h] BYREF

  Length = Name->Length;
  v69 = Name;
  v3 = Name;
  v63 = 0;
  v68 = 0LL;
  v5 = 0LL;
  v60 = 0;
  if ( !(_WORD)Length )
    return Expression->Length + Length == 0;
  v6 = Expression->Length;
  if ( !Expression->Length )
    return Expression->Length + Length == 0;
  if ( v6 == 1 && *Expression->Buffer == 42 )
    return 1;
  if ( *Expression->Buffer == 42 )
  {
    v8 = *Expression;
    *(_DWORD *)(&Namea.MaximumLength + 1) = HIDWORD(*(_QWORD *)&Expression->Length);
    Namea.MaximumLength = v8.MaximumLength - 1;
    v9 = (unsigned __int16)(v8.Length - 1);
    Namea.Length = v8.Length - 1;
    v10 = (char *)(_mm_srli_si128((__m128i)v8, 8).m128i_u64[0] + 1);
    Namea.Buffer = v10;
    if ( !FsRtlDoesDbcsContainWildCards(&Namea) )
    {
      if ( (unsigned __int16)Length >= (unsigned __int16)(v6 - 1) )
      {
        v11 = Length - (unsigned int)(unsigned __int16)v9;
        if ( !(_BYTE)NlsMbOemCodePageTag )
          return memcmp(v10, &v3->Buffer[v11], (unsigned __int16)v9) == 0;
        v12 = 0;
        if ( !(_DWORD)v11 )
          return memcmp(v10, &v3->Buffer[v11], (unsigned __int16)v9) == 0;
        do
        {
          v13 = (unsigned __int8)v3->Buffer[v12];
          if ( (unsigned __int8)v13 >= 0x80u )
            v14 = (*((_WORD *)NlsOemLeadByteInfo + v13) != 0) + 1;
          else
            v14 = 1;
          v12 += v14;
        }
        while ( v12 < (unsigned int)v11 );
        if ( v12 <= (unsigned int)v11 )
          return memcmp(v10, &v3->Buffer[v11], (unsigned __int16)v9) == 0;
      }
      return 0;
    }
    v5 = 0LL;
  }
  v16 = (char *)v70;
  v70[0] = 0;
  *(_QWORD *)&Namea.Length = v70;
  v17 = &v71;
  v18 = 1;
  v67 = 1;
  v19 = 0;
  v61 = 0;
  v20 = 2 * v6;
  do
  {
    if ( v19 >= v3->Length )
    {
      v60 = 1;
      v24 = 1;
      if ( *(_WORD *)&v16[2 * (v18 - 1)] == v20 )
        break;
    }
    else
    {
      Buffer = v3->Buffer;
      v22 = Buffer[v19];
      if ( (unsigned __int8)Buffer[v19] >= 0x80u
        && (_BYTE)NlsMbOemCodePageTag
        && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v22) )
      {
        v23 = 2;
        v63 = v22 + (Buffer[v19 + 1] << 8);
      }
      else
      {
        v63 = Buffer[v19];
        v23 = 1;
      }
      v16 = *(char **)&Namea.Length;
      v19 += v23;
      v24 = v60;
      v61 = v19;
    }
    v66 = 0;
    LODWORD(v25) = 0;
    v26 = 0;
    while ( 2 )
    {
      v27 = 0;
      v28 = ((unsigned int)*(unsigned __int16 *)&v16[2 * (unsigned int)v25] + 1) >> 1;
      v25 = (unsigned int)(v25 + 1);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v29 = Expression->Length;
              if ( (_WORD)v28 == (_WORD)v29 )
                goto LABEL_79;
              LOWORD(v28) = v27 + v28;
              v30 = 2 * v28;
              if ( (_WORD)v28 == (_WORD)v29 )
              {
                v56 = v26++;
                *(_WORD *)&v17[2 * v56] = v20;
                goto LABEL_79;
              }
              v31 = Expression->Length;
              v65 = v31;
              if ( (unsigned __int16)v28 == v29 - 1 )
              {
                v32 = Expression->Buffer;
                v33 = v32[(unsigned __int16)v28];
                if ( (unsigned __int8)v32[(unsigned __int16)v28] >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v33) )
                {
                  v62 = 1;
LABEL_41:
                  v36 = v33;
                  goto LABEL_42;
                }
              }
              v34 = Expression->Buffer;
              v33 = v34[(unsigned __int16)v28];
              if ( (unsigned __int8)v34[(unsigned __int16)v28] < 0x80u
                || !(_BYTE)NlsMbOemCodePageTag
                || !*((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v33) )
              {
                v31 = v65;
                v62 = 1;
                goto LABEL_41;
              }
              v35 = v34[(unsigned __int16)v28 + 1];
              v31 = v65;
              v62 = 2;
              v36 = v33 + (v35 << 8);
LABEL_42:
              if ( v26 >= 0xE && !v5 )
              {
                Pool2 = (_OWORD *)ExAllocatePool2(290LL, 8LL * (unsigned int)(v31 + 1), 1685214022LL);
                v38 = *(_OWORD *)v17;
                v39 = *(_OWORD **)&Namea.Length;
                v5 = Pool2;
                v68 = Pool2;
                *Pool2 = v38;
                v40 = *((_OWORD *)v17 + 1);
                v17 = (char *)Pool2;
                Pool2[1] = v40;
                v41 = Expression->Length;
                *(_OWORD *)((char *)Pool2 + 4 * v41 + 4) = *v39;
                *(_OWORD *)((char *)Pool2 + 4 * v41 + 20) = v39[1];
                *(_QWORD *)&Namea.Length = (char *)Pool2 + 4 * Expression->Length + 4;
              }
              v24 = v60;
              if ( v36 != 42 )
                break;
              v27 = v62;
              v19 = v61;
              v42 = v26;
              v43 = v26 + 1;
              *(_WORD *)&v17[2 * v42] = v30;
              *(_WORD *)&v17[2 * v43] = v30 + 1;
              v26 = v43 + 1;
            }
            if ( v36 != 60 )
              break;
            v19 = v61;
            if ( v60 || v63 != 46 )
              goto LABEL_62;
            v44 = v61;
            if ( v61 >= v69->Length )
            {
LABEL_60:
              v27 = v62;
              v49 = v26++;
              *(_WORD *)&v17[2 * v49] = v30 + 1;
            }
            else
            {
              v45 = v69->Buffer;
              while ( 1 )
              {
                v46 = v45[v44];
                if ( (unsigned __int8)v45[v44] >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && (v19 = v61, *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v46)) )
                {
                  v47 = 2;
                  v48 = v46 + (v45[v44 + 1] << 8);
                }
                else
                {
                  v48 = v45[v44];
                  v47 = 1;
                }
                if ( v48 == 46 )
                  break;
                v44 += v47;
                if ( v44 >= v69->Length )
                {
                  v5 = v68;
                  v24 = 0;
                  goto LABEL_60;
                }
              }
              v5 = v68;
              v24 = 0;
LABEL_62:
              v27 = v62;
              v50 = v26;
              v51 = v26 + 1;
              *(_WORD *)&v17[2 * v50] = v30;
              *(_WORD *)&v17[2 * v51] = v30 + 1;
              v26 = v51 + 1;
            }
          }
          v27 = v62;
          v52 = 2 * v62 + v30;
          if ( v36 != 62 )
            break;
          v19 = v61;
          if ( !v60 && v63 != 46 )
            goto LABEL_66;
        }
        if ( v36 != 34 )
          break;
        if ( !v60 )
        {
          v54 = v63;
          if ( v63 == 46 )
          {
LABEL_71:
            v19 = v61;
            v55 = v26++;
            *(_WORD *)&v17[2 * v55] = v52;
            goto LABEL_79;
          }
          goto LABEL_75;
        }
        v19 = v61;
      }
      if ( v60 )
      {
        v19 = v61;
        goto LABEL_79;
      }
      if ( v36 == 63 )
        goto LABEL_71;
      v54 = v63;
LABEL_75:
      v15 = v36 == v54;
      v19 = v61;
      if ( v15 )
      {
LABEL_66:
        v53 = v26++;
        *(_WORD *)&v17[2 * v53] = v52;
      }
LABEL_79:
      v16 = *(char **)&Namea.Length;
      if ( (unsigned int)v25 < v67 )
      {
        v57 = v66;
        while ( v57 < v26 )
        {
          for ( ; (unsigned int)v25 < v67; v25 = (unsigned int)(v25 + 1) )
          {
            if ( *(_WORD *)(*(_QWORD *)&Namea.Length + 2 * v25) >= *(_WORD *)&v17[2 * v57] )
              break;
          }
          v66 = ++v57;
          if ( (unsigned int)v25 >= v67 )
            goto LABEL_86;
        }
        continue;
      }
      break;
    }
LABEL_86:
    if ( !v26 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      return 0;
    }
    v3 = v69;
    v58 = *(char **)&Namea.Length;
    v67 = v26;
    v16 = v17;
    *(_QWORD *)&Namea.Length = v17;
    v18 = v26;
    v17 = v58;
  }
  while ( !v24 );
  v59 = *(_WORD *)&v16[2 * (v18 - 1)];
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v59 == v20;
}
