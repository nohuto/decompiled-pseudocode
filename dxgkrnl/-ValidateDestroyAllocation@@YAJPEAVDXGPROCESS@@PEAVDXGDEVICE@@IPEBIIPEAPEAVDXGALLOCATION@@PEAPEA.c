__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        struct DXGALLOCATION **a6,
        struct _EX_RUNDOWN_REF **a7)
{
  char *v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // r15
  __int64 v14; // r13
  struct DXGALLOCATION **v15; // r12
  _QWORD *v16; // rdx
  const unsigned int *v17; // rax
  unsigned int *v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // r8
  int v21; // edx
  struct DXGALLOCATION *v22; // rdx
  struct _EX_RUNDOWN_REF *v23; // r8
  struct DXGDEVICE *v24; // r9
  __int64 v25; // rcx
  struct DXGTHREAD *DxgThread; // rax
  __int64 v27; // r14
  struct _EX_RUNDOWN_REF *v28; // rbx
  struct DXGTHREAD *v29; // rax
  struct DXGTHREAD *v30; // rax
  struct DXGTHREAD *v31; // rax
  struct DXGTHREAD *v32; // rax
  unsigned int v33; // ebx
  struct DXGTHREAD *v34; // rax
  int v36; // edx
  char *v37; // r12
  unsigned int *v38; // r13
  unsigned int v39; // ebx
  struct _EX_RUNDOWN_REF *v40; // rdx
  struct _EX_RUNDOWN_REF *v41; // r15
  __int64 v42; // rcx
  struct DXGDEVICE *Count; // r9
  int v44; // edx
  struct _EX_RUNDOWN_REF *v45; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  ULONG_PTR i; // rdx
  unsigned int v50; // r8d
  __int64 v51; // rax
  int v52; // r9d
  struct DXGTHREAD *v53; // rax
  __int64 v54; // r8
  int v55; // edx
  int v56; // r9d
  int v57; // r9d
  const unsigned int *v58; // rdi
  __int64 v59; // r15
  unsigned int v60; // edx
  struct DXGALLOCATION *v61; // r14
  __int64 v62; // rax
  __int64 v63; // rdi
  _QWORD *v64; // [rsp+58h] [rbp-71h]
  struct _EX_RUNDOWN_REF *v65; // [rsp+60h] [rbp-69h] BYREF
  __int64 v66; // [rsp+68h] [rbp-61h] BYREF
  struct _EX_RUNDOWN_REF *v67; // [rsp+70h] [rbp-59h] BYREF
  unsigned int *v68; // [rsp+78h] [rbp-51h]
  struct DXGTHREAD *v69; // [rsp+80h] [rbp-49h] BYREF
  struct DXGALLOCATION **v70; // [rsp+88h] [rbp-41h]
  struct DXGTHREAD *v71; // [rsp+90h] [rbp-39h] BYREF
  struct DXGTHREAD *v72; // [rsp+98h] [rbp-31h] BYREF
  struct DXGTHREAD *v73; // [rsp+A0h] [rbp-29h] BYREF
  struct DXGTHREAD *v74; // [rsp+A8h] [rbp-21h] BYREF
  struct _EX_RUNDOWN_REF *v75; // [rsp+B0h] [rbp-19h] BYREF
  const unsigned int *v76; // [rsp+B8h] [rbp-11h]
  unsigned int v77; // [rsp+118h] [rbp+4Fh]
  char v79; // [rsp+128h] [rbp+5Fh]

  v8 = (char *)(a1 + 31);
  v9 = 0;
  v10 = a3;
  v65 = 0LL;
  v79 = 0;
  if ( a1 != (struct _KTHREAD **)-248LL && a1[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v56 = *((_DWORD *)v8 + 6);
      if ( v56 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"g", v12, v56);
    }
    ExAcquirePushLockExclusiveEx(v8, 0LL);
  }
  *((_QWORD *)v8 + 1) = KeGetCurrentThread();
  if ( !(_DWORD)v10 )
  {
    v13 = 0;
    v14 = 0LL;
    if ( !a5 )
    {
      *((_QWORD *)v8 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_64;
    }
    v15 = a6;
    v16 = a1 + 35;
    v17 = a4;
    v18 = (unsigned int *)(a1 + 37);
    v68 = (unsigned int *)(a1 + 37);
    v64 = a1 + 35;
    v70 = a6;
    v76 = a4;
    while ( 1 )
    {
      v19 = (*v17 >> 6) & 0xFFFFFF;
      v77 = *v17;
      if ( v19 < *v18 )
      {
        v20 = *v16 + 16LL * v19;
        if ( ((*v17 >> 25) & 0x60) == (*(_BYTE *)(v20 + 8) & 0x60) && (*(_DWORD *)(v20 + 8) & 0x2000) == 0 )
        {
          v21 = *(_DWORD *)(v20 + 8) & 0x1F;
          if ( v21 )
          {
            if ( v21 == 5 )
            {
              v22 = *(struct DXGALLOCATION **)v20;
              goto LABEL_16;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v22 = 0LL;
LABEL_16:
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v66, v22);
      v23 = (struct _EX_RUNDOWN_REF *)v66;
      if ( !v66 )
      {
        v33 = -1073741811;
        WdLogSingleEntry3(3LL, a2, v77, -1073741811LL);
        goto LABEL_155;
      }
      v24 = *(struct DXGDEVICE **)(v66 + 8);
      if ( v24 != a2 )
      {
        v33 = -1073741811;
        WdLogSingleEntry4(3LL, a2, v66, v24, -1073741811LL);
        goto LABEL_155;
      }
      if ( v13 )
      {
        v25 = *(_QWORD *)(v66 + 40);
        if ( v25 != v14 )
          goto LABEL_128;
      }
      else
      {
        v14 = *(_QWORD *)(v66 + 40);
        v13 = 1;
        v25 = v14;
      }
      if ( v25 )
      {
        if ( (*(_DWORD *)(v25 + 4) & 1) != 0 )
        {
LABEL_128:
          v33 = -1073741811;
          WdLogSingleEntry2(3LL, a2, -1073741811LL);
LABEL_155:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v66);
          goto LABEL_156;
        }
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v25 + 72)) )
        {
          v79 = 1;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v66);
          v33 = -1073741811;
LABEL_156:
          v38 = v68;
          goto LABEL_157;
        }
        *(_DWORD *)(v66 + 72) |= 0x100000u;
        v23 = (struct _EX_RUNDOWN_REF *)v66;
      }
      if ( v19 < *v68 )
      {
        v36 = *(_DWORD *)(*v64 + 16LL * v19 + 8);
        if ( ((v77 >> 25) & 0x60) == (*(_BYTE *)(*v64 + 16LL * v19 + 8) & 0x60)
          && (v36 & 0x2000) == 0
          && (v36 & 0x1F) != 0 )
        {
          *(_DWORD *)(*v64 + 16LL * ((v77 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          v23 = (struct _EX_RUNDOWN_REF *)v66;
        }
      }
      *v70 = (struct DXGALLOCATION *)v23;
      if ( v23 )
        ExReleaseRundownProtection(v23 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
      {
        v69 = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v69) >= 0 )
        {
          DxgThread = v69;
          if ( v69 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v69 = DxgThread) != 0LL) )
          {
            if ( *((_DWORD *)DxgThread + 12) )
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
          }
        }
      }
      ++v9;
      ++v70;
      v17 = ++v76;
      if ( v9 >= a5 )
      {
        *((_QWORD *)v8 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v8, 0LL);
        KeLeaveCriticalRegion();
        v27 = a5;
        do
        {
          v28 = (struct _EX_RUNDOWN_REF *)*v15;
          if ( *v15 && !ExAcquireRundownProtection(v28 + 11) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, v28, 0LL, 0LL);
          if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
          {
            v71 = 0LL;
            if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v71) >= 0 )
            {
              v29 = v71;
              if ( v71 || (v29 = DxgkThreadObjectCreateDxgThread(1), (v71 = v29) != 0LL) )
              {
                if ( *((_DWORD *)v29 + 12) )
                  WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v29 + 12), 0LL, 0LL);
              }
            }
          }
          if ( v28 )
            ExReleaseRundownProtection(v28 + 11);
          if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
          {
            v72 = 0LL;
            if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v72) >= 0 )
            {
              v30 = v72;
              if ( v72 || (v30 = DxgkThreadObjectCreateDxgThread(1), (v72 = v30) != 0LL) )
              {
                if ( *((_DWORD *)v30 + 12) )
                  WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v30 + 12), 0LL, 0LL);
              }
            }
          }
          ExReleaseRundownProtection(v28 + 11);
          ExWaitForRundownProtectionRelease(v28 + 11);
          ExInitializeRundownProtection(v28 + 11);
          if ( !ExAcquireRundownProtection(v28 + 11) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, v28, 0LL, 0LL);
          if ( v28 && !ExAcquireRundownProtection(v28 + 11) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, v28, 0LL, 0LL);
          if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
          {
            v73 = 0LL;
            if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v73) >= 0 )
            {
              v31 = v73;
              if ( v73 || (v31 = DxgkThreadObjectCreateDxgThread(1), (v73 = v31) != 0LL) )
              {
                if ( *((_DWORD *)v31 + 12) )
                  WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v31 + 12), 0LL, 0LL);
              }
            }
          }
          if ( v28 )
            ExReleaseRundownProtection(v28 + 11);
          if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
          {
            v74 = 0LL;
            if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v74) >= 0 )
            {
              v32 = v74;
              if ( v74 || (v32 = DxgkThreadObjectCreateDxgThread(1), (v74 = v32) != 0LL) )
              {
                if ( *((_DWORD *)v32 + 12) )
                  WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v32 + 12), 0LL, 0LL);
              }
            }
          }
          ++v15;
          --v27;
        }
        while ( v27 );
        goto LABEL_64;
      }
      v18 = v68;
      v16 = v64;
    }
  }
  v37 = (char *)(a1 + 35);
  v38 = (unsigned int *)(a1 + 37);
  v39 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  v64 = v37;
  if ( v39 < *((_DWORD *)v37 + 4)
    && (v54 = *(_QWORD *)v37 + 16LL * v39, (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v54 + 8) & 0x60))
    && (*(_DWORD *)(v54 + 8) & 0x2000) == 0
    && (v55 = *(_DWORD *)(v54 + 8) & 0x1F) != 0 )
  {
    if ( v55 == 4 )
    {
      v40 = *(struct _EX_RUNDOWN_REF **)v54;
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v40 = 0LL;
    }
  }
  else
  {
    v40 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v75, v40);
  v41 = v75;
  v65 = v75;
  v75 = 0LL;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    if ( DXGTHREAD::GetCurrent() )
    {
      v42 = *((int *)DXGTHREAD::GetCurrent() + 12);
      if ( (_DWORD)v42 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v42, 0LL, 0LL);
    }
  }
  if ( !v41 )
  {
    v33 = -1073741811;
    WdLogSingleEntry3(3LL, a2, v10, -1073741811LL);
LABEL_171:
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_65;
  }
  Count = (struct DXGDEVICE *)v41[1].Count;
  if ( Count != a2 )
  {
    v33 = -1073741811;
    WdLogSingleEntry4(3LL, a2, v65, Count, -1073741811LL);
    v67 = 0LL;
    DXGRESOURCEREFERENCE::MoveAssign(&v65, &v67);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v67);
    if ( !v65 )
    {
      v15 = a6;
LABEL_157:
      if ( v9 )
      {
        v58 = a4;
        v59 = v9;
        do
        {
          v60 = *v58;
          v61 = *v15;
          v62 = (*v58 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v62 < *v38
            && ((v60 >> 25) & 0x60) == (*(_BYTE *)(*v64 + 16 * v62 + 8) & 0x60)
            && (*(_DWORD *)(*v64 + 16 * v62 + 8) & 0x1F) != 0 )
          {
            v63 = 2LL * ((v60 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(*v64 + 16LL * ((v60 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry1(1LL, 217LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                217LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*v64 + 8 * v63 + 8) &= ~0x2000u;
            v58 = a4;
          }
          if ( (*((_DWORD *)v61 + 18) & 0x100000) != 0 )
          {
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v61 + 5) + 72LL));
            *((_DWORD *)v61 + 18) &= ~0x100000u;
          }
          ++v58;
          ++v15;
          a4 = v58;
          --v59;
        }
        while ( v59 );
        v33 = -1073741811;
      }
      if ( v79 )
        v33 = 255;
    }
    goto LABEL_171;
  }
  if ( v39 >= *v38 )
  {
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    v45 = v41;
LABEL_94:
    ExReleaseRundownProtection(v41 + 9);
    goto LABEL_95;
  }
  v44 = *(_DWORD *)(*(_QWORD *)v37 + 16LL * v39 + 8);
  if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v37 + 16LL * v39 + 8) & 0x60)
    && (v44 & 0x2000) == 0
    && (v44 & 0x1F) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)v37 + 16LL * (((unsigned int)v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  v45 = v65;
  *((_QWORD *)v8 + 1) = 0LL;
  v41 = v45;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( v45 )
    goto LABEL_94;
LABEL_95:
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    if ( DXGTHREAD::GetCurrent() )
    {
      Current = DXGTHREAD::GetCurrent();
      if ( *((_DWORD *)Current + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)Current + 12), 0LL, 0LL);
    }
  }
  ExReleaseRundownProtection(v45 + 9);
  ExWaitForRundownProtectionRelease(v45 + 9);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v45[10]);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v57 = *((_DWORD *)v8 + 6);
      if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v47, (const EVENT_DESCRIPTOR *)"g", v48, v57);
    }
    ExAcquirePushLockExclusiveEx(v8, 0LL);
  }
  *((_QWORD *)v8 + 1) = KeGetCurrentThread();
  for ( i = v45[3].Count; i; i = *(_QWORD *)(i + 64) )
  {
    v50 = *(_DWORD *)(i + 16);
    if ( v50 )
    {
      v51 = (v50 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v51 < *v38 )
      {
        v52 = *(_DWORD *)(*(_QWORD *)v37 + 16 * v51 + 8);
        if ( ((v50 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v37 + 16 * v51 + 8) & 0x60)
          && (v52 & 0x2000) == 0
          && (v52 & 0x1F) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)v37 + 16LL * ((v50 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        }
      }
    }
  }
  ExInitializeRundownProtection(v45 + 9);
  ExAcquireRundownProtection(v45 + 9);
  if ( !ExAcquireRundownProtection(v45 + 9) )
    WdLogSingleEntry5(0LL, 275LL, 38LL, v45, 0LL, 0LL);
  v65 = v45;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    if ( DXGTHREAD::GetCurrent() )
    {
      v53 = DXGTHREAD::GetCurrent();
      if ( *((_DWORD *)v53 + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v53 + 12), 0LL, 0LL);
    }
  }
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release((struct _KTHREAD **)&v45[10]);
  *a7 = v45;
LABEL_64:
  v33 = 0;
LABEL_65:
  if ( v65 )
    ExReleaseRundownProtection(v65 + 9);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v67 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v67) >= 0 && (v67 || DxgkThreadObjectCreateDxgThread(1)) )
    {
      v67 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v67) < 0 )
      {
        v34 = 0LL;
      }
      else
      {
        v34 = (struct DXGTHREAD *)v67;
        if ( !v67 )
        {
          v34 = DxgkThreadObjectCreateDxgThread(1);
          v67 = (struct _EX_RUNDOWN_REF *)v34;
        }
      }
      if ( *((_DWORD *)v34 + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v34 + 12), 0LL, 0LL);
    }
  }
  return v33;
}
