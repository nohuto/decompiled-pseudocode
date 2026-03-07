__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        __int64 a2,
        ULONGLONG a3,
        ULONGLONG a4,
        __int64 a5,
        ULONGLONG ullSubtrahendb,
        _QWORD *a7,
        int a8,
        signed __int16 *a9,
        ULONGLONG *a10,
        ULONGLONG *a11,
        int a12,
        _WORD *a13)
{
  ULONGLONG v14; // r11
  unsigned int v16; // ebx
  unsigned int v17; // edx
  _QWORD *v18; // r9
  int v19; // r8d
  int v20; // ecx
  ULONGLONG v21; // rdi
  unsigned int *v22; // r12
  int v23; // eax
  int v24; // ecx
  __int64 v25; // r9
  unsigned int *v26; // rcx
  __int64 v27; // r10
  unsigned int v28; // edx
  __int64 v29; // r10
  unsigned int *v30; // rdx
  unsigned int *v31; // r9
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  __int64 result; // rax
  ULONGLONG v36; // rax
  __int64 v37; // rax
  int v38; // r8d
  ULONGLONG v39; // rdi
  ULONGLONG v40; // rsi
  ULONGLONG v41; // r11
  ULONGLONG v42; // r10
  ULONGLONG v43; // r14
  ULONGLONG v44; // r9
  ULONGLONG *v45; // r11
  __int64 v46; // r10
  ULONGLONG v47; // rax
  ULONGLONG *v48; // r10
  __int64 v49; // rcx
  bool v50; // zf
  char v51; // al
  __int64 v52; // rax
  __int64 v53; // r10
  int v54; // r9d
  __int16 v55; // ax
  unsigned int v56; // r10d
  __int64 v57; // rsi
  __int64 v58; // rax
  int v59; // r9d
  __int64 v60; // rax
  int v61; // r9d
  __int64 v62; // rax
  __int64 v63; // r10
  __int64 v64; // r10
  unsigned int v65; // r9d
  unsigned __int64 v66; // r11
  __int64 v67; // r11
  int v68; // r10d
  unsigned __int64 v69; // r14
  int v70; // [rsp+40h] [rbp-E8h]
  ULONGLONG pullResult; // [rsp+48h] [rbp-E0h] BYREF
  int v72; // [rsp+50h] [rbp-D8h]
  int v73; // [rsp+54h] [rbp-D4h]
  int v74; // [rsp+58h] [rbp-D0h] BYREF
  ULONGLONG v75; // [rsp+60h] [rbp-C8h]
  ULONGLONG v76; // [rsp+68h] [rbp-C0h]
  __int64 v77; // [rsp+70h] [rbp-B8h]
  __int16 v78; // [rsp+78h] [rbp-B0h]
  int v79; // [rsp+7Ch] [rbp-ACh]
  int v80; // [rsp+80h] [rbp-A8h]
  ULONGLONG v81; // [rsp+88h] [rbp-A0h]
  __int64 v82; // [rsp+90h] [rbp-98h]
  unsigned int *v83; // [rsp+98h] [rbp-90h]
  unsigned int *v84; // [rsp+A0h] [rbp-88h]
  __int128 v85; // [rsp+A8h] [rbp-80h]
  __int16 v86; // [rsp+B8h] [rbp-70h]
  __int64 v87; // [rsp+C0h] [rbp-68h]
  unsigned int *v88; // [rsp+C8h] [rbp-60h]
  int v89; // [rsp+D0h] [rbp-58h]
  ULONGLONG v90; // [rsp+D8h] [rbp-50h]
  _QWORD *v91; // [rsp+E0h] [rbp-48h]
  char v92; // [rsp+138h] [rbp+10h]
  char v94; // [rsp+148h] [rbp+20h]
  unsigned int v95; // [rsp+148h] [rbp+20h]
  signed __int16 ullSubtrahend; // [rsp+158h] [rbp+30h]
  unsigned int ullSubtrahenda; // [rsp+158h] [rbp+30h]

  v14 = a3;
  v16 = 0;
  v74 = 0;
  v85 = 0LL;
  ullSubtrahend = 0;
  LOWORD(v17) = 0;
  v79 = 0;
  pullResult = 0LL;
  if ( !a4 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v18 = a7;
  if ( !a7 )
    return 3221225485LL;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  LOBYTE(v19) = a12;
  v72 = a12;
  if ( (a12 & 0x8000) != 0 )
    return 3221225485LL;
  v92 = (a12 & 0x1000) != 0;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( (a12 & 0x8800) == 0x8800 || !a1 )
    return 3221225485LL;
  v20 = a8;
  v80 = a8;
  v21 = a4;
  v22 = 0LL;
  v81 = 0LL;
  if ( a13 )
    *a13 = 0;
LABEL_12:
  if ( !v21 )
    goto LABEL_55;
  v23 = v20;
  v24 = v20 - 1;
  v80 = v24;
  v89 = v24;
  if ( !v23 )
    goto LABEL_55;
  v77 = *v18;
  v82 = v77;
  if ( !v24 && a8 == 3 )
  {
    v81 = v21;
    v90 = v21;
    if ( !a9 )
      return (unsigned int)-1073741811;
    ullSubtrahend = *a9;
    v86 = *a9;
    v79 = 0;
    v78 = 0;
    if ( (~(_BYTE)v19 & 4) != 0 )
    {
      v77 = (unsigned __int16)a9[2];
      v82 = v77;
    }
  }
  if ( (a12 & 0x1000) != 0
    && (RtlULongLongAdd(v21, 0x18uLL, &pullResult) < 0 || v21 + 24 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
  {
    return (unsigned int)-1073741701;
  }
  v25 = *(unsigned __int16 *)(v21 + 12);
  if ( *(_WORD *)(v21 + 12) )
  {
    if ( (a12 & 0x1000) != 0 )
    {
      *(_QWORD *)&v85 = 8 * v25;
      if ( RtlULongLongAdd(v21, (unsigned int)(8 * v25) + 16LL, &pullResult) < 0
        || v53 + v21 + 16 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        return (unsigned int)-1073741701;
      }
    }
  }
  v26 = (unsigned int *)(v21 + 16);
  *(_QWORD *)&v85 = v21 + 16;
  v84 = (unsigned int *)(v21 + 16);
  v73 = v25;
  v27 = v77;
  if ( (v77 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (_DWORD)v25 )
    {
      if ( (a12 & 0x1000) != 0 && RtlULongLongAdd((ULONGLONG)v26, (int)v25, &pullResult) < 0 )
        return (unsigned int)-1073741701;
      v26 += 2 * v25;
      *(_QWORD *)&v85 = v26;
      v84 = v26;
    }
    v28 = *(unsigned __int16 *)(v21 + 14);
    v73 = v28;
    LODWORD(v25) = v28;
    if ( (a12 & 0x1000) != 0 )
    {
      v87 = 8LL * v28;
      if ( RtlULongLongAdd((ULONGLONG)v26, 8 * v28, &pullResult) < 0 )
        return (unsigned int)-1073741701;
      v73 = v25;
      if ( v29 + (__int64)v85 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
      v26 = (unsigned int *)v85;
      v27 = v77;
    }
  }
  if ( !(_DWORD)v25 )
  {
    v76 = 0LL;
LABEL_99:
    switch ( a8 - v80 )
    {
      case 1:
        return (unsigned int)-1073741686;
      case 2:
        return (unsigned int)-1073741685;
      case 3:
        return (unsigned int)-1073741308;
    }
    return (unsigned int)-1073741811;
  }
  v19 = v72;
LABEL_27:
  if ( v81 && (v19 & 0x20) != 0 )
  {
    v21 = 0LL;
    v76 = 0LL;
    v37 = v26[1];
    if ( (a12 & 0x1000) != 0 )
    {
      if ( RtlULongLongAdd(a4, (unsigned int)v37, &pullResult) < 0 )
        return (unsigned int)-1073741701;
      v22 = (unsigned int *)pullResult;
      v75 = pullResult;
      LOBYTE(v19) = v72;
      v26 = (unsigned int *)v85;
    }
    else
    {
      v22 = (unsigned int *)(v37 + a4);
      v75 = v37 + a4;
    }
    v17 = *v26;
    v82 = *v26;
LABEL_55:
    v38 = v19 & 2;
    if ( v22 && !v38 )
    {
      if ( (a12 & 0x1000) != 0 )
      {
        if ( (unsigned __int64)v22 <= a4 )
          goto LABEL_151;
        v39 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (unsigned __int64)(v22 + 4) > (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v14 )
          goto LABEL_151;
      }
      else
      {
        v39 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( a13 )
        *a13 = v17;
      if ( (a1 & 1) != 0 )
      {
        v54 = a5;
        v55 = *(_WORD *)(a5 + 24);
        if ( v55 == 267 )
        {
          v56 = *(_DWORD *)(a5 + 136);
        }
        else if ( v55 == 523 )
        {
          v56 = *(_DWORD *)(a5 + 152);
        }
        else
        {
          v56 = 0;
        }
        if ( !v56 )
        {
          v75 = 0LL;
          return (unsigned int)-1073741687;
        }
        v57 = v56;
        if ( (a12 & 0x1000) != 0 )
        {
          if ( RtlULongLongAdd(v39, v56, &pullResult) < 0 || RtlULongLongSub(pullResult, a4, &pullResult) < 0 )
            return (unsigned int)-1073741701;
          v54 = a5;
        }
        v40 = v39 + v57 - a4;
        v58 = LdrpSectionTableFromVirtualAddress(v39, v14, v54, v54, v56, v92);
        if ( !v58 )
          goto LABEL_151;
        if ( *v22 > *(_DWORD *)(v58 + 8) )
        {
          ullSubtrahenda = *(_DWORD *)(v58 + 12);
          v60 = LdrpSectionTableFromVirtualAddress(v39, a3, a5, v59, *v22, v92);
          if ( !v60 )
            goto LABEL_151;
          v95 = *(_DWORD *)(v60 + 12);
          v62 = LdrpSectionTableFromVirtualAddress(v39, a3, a5, v61, v95, v92);
          v63 = v62;
          if ( v62 )
          {
            if ( (a12 & 0x1000) != 0 )
            {
              if ( RtlULongLongAdd(v39, v95 - (unsigned __int64)*(unsigned int *)(v62 + 12), &pullResult) < 0
                || RtlULongLongAdd(pullResult, *(unsigned int *)(v64 + 20), &pullResult) < 0 )
              {
                return (unsigned int)-1073741701;
              }
            }
            else
            {
              v65 = v95;
            }
            v66 = v39 + *(unsigned int *)(v63 + 20) - (unsigned __int64)*(unsigned int *)(v63 + 12) + v65;
          }
          else
          {
            v66 = 0LL;
          }
          if ( (a12 & 0x1000) != 0
            && (RtlULongLongSub(*(unsigned int *)(v63 + 12), ullSubtrahenda, &pullResult) < 0
             || RtlULongLongSub(pullResult, v67 - a4, &pullResult) < 0) )
          {
            return (unsigned int)-1073741701;
          }
          v40 += a4 + *(unsigned int *)(v63 + 12) - (unsigned __int64)ullSubtrahenda - v66;
        }
      }
      else
      {
        v40 = 0LL;
      }
      if ( (a12 & 0x1000) == 0 )
      {
        v42 = 0LL;
        v44 = v22[1];
        v43 = a3;
LABEL_71:
        v45 = a10;
        if ( a10 )
        {
          if ( (a12 & 0x1000) != 0 )
          {
            if ( RtlULongLongAdd(v39, v42, &pullResult) < 0 || pullResult < v39 || pullResult > v39 + v43 )
              return (unsigned int)-1073741701;
            v47 = v39 + v46;
          }
          else
          {
            v47 = v39 + *v22 - v40;
          }
          *v45 = v47;
        }
        v48 = a11;
        if ( a11 )
        {
          if ( (a12 & 0x1000) != 0 && v45 && (RtlULongLongAdd(*v45, v44, &pullResult) < 0 || v44 + v49 > v39 + v43) )
            return (unsigned int)-1073741701;
          *v48 = v44;
        }
        return v16;
      }
      if ( RtlULongLongSub(*v22, v40, &pullResult) < 0 )
        return (unsigned int)-1073741701;
      v42 = pullResult;
      if ( pullResult >= a4 - a1 )
      {
        v43 = a3;
        if ( pullResult <= a3 )
        {
          if ( (_DWORD)v41 )
          {
            v44 = (unsigned int)v41;
            if ( v41 <= a3 && v41 + pullResult <= a3 )
              goto LABEL_71;
          }
        }
      }
LABEL_151:
      v75 = 0LL;
      return (unsigned int)-1073741701;
    }
    if ( v21 && v38 )
    {
      if ( (a12 & 0x1000) != 0 )
      {
        if ( RtlULongLongAdd(v21, 0x18uLL, &pullResult) < 0 || (v69 = a1 & 0xFFFFFFFFFFFFFFFCuLL, v21 + 24 > v69 + v14) )
        {
          v76 = 0LL;
          return (unsigned int)-1073741701;
        }
      }
      else
      {
        v69 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( a10 )
      {
        if ( (a12 & 0x1000) != 0 && (v21 < v69 || v21 > v69 + v14) )
          return (unsigned int)-1073741701;
        *a10 = v21;
      }
      return v16;
    }
    goto LABEL_99;
  }
LABEL_28:
  v21 = 0LL;
  v76 = 0LL;
  v30 = v26;
  v84 = v26;
  v31 = &v26[2 * v73 - 2];
  v88 = v31;
  v32 = v73;
  v33 = v73;
  while ( 1 )
  {
    if ( v30 > v31 )
      goto LABEL_41;
    v34 = v32 >> 1;
    LODWORD(v87) = v34;
    if ( !v34 )
    {
      if ( !v33 )
        goto LABEL_41;
      result = LdrpResCompareResourceNames(a1, v30, v14, v27, a4, v30, v19, &v74, v70);
      v70 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v74 )
      {
        v36 = v84[1];
        if ( (v36 & 0x80000000) == 0LL )
          goto LABEL_103;
LABEL_35:
        if ( (a12 & 0x1000) != 0 )
        {
          if ( v81 || RtlULongLongAdd(a4, v36 & 0x7FFFFFFF, &pullResult) < 0 )
            return (unsigned int)-1073741701;
          v21 = pullResult;
        }
        else
        {
          v21 = a4 + (v36 & 0xFFFFFFFF7FFFFFFFuLL);
        }
        v76 = v21;
      }
LABEL_40:
      v14 = a3;
LABEL_41:
      v19 = v72;
      if ( !v81 || v22 )
        goto LABEL_42;
      if ( (v72 & 4) != 0 )
      {
        LOWORD(v17) = v77;
        goto LABEL_55;
      }
      HIWORD(v68) = HIWORD(v79);
      LOWORD(v68) = v79 + 1;
      v79 = v68;
      v78 = v68;
      if ( (unsigned __int16)v68 >= ullSubtrahend )
      {
        if ( *((_BYTE *)a9 + 516) )
        {
LABEL_42:
          v18 = a7 + 1;
          a7 = v18;
          v91 = v18;
          LOWORD(v17) = v77;
          v20 = v80;
          goto LABEL_12;
        }
        v19 = v72 | 0x20;
        v72 |= 0x20u;
        v26 = (unsigned int *)v85;
        v27 = v77;
        goto LABEL_27;
      }
      v27 = (unsigned __int16)a9[4 * (unsigned __int16)v68 + 2];
      v77 = v27;
      v82 = v27;
      v26 = (unsigned int *)v85;
      goto LABEL_28;
    }
    v83 = v30;
    v51 = v33 & 1;
    v50 = v51 == 0;
    v94 = v51;
    LODWORD(v52) = v34 - 1;
    LODWORD(v82) = v34 - 1;
    if ( v50 )
      v52 = (int)v52;
    else
      v52 = v34;
    v83 = &v30[2 * v52];
    result = LdrpResCompareResourceNames(a1, v30, v14, v27, a4, v83, v19, &v74, v70);
    v70 = result;
    if ( (int)result < 0 )
      return result;
    if ( !v74 )
      break;
    if ( v74 < 0 )
    {
      v31 = v83 - 2;
      v88 = v83 - 2;
      if ( v94 )
      {
        v32 = v87;
        v33 = v87;
      }
      else
      {
        v33 = v82;
        v32 = v82;
      }
      v30 = v84;
    }
    else
    {
      v30 = v83 + 2;
      v84 = v83 + 2;
      v32 = v87;
      v33 = v87;
      v31 = v88;
    }
    v14 = a3;
    v19 = v72;
    v27 = v77;
  }
  v36 = v83[1];
  if ( (v36 & 0x80000000) != 0LL )
    goto LABEL_35;
  v21 = 0LL;
  v76 = 0LL;
LABEL_103:
  if ( (a12 & 0x1000) == 0 )
  {
    v22 = (unsigned int *)(v36 + a4);
LABEL_107:
    v75 = (ULONGLONG)v22;
    goto LABEL_40;
  }
  if ( v81 && RtlULongLongAdd(a4, v36, &pullResult) >= 0 )
  {
    v22 = (unsigned int *)pullResult;
    goto LABEL_107;
  }
  return (unsigned int)-1073741701;
}
