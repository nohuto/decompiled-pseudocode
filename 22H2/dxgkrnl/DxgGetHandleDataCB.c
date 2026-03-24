/*
 * XREFs of DxgGetHandleDataCB @ 0x1C0118DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005774 (--1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_1679598905__private_IsEnabledDeviceUsage @ 0x1C002615C (Feature_1679598905__private_IsEnabledDeviceUsage.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@$$QEAV0@@Z @ 0x1C0227F54 (--0DXGRESOURCEREFERENCE@@QEAA@$$QEAV0@@Z.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // rdx
  struct DXGPROCESS *Current; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // eax
  ULONG_PTR Count; // rsi
  unsigned int v13; // r14d
  BOOL v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // ecx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdx
  struct _EX_RUNDOWN_REF **v20; // rcx
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _EX_RUNDOWN_REF *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _EX_RUNDOWN_REF *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct DXGTHREAD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct DXGTHREAD *v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // r14d
  BOOL v45; // ecx
  __int64 v46; // rax
  __int64 v47; // r8
  int v48; // ecx
  struct _EX_RUNDOWN_REF *v49; // rdx
  __int64 v50; // rdx
  struct _EX_RUNDOWN_REF **v51; // rcx
  __int64 v52; // r8
  int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rax
  struct _EX_RUNDOWN_REF *v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  struct _EX_RUNDOWN_REF *v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  struct _EX_RUNDOWN_REF *v71; // [rsp+28h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *v72; // [rsp+30h] [rbp-41h] BYREF
  char v73[8]; // [rsp+38h] [rbp-39h] BYREF
  char v74[8]; // [rsp+40h] [rbp-31h] BYREF
  char v75[8]; // [rsp+48h] [rbp-29h] BYREF
  char v76[8]; // [rsp+50h] [rbp-21h] BYREF
  char v77[8]; // [rsp+58h] [rbp-19h] BYREF
  char *v78; // [rsp+60h] [rbp-11h]
  int v79; // [rsp+68h] [rbp-9h]
  _BYTE v80[56]; // [rsp+70h] [rbp-1h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v80);
  v2 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v78 = (char *)Current + 208;
  if ( Current != (struct DXGPROCESS *)-208LL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)Current + 27) == CurrentThread )
    {
      v6 = WdLogNewEntry5_WdAssertion(CurrentThread, v3);
      *(_QWORD *)(v6 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v6);
    }
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v78, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v10 = *((_DWORD *)v78 + 6);
      if ( v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, &EventBlockThread, v9, v10);
    }
    ExAcquirePushLockSharedEx(v78, 0LL);
  }
  v11 = a1[1];
  Count = 0LL;
  v79 = 1;
  if ( v11 != 1 )
  {
    if ( v11 != 2 )
    {
      v69 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v69 + 24) = (int)a1[1];
      WdLogEvent5_WdWarning(v69);
      goto LABEL_79;
    }
    v44 = *a1;
    v45 = Feature_1679598905__private_IsEnabledDeviceUsage() != 0;
    v46 = (v44 >> 6) & 0xFFFFFF;
    if ( v45 )
    {
      if ( (unsigned int)v46 < *((_DWORD *)Current + 64)
        && (v47 = *((_QWORD *)Current + 30),
            v48 = *(_DWORD *)(v47 + 16 * v46 + 8),
            ((v44 >> 25) & 0x60) == (*(_BYTE *)(v47 + 16 * v46 + 8) & 0x60))
        && ((v48 & 0x2000) == 0 || (v48 & 0x4000) != 0)
        && (v48 & 0x1F) == 4 )
      {
        v49 = *(struct _EX_RUNDOWN_REF **)(v47 + 16LL * (unsigned int)v46);
      }
      else
      {
        v49 = 0LL;
      }
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v75, v49);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(&v71, v75);
      v51 = (struct _EX_RUNDOWN_REF **)v75;
      goto LABEL_65;
    }
    if ( (unsigned int)v46 < *((_DWORD *)Current + 64) )
    {
      v52 = *((_QWORD *)Current + 30);
      v53 = *(_DWORD *)(v52 + 16 * v46 + 8);
      if ( ((v44 >> 25) & 0x60) == (*(_BYTE *)(v52 + 16 * v46 + 8) & 0x60) && (v53 & 0x2000) == 0 && (v53 & 0x1F) != 0 )
      {
        v54 = v53 & 0x1F;
        if ( (_BYTE)v54 == 4 )
        {
          v56 = *(struct _EX_RUNDOWN_REF **)(v52 + 16LL * (unsigned int)v46);
          goto LABEL_64;
        }
        v55 = WdLogNewEntry5_WdError(v54, 2LL * (unsigned int)v46);
        *(_QWORD *)(v55 + 24) = 316LL;
        WdLogEvent5_WdError(v55);
      }
    }
    v56 = 0LL;
LABEL_64:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v76, v56);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(&v71, v76);
    v51 = (struct _EX_RUNDOWN_REF **)v76;
LABEL_65:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v51, v50);
    v60 = v71;
    if ( v71 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71[1].Count + 16) + 16LL) + 216LL) + 64LL)
                        + 40LL);
        if ( *(_DWORD *)(v61 + 28) >= 0x2003u )
        {
          v62 = WdLogNewEntry5_WdCriticalError(v61, v57);
          *(_QWORD *)(v62 + 24) = 275LL;
          *(_QWORD *)(v62 + 32) = 20LL;
          *(_QWORD *)(v62 + 40) = *(_QWORD *)(*(_QWORD *)(v60[1].Count + 16) + 16LL);
          *(_OWORD *)(v62 + 48) = 0LL;
          WdLogEvent5_WdCriticalError(v62);
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v60[1].Count + 16) + 16LL))
        && *((_DWORD *)DXGGLOBAL::GetGlobal(v64, v63) + 311) )
      {
        v66 = WdLogNewEntry5_WdAssertion(v65, v63);
        *(_QWORD *)(v66 + 24) = 130LL;
        WdLogEvent5_WdAssertion(v66);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v71, v67);
        goto LABEL_80;
      }
      if ( (HIDWORD(v60->Ptr) & 1) != 0 )
        Count = *(_QWORD *)(v60[7].Count + 16);
      else
        Count = v60[7].Count;
    }
    else
    {
      v68 = WdLogNewEntry5_WdWarning(v58, v57, v59);
      *(_QWORD *)(v68 + 24) = *a1;
      WdLogEvent5_WdWarning(v68);
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v71, v63);
LABEL_79:
    v2 = Count;
    goto LABEL_80;
  }
  v13 = *a1;
  v14 = Feature_1679598905__private_IsEnabledDeviceUsage() != 0;
  v15 = (v13 >> 6) & 0xFFFFFF;
  if ( !v14 )
  {
    if ( (unsigned int)v15 < *((_DWORD *)Current + 64) )
    {
      v21 = *((_QWORD *)Current + 30);
      v22 = *(_DWORD *)(v21 + 16 * v15 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v15 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
      {
        v23 = v22 & 0x1F;
        if ( (_BYTE)v23 == 5 )
        {
          v25 = *(struct _EX_RUNDOWN_REF **)(v21 + 16LL * (unsigned int)v15);
          goto LABEL_27;
        }
        v24 = WdLogNewEntry5_WdError(v23, 2LL * (unsigned int)v15);
        *(_QWORD *)(v24 + 24) = 316LL;
        WdLogEvent5_WdError(v24);
      }
    }
    v25 = 0LL;
LABEL_27:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v74, v25);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(&v72, v74);
    v20 = (struct _EX_RUNDOWN_REF **)v74;
    goto LABEL_28;
  }
  if ( (unsigned int)v15 < *((_DWORD *)Current + 64)
    && (v16 = *((_QWORD *)Current + 30),
        v17 = *(_DWORD *)(v16 + 16 * v15 + 8),
        ((v13 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60))
    && ((v17 & 0x2000) == 0 || (v17 & 0x4000) != 0)
    && (v17 & 0x1F) == 5 )
  {
    v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
  }
  else
  {
    v18 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v73, v18);
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(&v72, v73);
  v20 = (struct _EX_RUNDOWN_REF **)v73;
LABEL_28:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v20, v19);
  v29 = v72;
  if ( !v72 )
  {
    v36 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v36 + 24) = *a1;
    WdLogEvent5_WdWarning(v36);
LABEL_41:
    if ( v29 )
      ExReleaseRundownProtection(v29 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v32, v26) + 311) )
    {
      v39 = DXGTHREAD::GetCurrent(v38, v37);
      v42 = v39;
      if ( v39 )
      {
        if ( *((_DWORD *)v39 + 8) )
        {
          v43 = WdLogNewEntry5_WdCriticalError(v41, v40);
          *(_QWORD *)(v43 + 24) = 275LL;
          *(_QWORD *)(v43 + 32) = 38LL;
          *(_QWORD *)(v43 + 40) = *((int *)v42 + 8);
          *(_OWORD *)(v43 + 48) = 0LL;
          WdLogEvent5_WdCriticalError(v43);
        }
      }
    }
    goto LABEL_79;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v72[1].Count + 16) + 16LL) + 216LL) + 64LL) + 40LL);
    if ( *(_DWORD *)(v30 + 28) >= 0x2003u )
    {
      v31 = WdLogNewEntry5_WdCriticalError(v30, v26);
      *(_QWORD *)(v31 + 24) = 275LL;
      *(_QWORD *)(v31 + 32) = 20LL;
      *(_QWORD *)(v31 + 40) = *(_QWORD *)(*(_QWORD *)(v29[1].Count + 16) + 16LL);
      *(_OWORD *)(v31 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v31);
    }
  }
  v32 = *(_QWORD *)(v29[1].Count + 16);
  v33 = *(_QWORD *)(v32 + 16);
  if ( *(int *)(v33 + 2328) < 0x2000 && !*(_BYTE *)(v33 + 2628) || !*((_DWORD *)DXGGLOBAL::GetGlobal(v32, v26) + 311) )
  {
    if ( (a1[2] & 1) != 0 )
      Count = v29[4].Count;
    else
      Count = *(_QWORD *)(v29[6].Count + 16);
    goto LABEL_41;
  }
  v34 = WdLogNewEntry5_WdAssertion(v32, v26);
  *(_QWORD *)(v34 + 24) = 87LL;
  WdLogEvent5_WdAssertion(v34);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v72, v35);
LABEL_80:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v77);
  DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v80);
  return v2;
}
