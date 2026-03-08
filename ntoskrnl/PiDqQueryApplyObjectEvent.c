/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x1406896F4
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140688EF0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     PiDqQueryIsObjectInResultSet @ 0x140688D38 (PiDqQueryIsObjectInResultSet.c)
 *     PiDqQueryEvaluateFilter @ 0x1406CC524 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1406CDBDC (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x140747078 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x140747108 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryFreeActiveData @ 0x1407910F8 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140791164 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140791724 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqSameUserHive @ 0x140959600 (PiDqSameUserHive.c)
 */

char __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 *v3; // rsi
  __int64 *v4; // r14
  bool v7; // r15
  char v8; // r12
  char v9; // di
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // esi
  unsigned int v19; // r14d
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rdx
  const wchar_t *v23; // rcx
  const wchar_t *v24; // rdx
  __int64 v25; // rcx
  const wchar_t *v26; // rcx
  const wchar_t *v27; // rdx
  __int64 v28; // rcx
  struct _KTHREAD *v29; // rax
  bool v30; // r15
  char v31; // cl
  __int64 v32; // r8
  int v33; // ecx
  unsigned int v34; // edi
  bool v35; // r15
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v38; // r12d
  unsigned int v39; // r15d
  __int64 v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rcx
  struct _KTHREAD *v44; // rax
  struct _KTHREAD *v45; // rax
  struct _KTHREAD *v46; // rax
  unsigned int v47; // r14d
  char v48; // r15
  __int64 v49; // rsi
  const wchar_t *i; // rdi
  const wchar_t *v51; // rdi
  int v52; // ecx
  const wchar_t *v53; // rdi
  __int64 v54; // rdx
  int AddObjectToResultSet; // [rsp+34h] [rbp-1Ch]
  __int64 *v57; // [rsp+40h] [rbp-10h]
  __int64 v58; // [rsp+48h] [rbp-8h] BYREF
  __int64 v59; // [rsp+98h] [rbp+48h] BYREF
  char v60; // [rsp+A0h] [rbp+50h] BYREF
  bool IsObjectInResultSet; // [rsp+A8h] [rbp+58h]

  v2 = *(_DWORD *)(a2 + 4);
  v3 = (__int64 *)(a1 + 64);
  v4 = (__int64 *)(a2 + 8);
  AddObjectToResultSet = 0;
  v58 = 0LL;
  IsObjectInResultSet = 0;
  v7 = 0;
  v60 = 0;
  v8 = 0;
  v57 = (__int64 *)(a2 + 8);
  v9 = 0;
  if ( (v2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    IsObjectInResultSet = PiDqQueryIsObjectInResultSet(a1, *v4);
    v7 = IsObjectInResultSet;
    ExReleasePushLockEx(v3, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    v57 = (__int64 *)(a2 + 8);
  }
  LODWORD(v10) = *(_DWORD *)(a2 + 4);
  if ( (v10 & 1) != 0 && !v7 || (v10 & 2) != 0 || (v10 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
  {
LABEL_42:
    if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
    {
      v30 = IsObjectInResultSet;
    }
    else
    {
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
      v30 = PiDqQueryIsObjectInResultSet(a1, *(_QWORD *)(a2 + 8));
      ExReleasePushLockEx(v3, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    LODWORD(v10) = *(_DWORD *)(a2 + 4);
    if ( (v10 & 2) != 0 )
    {
      if ( !v30 )
      {
        v34 = 0;
        v35 = 0;
        goto LABEL_65;
      }
      goto LABEL_94;
    }
    if ( (v10 & 1) == 0 && !v9 )
    {
      v31 = v30;
      goto LABEL_61;
    }
    v32 = *(_QWORD *)(a1 + 24);
    v33 = *(_DWORD *)(v32 + 20);
    if ( v33 )
    {
      v52 = v33 - 1;
      if ( v52 )
      {
        if ( v52 != 1 )
          goto LABEL_62;
        v31 = 0;
        v53 = *(const wchar_t **)(v32 + 32);
        LOBYTE(v59) = 0;
        if ( !*v53 )
          goto LABEL_62;
        LOBYTE(v10) = 0;
        while ( !(_BYTE)v10 )
        {
          v31 = wcsicmp(v53, *(const wchar_t **)(*v4 + 16)) == 0;
          v54 = -1LL;
          LOBYTE(v10) = v31;
          LOBYTE(v59) = v31;
          do
            ++v54;
          while ( v53[v54] );
          v53 += v54 + 1;
          if ( !*v53 )
            goto LABEL_50;
        }
      }
      else
      {
        v31 = wcsicmp(*(const wchar_t **)(v32 + 24), *(const wchar_t **)(*v4 + 16)) == 0;
        LOBYTE(v59) = v31;
        LOBYTE(v10) = v31;
LABEL_50:
        if ( !(_BYTE)v10 )
          goto LABEL_62;
      }
    }
    else
    {
      v31 = 1;
      LOBYTE(v59) = 1;
    }
    v10 = *(_QWORD *)(a1 + 24);
    if ( !*(_DWORD *)(v10 + 20) )
    {
      LODWORD(v10) = PiPnpRtlApplyMandatoryFilters(
                       PiPnpRtlCtx,
                       *(_QWORD *)(*v4 + 16),
                       *(_DWORD *)(*v4 + 28),
                       0,
                       (int)a1 + 32,
                       (__int64)&v59);
      AddObjectToResultSet = v10;
      if ( (_DWORD)v10 == -1073741772 || (_DWORD)v10 == -1073741275 )
      {
        v31 = 0;
        AddObjectToResultSet = 0;
        LOBYTE(v59) = 0;
      }
      else
      {
        if ( (int)v10 < 0 )
          goto LABEL_96;
        v31 = v59;
      }
    }
    if ( v31 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v10 + 88) )
      {
        LODWORD(v10) = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(*v4 + 16), &v59);
        AddObjectToResultSet = v10;
        if ( (_DWORD)v10 == -1073741772 )
        {
          v31 = 0;
          AddObjectToResultSet = 0;
        }
        else
        {
          if ( (int)v10 < 0 )
            goto LABEL_96;
          v31 = v59;
        }
      }
LABEL_61:
      if ( v31 )
      {
        if ( v30 )
        {
          v34 = 2;
          v35 = v8 != 0;
          goto LABEL_65;
        }
        v44 = KeGetCurrentThread();
        v34 = 1;
        --v44->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
        AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *v4);
        ExReleasePushLockEx(v3, 0LL);
        LOBYTE(v10) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_64:
        v35 = v34;
LABEL_65:
        if ( AddObjectToResultSet >= 0 )
        {
          if ( !v35 )
            return v10;
          if ( (int)PiDqQueryActionQueueEntryCreate(v34, *v4, a2, &v58) >= 0 )
          {
            v36 = KeGetCurrentThread();
            --v36->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
            PiDqQueryAppendActionEntry(a1, v58);
LABEL_69:
            ExReleasePushLockEx(v3, 0LL);
            LOBYTE(v10) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            return v10;
          }
        }
LABEL_96:
        v46 = KeGetCurrentThread();
        --v46->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
        *(_DWORD *)(a1 + 216) |= 1u;
        PiDqQueryFreeActiveData(a1);
        goto LABEL_69;
      }
    }
LABEL_62:
    if ( !v30 )
    {
      v34 = 0;
      goto LABEL_64;
    }
LABEL_94:
    v45 = KeGetCurrentThread();
    v35 = 1;
    v34 = 3;
    --v45->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    PiDqQueryDeleteObjectFromResultSet(a1, *v4);
    ExReleasePushLockEx(v3, 0LL);
    LOBYTE(v10) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_65;
  }
  if ( (v10 & 4) != 0 )
  {
    LODWORD(v10) = PiDqSameUserHive(a1 + 32, a2 + 24, &v60);
    AddObjectToResultSet = v10;
    if ( (int)v10 < 0 )
      goto LABEL_96;
  }
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_DWORD *)(v11 + 40) & 4;
  if ( (*(_DWORD *)(v11 + 40) & 2) != 0 )
  {
    if ( v12 )
    {
      v47 = 0;
      if ( *(_DWORD *)(a2 + 76) )
      {
        v48 = v60;
        do
        {
          v49 = 32LL * v47;
          if ( *(_DWORD *)(v49 + a2 + 100) != 1 || v48 )
          {
            if ( !*(_QWORD *)(v49 + a2 + 104) )
              goto LABEL_75;
            v10 = *(_QWORD *)(a1 + 24);
            for ( i = *(const wchar_t **)(v10 + 56); *i; i += v10 + 1 )
            {
              LODWORD(v10) = wcsicmp(*(const wchar_t **)(v49 + a2 + 104), i);
              if ( !(_DWORD)v10 )
                goto LABEL_75;
              v10 = -1LL;
              do
                ++v10;
              while ( i[v10] );
            }
          }
          ++v47;
        }
        while ( v47 < *(_DWORD *)(a2 + 76) );
      }
    }
    else
    {
LABEL_75:
      LOBYTE(v59) = 1;
LABEL_76:
      v8 = v59;
    }
  }
  else
  {
    LODWORD(v10) = *(_DWORD *)(v11 + 64);
    if ( v12 )
    {
      v38 = 0;
      if ( (_DWORD)v10 )
      {
        while ( 1 )
        {
          v39 = 0;
          v40 = *(_QWORD *)(v11 + 72) + 32LL * v38;
          LOBYTE(v59) = 0;
          if ( *(_DWORD *)(a2 + 76) )
            break;
LABEL_82:
          v11 = *(_QWORD *)(a1 + 24);
          if ( ++v38 >= *(_DWORD *)(v11 + 64) )
            goto LABEL_76;
        }
        while ( 1 )
        {
          v41 = 32LL * v39;
          LOBYTE(v59) = 0;
          LODWORD(v10) = *(_DWORD *)(v41 + a2 + 96);
          if ( *(_DWORD *)(v40 + 16) == (_DWORD)v10 )
          {
            v42 = *(_QWORD *)v40;
            LOBYTE(v59) = 0;
            v43 = v42 - *(_QWORD *)(v41 + a2 + 80);
            if ( !v43 )
              v43 = *(_QWORD *)(v40 + 8) - *(_QWORD *)(v41 + a2 + 88);
            if ( !v43 )
            {
              LODWORD(v10) = *(_DWORD *)(v41 + a2 + 100);
              LOBYTE(v59) = 0;
              if ( *(_DWORD *)(v40 + 20) == (_DWORD)v10 )
              {
                if ( (_DWORD)v10 != 1 || (LOBYTE(v59) = 0, v60) )
                {
                  if ( !*(_QWORD *)(v41 + a2 + 104) )
                    goto LABEL_92;
                  v10 = *(_QWORD *)(a1 + 24);
                  LOBYTE(v59) = 0;
                  v51 = *(const wchar_t **)(v10 + 56);
                  if ( *v51 )
                    break;
                }
              }
            }
          }
LABEL_81:
          if ( ++v39 >= *(_DWORD *)(a2 + 76) )
            goto LABEL_82;
        }
        while ( 1 )
        {
          LODWORD(v10) = wcsicmp(*(const wchar_t **)(v41 + a2 + 104), v51);
          if ( !(_DWORD)v10 )
            break;
          v10 = -1LL;
          do
            ++v10;
          while ( v51[v10] );
          v51 += v10 + 1;
          if ( !*v51 )
          {
            LOBYTE(v59) = 0;
            goto LABEL_81;
          }
        }
LABEL_92:
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v13 = 0;
      if ( (_DWORD)v10 )
      {
        do
        {
          v14 = 0;
          v15 = *(_QWORD *)(v11 + 72) + 32LL * v13;
          if ( *(_DWORD *)(a2 + 76) )
          {
            while ( 1 )
            {
              v16 = 32LL * v14;
              LODWORD(v10) = *(_DWORD *)(v16 + a2 + 96);
              if ( *(_DWORD *)(v15 + 16) == (_DWORD)v10 )
              {
                v25 = *(_QWORD *)v15 - *(_QWORD *)(v16 + a2 + 80);
                if ( *(_QWORD *)v15 == *(_QWORD *)(v16 + a2 + 80) )
                  v25 = *(_QWORD *)(v15 + 8) - *(_QWORD *)(v16 + a2 + 88);
                if ( !v25 )
                {
                  LODWORD(v10) = *(_DWORD *)(v16 + a2 + 100);
                  if ( *(_DWORD *)(v15 + 20) == (_DWORD)v10 )
                  {
                    v26 = *(const wchar_t **)(v15 + 24);
                    v27 = *(const wchar_t **)(v16 + a2 + 104);
                    if ( v26 == v27 || v26 && v27 && (LODWORD(v10) = wcsicmp(v26, v27), !(_DWORD)v10) )
                    {
                      if ( *(_DWORD *)(v16 + a2 + 100) != 1 || v60 )
                        break;
                    }
                  }
                }
              }
              if ( ++v14 >= *(_DWORD *)(a2 + 76) )
                goto LABEL_14;
            }
            v8 = 1;
          }
LABEL_14:
          v11 = *(_QWORD *)(a1 + 24);
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v11 + 64) );
      }
    }
  }
  v17 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v17 + 20) && (LODWORD(v10) = *(_DWORD *)(a2 + 4), (v10 & 8) != 0) )
  {
LABEL_26:
    v9 = 1;
  }
  else
  {
    v18 = 0;
LABEL_18:
    while ( 1 )
    {
      v9 = 0;
      if ( v18 >= *(_DWORD *)(a2 + 76) )
        break;
      v19 = 0;
      v20 = 32LL * v18;
      if ( *(_DWORD *)(v17 + 80) )
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(v17 + 88);
          v22 = 56LL * v19;
          LODWORD(v10) = *(_DWORD *)(v20 + a2 + 96);
          if ( *(_DWORD *)(v22 + v21 + 24) == (_DWORD)v10 )
          {
            v28 = *(_QWORD *)(v22 + v21 + 8) - *(_QWORD *)(v20 + a2 + 80);
            if ( !v28 )
              v28 = *(_QWORD *)(v22 + v21 + 16) - *(_QWORD *)(v20 + a2 + 88);
            if ( !v28 )
            {
              LODWORD(v10) = *(_DWORD *)(v20 + a2 + 100);
              if ( *(_DWORD *)(v22 + v21 + 28) == (_DWORD)v10 )
              {
                v23 = *(const wchar_t **)(v22 + v21 + 32);
                v24 = *(const wchar_t **)(v20 + a2 + 104);
                if ( v23 == v24 || v23 && v24 && (LODWORD(v10) = wcsicmp(v23, v24), !(_DWORD)v10) )
                {
                  if ( *(_DWORD *)(v20 + a2 + 100) != 1 || v60 )
                    goto LABEL_26;
                }
              }
            }
          }
          v17 = *(_QWORD *)(a1 + 24);
          if ( ++v19 >= *(_DWORD *)(v17 + 80) )
          {
            ++v18;
            goto LABEL_18;
          }
        }
      }
      ++v18;
    }
  }
  if ( v8 || v9 )
  {
    v4 = v57;
    v3 = (__int64 *)(a1 + 64);
    goto LABEL_42;
  }
  return v10;
}
