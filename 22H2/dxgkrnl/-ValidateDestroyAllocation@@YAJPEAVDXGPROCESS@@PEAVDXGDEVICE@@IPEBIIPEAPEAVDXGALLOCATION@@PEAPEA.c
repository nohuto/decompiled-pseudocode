/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C01C7EA0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0007B34 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_1344054585__private_IsEnabledDeviceUsage @ 0x1C0025464 (Feature_1344054585__private_IsEnabledDeviceUsage.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01A3F58 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C01C5980 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01C6300 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C01CB650 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C02D8108 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        struct DXGALLOCATION **a6,
        struct _EX_RUNDOWN_REF **a7)
{
  int v7; // edi
  __int64 v8; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  char *v14; // r12
  unsigned int *v15; // r13
  unsigned int v16; // esi
  __int64 v17; // r8
  int v18; // edx
  struct _EX_RUNDOWN_REF *v19; // rdx
  struct _EX_RUNDOWN_REF *v20; // rbx
  struct DXGDEVICE *Count; // r9
  struct DXGALLOCATION **v22; // r15
  int v23; // edx
  char *v24; // rcx
  char *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  ULONG_PTR i; // r8
  unsigned int v30; // edx
  __int64 v31; // rax
  int v32; // r9d
  char *v33; // rcx
  char v34; // r14
  __int64 v35; // rax
  const unsigned int *v36; // rdx
  __int64 v37; // rsi
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  __int64 v40; // r8
  int v41; // edx
  struct _EX_RUNDOWN_REF *v42; // rdx
  struct DXGALLOCATION *v43; // r8
  struct DXGDEVICE *v44; // r9
  __int64 v45; // rcx
  int v46; // edx
  struct DXGALLOCATION **v47; // rbx
  unsigned int v48; // ebx
  __int64 v49; // r9
  char *v50; // rcx
  const unsigned int *v51; // rbx
  __int64 v52; // r14
  unsigned int v53; // edx
  struct DXGALLOCATION *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rbx
  char *v57; // rcx
  __int64 v58; // r14
  struct _EX_RUNDOWN_REF *v59; // rbx
  __int64 v60; // rsi
  __int64 v62; // [rsp+50h] [rbp-71h] BYREF
  struct _EX_RUNDOWN_REF *v63; // [rsp+58h] [rbp-69h] BYREF
  unsigned int v64; // [rsp+60h] [rbp-61h]
  struct _EX_RUNDOWN_REF *v65; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v66[8]; // [rsp+70h] [rbp-51h] BYREF
  char *v67; // [rsp+78h] [rbp-49h]
  int v68; // [rsp+80h] [rbp-41h]
  struct _EX_RUNDOWN_REF *v69; // [rsp+88h] [rbp-39h] BYREF
  __int64 v70; // [rsp+90h] [rbp-31h]
  const unsigned int *v71; // [rsp+98h] [rbp-29h]
  struct DXGALLOCATION **v72; // [rsp+A0h] [rbp-21h]
  __int64 v73; // [rsp+A8h] [rbp-19h]
  __int64 v74; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v75; // [rsp+B8h] [rbp-9h] BYREF
  char v77; // [rsp+120h] [rbp+5Fh]

  v7 = 0;
  v8 = a3;
  v65 = 0LL;
  v64 = 0;
  v77 = 0;
  v67 = (char *)(a1 + 31);
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
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v67, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v13 = *((_DWORD *)v67 + 6);
      if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v13);
    }
    ExAcquirePushLockExclusiveEx(v67, 0LL);
  }
  *((_QWORD *)v67 + 1) = KeGetCurrentThread();
  v68 = 2;
  v73 = -1073741811LL;
  if ( (_DWORD)v8 )
  {
    v14 = (char *)(a1 + 35);
    v15 = (unsigned int *)(v14 + 16);
    v16 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( v16 < *((_DWORD *)v14 + 4) )
    {
      v17 = *(_QWORD *)v14 + 16LL * v16;
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v17 + 8) & 0x60) && (*(_DWORD *)(v17 + 8) & 0x2000) == 0 )
      {
        v18 = *(_DWORD *)(v17 + 8) & 0x1F;
        if ( v18 )
        {
          if ( v18 == 4 )
          {
            v19 = *(struct _EX_RUNDOWN_REF **)v17;
LABEL_18:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v69, v19);
            v20 = v69;
            v65 = v69;
            v69 = 0LL;
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v69);
            if ( !v20 )
            {
              WdLogSingleEntry3(3LL, a2, v8, -1073741811LL);
LABEL_27:
              if ( v20 )
                goto LABEL_126;
              v22 = a6;
              goto LABEL_97;
            }
            if ( (unsigned int)Feature_1344054585__private_IsEnabledDeviceUsage()
              && v16 < *v15
              && (*(_DWORD *)(*(_QWORD *)v14 + 16LL * v16 + 8) & 0x4000) != 0 )
            {
              WdLogSingleEntry3(3LL, a2, v8, -1073741267LL);
              goto LABEL_27;
            }
            Count = (struct DXGDEVICE *)v20[1].Count;
            if ( Count != a2 )
            {
              WdLogSingleEntry4(3LL, a2, v20, Count, -1073741811LL);
              v63 = 0LL;
              DXGRESOURCEREFERENCE::MoveAssign(&v65, &v63);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v63);
              v20 = v65;
              goto LABEL_27;
            }
            if ( v16 < *v15 )
            {
              v23 = *(_DWORD *)(*(_QWORD *)v14 + 16LL * v16 + 8);
              if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v14 + 16LL * v16 + 8) & 0x60)
                && (v23 & 0x2000) == 0
                && (v23 & 0x1F) != 0 )
              {
                *(_DWORD *)(*(_QWORD *)v14 + 16LL * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            if ( v68 == 1 )
            {
              _InterlockedDecrement((volatile signed __int32 *)v67 + 4);
              ExReleasePushLockSharedEx(v67, 0LL);
            }
            else
            {
              if ( v68 != 2 )
              {
LABEL_39:
                ExReleaseRundownProtection(v20 + 9);
                v63 = 0LL;
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v63);
                ExReleaseRundownProtection(v20 + 9);
                ExWaitForRundownProtectionRelease(v20 + 9);
                DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v20[10]);
                v25 = v67;
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v25, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v28 = *((_DWORD *)v25 + 6);
                    if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                      McTemplateK0q_EtwWriteTransfer(v26, &EventBlockThread, v27, v28);
                  }
                  ExAcquirePushLockExclusiveEx(v25, 0LL);
                }
                *((_QWORD *)v25 + 1) = KeGetCurrentThread();
                for ( i = v20[3].Count; i; i = *(_QWORD *)(i + 64) )
                {
                  v30 = *(_DWORD *)(i + 16);
                  if ( v30 )
                  {
                    v31 = (v30 >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v31 < *v15 )
                    {
                      v32 = *(_DWORD *)(*(_QWORD *)v14 + 16 * v31 + 8);
                      if ( ((v30 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v14 + 16 * v31 + 8) & 0x60)
                        && (v32 & 0x2000) == 0
                        && (v32 & 0x1F) != 0 )
                      {
                        *(_DWORD *)(*(_QWORD *)v14 + 16LL * ((v30 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                      }
                    }
                  }
                }
                ExInitializeRundownProtection(v20 + 9);
                ExAcquireRundownProtection(v20 + 9);
                if ( !ExAcquireRundownProtection(v20 + 9) )
                  WdLogSingleEntry5(0LL, 275LL, 38LL, v20, 0LL, 0LL);
                v65 = v20;
                v63 = 0LL;
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v63);
                v33 = v67;
                v68 = 0;
                *((_QWORD *)v67 + 1) = 0LL;
                ExReleasePushLockExclusiveEx(v33, 0LL);
                KeLeaveCriticalRegion();
                DXGFASTMUTEX::Release((struct _KTHREAD **)&v20[10]);
                *a7 = v20;
                goto LABEL_125;
              }
              v24 = v67;
              *((_QWORD *)v67 + 1) = 0LL;
              ExReleasePushLockExclusiveEx(v24, 0LL);
            }
            KeLeaveCriticalRegion();
            goto LABEL_39;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v19 = 0LL;
    goto LABEL_18;
  }
  v22 = a6;
  v34 = 0;
  v35 = 0LL;
  v64 = 0;
  if ( !a5 )
  {
    v48 = 0;
    goto LABEL_111;
  }
  v36 = a4;
  v14 = (char *)(a1 + 35);
  v15 = (unsigned int *)(a1 + 37);
  v71 = a4;
  v72 = a6;
  while ( 1 )
  {
    v37 = *v36;
    v38 = *v36;
    v70 = v35;
    v39 = (v38 >> 6) & 0xFFFFFF;
    if ( v39 >= *v15 )
      goto LABEL_64;
    v40 = *(_QWORD *)v14 + 16LL * v39;
    if ( (((unsigned int)v37 >> 25) & 0x60) != (*(_BYTE *)(v40 + 8) & 0x60) )
      goto LABEL_64;
    if ( (*(_DWORD *)(v40 + 8) & 0x2000) != 0 )
      goto LABEL_64;
    v41 = *(_DWORD *)(v40 + 8) & 0x1F;
    if ( !v41 )
      goto LABEL_64;
    if ( v41 != 5 )
    {
      WdLogSingleEntry1(2LL, 316LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
LABEL_64:
      v42 = 0LL;
      goto LABEL_65;
    }
    v42 = *(struct _EX_RUNDOWN_REF **)v40;
LABEL_65:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62, v42);
    if ( !v62 )
    {
      v49 = -1073741811LL;
      goto LABEL_95;
    }
    if ( (unsigned int)Feature_1344054585__private_IsEnabledDeviceUsage()
      && v39 < *v15
      && (*(_DWORD *)(*(_QWORD *)v14 + 16LL * v39 + 8) & 0x4000) != 0 )
    {
      v49 = -1073741267LL;
LABEL_95:
      WdLogSingleEntry3(3LL, a2, v37, v49);
      goto LABEL_96;
    }
    v43 = (struct DXGALLOCATION *)v62;
    v44 = *(struct DXGDEVICE **)(v62 + 8);
    if ( v44 != a2 )
    {
      WdLogSingleEntry4(3LL, a2, v62, v44, -1073741811LL);
      goto LABEL_96;
    }
    if ( v34 )
    {
      v45 = *(_QWORD *)(v62 + 40);
      if ( v45 != v70 )
        goto LABEL_87;
    }
    else
    {
      v34 = 1;
      v70 = *(_QWORD *)(v62 + 40);
      v45 = v70;
    }
    if ( v45 )
    {
      if ( (*(_DWORD *)(v45 + 4) & 1) != 0 )
      {
LABEL_87:
        WdLogSingleEntry2(3LL, a2, -1073741811LL);
      }
      else
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v45 + 72)) )
        {
          *(_DWORD *)(v62 + 72) |= 0x100000u;
          v43 = (struct DXGALLOCATION *)v62;
          goto LABEL_78;
        }
        v77 = 1;
      }
LABEL_96:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62);
LABEL_97:
      if ( v64 )
      {
        v51 = a4;
        v52 = v64;
        do
        {
          v53 = *v51;
          v54 = *v22;
          v55 = (*v51 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v55 < *v15
            && ((v53 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v14 + 16 * v55 + 8) & 0x60)
            && (*(_DWORD *)(*(_QWORD *)v14 + 16 * v55 + 8) & 0x1F) != 0 )
          {
            v56 = 2LL * ((v53 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(*(_QWORD *)v14 + 16LL * ((v53 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry1(1LL, 222LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                222LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*(_QWORD *)v14 + 8 * v56 + 8) &= ~0x2000u;
            v51 = a4;
          }
          if ( (*((_DWORD *)v54 + 18) & 0x100000) != 0 )
          {
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v54 + 5) + 72LL));
            *((_DWORD *)v54 + 18) &= ~0x100000u;
          }
          ++v51;
          ++v22;
          a4 = v51;
          --v52;
        }
        while ( v52 );
      }
      if ( v77 )
      {
        v7 = 255;
        goto LABEL_125;
      }
      goto LABEL_126;
    }
LABEL_78:
    if ( v39 < *v15 )
    {
      v46 = *(_DWORD *)(*(_QWORD *)v14 + 16LL * v39 + 8);
      if ( (((unsigned int)v37 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v14 + 16LL * v39 + 8) & 0x60)
        && (v46 & 0x2000) == 0
        && (v46 & 0x1F) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v14 + 16LL * (((unsigned int)v37 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        v43 = (struct DXGALLOCATION *)v62;
      }
    }
    v47 = v72;
    *v72 = v43;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62);
    v36 = v71 + 1;
    v72 = v47 + 1;
    v48 = a5;
    ++v64;
    ++v71;
    if ( v64 >= a5 )
      break;
    v35 = v70;
  }
  if ( v68 == 1 )
  {
    v50 = v67;
    v68 = 0;
    _InterlockedDecrement((volatile signed __int32 *)v67 + 4);
    ExReleasePushLockSharedEx(v50, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_112;
  }
  if ( v68 != 2 )
  {
LABEL_112:
    v74 = 0LL;
    v75 = 0LL;
    v58 = v48;
    while ( 1 )
    {
      v59 = (struct _EX_RUNDOWN_REF *)*v22;
      if ( !*v22 || ExAcquireRundownProtection(v59 + 11) )
      {
        v63 = 0LL;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63);
        if ( !v59 )
        {
          v60 = 88LL;
          goto LABEL_119;
        }
      }
      else
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, v59, 0LL, 0LL);
        v63 = 0LL;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63);
      }
      v60 = (__int64)&v59[11];
      ExReleaseRundownProtection(v59 + 11);
LABEL_119:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v60);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v60);
      ExInitializeRundownProtection((PEX_RUNDOWN_REF)v60);
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)v60) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v59, 0LL, 0LL);
      if ( v59 && !ExAcquireRundownProtection((PEX_RUNDOWN_REF)v60) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v59, 0LL, 0LL);
      v63 = v59;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v75);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63);
      ++v22;
      if ( !--v58 )
        goto LABEL_125;
    }
  }
LABEL_111:
  v57 = v67;
  v68 = 0;
  *((_QWORD *)v67 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v57, 0LL);
  KeLeaveCriticalRegion();
  if ( v48 )
    goto LABEL_112;
LABEL_125:
  LODWORD(v73) = v7;
LABEL_126:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v66);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v65);
  return (unsigned int)v73;
}
