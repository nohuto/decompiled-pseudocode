__int64 __fastcall IntPartCreate(__int64 a1, char a2, __int64 a3)
{
  char *v4; // r14
  int v5; // edi
  void *v6; // rax
  __int64 v7; // rdx
  unsigned __int8 v8; // si
  unsigned __int8 *inited; // rbx
  unsigned int v10; // r15d
  unsigned __int8 v11; // bp
  unsigned int j; // r8d
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 Pool2; // rax
  __int64 v16; // r8
  __int64 v17; // rsi
  unsigned __int8 v18; // al
  _BYTE *v19; // rcx
  unsigned __int8 v20; // r12
  unsigned int k; // ebp
  char *v22; // r13
  __int64 result; // rax
  unsigned int v24; // r8d
  unsigned int v25; // r10d
  unsigned int v26; // eax
  unsigned __int8 *v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // r10
  __int64 v30; // r9
  char *v31; // rax
  __int64 i; // r8
  __int64 v33; // rcx
  unsigned __int8 v34; // [rsp+60h] [rbp+8h] BYREF
  char v35; // [rsp+61h] [rbp+9h]
  unsigned int v36; // [rsp+70h] [rbp+18h] BYREF
  int v37; // [rsp+74h] [rbp+1Ch]
  PVOID P; // [rsp+78h] [rbp+20h]

  v37 = HIDWORD(a3);
  v35 = BYTE1(a1);
  v36 = 0;
  v34 = 0;
  v4 = 0LL;
  v5 = 0;
  v6 = (void *)IntpAllocateProcessorContext(a1, &v34);
  P = v6;
  if ( !v6 )
  {
    v5 = -1073741670;
LABEL_28:
    ExFreePoolWithTag(v4, 0x5049654Bu);
    v4 = 0LL;
    goto LABEL_24;
  }
  LOBYTE(v7) = v34;
  if ( (a2 & 1) != 0 || v34 <= 0x10u )
  {
    v8 = 1;
  }
  else
  {
    v8 = 4;
    if ( v34 <= 0x20u )
      v8 = 2;
  }
  inited = (unsigned __int8 *)IntpInitClassContext(v6, v7, &v36);
  if ( !inited )
    goto LABEL_26;
  v10 = v36;
  if ( v36 != 1 )
  {
    while ( 1 )
    {
      v24 = 255;
      v25 = -1;
      v26 = 0;
      if ( v10 )
      {
        v27 = inited + 1;
        do
        {
          v28 = *v27;
          if ( (_BYTE)v28 && v28 <= v25 )
          {
            v24 = v26;
            v25 = *v27;
          }
          ++v26;
          v27 += 24;
        }
        while ( v26 < v10 );
      }
      v29 = 3LL * v24;
      if ( v8 <= inited[24 * v24 + 1] )
        break;
      if ( v24 == v10 - 1 || (v30 = v24 + 1, (unsigned int)v30 >= v10) )
      {
LABEL_44:
        LODWORD(v30) = -1;
      }
      else
      {
        v31 = (char *)&inited[24 * v30 + 1];
        while ( !*v31 )
        {
          LODWORD(v30) = v30 + 1;
          v31 += 24;
          if ( (unsigned int)v30 >= v10 )
            goto LABEL_44;
        }
      }
      if ( v24 )
      {
        for ( i = v24 - 1; !inited[24 * i + 1]; i = (unsigned int)(i - 1) )
        {
          if ( !(_DWORD)i )
            goto LABEL_51;
        }
      }
      else
      {
LABEL_51:
        LODWORD(i) = -1;
      }
      if ( (_DWORD)v30 == -1 )
      {
        if ( (_DWORD)i == -1 )
          break;
      }
      else
      {
        if ( (_DWORD)i != -1 && inited[24 * (unsigned int)i + 1] <= inited[24 * (unsigned int)v30 + 1] )
          LODWORD(v30) = i;
        LODWORD(i) = v30;
      }
      v33 = 3LL * (unsigned int)i;
      *(_QWORD *)&inited[8 * v33 + 8] |= *(_QWORD *)&inited[8 * v29 + 8];
      inited[8 * v33 + 1] += inited[8 * v29 + 1];
      *(_QWORD *)&inited[8 * v29 + 8] = 0LL;
      inited[8 * v29 + 1] = 0;
    }
  }
  v11 = 0;
  for ( j = 0; j < v10; ++j )
  {
    v13 = inited[24 * j + 1];
    if ( (_BYTE)v13 )
    {
      v14 = v13 / v8;
      inited[24 * j + 16] = v14;
      if ( !(_BYTE)v14 )
        IntPartCriticalFailure(0x1002uLL, inited[24 * j]);
      v11 += v14;
    }
  }
  Pool2 = ExAllocatePool2(64LL, 16LL * v11 + 8, 0x5049654Bu);
  v17 = Pool2;
  v4 = (char *)Pool2;
  if ( !Pool2 || (*(_WORD *)Pool2 = 0, *(_BYTE *)(Pool2 + 2) = v11, v18 = 0, !v11) )
  {
    if ( v17 )
      goto LABEL_16;
LABEL_26:
    v5 = -1073741670;
    goto LABEL_21;
  }
  v19 = v4 + 8;
  do
  {
    *v19 = v18++;
    v19 += 16;
  }
  while ( v18 < v11 );
LABEL_16:
  v20 = 0;
  for ( k = 0; k < v10; ++k )
  {
    v22 = (char *)&inited[24 * k];
    if ( v22[1] )
    {
      LOBYTE(v16) = v22[16];
      v5 = IntpAssignProcessorsToPartitions(&inited[24 * k], v17 + 16LL * v20 + 8, v16);
      if ( v5 < 0 )
        break;
      v20 += v22[16];
    }
  }
LABEL_21:
  ExFreePoolWithTag(P, 0x5049654Bu);
  if ( inited )
    ExFreePoolWithTag(inited, 0x5049654Bu);
  if ( v5 < 0 )
    goto LABEL_28;
LABEL_24:
  result = (unsigned int)v5;
  KiInterruptPartitions = (__int64)v4;
  return result;
}
