/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x140762AE4
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140762740 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     RtlLookupElementGenericTableAvl @ 0x14032D970 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x1403D19D0 (_wcsicmp.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14069FF88 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406A73D4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryFreeActiveData @ 0x1406A74F8 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1406A8988 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1406A8A14 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x1406AC504 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1406AD0D8 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqSameUserHive @ 0x1408A4C18 (PiDqSameUserHive.c)
 */

char __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int AddObjectToResultSet; // r13d
  char v8; // si
  char v9; // r10
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rcx
  unsigned int v20; // r12d
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rdx
  bool v24; // zf
  struct _KTHREAD *CurrentThread; // rax
  bool v26; // r12
  char v27; // cl
  bool v28; // di
  int v29; // esi
  struct _KTHREAD *v30; // rax
  __int64 v31; // rcx
  const wchar_t *v32; // rcx
  const wchar_t *v33; // rdx
  __int64 v34; // rcx
  const wchar_t *v35; // rcx
  const wchar_t *v36; // rdx
  unsigned int v37; // r13d
  unsigned int v38; // r12d
  __int64 v39; // r15
  __int64 v40; // rdi
  __int64 v41; // r8
  int v42; // ecx
  __int64 v43; // rcx
  int v44; // eax
  struct _KTHREAD *v45; // rax
  struct _KTHREAD *v46; // rax
  unsigned int v47; // r15d
  __int64 v48; // rsi
  const wchar_t *i; // rdi
  __int64 v50; // rax
  const wchar_t *v51; // rsi
  __int64 v52; // rax
  int v53; // ecx
  const wchar_t *v54; // rdi
  __int64 v55; // rdx
  struct _KTHREAD *v56; // rax
  __int64 *v58; // [rsp+38h] [rbp-18h] BYREF
  __int64 Buffer; // [rsp+40h] [rbp-10h] BYREF
  char v60; // [rsp+98h] [rbp+48h]
  __int64 v61; // [rsp+A0h] [rbp+50h] BYREF
  char v62; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  LODWORD(v61) = 0;
  v58 = 0LL;
  AddObjectToResultSet = 0;
  v60 = 0;
  LOBYTE(a4) = 0;
  v62 = 0;
  v8 = 0;
  v9 = 0;
  if ( (v4 & 3) != 0 || (v4 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
    goto LABEL_25;
  if ( (v4 & 4) != 0 )
  {
    LODWORD(v61) = PiDqSameUserHive(a1 + 32, a2 + 24, &v62, a4);
    if ( (int)v61 < 0 )
      goto LABEL_139;
    v9 = v62;
    LOBYTE(a4) = 0;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_DWORD *)(v10 + 40) & 4;
  if ( (*(_DWORD *)(v10 + 40) & 2) != 0 )
  {
    if ( !v11 )
    {
LABEL_52:
      LOBYTE(AddObjectToResultSet) = 1;
      v60 = 1;
      goto LABEL_13;
    }
    v47 = 0;
    if ( !*(_DWORD *)(a2 + 76) )
      goto LABEL_36;
    while ( 1 )
    {
      v48 = 32LL * v47;
      if ( *(_DWORD *)(v48 + a2 + 100) != 1 || v9 )
      {
        if ( !*(_QWORD *)(v48 + a2 + 104) )
          goto LABEL_52;
        for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v50 + 1 )
        {
          if ( !wcsicmp(*(const wchar_t **)(v48 + a2 + 104), i) )
            goto LABEL_52;
          v50 = -1LL;
          do
            ++v50;
          while ( i[v50] );
        }
      }
      if ( ++v47 >= *(_DWORD *)(a2 + 76) )
        break;
      v9 = v62;
    }
  }
  else
  {
    v12 = *(_DWORD *)(v10 + 64);
    if ( !v11 )
    {
      v13 = 0;
      if ( v12 )
      {
        do
        {
          v14 = 0;
          v15 = *(_QWORD *)(v10 + 72) + 32LL * v13;
          if ( *(_DWORD *)(a2 + 76) )
          {
            while ( 1 )
            {
              v16 = 32LL * v14;
              if ( *(_DWORD *)(v15 + 16) == *(_DWORD *)(v16 + a2 + 96) )
              {
                v31 = *(_QWORD *)v15 - *(_QWORD *)(v16 + a2 + 80);
                if ( *(_QWORD *)v15 == *(_QWORD *)(v16 + a2 + 80) )
                  v31 = *(_QWORD *)(v15 + 8) - *(_QWORD *)(v16 + a2 + 88);
                if ( !v31 && *(_DWORD *)(v15 + 20) == *(_DWORD *)(v16 + a2 + 100) )
                {
                  v32 = *(const wchar_t **)(v15 + 24);
                  v33 = *(const wchar_t **)(v16 + a2 + 104);
                  if ( (v32 == v33 || v32 && v33 && !wcsicmp(v32, v33)) && (*(_DWORD *)(v16 + a2 + 100) != 1 || v62) )
                    break;
                }
              }
              if ( ++v14 >= *(_DWORD *)(a2 + 76) )
                goto LABEL_11;
            }
            LOBYTE(AddObjectToResultSet) = 1;
            v60 = 1;
          }
          else
          {
LABEL_11:
            LOBYTE(AddObjectToResultSet) = v60;
          }
          v10 = *(_QWORD *)(a1 + 24);
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v10 + 64) );
        goto LABEL_13;
      }
LABEL_36:
      LOBYTE(AddObjectToResultSet) = 0;
      goto LABEL_13;
    }
    v37 = 0;
    if ( !v12 )
      goto LABEL_36;
    while ( 1 )
    {
      v38 = 0;
      v39 = *(_QWORD *)(v10 + 72) + 32LL * v37;
      if ( *(_DWORD *)(a2 + 76) )
        break;
LABEL_57:
      v10 = *(_QWORD *)(a1 + 24);
      if ( ++v37 >= *(_DWORD *)(v10 + 64) )
        goto LABEL_74;
      v9 = v62;
    }
    while ( 1 )
    {
      v40 = 32LL * v38;
      if ( *(_DWORD *)(v39 + 16) == *(_DWORD *)(v40 + a2 + 96) )
      {
        v43 = *(_QWORD *)v39 - *(_QWORD *)(v40 + a2 + 80);
        if ( *(_QWORD *)v39 == *(_QWORD *)(v40 + a2 + 80) )
          v43 = *(_QWORD *)(v39 + 8) - *(_QWORD *)(v40 + a2 + 88);
        if ( !v43 )
        {
          v44 = *(_DWORD *)(v40 + a2 + 100);
          if ( *(_DWORD *)(v39 + 20) == v44 && (v44 != 1 || v9) )
          {
            if ( !*(_QWORD *)(v40 + a2 + 104) )
              goto LABEL_52;
            v51 = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL);
            if ( *v51 )
            {
              while ( wcsicmp(*(const wchar_t **)(v40 + a2 + 104), v51) )
              {
                v52 = -1LL;
                do
                  ++v52;
                while ( v51[v52] );
                v51 += v52 + 1;
                if ( !*v51 )
                {
                  LOBYTE(a4) = v60;
                  goto LABEL_112;
                }
              }
              LOBYTE(a4) = 1;
              v60 = 1;
            }
LABEL_112:
            if ( (_BYTE)a4 )
              break;
          }
        }
      }
      v9 = v62;
      if ( ++v38 >= *(_DWORD *)(a2 + 76) )
        goto LABEL_57;
    }
LABEL_74:
    LOBYTE(AddObjectToResultSet) = v60;
  }
LABEL_13:
  v17 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v17 + 20) && (LODWORD(v17) = *(_DWORD *)(a2 + 4), (v17 & 8) != 0) )
  {
    v8 = 1;
  }
  else
  {
    v18 = 0;
    v8 = 0;
    do
    {
      if ( v18 >= *(_DWORD *)(a2 + 76) )
        break;
      v19 = *(_QWORD *)(a1 + 24);
      v20 = 0;
      v21 = 32LL * v18;
      if ( *(_DWORD *)(v19 + 80) )
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)(v19 + 88);
          v23 = 56LL * v20;
          LODWORD(v17) = *(_DWORD *)(v21 + a2 + 96);
          if ( *(_DWORD *)(v23 + v22 + 24) == (_DWORD)v17 )
          {
            v34 = *(_QWORD *)(v23 + v22 + 8) - *(_QWORD *)(v21 + a2 + 80);
            if ( !v34 )
              v34 = *(_QWORD *)(v23 + v22 + 16) - *(_QWORD *)(v21 + a2 + 88);
            if ( !v34 )
            {
              LODWORD(v17) = *(_DWORD *)(v21 + a2 + 100);
              if ( *(_DWORD *)(v23 + v22 + 28) == (_DWORD)v17 )
              {
                v35 = *(const wchar_t **)(v23 + v22 + 32);
                v36 = *(const wchar_t **)(v21 + a2 + 104);
                if ( v35 == v36 || v35 && v36 && (LODWORD(v17) = wcsicmp(v35, v36), !(_DWORD)v17) )
                {
                  if ( *(_DWORD *)(v21 + a2 + 100) != 1 || v62 )
                    break;
                }
              }
            }
          }
          v19 = *(_QWORD *)(a1 + 24);
          if ( ++v20 >= *(_DWORD *)(v19 + 80) )
            goto LABEL_20;
        }
        v8 = 1;
      }
LABEL_20:
      ++v18;
    }
    while ( !v8 );
  }
  v24 = (_BYTE)AddObjectToResultSet == 0;
  AddObjectToResultSet = v61;
  if ( v24 && !v8 )
  {
LABEL_23:
    if ( AddObjectToResultSet >= 0 )
      return v17;
    goto LABEL_139;
  }
LABEL_25:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  Buffer = *(_QWORD *)(a2 + 8);
  v26 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
  ExReleasePushLockEx(a1 + 64, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  LODWORD(v17) = *(_DWORD *)(a2 + 4);
  if ( (v17 & 2) != 0 )
  {
    if ( !v26 )
    {
      v28 = 0;
      v29 = 0;
      goto LABEL_32;
    }
LABEL_87:
    v45 = KeGetCurrentThread();
    v29 = 3;
    v28 = 1;
    --v45->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    PiDqQueryDeleteObjectFromResultSet(a1, *(void **)(a2 + 8));
    ExReleasePushLockEx(a1 + 64, 0LL);
    LOBYTE(v17) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_32;
  }
  if ( (v17 & 1) == 0 && !v8 )
  {
    v27 = v26;
    goto LABEL_29;
  }
  v41 = *(_QWORD *)(a1 + 24);
  v42 = *(_DWORD *)(v41 + 20);
  if ( !v42 )
  {
    v27 = 1;
LABEL_61:
    LOBYTE(v17) = v27;
    LOBYTE(v61) = v27;
LABEL_62:
    if ( !(_BYTE)v17 )
      goto LABEL_30;
    goto LABEL_63;
  }
  v53 = v42 - 1;
  if ( !v53 )
  {
    v27 = wcsicmp(*(const wchar_t **)(v41 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
    goto LABEL_61;
  }
  if ( v53 != 1 )
    goto LABEL_30;
  v54 = *(const wchar_t **)(v41 + 32);
  v27 = 0;
  LOBYTE(v61) = 0;
  if ( !*v54 )
    goto LABEL_30;
  LOBYTE(v17) = 0;
  while ( !(_BYTE)v17 )
  {
    v27 = wcsicmp(v54, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
    v55 = -1LL;
    LOBYTE(v17) = v27;
    LOBYTE(v61) = v27;
    do
      ++v55;
    while ( v54[v55] );
    v54 += v55 + 1;
    if ( !*v54 )
      goto LABEL_62;
  }
LABEL_63:
  v17 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v17 + 20) )
  {
    LODWORD(v17) = PiPnpRtlApplyMandatoryFilters(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL),
                     *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL),
                     0LL,
                     (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32),
                     &v61);
    AddObjectToResultSet = v17;
    if ( (_DWORD)v17 == -1073741772 || (_DWORD)v17 == -1073741275 )
    {
      v27 = 0;
      AddObjectToResultSet = 0;
      LOBYTE(v61) = 0;
    }
    else
    {
      v27 = v61;
    }
    if ( AddObjectToResultSet < 0 )
      goto LABEL_139;
  }
  if ( !v27 )
    goto LABEL_30;
  v17 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v17 + 88) )
  {
    LODWORD(v17) = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), (bool *)&v61);
    AddObjectToResultSet = v17;
    if ( (_DWORD)v17 == -1073741772 )
    {
      v27 = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      v27 = v61;
    }
    if ( AddObjectToResultSet < 0 )
      goto LABEL_139;
  }
LABEL_29:
  if ( v27 )
  {
    if ( v26 )
    {
      v29 = 2;
      v28 = v60 != 0;
    }
    else
    {
      v46 = KeGetCurrentThread();
      v29 = 1;
      --v46->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *(_QWORD *)(a2 + 8));
      ExReleasePushLockEx(a1 + 64, 0LL);
      LOBYTE(v17) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v28 = 1;
    }
    goto LABEL_32;
  }
LABEL_30:
  if ( v26 )
    goto LABEL_87;
  v28 = 0;
  v29 = 0;
LABEL_32:
  if ( AddObjectToResultSet >= 0 )
  {
    if ( !v28 )
      goto LABEL_23;
    AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(
                             v29,
                             *(_QWORD *)(a2 + 8),
                             (volatile signed __int32 *)a2,
                             &v58);
    if ( AddObjectToResultSet >= 0 )
    {
      v30 = KeGetCurrentThread();
      --v30->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      PiDqQueryAppendActionEntry(a1, v58);
      ExReleasePushLockEx(a1 + 64, 0LL);
      LOBYTE(v17) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_23;
    }
  }
LABEL_139:
  v56 = KeGetCurrentThread();
  --v56->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  *(_DWORD *)(a1 + 216) |= 1u;
  PiDqQueryFreeActiveData(a1);
  ExReleasePushLockEx(a1 + 64, 0LL);
  LOBYTE(v17) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v17;
}
