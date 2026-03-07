__int64 __fastcall LocalGetConditionForString(wint_t *a1, __int64 a2, const void **a3, unsigned int *a4)
{
  unsigned int *v4; // r14
  const void **v5; // r12
  wint_t *v6; // r13
  int v7; // esi
  unsigned int appended; // ebx
  unsigned int v9; // edi
  int v10; // r15d
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // rax
  char ConditionToken; // al
  unsigned int v18; // r10d
  char v19; // r12
  __int64 v20; // rax
  __int64 v21; // r14
  char v22; // di
  unsigned int *v23; // r12
  char v24; // al
  int OperatorIndexByToken; // eax
  char v26; // r10
  int v27; // eax
  char v28; // r10
  __int64 v29; // r8
  char v30; // r11
  int v31; // eax
  char v32; // r10
  char v33; // r10
  __int64 v34; // r8
  __int64 v35; // r8
  int v36; // r9d
  __int64 v37; // rax
  char v38; // cl
  int v39; // eax
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // r8
  int v45; // r9d
  char v46; // cl
  char v47; // cl
  char *v48; // r9
  __int64 v49; // rdi
  char v50; // al
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  int v55[2]; // [rsp+58h] [rbp-A8h]
  char v56; // [rsp+60h] [rbp-A0h]
  int v57[2]; // [rsp+68h] [rbp-98h]
  int v58[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v59; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v61[33]; // [rsp+88h] [rbp-78h]

  *(_QWORD *)v57 = a4;
  *(_QWORD *)v55 = a3;
  v4 = a4;
  v61[0] = a2;
  v5 = a3;
  LOWORD(v54) = 0;
  v59 = 0;
  v6 = a1;
  P = 0LL;
  v7 = 0;
  v56 = 0;
  appended = 0;
  v9 = 0;
  v10 = 0;
  if ( a1 && a2 && a3 && a4 )
  {
    *a3 = 0LL;
    v11 = -1LL;
    *a4 = 0;
    do
      ++v11;
    while ( a1[v11] );
    if ( (unsigned int)v11 >= 3 && *a1 == 40 )
    {
      v12 = v11 + 1;
      v13 = -1;
      if ( v12 )
        v13 = v12;
      *a4 = v13;
      if ( v12 )
      {
        v14 = 2LL * v13;
        if ( v14 <= 0xFFFFFFFF )
        {
          *a4 = v14;
          v15 = SddlpAlloc((unsigned int)v14);
          *v5 = v15;
          if ( !v15 )
          {
            appended = 8;
            goto LABEL_126;
          }
          *v15 = 2020897377;
          v58[0] = 4;
          while ( 1 )
          {
            if ( !*v6 )
            {
LABEL_107:
              v4 = *(unsigned int **)v57;
              v49 = v7;
              if ( v7 )
              {
                v5 = *(const void ***)v55;
                while ( 1 )
                {
                  v50 = *((_BYTE *)v61 + v49-- + 7);
                  LOBYTE(v54) = v50;
                  if ( v50 == -2 )
                    break;
                  LODWORD(Size) = 1;
                  appended = AppendCondition(v5, v4, (unsigned int *)v58, &v54, Size);
                  if ( appended )
                    goto LABEL_126;
                  if ( !v49 )
                    goto LABEL_123;
                }
                appended = 1336;
              }
LABEL_123:
              *v4 = v58[0];
              *(_QWORD *)v61[0] = v6;
              goto LABEL_115;
            }
            if ( iswspace(*v6) )
            {
              v16 = 2LL;
              goto LABEL_105;
            }
            if ( v7 == 255 )
            {
              appended = 1001;
              goto LABEL_126;
            }
            ConditionToken = GetConditionToken(v6, &v59);
            v18 = 0;
            v19 = ConditionToken;
            if ( !ConditionToken )
              break;
            if ( ConditionToken == -2 )
            {
              if ( (v9 & 0xFFFFFFFC) != 0 || v9 == 2 )
                goto LABEL_114;
              v20 = v7;
              v9 = 1;
              ++v7;
              *((_BYTE *)&v61[1] + v20) = v19;
            }
            else
            {
              v21 = v7;
              if ( ConditionToken == -1 )
              {
                if ( !v7 || v9 == 3 || v9 == 1 )
                {
LABEL_119:
                  appended = 1336;
LABEL_120:
                  v4 = *(unsigned int **)v57;
                }
                else
                {
                  v22 = *((_BYTE *)v61 + v7 + 7);
                  v23 = *(unsigned int **)v57;
                  v56 = v22 == -2;
                  while ( 1 )
                  {
                    v24 = *((_BYTE *)v61 + v21-- + 7);
                    --v7;
                    LOBYTE(v54) = v24;
                    if ( v24 == -2 )
                      break;
                    LODWORD(Size) = 1;
                    appended = AppendCondition(*(const void ***)v55, v23, (unsigned int *)v58, &v54, Size);
                    if ( appended )
                      goto LABEL_118;
                    if ( !v21 )
                    {
                      if ( (_BYTE)v54 != 0xFE )
                        goto LABEL_117;
                      break;
                    }
                  }
                  if ( !v7 )
                  {
                    v6 += v59;
                    goto LABEL_107;
                  }
                  OperatorIndexByToken = GetOperatorIndexByToken(*((_BYTE *)v61 + v7 + 7));
                  if ( OperatorIndexByToken == -1
                    || v22 == -2
                    || *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 19) == v26
                    || *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 8) == 0xA2 )
                  {
                    v9 = 2;
                    v4 = v23;
                    goto LABEL_72;
                  }
LABEL_117:
                  appended = 1336;
LABEL_118:
                  v4 = v23;
                }
LABEL_115:
                v5 = *(const void ***)v55;
                goto LABEL_126;
              }
              v27 = GetOperatorIndexByToken(ConditionToken);
              v29 = 3LL * v27;
              v58[1] = *((_DWORD *)&Operators + 6 * v27 + 3);
              if ( *((_BYTE *)&Operators + 24 * v27 + 18) != v28 && v9 != 4 && (v9 != 2 || v56 == v28) )
                goto LABEL_119;
              v30 = (char)(&Operators)[3 * v27 + 1];
              if ( v30 )
              {
                if ( v9 > 1 )
                {
                  if ( v9 != 3 )
                    goto LABEL_119;
                  v31 = GetOperatorIndexByToken(*((_BYTE *)v61 + v7 + 7));
                  if ( *((_BYTE *)&Operators + 24 * v31 + 19) != v32 )
                    goto LABEL_119;
                }
              }
              v33 = *((_BYTE *)&Operators + 8 * v29 + 19);
              if ( !v33 && (v9 & 0xFFFFFFFC) == 0 && v9 != 2 )
                goto LABEL_119;
              if ( (unsigned int)(v10 - 4) <= 1 )
                goto LABEL_119;
              if ( v7 )
              {
                if ( v33 )
                {
                  v34 = v7 - 1;
                  if ( v7 - 1 >= 0 )
                  {
                    while ( (unsigned int)GetOperatorIndexByToken(*((_BYTE *)&v61[1] + v34)) == -1 )
                    {
                      v34 = v35 - 1;
                      if ( v34 < 0 )
                        goto LABEL_60;
                    }
                    v37 = 3LL * (int)GetOperatorIndexByToken(*((_BYTE *)&v61[1] + v36));
                    if ( *((_BYTE *)&Operators + 8 * v37 + 19) )
                    {
                      if ( *((_BYTE *)&Operators + 8 * v37 + 8) != 0xA2 )
                        goto LABEL_119;
                    }
                  }
                }
              }
LABEL_60:
              if ( v30 || !v33 )
                v10 = 0;
              else
                v10 = 5;
              if ( v7 )
              {
                while ( 1 )
                {
                  v38 = *((_BYTE *)v61 + v21 + 7);
                  if ( v38 == -2 )
                    break;
                  LOBYTE(v54) = *((_BYTE *)v61 + v21 + 7);
                  v39 = GetOperatorIndexByToken(v38);
                  if ( v40 > *((_DWORD *)&Operators + 6 * v39 + 3) )
                    break;
                  --v7;
                  LODWORD(Size) = 1;
                  --v21;
                  appended = AppendCondition(
                               *(const void ***)v55,
                               *(unsigned int **)v57,
                               (unsigned int *)v58,
                               &v54,
                               Size);
                  if ( appended )
                    goto LABEL_120;
                  if ( !v21 )
                    goto LABEL_71;
                }
                v41 = v7++;
                *((_BYTE *)&v61[1] + v41) = v19;
              }
LABEL_71:
              v4 = *(unsigned int **)v57;
              v9 = 3;
            }
LABEL_72:
            v5 = *(const void ***)v55;
LABEL_104:
            v16 = 2LL * v59;
LABEL_105:
            v6 = (wint_t *)((char *)v6 + v16);
          }
          if ( (v9 & 0xFFFFFFFC) != 0 || v9 == 2 || v10 == 3 )
            goto LABEL_114;
          if ( !v10 )
          {
            v10 = 5;
            if ( !v7 )
            {
              v9 = 4;
              v10 = 4;
              goto LABEL_92;
            }
            v42 = v7 - 1;
            if ( v7 - 1 < 0 )
              goto LABEL_90;
            while ( 1 )
            {
              LOBYTE(v54) = *((_BYTE *)&v61[1] + v42);
              v43 = GetOperatorIndexByToken(v54);
              if ( v43 != -1 )
                break;
              --v45;
              v42 = v44 - 1;
              if ( v42 < 0 )
                goto LABEL_89;
            }
            v46 = *((_BYTE *)&Operators + 24 * v43 + 8);
            if ( (unsigned __int8)(v46 + 119) > 3u
              && (unsigned __int8)(v46 + 112) > 3u
              && BYTE1((&Operators)[3 * v43 + 1]) != (_BYTE)v18 )
            {
              v10 = 4;
            }
            if ( v46 == -121 || v46 == -115 )
              BYTE1(v54) = 1;
LABEL_89:
            if ( v45 < 0 )
LABEL_90:
              v10 = 4;
          }
          v9 = v10;
LABEL_92:
          appended = GetOperandValue(v6, v10 == 4, v18, (__int64 *)&P, &v59, v18, v18, v18, v18);
          if ( appended )
            goto LABEL_115;
          if ( BYTE1(v54) )
          {
            BYTE1(v54) = 0;
            v47 = *((_BYTE *)P + 1);
            if ( ((v47 + 7) & 0xFC) == 0 && v47 != -6 )
            {
LABEL_114:
              appended = 1336;
              goto LABEL_115;
            }
          }
          v5 = *(const void ***)v55;
          LODWORD(Sizea) = 1;
          appended = AppendCondition(*(const void ***)v55, v4, (unsigned int *)v58, (char *)P + 1, Sizea);
          if ( appended )
            goto LABEL_126;
          if ( !IsValueSizeFixed(*((_BYTE *)P + 1)) )
          {
            LODWORD(Size) = 4;
            appended = AppendCondition(v5, v4, (unsigned int *)v58, v48 + 4, Size);
            if ( appended )
              goto LABEL_126;
            v48 = (char *)P;
          }
          if ( *((_DWORD *)v48 + 1) )
          {
            LODWORD(Size) = *((_DWORD *)v48 + 1);
            appended = AppendCondition(v5, v4, (unsigned int *)v58, *((const void **)v48 + 1), Size);
            if ( appended )
              goto LABEL_126;
            v48 = (char *)P;
          }
          FreeOperandValue(v48);
          P = 0LL;
          v10 = 3;
          goto LABEL_104;
        }
        *a4 = -1;
      }
      appended = 534;
LABEL_126:
      if ( P )
        FreeOperandValue(P);
      if ( *v4 != 4 && !appended )
        return appended;
    }
    else
    {
      appended = 1336;
    }
    if ( *v5 )
    {
      ExFreePoolWithTag((PVOID)*v5, 0);
      *v5 = 0LL;
      *v4 = 0;
    }
    return appended;
  }
  return 87LL;
}
