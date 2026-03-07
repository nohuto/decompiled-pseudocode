__int64 __fastcall RtlpInheritAcl2(
        char *a1,
        unsigned __int8 *a2,
        __int16 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6,
        char *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        unsigned int *a15,
        unsigned __int16 *a16,
        _BYTE *a17,
        int *a18)
{
  unsigned int v18; // ebp
  unsigned int v19; // ebx
  int v20; // r14d
  char v22; // r8
  int v23; // r12d
  char v24; // r11
  unsigned int v26; // esi
  _BYTE *v27; // r10
  int v28; // ecx
  int v29; // edx
  char v30; // r9
  char v31; // al
  __int64 result; // rax
  char v33; // r12
  int v34; // ecx
  char v35; // r15
  __int64 v36; // rax
  unsigned int v37; // ecx
  int v38; // eax
  char v39; // [rsp+80h] [rbp-58h] BYREF
  char v40; // [rsp+81h] [rbp-57h]
  unsigned __int16 v41; // [rsp+82h] [rbp-56h]
  unsigned int v42; // [rsp+84h] [rbp-54h]
  int v43; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v44; // [rsp+8Ch] [rbp-4Ch] BYREF
  __int64 v45; // [rsp+90h] [rbp-48h] BYREF
  void *Src; // [rsp+98h] [rbp-40h] BYREF
  char v48; // [rsp+F0h] [rbp+18h]

  v18 = 0;
  v44 = 0;
  v19 = 0;
  v43 = 0;
  v20 = 0;
  v41 = 0;
  Src = 0LL;
  v45 = 0LL;
  v22 = 0;
  v39 = 0;
  v23 = 2;
  v24 = a4;
  v48 = 0;
  v40 = 1;
  v42 = 2;
  v26 = *a15;
  if ( *a15 - 8 <= 0xFFF4 )
  {
    memset(a16, 0, v26);
    v24 = a4;
    *a16 = 2;
    a16[1] = v26 & 0xFFFC;
    *((_DWORD *)a16 + 1) = 0;
    v22 = 0;
  }
  v27 = a17;
  v28 = a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  v29 = a3 & 8;
  *a18 = v28;
  if ( (a3 & 8) != 0 )
    goto LABEL_42;
  if ( (a3 & 0x1000) != 0 )
  {
    v22 = 1;
    v48 = 1;
    *a18 = v28 | 0x1000;
  }
  if ( (a3 & 0x1004) == 0 )
  {
    v29 = a3 & 8;
LABEL_42:
    v33 = 0;
    goto LABEL_22;
  }
  if ( a2 )
  {
    if ( *a2 >= 2u )
      v42 = *a2;
    v40 = 0;
    if ( a5 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        v30 = 16;
      }
      else
      {
        v23 = 1;
        v30 = 0;
      }
      v31 = 1;
    }
    else
    {
      v30 = 0;
      v31 = 0;
    }
    result = RtlpCopyAces((__int64)a2, a11, v23, v30, v31, a7, a8, a9, a10, v24, 0, a12, &v44, (__int64)a16);
    v18 = v44;
    v19 = v44;
    if ( (_DWORD)result == -1073741789 )
    {
      v33 = 1;
    }
    else
    {
      if ( (int)result < 0 )
        return result;
      v33 = 0;
    }
    if ( a6 )
    {
      if ( v44 )
      {
        v41 = a16[2];
        if ( !RtlFirstFreeAce((__int64)a16, &Src) )
          return 3221225597LL;
      }
    }
    v22 = v48;
    v27 = a17;
LABEL_19:
    v34 = a12;
    if ( a12 != 1 )
      goto LABEL_20;
LABEL_46:
    *v27 = 1;
    goto LABEL_21;
  }
  if ( !a5 )
  {
    v33 = 0;
    goto LABEL_19;
  }
  v34 = a12;
  if ( a12 == 1 )
  {
    if ( (a3 & 0x1004) == 4 )
      return 3221225591LL;
    v33 = 0;
    goto LABEL_46;
  }
  v33 = 0;
LABEL_20:
  if ( v34 == 2 )
  {
    if ( !v18 && !v22 )
    {
      if ( a2 && !*((_WORD *)a2 + 2) )
      {
        v29 = a3 & 8;
        *v27 = 1;
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    goto LABEL_46;
  }
LABEL_21:
  v29 = a3 & 8;
LABEL_22:
  if ( (a5 || (a3 & 4) != 0) && !v29 && (!a5 || v22) || !a1 )
  {
    v35 = v42;
    goto LABEL_28;
  }
  v37 = (unsigned __int8)*a1;
  if ( (unsigned __int8)(v37 - 2) > 2u )
    return 3221225560LL;
  v35 = v42;
  if ( v42 <= v37 )
    v35 = *a1;
  result = RtlpGenerateInheritAcl(
             (__int64)a1,
             a4,
             a5,
             (__int64)a7,
             a8,
             a9,
             a10,
             a11,
             a13,
             a14,
             a12,
             v33,
             &v43,
             (__int64)a16,
             &v39);
  if ( (_DWORD)result == -1073741789 )
  {
    v33 = 1;
LABEL_39:
    if ( a6 && v18 && v39 && !v33 )
    {
      if ( !RtlFirstFreeAce((__int64)a16, &v45) )
        return 3221225597LL;
      v38 = v45;
      if ( !v45 )
        v38 = (_DWORD)a16 + a16[1];
      memmove(a16 + 4, Src, (unsigned int)(v38 - (_DWORD)Src));
      a16[2] -= v41;
      v19 = 0;
    }
    v20 = v43;
LABEL_28:
    v36 = v20 + v19;
    if ( !(_DWORD)v36 )
    {
      if ( !*a17 )
      {
        *a15 = 0;
        return 2147483659LL;
      }
      if ( v40 )
      {
        *a15 = 0;
        return 0LL;
      }
    }
    if ( (unsigned __int64)(v36 + 8) <= 0xFFFF )
    {
      *a15 = v20 + v18 + 8;
      if ( v33 )
        return 3221225507LL;
      *(_BYTE *)a16 = v35;
      a16[1] = v20 + v19 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  if ( (int)result >= 0 )
    goto LABEL_39;
  return result;
}
