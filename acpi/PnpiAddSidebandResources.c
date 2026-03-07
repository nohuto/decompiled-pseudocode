__int64 __fastcall PnpiAddSidebandResources(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int v6; // r15d
  unsigned int v7; // ebx
  unsigned int *v8; // r12
  __int64 v9; // rax
  __int64 v10; // r11
  unsigned int v11; // ebp
  __int64 v12; // rsi
  unsigned int v13; // edi
  unsigned int v14; // r10d
  unsigned int *v16; // r8
  __int64 v17; // r14
  unsigned int v18; // r13d
  unsigned int v19; // ecx
  unsigned int v20; // edi
  __int64 v21; // xmm0_8
  unsigned int v22; // eax
  unsigned int v23; // r9d
  unsigned int v24; // edx
  __int64 v25; // rcx
  BOOL v26; // ecx
  _DWORD *v27; // r10
  char i; // r11
  _WORD *v29; // rcx
  unsigned int v30; // ebp
  unsigned int v31; // eax
  bool v32; // r15
  char *v33; // r9
  unsigned int v34; // edx
  unsigned int v35; // ecx
  bool v36; // zf
  unsigned int v37; // edi
  __int64 v38; // rsi
  unsigned int v39; // r8d
  char *v40; // r12
  __int64 v41; // r15
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // ebp
  unsigned int v46; // r13d
  __int64 v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rax
  char v50; // [rsp+20h] [rbp-98h]
  int v51; // [rsp+24h] [rbp-94h]
  unsigned int v52; // [rsp+28h] [rbp-90h]
  unsigned int v53; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v54; // [rsp+30h] [rbp-88h]
  int v55; // [rsp+34h] [rbp-84h]
  char *v56; // [rsp+38h] [rbp-80h]
  int v57; // [rsp+40h] [rbp-78h]
  unsigned int v58; // [rsp+44h] [rbp-74h]
  unsigned int v59; // [rsp+48h] [rbp-70h]
  _DWORD *v60; // [rsp+50h] [rbp-68h]
  unsigned int v61; // [rsp+58h] [rbp-60h]
  unsigned int v62; // [rsp+5Ch] [rbp-5Ch]
  __int64 v63; // [rsp+60h] [rbp-58h]

  v6 = *a4;
  v7 = 0;
  v58 = 0;
  v8 = a3;
  v54 = *a4;
  v9 = a2;
  v55 = 0;
  v10 = a1;
  v52 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( a1 )
  {
    if ( !(unsigned __int8)PnpiValidateSidebandResources() )
      return 3221225524LL;
    v10 = a1;
    v14 = 0;
    v9 = a2;
  }
  v16 = a6;
  if ( a6 )
  {
    v53 = *a6;
    if ( *a6 >= 0x28 )
    {
      v53 = *a6;
      *(_OWORD *)a5 = 0LL;
      *(_OWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 32) = 0LL;
    }
  }
  else
  {
    v53 = 0;
  }
  v17 = v9 + 32;
  v18 = 8;
  v19 = 0;
  v51 = 8;
  v63 = v9 + 32;
  v59 = 0;
  if ( *(_DWORD *)(v9 + 28) )
  {
    while ( 1 )
    {
      if ( v19 )
      {
        v22 = *(_DWORD *)(v17 + 4);
        v17 += v22 <= 1 ? 40LL : 32LL * (v22 - 1) + 40;
        v63 = v17;
      }
      else
      {
        v20 = v13 + 72;
        if ( v6 >= v20 )
        {
          if ( v10 )
          {
            *(_OWORD *)((char *)v8 + v12) = *(_OWORD *)v10;
            *(_OWORD *)((char *)v8 + v12 + 16) = *(_OWORD *)(v10 + 16);
            *(_OWORD *)((char *)v8 + v12 + 32) = *(_OWORD *)(v10 + 32);
            *(_OWORD *)((char *)v8 + v12 + 48) = *(_OWORD *)(v10 + 48);
            v21 = *(_QWORD *)(v10 + 64);
          }
          else
          {
            *(_OWORD *)((char *)v8 + v12) = *(_OWORD *)v9;
            *(_OWORD *)((char *)v8 + v12 + 16) = *(_OWORD *)(v9 + 16);
            *(_OWORD *)((char *)v8 + v12 + 32) = *(_OWORD *)(v9 + 32);
            *(_OWORD *)((char *)v8 + v12 + 48) = *(_OWORD *)(v9 + 48);
            v21 = *(_QWORD *)(v9 + 64);
          }
          *(_QWORD *)((char *)v8 + v12 + 64) = v21;
          v8[7] = 0;
        }
        v13 = v20 - 40;
        v12 += 32LL;
      }
      v23 = *(_DWORD *)(v17 + 4);
      v24 = 0;
      if ( v23 )
        break;
LABEL_28:
      v52 = ++v14;
      if ( v14 <= 1 )
        goto LABEL_29;
LABEL_74:
      v9 = a2;
      v19 = v59 + 1;
      v10 = a1;
      v59 = v19;
      if ( v19 >= *(_DWORD *)(a2 + 28) )
      {
        v16 = a6;
        goto LABEL_76;
      }
    }
    while ( 1 )
    {
      v25 = 32LL * v24;
      if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
        && *(_BYTE *)(v25 + v17 + 9) != 2 )
      {
        break;
      }
      if ( *(_DWORD *)(v25 + v17 + 16) == *(_DWORD *)(v25 + v17 + 20) )
        break;
      if ( ++v24 >= v23 )
      {
        v14 = v52;
        goto LABEL_28;
      }
    }
LABEL_29:
    v26 = 1;
    if ( v10 )
    {
      v27 = (_DWORD *)(v10 + 32);
      v60 = (_DWORD *)(v10 + 32);
      v26 = *(_DWORD *)(v10 + 28) != 0;
    }
    else
    {
      v27 = 0LL;
      v60 = 0LL;
    }
    v50 = 1;
    v62 = v26 + v11;
    for ( i = 1; v11 < v62; v58 = v11 )
    {
      v29 = (_WORD *)((char *)v8 + v12);
      v30 = 40;
      v56 = (char *)v8 + v12;
      if ( v27 )
      {
        v31 = v27[1];
        v32 = 0;
        if ( v31 <= 1 )
          v32 = v31 == 0;
        else
          v30 = 32 * v31 + 8;
        if ( v54 < v13 + v30 )
        {
          v33 = (char *)v8 + v12;
        }
        else
        {
          memmove(v29, v27, v30);
          v33 = (char *)v8 + v12;
          v27 = v60;
          i = v50;
          *((_DWORD *)v56 + 1) = 0;
        }
        v34 = v27[1];
        v35 = v30 - 32;
        v27 = (_DWORD *)((char *)v27 + v30);
        v18 = v51;
        v36 = !v32;
        v60 = v27;
        v6 = v54;
        if ( v36 )
          v35 = v30;
      }
      else
      {
        if ( v6 >= v13 + 40 )
        {
          *v29 = *(_WORD *)v17;
          v29[1] = *(_WORD *)(v17 + 2);
          *((_DWORD *)v29 + 1) = 0;
        }
        v33 = (char *)v8 + v12;
        v34 = 0;
        v35 = 8;
      }
      v37 = v35 + v13;
      v38 = v35 + v12;
      v57 = 0;
      v39 = 0;
      if ( *(_DWORD *)(v17 + 4) )
      {
        v40 = v56;
        do
        {
          v41 = v17 + 32LL * v39;
          if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
            && *(_BYTE *)(v41 + 9) != 2
            || *(_DWORD *)(v41 + 16) == *(_DWORD *)(v41 + 20) )
          {
            v37 += 32;
            if ( v54 >= v37 )
            {
              v42 = 32LL * v34;
              *(_OWORD *)&v40[v42 + 8] = *(_OWORD *)(v41 + 8);
              *(_OWORD *)&v40[v42 + 24] = *(_OWORD *)(v41 + 24);
            }
            ++v55;
            ++v34;
            v38 += 32LL;
            v61 = v34;
            if ( i )
            {
              v43 = v53;
              if ( v53 < 0x28 )
              {
                v18 += 32;
                v51 = v18;
              }
              else
              {
                v44 = a5;
                v45 = 0;
                v46 = *(_DWORD *)(a5 + 4);
                if ( v46 )
                {
                  do
                  {
                    if ( !memcmp((const void *)(32LL * v45 + a5 + 8), (const void *)(v41 + 8), 0x20uLL) )
                      break;
                    ++v45;
                  }
                  while ( v45 < v46 );
                  v17 = v63;
                  v34 = v61;
                  v39 = v57;
                  v40 = v56;
                  v43 = v53;
                  i = v50;
                  v44 = a5;
                }
                v36 = v45 == v46;
                v18 = v51;
                if ( v36 )
                {
                  v18 = v51 + 32;
                  v51 = v18;
                  if ( v43 >= v18 )
                  {
                    v47 = 32LL * v45;
                    *(_OWORD *)(v47 + v44 + 8) = *(_OWORD *)(v41 + 8);
                    *(_OWORD *)(v47 + v44 + 24) = *(_OWORD *)(v41 + 24);
                    ++*(_DWORD *)(v44 + 4);
                  }
                }
              }
            }
          }
          v57 = ++v39;
        }
        while ( v39 < *(_DWORD *)(v17 + 4) );
        v8 = a3;
        v33 = v56;
        v27 = v60;
        v6 = v54;
      }
      v48 = v37 + 32;
      if ( v34 )
        v48 = v37;
      v13 = v48;
      v49 = v38 + 32;
      if ( v34 )
        v49 = v38;
      v12 = v49;
      if ( v6 >= v13 )
        *((_DWORD *)v33 + 1) = v34;
      v11 = v58 + 1;
      v50 = 0;
      i = 0;
    }
    v14 = v52;
    goto LABEL_74;
  }
LABEL_76:
  if ( v16 )
  {
    if ( v18 < 0x28 )
      v18 = 40;
    *v16 = v18;
  }
  if ( v55 )
  {
    if ( v13 <= v6 )
    {
      *v8 = v13;
      v8[7] = v11;
    }
    else
    {
      v7 = -1073741789;
      *a4 = v13;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v7;
}
