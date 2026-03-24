/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C0116BE8
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0125434 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C0018FF4 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0019988 (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C015C2C8 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     DxgkIsGraphicsPartitionApplication @ 0x1C0284F54 (DxgkIsGraphicsPartitionApplication.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(unsigned __int64 this, void *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessWow64Process; // rax
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  NTSTATUS InformationProcess; // eax
  __int128 v15; // xmm0
  HANDLE v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  void *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  DXGPROCESS_NONPAGED *v24; // rax
  DXGPROCESS_NONPAGED *v25; // rax
  _QWORD *v26; // rax
  __int64 ProcessImageFileName; // rax
  const void *v28; // rsi
  size_t v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct DXGGLOBAL *v37; // rsi
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  SIZE_T v43; // rax
  PVOID v44; // rax
  PVOID v45; // rax
  struct DXGGLOBAL *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  bool v49; // zf
  int v50; // eax
  _QWORD *v51; // rsi
  unsigned int v52; // edi
  __int64 v53; // rax
  char v54; // al
  unsigned __int64 v55; // rcx
  int ProcessInformation; // [rsp+48h] [rbp-59h] BYREF
  HANDLE ProcessHandle; // [rsp+50h] [rbp-51h] BYREF
  __int128 v58; // [rsp+58h] [rbp-49h]
  _QWORD v59[12]; // [rsp+68h] [rbp-39h] BYREF

  if ( *(_DWORD *)(this + 40) )
    return 3221225485LL;
  if ( *(_QWORD *)(this + 104) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v7 + 24) = 1530LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *(_QWORD *)(this + 336) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 1531LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *(_BYTE *)(this + 345) = *(_QWORD *)(this + 56) == (_QWORD)PsInitialSystemProcess;
  CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess, a2, a3, a4);
  ProcessWow64Process = PsGetProcessWow64Process(CurrentProcess);
  ProcessHandle = 0LL;
  v11 = *(void **)(this + 56);
  *(_BYTE *)(this + 347) = (ProcessWow64Process != 0) | *(_BYTE *)(this + 347) & 0xFE;
  if ( ObOpenObjectByPointer(v11, 0x200u, 0LL, 0, 0LL, 0, &ProcessHandle) >= 0 )
  {
    ProcessInformation = 2;
    memset(v59, 0, sizeof(v59));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessLdtSize|0x40, &ProcessInformation, 4u, 0LL) >= 0 )
      *(_BYTE *)(this + 347) = (ProcessInformation != 1 ? 0 : 2) | *(_BYTE *)(this + 347) & 0xFD;
    InformationProcess = ZwQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)64, v59, 0x60u, 0LL);
    v15 = 0LL;
    v58 = 0LL;
    if ( (int)(InformationProcess + 0x80000000) < 0 || InformationProcess == -2147483643 )
    {
      LODWORD(v58) = HIDWORD(v59[0]);
      WORD2(v58) = v59[7];
      WORD3(v58) = WORD2(v59[7]);
      *((_QWORD *)&v58 + 1) = v59[2];
      v15 = v58;
    }
    v16 = ProcessHandle;
    *(_OWORD *)(this + 320) = v15;
    ObCloseHandle(v16, 0);
  }
  if ( !*(_BYTE *)(this + 345) && *((_BYTE *)DXGGLOBAL::GetGlobal(v13, v12) + 304320) )
    *(_BYTE *)(this + 478) = DxgkIsGraphicsPartitionApplication(*(PEPROCESS *)(this + 56));
  v17 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v17 )
  {
    *v17 = 0LL;
    v17[1] = 0LL;
    v17[2] = 0LL;
    *((_DWORD *)v17 + 6) = 0;
    *((_DWORD *)v17 + 7) = 4;
    *((_DWORD *)v17 + 8) = 48;
  }
  else
  {
    v17 = 0LL;
  }
  *(_QWORD *)(this + 104) = v17;
  if ( !v17 )
    goto LABEL_21;
  v23 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v23 )
  {
    *v23 = 0LL;
    v23[1] = 0LL;
    v23[2] = 0LL;
    *((_DWORD *)v23 + 6) = 0;
    *((_DWORD *)v23 + 7) = 6;
    *((_DWORD *)v23 + 8) = 35;
  }
  else
  {
    v23 = 0LL;
  }
  *(_QWORD *)(this + 336) = v23;
  if ( !v23 )
    goto LABEL_21;
  v24 = (DXGPROCESS_NONPAGED *)operator new(0x80uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  v25 = v24 ? DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v24) : 0LL;
  *(_QWORD *)(this + 64) = v25;
  if ( !v25 )
    goto LABEL_21;
  *((_QWORD *)v25 + 4) = this;
  *(_QWORD *)(*(_QWORD *)(this + 64) + 72LL) = a2;
  v26 = *(_QWORD **)(this + 64);
  v26[7] = DxgkpProcessStatusChangeWork;
  v26[8] = this;
  v26[5] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)(this + 56));
  v28 = (const void *)ProcessImageFileName;
  v29 = -1LL;
  do
    ++v29;
  while ( *(_BYTE *)(ProcessImageFileName + v29) );
  *(_QWORD *)(*(_QWORD *)(this + 64) + 80LL) = operator new[](v29 + 1, 0x4B677844u, (POOL_TYPE)512);
  v19 = *(void **)(*(_QWORD *)(this + 64) + 80LL);
  if ( !v19 )
    goto LABEL_21;
  memmove(v19, v28, v29);
  v30 = *(_QWORD *)(*(_QWORD *)(this + 64) + 80LL);
  *(_BYTE *)(v29 + v30) = 0;
  Global = DXGGLOBAL::GetGlobal(v30, v31);
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1548), (struct DXGPROCESS *)this);
  v37 = DXGGLOBAL::GetGlobal(v34, v33);
  v38 = *((unsigned int *)v37 + 312);
  if ( !(_DWORD)v38 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v39 + 24) = 2553LL;
    WdLogEvent5_WdAssertion(v39);
    v38 = *((unsigned int *)v37 + 312);
    if ( !(_DWORD)v38 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v41, v40);
      *(_QWORD *)(v42 + 24) = 1649LL;
      WdLogEvent5_WdAssertion(v42);
    }
  }
  v43 = 8 * v38;
  if ( !is_mul_ok(v38, 8uLL) )
    v43 = -1LL;
  v44 = operator new[](v43, 0x4B677844u, PagedPool);
  *(_QWORD *)(this + 48) = v44;
  if ( v44
    && (memset(v44, 0, 8 * v38),
        v45 = operator new(0x30uLL, 0x4B677844u, 1, PagedPool),
        (*(_QWORD *)(this + 72) = v45) != 0LL) )
  {
    v46 = DXGGLOBAL::GetGlobal((__int64)v19, v18);
    if ( !*((_DWORD *)v46 + 494) || (v49 = *((_BYTE *)v46 + 304216) == 0, v50 = 1, v49) )
      v50 = 0;
    *(_DWORD *)(this + 80) = v50;
    v51 = &DXGGLOBAL::m_pDxgmmsExport;
    v52 = 0;
    while ( 1 )
    {
      DXGGLOBAL::GetGlobal(v48, v47);
      if ( *v51 )
      {
        result = DXGPROCESS::DeferredInitialize((DXGPROCESS *)this, v52);
        if ( (int)result < 0 )
          break;
      }
      ++v52;
      ++v51;
      if ( v52 >= 2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(this + 32), 1uLL);
        if ( *(__int64 *)(this + 32) <= 0 )
        {
          v53 = WdLogNewEntry5_WdAssertion(v48, v47);
          *(_QWORD *)(v53 + 24) = 1096LL;
          WdLogEvent5_WdAssertion(v53);
        }
        if ( (*(_BYTE *)(this + 347) & 0x20) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)(this + 64) + 112LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this + 496) + 496LL) + 128LL);
          if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
          {
            v54 = *(_BYTE *)(this + 347);
            if ( (v54 & 0x20) != 0 )
              v55 = *(_QWORD *)(this + 496);
            else
              v55 = this & -(__int64)((v54 & 0x10) != 0);
            *(_QWORD *)(*(_QWORD *)(this + 64) + 120LL) = *(_QWORD *)(v55 + 496) + 128LL;
          }
        }
        *(_DWORD *)(this + 40) = 1;
        return 0LL;
      }
    }
  }
  else
  {
LABEL_21:
    v22 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
  return result;
}
