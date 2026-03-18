/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0175ABC
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0175A88 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02C20BC (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000295C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0002A60 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000481C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C0048028 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C01BAF20 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  unsigned int v3; // r13d
  char *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rsi
  char *v9; // r12
  unsigned __int8 v10; // r8
  UINT v11; // r15d
  __int64 v12; // r8
  __int64 v13; // r8
  void *v14; // r9
  ADAPTER_RENDER *v15; // rcx
  const HANDLE *v16; // rax
  struct _KTHREAD **Global; // rax
  int v18; // r9d
  unsigned __int64 Current; // rax
  int v20; // ecx
  DXGPROCESS *v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+40h] [rbp-140h]
  int v24; // [rsp+48h] [rbp-138h]
  int v25; // [rsp+50h] [rbp-130h]
  int v26; // [rsp+60h] [rbp-120h]
  int v27; // [rsp+68h] [rbp-118h]
  int v28; // [rsp+70h] [rbp-110h]
  int v29; // [rsp+78h] [rbp-108h]
  int v30; // [rsp+88h] [rbp-F8h]
  int v31; // [rsp+E0h] [rbp-A0h]
  int v32; // [rsp+E8h] [rbp-98h]
  _BYTE v33[16]; // [rsp+100h] [rbp-80h] BYREF
  _DXGKARG_DESTROYALLOCATION v34; // [rsp+110h] [rbp-70h] BYREF
  unsigned __int8 v35; // [rsp+170h] [rbp-10h]
  void **v36; // [rsp+178h] [rbp-8h]

  v3 = 0;
  v36 = (void **)*((_QWORD *)this + 21);
  if ( a2 && a3 >= *((_DWORD *)this + 33) )
  {
    v36 = a2;
  }
  else if ( !*((_QWORD *)this + 21) )
  {
    WdLogSingleEntry1(1LL, 12801LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDestructionBuffer is NULL!", 12801LL, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  v5 = (char *)this + 32;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v18 = *((_DWORD *)v5 + 6);
      if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventBlockThread, v7, v18);
    }
    ExAcquirePushLockExclusiveEx(v5, 0LL);
  }
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 6) )
  {
    if ( (*((_DWORD *)this + 3) & 8) != 0 )
    {
      WdLogSingleEntry1(1LL, 12809LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_NtSecuritySharing", 12809LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)this + 3) & 0x2000) != 0 )
    {
      Current = (unsigned __int64)DXGPROCESS::GetCurrent();
      if ( Current )
      {
        v20 = *(_DWORD *)(Current + 424);
        if ( (v20 & 0x180) != 0 )
        {
          if ( (v20 & 0x100) != 0 )
            v21 = *(DXGPROCESS **)(Current + 608);
          else
            v21 = (DXGPROCESS *)(Current & -(__int64)((v20 & 0x80u) != 0));
          DXGPROCESS::FreeHandleSafe(v21, *((_DWORD *)this + 6));
        }
      }
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v33);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
      Global = (struct _KTHREAD **)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::FreeHandle(Global, *((_DWORD *)this + 6));
      if ( v33[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
    }
    *((_DWORD *)this + 6) = 0;
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 7) )
  {
    WdLogSingleEntry1(1LL, 12834LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_hHostGlobalHandle", 12834LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = (_QWORD *)*((_QWORD *)this + 17);
  v9 = (char *)this + 80;
  v10 = 0;
  v11 = 0;
  v35 = 0;
  if ( *((_DWORD *)this + 33) )
  {
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
      if ( *(_BYTE *)(v12 + 209) )
      {
        if ( bTracingEnabled )
        {
          v22 = *((_DWORD *)v8 - 11) >> 21;
          LOWORD(v22) = v22 & 0x3F;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
              v22,
              &EventDestroyAdapterAllocation,
              v12,
              0LL,
              0,
              v12,
              0,
              v8[8],
              v23,
              v24,
              v25,
              0,
              v26,
              v27,
              v28,
              v29,
              (_BYTE)v8 - 48,
              v30,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              v31,
              v32,
              v22,
              0);
        }
      }
      else
      {
        v13 = *(v8 - 5);
        if ( v13 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 760LL)
                                                                                + 8LL)
                                                                    + 120LL))(
            0LL,
            *(_QWORD *)(*(_QWORD *)v9 + 768LL),
            v13,
            v8 - 6);
          *(v8 - 5) = 0LL;
        }
      }
      v10 = v35;
      if ( (*((_BYTE *)v8 - 44) & 2) != 0 )
        v10 = 1;
      v35 = v10;
      v36[v3] = (void *)*(v8 - 4);
      if ( *(v8 - 4) )
      {
        if ( v11 != v3 )
        {
          WdLogSingleEntry1(1LL, 12896LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumDriverHandles == i", 12896LL, 0LL, 0LL, 0LL, 0LL);
          v10 = v35;
        }
        ++v11;
      }
      *(v8 - 4) = 0LL;
      ++v3;
      v8 = (_QWORD *)*v8;
    }
    while ( v3 < *((_DWORD *)this + 33) );
    v5 = (char *)this + 32;
    if ( v11 )
      goto LABEL_22;
  }
  if ( *((_QWORD *)this + 2) )
  {
LABEL_22:
    v14 = (void *)*((_QWORD *)this + 2);
    v15 = *(ADAPTER_RENDER **)v9;
    *(_QWORD *)(&v34.NumAllocations + 1) = 0LL;
    HIDWORD(v34.pAllocationList) = 0;
    *((_DWORD *)&v34.Flags + 1) = 0;
    v34.NumAllocations = v11;
    v16 = 0LL;
    v34.Flags.Value = v14 != 0LL;
    if ( v11 )
      v16 = v36;
    v34.pAllocationList = v16;
    v34.hResource = v14;
    ADAPTER_RENDER::DdiDestroyAllocation(v15, &v34, v10);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
