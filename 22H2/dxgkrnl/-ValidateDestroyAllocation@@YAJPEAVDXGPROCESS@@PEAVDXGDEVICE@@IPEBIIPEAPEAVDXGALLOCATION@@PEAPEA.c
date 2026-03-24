/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C01126F0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0112FB0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00037F4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000528C (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_1679598905__private_IsEnabledDeviceUsage @ 0x1C002615C (Feature_1679598905__private_IsEnabledDeviceUsage.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C00D6C9C (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0114DE0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C011662C (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0117170 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012A998 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01550DC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct _EX_RUNDOWN_REF *a4,
        unsigned int a5,
        struct _EX_RUNDOWN_REF **a6,
        struct DXGRESOURCE **a7)
{
  __int64 v8; // r14
  __int64 v11; // rdx
  int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // rax
  char *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  unsigned int v19; // esi
  struct _KTHREAD *v20; // r9
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  struct DXGRESOURCE *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct _KTHREAD *v34; // rax
  _QWORD *v35; // rax
  struct _EX_RUNDOWN_REF **v36; // r15
  struct DXGRESOURCE *v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  struct _KTHREAD *v40; // r8
  int v41; // edx
  struct _EX_RUNDOWN_REF *v42; // rbx
  __int64 v43; // rdx
  ULONG_PTR i; // r8
  unsigned int v45; // edx
  __int64 v46; // rax
  struct _KTHREAD *v47; // r10
  int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rdx
  unsigned int v51; // ebx
  struct DXGDEVICE *v52; // r14
  struct _EX_RUNDOWN_REF *v53; // rax
  __int64 Count_low; // rsi
  unsigned int v55; // ebx
  struct _KTHREAD *v56; // r9
  int v57; // edx
  __int64 v58; // rdx
  __int64 v59; // rax
  struct _EX_RUNDOWN_REF *v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  struct _KTHREAD *v67; // rax
  struct _EX_RUNDOWN_REF *v68; // rax
  ULONG_PTR v69; // rcx
  struct _KTHREAD *v70; // r9
  int v71; // r8d
  struct _EX_RUNDOWN_REF *v72; // rbx
  __int64 v73; // rsi
  struct _EX_RUNDOWN_REF *v74; // rdx
  __int64 v75; // rdx
  struct _EX_RUNDOWN_REF *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rdx
  _QWORD *v82; // rax
  struct _EX_RUNDOWN_REF *v83; // rbx
  __int64 v84; // r14
  unsigned int v85; // r8d
  struct _EX_RUNDOWN_REF *v86; // rsi
  __int64 v87; // rax
  struct _KTHREAD *v88; // rdx
  __int64 v89; // rbx
  __int64 v90; // rax
  struct _EX_RUNDOWN_REF *v91; // [rsp+20h] [rbp-61h] BYREF
  struct DXGRESOURCE *v92; // [rsp+28h] [rbp-59h] BYREF
  struct _EX_RUNDOWN_REF **v93; // [rsp+30h] [rbp-51h] BYREF
  struct _EX_RUNDOWN_REF *v94; // [rsp+38h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *Count; // [rsp+40h] [rbp-41h] BYREF
  struct _EX_RUNDOWN_REF *v96; // [rsp+48h] [rbp-39h] BYREF
  struct _EX_RUNDOWN_REF *v97; // [rsp+50h] [rbp-31h] BYREF
  struct _EX_RUNDOWN_REF *v98; // [rsp+58h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v99; // [rsp+60h] [rbp-21h] BYREF
  DXGPUSHLOCK *v100; // [rsp+68h] [rbp-19h] BYREF
  char *v101; // [rsp+70h] [rbp-11h]
  int v102; // [rsp+78h] [rbp-9h]
  struct DXGALLOCATION *v103; // [rsp+D0h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v104; // [rsp+D8h] [rbp+57h]
  char v105; // [rsp+E0h] [rbp+5Fh]
  struct _EX_RUNDOWN_REF *v106; // [rsp+E8h] [rbp+67h]

  v106 = a4;
  v104 = a2;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v92, 0LL);
  v12 = 0;
  v101 = (char *)(a1 + 26);
  v13 = 0;
  if ( a1 != (struct _KTHREAD **)-208LL && a1[27] == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1 + 26, v11);
    *(_QWORD *)(v14 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = v101;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v18 = *((_DWORD *)v15 + 6);
      if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v18);
    }
    ExAcquirePushLockExclusiveEx(v15, 0LL);
  }
  *((_QWORD *)v15 + 1) = KeGetCurrentThread();
  v102 = 2;
  if ( (_DWORD)v8 )
  {
    v19 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( v19 < *((_DWORD *)a1 + 64) )
    {
      v20 = a1[30];
      v21 = *((_DWORD *)v20 + 4 * v19 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v20 + 16 * v19 + 8) & 0x60)
        && (v21 & 0x2000) == 0
        && (v21 & 0x1F) != 0 )
      {
        v22 = v21 & 0x1F;
        if ( (_BYTE)v22 == 4 )
        {
          v24 = (struct DXGRESOURCE *)*((_QWORD *)v20 + 2 * v19);
          goto LABEL_18;
        }
        v23 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v22);
        *(_QWORD *)(v23 + 24) = 316LL;
        WdLogEvent5_WdError(v23);
      }
    }
    v24 = 0LL;
LABEL_18:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v96, v24);
    DXGRESOURCEREFERENCE::MoveAssign(&v92, &v96);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v96, v25);
    if ( !v92 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v30 = -1073741811;
      v29[3] = a2;
      v29[4] = v8;
      v29[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
      goto LABEL_72;
    }
    if ( (unsigned int)Feature_1679598905__private_IsEnabledDeviceUsage() )
    {
      if ( v19 < *((_DWORD *)a1 + 64) )
      {
        v34 = a1[30];
        v32 = 2LL * v19;
        v31 = *((_DWORD *)v34 + 4 * v19 + 2) >> 14;
        LOBYTE(v31) = (*((_DWORD *)v34 + 4 * v19 + 2) & 0x4000) != 0;
        if ( (*((_DWORD *)v34 + 4 * v19 + 2) & 0x4000) != 0 )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
          v35[3] = a2;
          v35[4] = v8;
          v35[5] = -1073741267LL;
          WdLogEvent5_WdWarning(v35);
          v36 = a6;
          goto LABEL_82;
        }
      }
    }
    v37 = v92;
    if ( *((struct DXGDEVICE **)v92 + 1) != a2 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v38[3] = a2;
      v38[4] = v37;
      v38[5] = *((_QWORD *)v37 + 1);
      v38[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v38);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v93, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v92, &v93);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v93, v39);
      v36 = a6;
      goto LABEL_82;
    }
    if ( v19 < *((_DWORD *)a1 + 64) )
    {
      v40 = a1[30];
      v41 = *((_DWORD *)v40 + 4 * v19 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v40 + 16 * v19 + 8) & 0x60)
        && (v41 & 0x2000) == 0
        && (v41 & 0x1F) != 0 )
      {
        *((_DWORD *)v40 + 4 * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
      }
    }
    v42 = (struct _EX_RUNDOWN_REF *)v92;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v100);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v94, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v92, &v94);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v94, v43);
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v42);
    ExWaitForRundownProtectionRelease(v42 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v42[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive(&v100);
    for ( i = v42[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v45 = *(_DWORD *)(i + 16);
      if ( v45 )
      {
        v46 = (v45 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v46 < *((_DWORD *)a1 + 64) )
        {
          v47 = a1[30];
          v48 = *((_DWORD *)v47 + 4 * v46 + 2);
          if ( ((v45 >> 25) & 0x60) == (*((_BYTE *)v47 + 16 * v46 + 8) & 0x60)
            && (v48 & 0x2000) == 0
            && (v48 & 0x1F) != 0 )
          {
            *((_DWORD *)v47 + 4 * ((v45 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          }
        }
      }
    }
    ExInitializeRundownProtection(v42 + 9);
    DxgkTryReferenceDxgResource(v42);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Count, (struct DXGRESOURCE *)v42);
    DXGRESOURCEREFERENCE::MoveAssign(&v92, &Count);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&Count, v49);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)&v100);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v42[10], v50);
    *a7 = v92;
LABEL_71:
    v30 = v12;
    goto LABEL_72;
  }
  v51 = a5;
  v36 = a6;
  v105 = 0;
  Count = 0LL;
  if ( !a5 )
  {
LABEL_68:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v100);
    if ( v51 )
    {
      v73 = v51;
      do
      {
        v74 = *v36;
        v103 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v97, v74);
        DXGALLOCATIONREFERENCE::MoveAssign(&v103, &v97);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v97, v75);
        v76 = (struct _EX_RUNDOWN_REF *)v103;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v98, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign(&v103, &v98);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v98, v77);
        DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v76);
        ExWaitForRundownProtectionRelease(v76 + 11);
        ExInitializeRundownProtection(v76 + 11);
        DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v76);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v99, v76);
        DXGALLOCATIONREFERENCE::MoveAssign(&v103, &v99);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v99, v78);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v103, v79);
        ++v36;
        --v73;
      }
      while ( v73 );
    }
    goto LABEL_71;
  }
  v52 = v104;
  v53 = a4;
  v94 = a4;
  v93 = a6;
  while ( 1 )
  {
    Count_low = LODWORD(v53->Count);
    v55 = (LODWORD(v53->Count) >> 6) & 0xFFFFFF;
    if ( v55 >= *((_DWORD *)a1 + 64) )
      goto LABEL_49;
    v56 = a1[30];
    v57 = *((_DWORD *)v56 + 4 * v55 + 2);
    if ( (((unsigned int)Count_low >> 25) & 0x60) != (*((_BYTE *)v56 + 16 * v55 + 8) & 0x60)
      || (v57 & 0x2000) != 0
      || (v57 & 0x1F) == 0 )
    {
      goto LABEL_49;
    }
    v58 = v57 & 0x1F;
    if ( (_BYTE)v58 != 5 )
    {
      v59 = WdLogNewEntry5_WdError(((unsigned int)Count_low >> 25) & 0x60, v58);
      *(_QWORD *)(v59 + 24) = 316LL;
      WdLogEvent5_WdError(v59);
LABEL_49:
      v60 = 0LL;
      goto LABEL_50;
    }
    v60 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v56 + 2 * v55);
LABEL_50:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v91, v60);
    if ( !v91 )
      break;
    if ( (unsigned int)Feature_1679598905__private_IsEnabledDeviceUsage() )
    {
      if ( v55 < *((_DWORD *)a1 + 64) )
      {
        v67 = a1[30];
        v65 = 2LL * v55;
        v64 = *((_DWORD *)v67 + 4 * v55 + 2) >> 14;
        LOBYTE(v64) = (*((_DWORD *)v67 + 4 * v55 + 2) & 0x4000) != 0;
        if ( (*((_DWORD *)v67 + 4 * v55 + 2) & 0x4000) != 0 )
        {
          v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v65, v64, v66);
          v82[5] = -1073741267LL;
          goto LABEL_79;
        }
      }
    }
    v68 = v91;
    if ( (struct DXGDEVICE *)v91[1].Count != v52 )
    {
      v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v65, v64, v66);
      v82[3] = v52;
      v82[4] = v91;
      v82[5] = v91[1].Count;
      v82[6] = -1073741811LL;
      goto LABEL_80;
    }
    if ( !v105 )
    {
      Count = (struct _EX_RUNDOWN_REF *)v91[5].Count;
      v105 = 1;
    }
    v69 = v91[5].Count;
    if ( (struct _EX_RUNDOWN_REF *)v69 != Count )
    {
LABEL_75:
      v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v69, v64, v66);
      v82[3] = v52;
      v82[4] = -1073741811LL;
      goto LABEL_80;
    }
    if ( v69 )
    {
      v64 = *(unsigned int *)(v69 + 4);
      if ( (v64 & 1) != 0 )
        goto LABEL_75;
      if ( !DxgkTryReferenceDxgResource((struct _EX_RUNDOWN_REF *)v69) )
      {
        LOBYTE(v12) = 1;
        goto LABEL_81;
      }
      LODWORD(v91[9].Count) |= 0x100000u;
      v68 = v91;
    }
    if ( v55 < *((_DWORD *)a1 + 64) )
    {
      v70 = a1[30];
      v64 = ((unsigned int)Count_low >> 25) & 0x60;
      v71 = *((_DWORD *)v70 + 4 * v55 + 2);
      if ( (((unsigned int)Count_low >> 25) & 0x60) == (*((_BYTE *)v70 + 16 * v55 + 8) & 0x60)
        && (v71 & 0x2000) == 0
        && (v71 & 0x1F) != 0 )
      {
        *((_DWORD *)v70 + 4 * (((unsigned int)Count_low >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
        v68 = v91;
      }
    }
    v72 = (struct _EX_RUNDOWN_REF *)v93;
    *v93 = v68;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91, v64);
    v53 = (struct _EX_RUNDOWN_REF *)((char *)&v94->Ptr + 4);
    v93 = (struct _EX_RUNDOWN_REF **)&v72[1];
    v51 = a5;
    ++v13;
    v94 = (struct _EX_RUNDOWN_REF *)((char *)v94 + 4);
    if ( v13 >= a5 )
      goto LABEL_68;
  }
  v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61, v63);
  v82[5] = -1073741811LL;
LABEL_79:
  v82[3] = v52;
  v82[4] = Count_low;
LABEL_80:
  WdLogEvent5_WdWarning(v82);
LABEL_81:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91, v64);
LABEL_82:
  if ( !v92 )
  {
    if ( v13 )
    {
      v83 = v106;
      v84 = v13;
      do
      {
        v85 = v83->Count;
        v86 = *v36;
        v87 = (LODWORD(v83->Count) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v87 < *((_DWORD *)a1 + 64) )
        {
          v88 = a1[30];
          if ( ((v85 >> 25) & 0x60) == (*((_BYTE *)v88 + 16 * v87 + 8) & 0x60)
            && (*((_DWORD *)v88 + 4 * v87 + 2) & 0x1F) != 0 )
          {
            v89 = 2LL * ((v85 >> 6) & 0xFFFFFF);
            if ( (*((_DWORD *)v88 + 4 * ((v85 >> 6) & 0xFFFFFF) + 2) & 0x2000) == 0 )
            {
              v90 = WdLogNewEntry5_WdAssertion((v85 >> 25) & 0x60, v88);
              *(_QWORD *)(v90 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v90);
              v88 = a1[30];
            }
            *((_DWORD *)v88 + 2 * v89 + 2) &= ~0x2000u;
            v83 = v106;
          }
        }
        if ( (v86[9].Count & 0x100000) != 0 )
        {
          DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v86[5].Count);
          LODWORD(v86[9].Count) &= ~0x100000u;
        }
        v83 = (struct _EX_RUNDOWN_REF *)((char *)v83 + 4);
        ++v36;
        v106 = v83;
        --v84;
      }
      while ( v84 );
    }
    if ( (_BYTE)v12 )
    {
      v12 = 255;
      goto LABEL_71;
    }
  }
  v30 = -1073741811;
LABEL_72:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v100);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v92, v80);
  return v30;
}
