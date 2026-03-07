__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, _QWORD *a2, int *a3, unsigned int *a4)
{
  size_t v4; // r15
  int v5; // edi
  unsigned int v9; // ebx
  __int64 v10; // rbp
  unsigned int i; // edx
  __int64 v12; // r13
  __int64 *v13; // r8
  __int64 v14; // rcx
  __int64 (**MetaProviderContext)[2]; // rax
  _QWORD *GuidEntryByGuid; // rbp
  unsigned int *v17; // r14
  struct _KTHREAD *v18; // rax
  __int64 *v19; // rdx
  __int64 *v20; // r8
  unsigned int v21; // eax
  _DWORD *v22; // r10
  char v23; // cl
  unsigned int v24; // r12d
  _BYTE *v25; // r11
  int v26; // r13d
  char *v27; // r9
  __int64 *v28; // r14
  unsigned int j; // r12d
  __int64 v30; // r11
  __int64 v31; // r14
  int v32; // ecx
  int v33; // r12d
  unsigned int v35; // eax
  _DWORD *v36; // rbp
  unsigned int v37; // r12d
  unsigned __int8 *v38; // r13
  unsigned int v39; // ebx
  __int64 *v40; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v42; // r8
  int *v43; // rsi
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // ecx
  _DWORD *v47; // rdx
  unsigned int v48; // r11d
  _OWORD *v49; // r8
  int v50; // r10d
  unsigned int k; // r9d
  __int64 v52; // rax
  unsigned int v53; // eax
  _DWORD *v54; // rdx
  char *v55; // rcx
  __int64 v56; // rcx
  unsigned int v57; // [rsp+20h] [rbp-58h]
  unsigned int *v58; // [rsp+28h] [rbp-50h]
  __int64 v59; // [rsp+80h] [rbp+8h] BYREF
  int *v60; // [rsp+90h] [rbp+18h]
  unsigned int *v61; // [rsp+98h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  v4 = *a4;
  v5 = 0;
  LODWORD(v59) = 0;
  v9 = 8;
  if ( a1 == EtwpHostSiloState )
    v10 = 2147353472LL;
  else
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1320LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v12 = 2LL * i;
    v13 = (__int64 *)(&EtwpUmglProviders)[2 * i];
    v14 = *v13 - *a2;
    if ( *v13 == *a2 )
      v14 = v13[1] - a2[1];
    if ( !v14 )
    {
      memset(a3, 0, v4);
      v56 = LOBYTE((&EtwpUmglProviders)[v12 + 1]);
      v39 = 24;
      if ( *(_BYTE *)(v10 + 2 * v56) )
      {
        v39 = 56;
        if ( (unsigned int)v4 < 0x38 )
          goto LABEL_85;
        a3[3] = 1;
        a3[6] = 1;
        *((_WORD *)a3 + 15) = *(unsigned __int8 *)(v10 + 2 * v56);
        *((_QWORD *)a3 + 5) = *(unsigned __int8 *)(v10 + 2 * v56 + 1);
      }
      else
      {
        if ( (unsigned int)v4 < 0x18 )
          goto LABEL_85;
        a3[3] = 0;
      }
      *a3 = 1;
      a3[5] = 1;
      a3[4] = 0;
      a3[2] = 0;
      goto LABEL_86;
    }
  }
  MetaProviderContext = EtwpGetMetaProviderContext(a2);
  if ( MetaProviderContext )
  {
    v59 = 0LL;
    v36 = a3 + 6;
    v37 = 0;
    v38 = (unsigned __int8 *)(a1 + 4232);
    v39 = 24;
    v40 = (__int64 *)MetaProviderContext;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v58 = EtwpAcquireLoggerContextByLoggerId(a1, *v38, 1);
      if ( v58 )
      {
        EtwpMapMetaProviderKeywords(v40, 32LL * v37 + a1 + 4284, &v59);
        v42 = v59;
        if ( v59 )
        {
          ++v5;
          v39 += 32;
          if ( v39 <= (unsigned int)v4 )
          {
            *v36 = 1;
            *((_QWORD *)v36 + 2) = v42;
            *((_WORD *)v36 + 3) = *v38;
            v36 += 8;
          }
        }
        EtwpReleaseLoggerContext(v58, 1);
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ++v37;
      v38 += 2;
    }
    while ( v37 < 8 );
    v43 = v60;
    v60[2] = 0;
    v43[3] = v5;
    v5 = 0;
    if ( v39 <= (unsigned int)v4 )
    {
      *v43 = 1;
LABEL_86:
      *v61 = v39;
      return (unsigned int)v5;
    }
LABEL_85:
    v5 = -1073741789;
    goto LABEL_86;
  }
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 0);
  if ( GuidEntryByGuid )
  {
    v17 = v61;
    memset(a3, 0, *v61);
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    v19 = GuidEntryByGuid + 7;
    v20 = (__int64 *)GuidEntryByGuid[7];
    GuidEntryByGuid[52] = KeGetCurrentThread();
    if ( v20 != GuidEntryByGuid + 7 )
    {
      while ( 1 )
      {
        v21 = v9 + 16;
        v22 = (int *)((char *)a3 + v9);
        v57 = v9;
        v23 = 0;
        v24 = v9;
        if ( v9 + 16 < v9 )
        {
LABEL_63:
          v5 = -2147483643;
          v9 = -1;
          GuidEntryByGuid[52] = 0LL;
          ExReleasePushLockEx(GuidEntryByGuid + 51, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v17 = v61;
          v33 = v59;
          goto LABEL_29;
        }
        LODWORD(v59) = v59 + 1;
        v25 = (char *)v20 + 98;
        v26 = 0;
        v27 = (char *)a3 + v21;
        v9 += 16;
        v28 = v20;
        if ( (*((_BYTE *)v20 + 98) & 8) == 0 )
          break;
        v23 = 1;
        if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) == 0 )
          goto LABEL_21;
        v44 = v21 + 32;
        v26 = 1;
        if ( v44 < v9 )
          goto LABEL_63;
        v9 = v44;
        if ( v44 <= (unsigned int)v4 )
        {
          *(_DWORD *)v27 = 1;
          v27[4] = *((_BYTE *)GuidEntryByGuid + 90);
          *((_QWORD *)v27 + 2) = GuidEntryByGuid[10];
          *((_WORD *)v27 + 3) = *((_WORD *)GuidEntryByGuid + 44);
          v20 = (__int64 *)*v20;
LABEL_54:
          v22[3] = 1;
LABEL_23:
          if ( (*v25 & 2) != 0 )
            v32 = *(_DWORD *)(v28[10] + 1088);
          else
            v32 = 0;
          v22[2] = v32;
          v22[1] = v26;
          if ( v20 == v19 )
          {
            *v22 = 0;
LABEL_27:
            v17 = v61;
            goto LABEL_28;
          }
          *v22 = v9 - v24;
        }
        else
        {
LABEL_21:
          v20 = (__int64 *)*v20;
          if ( v9 <= (unsigned int)v4 )
          {
            if ( !v23 )
              goto LABEL_23;
            goto LABEL_54;
          }
          if ( v20 == v19 )
            goto LABEL_27;
        }
      }
      if ( *((_BYTE *)v20 + 100) || *((_BYTE *)v20 + 101) )
      {
        for ( j = 0; j < 8; ++j )
        {
          v30 = 4 * (j + 4LL);
          if ( LODWORD(GuidEntryByGuid[v30]) && ((unsigned __int8)(1 << j) & *((_BYTE *)v20 + 100)) != 0 )
          {
            ++v26;
            v45 = v9 + 32;
            if ( v9 + 32 < v9 )
              goto LABEL_63;
            v9 += 32;
            if ( v45 <= (unsigned int)v4 )
            {
              *(_OWORD *)v27 = *(_OWORD *)&GuidEntryByGuid[v30];
              *((_OWORD *)v27 + 1) = *(_OWORD *)&GuidEntryByGuid[v30 + 2];
              v27 += 32;
            }
          }
          v31 = v20[5];
          if ( v31 && *(_DWORD *)(v30 * 8 + v31) && ((unsigned __int8)(1 << j) & *((_BYTE *)v20 + 101)) != 0 )
          {
            ++v26;
            v35 = v9 + 32;
            if ( v9 + 32 < v9 )
              goto LABEL_63;
            v9 += 32;
            if ( v35 <= (unsigned int)v4 )
            {
              *(_OWORD *)v27 = *(_OWORD *)(v30 * 8 + v31);
              *((_OWORD *)v27 + 1) = *(_OWORD *)(v30 * 8 + v31 + 16);
              v27 += 32;
            }
          }
        }
        v25 = (char *)v20 + 98;
        v19 = GuidEntryByGuid + 7;
        v24 = v57;
        v23 = 0;
        v28 = v20;
      }
      goto LABEL_21;
    }
LABEL_28:
    GuidEntryByGuid[52] = 0LL;
    ExReleasePushLockEx(GuidEntryByGuid + 51, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v33 = v59;
    if ( !(_DWORD)v59 )
    {
      v46 = v9 + 16;
      v47 = (int *)((char *)a3 + v9);
      v33 = 2;
      if ( v9 + 16 < v9 )
        goto LABEL_78;
      v48 = v9 + 48;
      v49 = (_OWORD *)((char *)a3 + v46);
      v50 = 0;
      for ( k = 0; k < 8; ++k )
      {
        v52 = 4 * (k + 4LL);
        if ( LODWORD(GuidEntryByGuid[v52]) )
        {
          ++v50;
          if ( v48 < v46 )
            goto LABEL_78;
          v46 += 32;
          v48 += 32;
          if ( v46 <= (unsigned int)v4 )
          {
            *v49 = *(_OWORD *)&GuidEntryByGuid[v52];
            v49[1] = *(_OWORD *)&GuidEntryByGuid[v52 + 2];
            v49 += 2;
          }
        }
      }
      if ( v46 <= (unsigned int)v4 )
      {
        v47[2] = 0;
        v47[1] = v50;
        *v47 = v46 - v9;
        v47[3] = 2;
      }
      v53 = v46 + 16;
      v54 = (int *)((char *)a3 + v46);
      if ( v46 + 16 < v46 || (v9 = v46 + 48, v55 = (char *)a3 + v53, v53 + 32 < v53) )
      {
LABEL_78:
        v5 = -2147483643;
        v9 = -1;
      }
      else if ( v9 <= (unsigned int)v4 )
      {
        v54[2] = 0;
        v54[1] = 0;
        *v54 = 0;
        v54[3] = 3;
        *(_DWORD *)v55 = *((_BYTE *)GuidEntryByGuid + 91) & 1;
        if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) != 0 )
        {
          v54[1] = 1;
          v55[4] = *((_BYTE *)GuidEntryByGuid + 90);
          *((_QWORD *)v55 + 2) = GuidEntryByGuid[10];
          *((_WORD *)v55 + 3) = *((_WORD *)GuidEntryByGuid + 44);
        }
      }
    }
LABEL_29:
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
    if ( v5 >= 0 )
    {
      if ( v9 > (unsigned int)v4 )
        v5 = -1073741789;
      else
        *a3 = v33;
    }
    *v17 = v9;
    return (unsigned int)v5;
  }
  return 3221226133LL;
}
