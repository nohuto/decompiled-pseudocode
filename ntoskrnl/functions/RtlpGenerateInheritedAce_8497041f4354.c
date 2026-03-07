__int64 __fastcall RtlpGenerateInheritedAce(
        _BYTE *a1,
        char a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int *a11,
        __int64 a12,
        unsigned int *a13,
        _BYTE *a14)
{
  unsigned int v14; // ebx
  __int64 v15; // r10
  char v16; // r13
  int v18; // r14d
  unsigned __int8 *v19; // r12
  int v20; // r11d
  unsigned int v21; // r8d
  unsigned __int8 *v22; // rsi
  unsigned __int8 *v23; // r9
  unsigned int v24; // edx
  unsigned __int64 v25; // rax
  unsigned __int16 *v26; // rcx
  char v27; // al
  unsigned int v28; // esi
  unsigned __int8 v29; // cl
  int v30; // eax
  int v31; // r9d
  int v32; // r15d
  int v33; // r13d
  __int64 v34; // rcx
  unsigned __int8 v35; // r9
  __int64 v36; // rdx
  bool v37; // zf
  char v39; // al
  unsigned __int16 *v40; // rcx
  unsigned int v41; // eax
  unsigned __int8 v42; // r8
  unsigned int v43; // r9d
  int v44; // edx
  int v45; // ecx
  int v46; // edx
  unsigned __int8 v47; // al
  char v48; // [rsp+80h] [rbp-69h] BYREF
  bool v49; // [rsp+81h] [rbp-68h]
  __int16 v50; // [rsp+82h] [rbp-67h] BYREF
  int v51; // [rsp+84h] [rbp-65h] BYREF
  __int64 v52; // [rsp+90h] [rbp-59h] BYREF
  _BYTE *v53; // [rsp+98h] [rbp-51h]
  void *Src; // [rsp+A0h] [rbp-49h]
  __int64 v55; // [rsp+A8h] [rbp-41h]
  __int64 v56; // [rsp+B0h] [rbp-39h]
  __int64 v57; // [rsp+B8h] [rbp-31h]
  __int64 v58; // [rsp+C0h] [rbp-29h]
  __int64 v59; // [rsp+C8h] [rbp-21h]
  __int64 v60; // [rsp+D0h] [rbp-19h]
  int *v61; // [rsp+D8h] [rbp-11h]
  unsigned int *v62; // [rsp+E0h] [rbp-9h]

  v14 = 0;
  v15 = (__int64)a14;
  v16 = 0;
  v59 = a5;
  v18 = 0;
  v19 = 0LL;
  v58 = a6;
  v20 = 0;
  v57 = a7;
  v56 = a8;
  v55 = a9;
  v61 = a11;
  v62 = a13;
  v60 = a4;
  v50 = a3;
  Src = a1;
  v53 = a14;
  v51 = 0;
  v48 = 0;
  *a14 = 0;
  v49 = a2 && (v39 = a1[1], (v39 & 4) == 0) && ((v39 & 1) != 0 || (v39 & 2) != 0);
  v21 = *(unsigned __int16 *)(a12 + 4);
  v22 = (unsigned __int8 *)(a12 + 8);
  v52 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v25 = a12 + 8;
  if ( v21 )
  {
    do
    {
      if ( v25 >= a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
        return 3221225597LL;
      ++v24;
      v25 += *(unsigned __int16 *)(v25 + 2);
    }
    while ( v24 < v21 );
    v15 = (__int64)v53;
  }
  if ( v25 <= a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
  {
    v23 = (unsigned __int8 *)v25;
    v52 = v25;
  }
  if ( !v23 )
    return 3221225597LL;
  v26 = (unsigned __int16 *)Src;
  v27 = *((_BYTE *)Src + 1);
  if ( a2 )
  {
    if ( (v27 & 2) == 0 )
      goto LABEL_12;
  }
  else if ( (v27 & 1) == 0 )
  {
LABEL_12:
    v28 = 0;
    goto LABEL_39;
  }
  v19 = v23;
  if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                           Src,
                           v59,
                           v58,
                           v57,
                           v56,
                           v55,
                           a10,
                           (__int64)&v52,
                           (__int64)&v51,
                           a12,
                           v15,
                           (__int64)&v50 + 1,
                           (__int64)&v48) )
    return 3221225597LL;
  v20 = v51;
  if ( v48 )
    goto LABEL_37;
  if ( !v51 )
    goto LABEL_37;
  if ( *v19 > 8u )
    goto LABEL_37;
  if ( *v19 == 4 )
    goto LABEL_37;
  v29 = v19[1];
  if ( (v29 & 0x10) == 0 )
    goto LABEL_37;
  v30 = *((_DWORD *)v19 + 1);
  v31 = 0;
  v32 = 0;
  if ( (v29 & 2) != 0 )
    v31 = *((_DWORD *)v19 + 1);
  v33 = 0;
  LODWORD(v53) = v31;
  if ( (v29 & 1) != 0 )
    v32 = v30;
  if ( (v29 & 8) == 0 )
    v33 = v30;
  if ( *(unsigned __int16 *)(a12 + 4) - 1 <= 0 )
  {
LABEL_37:
    v23 = (unsigned __int8 *)v52;
    v28 = 0;
    goto LABEL_38;
  }
  while ( 1 )
  {
    v34 = *v22;
    if ( (unsigned __int8)v34 > 8u )
      goto LABEL_35;
    if ( (_BYTE)v34 == 4 )
      goto LABEL_35;
    v35 = v22[1];
    if ( (v35 & 0x10) == 0 )
      goto LABEL_35;
    v36 = *v19;
    if ( (unsigned __int8)v34 < 5u )
      break;
    if ( (unsigned __int8)(v36 - 5) <= 3u && (unsigned __int8)RtlpCompareKnownObjectAces(v22, v19) )
      goto LABEL_59;
LABEL_35:
    ++v18;
    v22 += *((unsigned __int16 *)v22 + 1);
    if ( v18 >= *(unsigned __int16 *)(a12 + 4) - 1 )
    {
      v20 = v51;
      goto LABEL_37;
    }
  }
  if ( (unsigned __int8)(v36 - 5) <= 3u
    || *((_BYTE *)&RtlBaseAceType + v36) != *((_BYTE *)&RtlBaseAceType + v34)
    || *((_BYTE *)RtlIsSystemAceType + v36) && ((v19[1] ^ v35) & 0xC0) != 0
    || !RtlEqualSid(v19 + 8, v22 + 8) )
  {
    goto LABEL_35;
  }
LABEL_59:
  v42 = v22[1];
  v43 = (unsigned int)v53;
  v44 = ~*((_DWORD *)v22 + 1);
  if ( (v42 & 2) != 0 )
  {
    v43 = v44 & (unsigned int)v53;
    LODWORD(v53) = v44 & (unsigned int)v53;
  }
  v45 = v32 & v44;
  if ( (v42 & 1) == 0 )
    v45 = v32;
  v46 = v33 & v44;
  v32 = v45;
  if ( (v42 & 8) != 0 )
    v46 = v33;
  v33 = v46;
  if ( v43 | v45 | v46 )
    goto LABEL_35;
  v28 = v51;
  --*(_WORD *)(a12 + 4);
  v23 = v19;
  v52 = (__int64)v19;
  v20 = 0;
  v51 = 0;
LABEL_38:
  v16 = HIBYTE(v50);
  v18 = v20;
  v26 = (unsigned __int16 *)Src;
LABEL_39:
  if ( v49 )
  {
    if ( v20 && !v16 )
    {
      if ( !v48 )
      {
        v47 = v19[1] | *((_BYTE *)v26 + 1) & 3;
        v19[1] = v47;
        if ( (_BYTE)v50 )
          v19[1] = v47 | 0x10;
      }
      goto LABEL_40;
    }
    if ( *(_BYTE *)v26 <= 8u && !*((_DWORD *)v26 + 1) )
      goto LABEL_40;
    v18 += v26[1];
    if ( (unsigned int)v18 <= 0xFFFF )
    {
      if ( v26[1] > a12 + *(unsigned __int16 *)(a12 + 2) - (_QWORD)v23 )
      {
        v48 = 1;
      }
      else if ( !v48 )
      {
        memmove(v23, v26, v26[1]);
        *(_BYTE *)(v52 + 1) |= 8u;
        ++*(_WORD *)(a12 + 4);
        if ( (_BYTE)v50 )
        {
          *(_BYTE *)(v52 + 1) |= 0x10u;
          if ( RtlpIsDuplicateAce(a12, (unsigned __int8 *)v52) )
          {
            v40 = (unsigned __int16 *)Src;
            --*(_WORD *)(a12 + 4);
            v41 = v40[1];
            if ( v28 <= v41 )
              v28 = v40[1];
            v18 -= v41;
          }
        }
      }
      goto LABEL_40;
    }
    return 3221225597LL;
  }
LABEL_40:
  v37 = v48 == 0;
  *v61 = v18;
  *v62 = v28;
  if ( !v37 )
    return (unsigned int)-1073741789;
  return v14;
}
