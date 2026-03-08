/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C01CA2D4
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C01CA2A0 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02BD19C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000A070 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C000E148 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E190 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C0046FC8 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C018CED0 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  unsigned int v3; // r13d
  char *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rsi
  char *v9; // r12
  UINT v10; // r15d
  __int64 v11; // r8
  __int64 v12; // r8
  void *v13; // r9
  ADAPTER_RENDER *v14; // rcx
  const HANDLE *v15; // rax
  struct _KTHREAD **Global; // rax
  int v17; // r9d
  struct DXGPROCESS *Current; // rax
  int v19; // ecx
  DXGPROCESS *v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+40h] [rbp-140h]
  int v23; // [rsp+48h] [rbp-138h]
  int v24; // [rsp+50h] [rbp-130h]
  int v25; // [rsp+60h] [rbp-120h]
  int v26; // [rsp+68h] [rbp-118h]
  int v27; // [rsp+70h] [rbp-110h]
  int v28; // [rsp+78h] [rbp-108h]
  int v29; // [rsp+88h] [rbp-F8h]
  int v30; // [rsp+E0h] [rbp-A0h]
  int v31; // [rsp+E8h] [rbp-98h]
  _BYTE v32[16]; // [rsp+100h] [rbp-80h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v33; // [rsp+110h] [rbp-70h] BYREF
  unsigned int v34; // [rsp+170h] [rbp-10h]
  void **v35; // [rsp+178h] [rbp-8h]

  v3 = 0;
  v35 = (void **)*((_QWORD *)this + 21);
  if ( a2 && a3 >= *((_DWORD *)this + 33) )
  {
    v35 = a2;
  }
  else if ( !*((_QWORD *)this + 21) )
  {
    WdLogSingleEntry1(1LL, 12761LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDestructionBuffer is NULL!", 12761LL, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  v5 = (char *)this + 32;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)v5 + 6);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (const EVENT_DESCRIPTOR *)"g", v7, v17);
    }
    ExAcquirePushLockExclusiveEx(v5, 0LL);
  }
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 6) )
  {
    if ( (*((_DWORD *)this + 3) & 8) != 0 )
    {
      WdLogSingleEntry1(1LL, 12769LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_NtSecuritySharing", 12769LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)this + 3) & 0x2000) != 0 )
    {
      Current = DXGPROCESS::GetCurrent(v6);
      if ( Current )
      {
        v19 = *((_DWORD *)Current + 106);
        if ( (v19 & 0x180) != 0 )
        {
          if ( (v19 & 0x100) != 0 )
            v20 = (DXGPROCESS *)*((_QWORD *)Current + 76);
          else
            v20 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v19 & 0x80u) != 0));
          DXGPROCESS::FreeHandleSafe(v20, *((_DWORD *)this + 6));
        }
      }
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v32);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
      Global = (struct _KTHREAD **)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::FreeHandle(Global, *((_DWORD *)this + 6));
      if ( v32[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
    }
    *((_DWORD *)this + 6) = 0;
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 7) )
  {
    WdLogSingleEntry1(1LL, 12794LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_hHostGlobalHandle", 12794LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = (_QWORD *)*((_QWORD *)this + 17);
  v9 = (char *)this + 80;
  LOBYTE(v7) = 0;
  v10 = 0;
  LOBYTE(v34) = 0;
  if ( *((_DWORD *)this + 33) )
  {
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
      if ( *(_BYTE *)(v11 + 209) )
      {
        if ( bTracingEnabled )
        {
          v21 = *((_DWORD *)v8 - 11) >> 21;
          LOWORD(v21) = v21 & 0x3F;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
              v21,
              &EventDestroyAdapterAllocation,
              v11,
              0LL,
              0,
              v11,
              0,
              v8[8],
              v22,
              v23,
              v24,
              0,
              v25,
              v26,
              v27,
              v28,
              (_BYTE)v8 - 48,
              v29,
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
              v30,
              v31,
              v21,
              0);
        }
      }
      else
      {
        v12 = *(v8 - 5);
        if ( v12 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 760LL)
                                                                                + 8LL)
                                                                    + 120LL))(
            0LL,
            *(_QWORD *)(*(_QWORD *)v9 + 768LL),
            v12,
            v8 - 6);
          *(v8 - 5) = 0LL;
        }
      }
      v7 = (unsigned __int8)v34;
      if ( (*((_BYTE *)v8 - 44) & 2) != 0 )
        v7 = 1LL;
      v34 = v7;
      v35[v3] = (void *)*(v8 - 4);
      if ( *(v8 - 4) )
      {
        if ( v10 != v3 )
        {
          WdLogSingleEntry1(1LL, 12856LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumDriverHandles == i", 12856LL, 0LL, 0LL, 0LL, 0LL);
          v7 = v34;
        }
        ++v10;
      }
      *(v8 - 4) = 0LL;
      ++v3;
      v8 = (_QWORD *)*v8;
    }
    while ( v3 < *((_DWORD *)this + 33) );
    v5 = (char *)this + 32;
    if ( v10 )
      goto LABEL_22;
  }
  if ( *((_QWORD *)this + 2) )
  {
LABEL_22:
    v13 = (void *)*((_QWORD *)this + 2);
    v14 = *(ADAPTER_RENDER **)v9;
    *(_QWORD *)(&v33.NumAllocations + 1) = 0LL;
    HIDWORD(v33.pAllocationList) = 0;
    *((_DWORD *)&v33.Flags + 1) = 0;
    v33.NumAllocations = v10;
    v15 = 0LL;
    v33.Flags.Value = v13 != 0LL;
    if ( v10 )
      v15 = v35;
    v33.pAllocationList = v15;
    v33.hResource = v13;
    ADAPTER_RENDER::DdiDestroyAllocation(v14, &v33, v7);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
