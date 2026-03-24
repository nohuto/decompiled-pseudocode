/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026ABCC
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C02257B0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C014E738 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C014F7B8 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C02C71CC (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C02DCAA8 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  _BYTE *v4; // r12
  unsigned __int64 *v5; // r13
  __int64 v6; // r15
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r13d
  SIZE_T v12; // rdi
  _BYTE *PoolWithTag; // rax
  SIZE_T v14; // rdi
  _BYTE *v15; // rax
  SIZE_T v16; // rdi
  _BYTE *v17; // rax
  PVOID *v18; // rdi
  SIZE_T v19; // r14
  SIZE_T v20; // rbx
  _BYTE *v21; // rax
  PVOID v22; // rcx
  unsigned __int64 *v23; // rbx
  __int64 v24; // rax
  unsigned __int64 *v25; // r14
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  char *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rbx
  void *v32; // rcx
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PVOID *__attribute__((__org_arrdim(0,0))) v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rbx
  __int64 v45; // rdx
  PVOID *__attribute__((__org_arrdim(0,0))) v46; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v47; // r14
  __int64 v48; // rbx
  PVOID *v49; // r15
  int v50; // eax
  KPROCESSOR_MODE WaitMode; // al
  PVOID *__attribute__((__org_arrdim(0,0))) v52; // r14
  NTSTATUS v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rax
  signed __int64 v57; // r14
  __int64 v58; // rbx
  unsigned __int64 *v59; // rsi
  unsigned __int64 *v60; // rdi
  unsigned __int64 *v61; // rbx
  signed __int64 v62; // rax
  signed __int64 v63; // rtt
  __int64 v64; // rdx
  unsigned int v65; // ecx
  unsigned __int64 **v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v74; // [rsp+40h] [rbp-C0h]
  unsigned int v75; // [rsp+44h] [rbp-BCh]
  char *v78; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v79; // [rsp+60h] [rbp-A0h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v81; // [rsp+70h] [rbp-90h]
  _BYTE v82[16]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v83; // [rsp+88h] [rbp-78h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v84; // [rsp+90h] [rbp-70h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v87; // [rsp+B0h] [rbp-50h]
  _BYTE v88[64]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v89; // [rsp+F8h] [rbp-8h]
  PVOID v90; // [rsp+100h] [rbp+0h]
  _BYTE v91[64]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v92; // [rsp+148h] [rbp+48h]
  PVOID v93; // [rsp+150h] [rbp+50h]
  _BYTE v94[64]; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v95; // [rsp+198h] [rbp+98h]
  PVOID P; // [rsp+1A0h] [rbp+A0h]
  _BYTE v97[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v98; // [rsp+1E8h] [rbp+E8h]
  _BYTE v99[144]; // [rsp+1F0h] [rbp+F0h] BYREF
  PVOID v100; // [rsp+280h] [rbp+180h]
  _BYTE v101[384]; // [rsp+288h] [rbp+188h] BYREF
  unsigned int v102; // [rsp+408h] [rbp+308h]
  _BYTE v103[144]; // [rsp+410h] [rbp+310h] BYREF

  v4 = 0LL;
  v5 = (unsigned __int64 *)((char *)this + 664);
  v6 = 0LL;
  v74 = 0;
  v84 = a4;
  v75 = 0;
  v7 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v82, (DXGGLOBAL *)((char *)this + 584), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v82);
  v8 = *v5;
  v81 = v5;
  while ( (unsigned __int64 *)v8 != v5 && v8 )
  {
    v9 = *(_QWORD *)(v8 + 2696);
    v10 = v7 + 1;
    v8 = *(_QWORD *)v8;
    if ( !v9 )
      v10 = v7;
    v7 = v10;
  }
  if ( !v7 )
  {
    v11 = 0;
    goto LABEL_128;
  }
  v93 = 0LL;
  v95 = 0;
  if ( v7 <= 8 )
  {
    PoolWithTag = v94;
    v12 = 8LL * v7;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_15;
    v12 = 8LL * v7;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12, 0x4B677844u);
  }
  v93 = PoolWithTag;
  v95 = v7;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v12);
LABEL_15:
  v100 = 0LL;
  v102 = 0;
  if ( v7 <= 8 )
  {
    v14 = 48LL * v7;
    v15 = v101;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x30 )
      goto LABEL_21;
    v14 = 48LL * v7;
    v15 = ExAllocatePoolWithTag((POOL_TYPE)512, v14, 0x4B677844u);
  }
  v100 = v15;
  v102 = v7;
  if ( v15 )
    memset(v15, 0, v14);
LABEL_21:
  v90 = 0LL;
  v92 = 0;
  if ( v7 <= 8 )
  {
    v17 = v91;
    v16 = 8LL * v7;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_27;
    v16 = 8LL * v7;
    v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x4B677844u);
  }
  v90 = v17;
  v92 = v7;
  if ( v17 )
    memset(v17, 0, v16);
LABEL_27:
  v87 = 0LL;
  v18 = 0LL;
  v89 = 0;
  if ( v7 <= 8 )
  {
    v18 = (PVOID *)v88;
    v87 = v88;
    v19 = 8LL * v7;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_33;
    v19 = 8LL * v7;
    v18 = (PVOID *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B677844u);
    v87 = v18;
  }
  v89 = v7;
  if ( v18 )
  {
    memset(v18, 0, v19);
    v18 = (PVOID *)v87;
  }
LABEL_33:
  v98 = 0;
  P = 0LL;
  if ( v7 <= 8 )
  {
    v4 = v97;
    v20 = 8LL * v7;
    P = v97;
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_39;
    v20 = 8LL * v7;
    v21 = ExAllocatePoolWithTag(PagedPool, v20, 0x4B677844u);
    v18 = (PVOID *)v87;
    v4 = v21;
    P = v21;
  }
  v98 = v7;
  if ( v4 )
  {
    memset(v4, 0, v20);
    v18 = (PVOID *)v87;
    v4 = P;
  }
LABEL_39:
  v22 = v100;
  Object = (PVOID *)v93;
  WaitBlockArray = (PKWAIT_BLOCK)v100;
  v79 = v90;
  if ( v90 && v18 && v93 && v100 && v4 )
  {
    v23 = (unsigned __int64 *)*v5;
    while ( v23 != v5 && v23 )
    {
      if ( (unsigned int)v6 >= v7 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22, v8);
        *(_QWORD *)(v24 + 24) = 3510LL;
        WdLogEvent5_WdAssertion(v24);
      }
      v25 = v23;
      v23 = (unsigned __int64 *)*v23;
      v83 = v23;
      _m_prefetchw(v25 + 3);
      v26 = v25[3];
      while ( v26 )
      {
        v22 = (PVOID)(v26 + 1);
        v27 = v26;
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v25 + 3, v26 + 1, v26);
        if ( v27 == v26 )
        {
          LOBYTE(v26) = 1;
          break;
        }
      }
      if ( (_BYTE)v26 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v99, (struct DXGADAPTER *const)v25, 0LL);
        v28 = 0LL;
        v78 = 0LL;
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v25);
        if ( v25[337] )
        {
          LODWORD(v31) = COREADAPTERACCESS::AcquireExclusive((__int64)v99, 1LL);
          if ( (int)v31 >= 0 )
          {
            v32 = (void *)v25[27];
            v79[v6] = v32;
            ObfReferenceObject(v32);
            v33 = a2;
            if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
            {
              v34 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v25, &v78);
              v28 = v78;
              v31 = v34;
              if ( v34 < 0 )
              {
                if ( v78 )
                {
                  v38 = WdLogNewEntry5_WdAssertion(v36, v35);
                  *(_QWORD *)(v38 + 24) = 3567LL;
                  WdLogEvent5_WdAssertion(v38);
                }
                v39 = WdLogNewEntry5_WdError(v36, v35);
                *(_QWORD *)(v39 + 24) = v31;
                WdLogEvent5_WdError(v39);
              }
              else
              {
                v37 = Object;
                v18[v6] = v78;
                v37[v6] = v28 + 24;
              }
              v33 = a2;
            }
            if ( (int)v31 < 0 )
              goto LABEL_72;
            if ( (*((_DWORD *)v33 + 1) & 4) != 0 )
            {
              v40 = DmmEnableModeResetOnMonitorEvent(v25, 0);
              v31 = v40;
              if ( v40 < 0 )
              {
                v43 = WdLogNewEntry5_WdError(v42, v41);
                *(_QWORD *)(v43 + 24) = v31;
                WdLogEvent5_WdError(v43);
              }
              else
              {
                *(_QWORD *)&v4[8 * v6] = v25;
              }
            }
            if ( (int)v31 < 0 )
            {
LABEL_72:
              v75 = v31;
              v44 = v79;
              ObfDereferenceObject((PVOID)v79[v6]);
              v44[v6] = 0LL;
              if ( v28 )
              {
                MonitorReleaseMonitorPendingEvent(v28, v45);
                v46 = Object;
                v18[v6] = 0LL;
                v46[v6] = 0LL;
              }
              v6 = v74;
            }
            else
            {
              v6 = ++v74;
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v99);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v99, v30);
          v23 = v83;
        }
        else
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v99, v29);
        }
        v5 = v81;
      }
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v82, v8);
    v11 = v75;
    if ( (_DWORD)v6 )
    {
      v47 = v84;
      v48 = (unsigned int)v6;
      v49 = (PVOID *)v79;
      do
      {
        v50 = DpiPollDisplayChildren(*v49, a3, v47);
        if ( v50 < 0 )
          v11 = v50;
        ObfDereferenceObject(*v49);
        *v49++ = 0LL;
        --v48;
      }
      while ( v48 );
      LODWORD(v6) = v74;
    }
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 || !(_DWORD)v6 )
    {
LABEL_92:
      if ( (*((_DWORD *)a2 + 1) & 4) != 0 && (_DWORD)v6 )
      {
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v82);
        v59 = v81;
        v60 = (unsigned __int64 *)*v81;
        while ( v60 != v59 && v60 )
        {
          v61 = v60;
          v60 = (unsigned __int64 *)*v60;
          _m_prefetchw(v61 + 3);
          v62 = v61[3];
          while ( v62 )
          {
            v63 = v62;
            v62 = _InterlockedCompareExchange64((volatile signed __int64 *)v61 + 3, v62 + 1, v62);
            if ( v63 == v62 )
            {
              LOBYTE(v62) = 1;
              break;
            }
          }
          if ( (_BYTE)v62 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v103, (struct DXGADAPTER *const)v61, 0LL);
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v61);
            v65 = 0;
            v66 = (unsigned __int64 **)v4;
            while ( *v66 != v61 )
            {
              ++v65;
              ++v66;
              if ( v65 >= (unsigned int)v6 )
                goto LABEL_110;
            }
            if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v103, 1LL) >= 0 )
            {
              v67 = DmmEnableModeResetOnMonitorEvent(v61, 1u);
              v70 = v67;
              if ( v67 < 0 )
              {
                v71 = WdLogNewEntry5_WdError(v69, v68);
                *(_QWORD *)(v71 + 24) = v70;
                WdLogEvent5_WdError(v71);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v103);
            }
LABEL_110:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v103, v64);
          }
        }
      }
      goto LABEL_112;
    }
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v52 = Object;
    v53 = KeWaitForMultipleObjects(v6, Object, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    v55 = v53;
    if ( v53 == 258 )
    {
      v11 = 258;
      v56 = WdLogNewEntry5_WdError(v54, v8);
      *(_QWORD *)(v56 + 24) = 3656LL;
    }
    else
    {
      if ( v53 >= 0 )
        goto LABEL_90;
      v11 = v53;
      v56 = WdLogNewEntry5_WdError(v54, v8);
      *(_QWORD *)(v56 + 24) = v55;
    }
    WdLogEvent5_WdError(v56);
LABEL_90:
    v57 = (char *)v52 - (char *)v18;
    v58 = (unsigned int)v6;
    do
    {
      MonitorReleaseMonitorPendingEvent(*v18, v8);
      *v18 = 0LL;
      *(PVOID *)((char *)v18++ + v57) = 0LL;
      --v58;
    }
    while ( v58 );
    goto LABEL_92;
  }
  v72 = WdLogNewEntry5_WdError(v100, v8);
  *(_QWORD *)(v72 + 24) = 3499LL;
  WdLogEvent5_WdError(v72);
  v11 = -1073741801;
LABEL_112:
  if ( P != v97 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v98 = 0;
  if ( v87 != v88 && v87 )
    ExFreePoolWithTag(v87, 0);
  v87 = 0LL;
  v89 = 0;
  if ( v90 != v91 && v90 )
    ExFreePoolWithTag(v90, 0);
  v90 = 0LL;
  v92 = 0;
  if ( v100 != v101 && v100 )
    ExFreePoolWithTag(v100, 0);
  v100 = 0LL;
  v102 = 0;
  if ( v93 != v94 && v93 )
    ExFreePoolWithTag(v93, 0);
  v93 = 0LL;
  v95 = 0;
LABEL_128:
  if ( v82[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v82, v8);
  return v11;
}
