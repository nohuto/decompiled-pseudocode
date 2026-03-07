__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this, void *a2)
{
  int v4; // edx
  __int64 CurrentProcess; // rax
  __int64 ProcessWow64Process; // rax
  void *v7; // rcx
  int v8; // ecx
  NTSTATUS InformationProcess; // eax
  __int128 v10; // xmm0
  HANDLE v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 ProcessImageFileName; // rax
  const void *v17; // rsi
  size_t v18; // rbx
  void *v19; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v21; // rsi
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct DXGGLOBAL *v26; // rax
  int v27; // eax
  _QWORD *v28; // r14
  unsigned int v29; // esi
  __int64 result; // rax
  const wchar_t *v31; // r9
  bool v32; // zf
  int ProcessInformation; // [rsp+58h] [rbp-59h] BYREF
  HANDLE ProcessHandle; // [rsp+60h] [rbp-51h] BYREF
  __int128 v35; // [rsp+68h] [rbp-49h]
  _QWORD v36[12]; // [rsp+78h] [rbp-39h] BYREF

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  v4 = 0;
  if ( *((PEPROCESS *)this + 7) == PsInitialSystemProcess )
    v4 = 2;
  *((_DWORD *)this + 106) = *((_DWORD *)this + 106) & 0xFFFFFFFD | v4;
  CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess);
  ProcessWow64Process = PsGetProcessWow64Process(CurrentProcess);
  ProcessHandle = 0LL;
  v7 = (void *)*((_QWORD *)this + 7);
  *((_DWORD *)this + 106) = (ProcessWow64Process != 0 ? 8 : 0) | *((_DWORD *)this + 106) & 0xFFFFFFF7;
  if ( ObOpenObjectByPointer(v7, 0x200u, 0LL, 0, 0LL, 0, &ProcessHandle) >= 0 )
  {
    ProcessInformation = 2;
    memset(v36, 0, sizeof(v36));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessLdtSize|0x40, &ProcessInformation, 4u, 0LL) >= 0 )
    {
      v8 = 0;
      if ( ProcessInformation == 1 )
        v8 = 16;
      *((_DWORD *)this + 106) = v8 | *((_DWORD *)this + 106) & 0xFFFFFFEF;
    }
    InformationProcess = ZwQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)64, v36, 0x60u, 0LL);
    v10 = 0LL;
    v35 = 0LL;
    if ( (int)(InformationProcess + 0x80000000) < 0 || InformationProcess == -2147483643 )
    {
      LODWORD(v35) = HIDWORD(v36[0]);
      WORD2(v35) = v36[7];
      WORD3(v35) = WORD2(v36[7]);
      *((_QWORD *)&v35 + 1) = v36[2];
      v10 = v35;
    }
    v11 = ProcessHandle;
    *(_OWORD *)((char *)this + 360) = v10;
    ObCloseHandle(v11, 0);
  }
  if ( (*((_DWORD *)this + 106) & 2) == 0 && *((_BYTE *)DXGGLOBAL::GetGlobal() + 304480) )
    *((_BYTE *)this + 590) = DxgkIsGraphicsPartitionApplication(*((PEPROCESS *)this + 7));
  v12 = (_QWORD *)operator new[](0x90uLL, 0x4B677844u, 64LL);
  v13 = v12;
  if ( v12 )
  {
    v14 = v12 + 13;
    v12[4] = 0LL;
    v12[10] = 0LL;
    v12[11] = 0LL;
    v12[12] = 0LL;
    KeInitializeSpinLock(v12 + 15);
    v14[1] = v14;
    *v14 = v14;
    v13[16] = 0LL;
    *((_WORD *)v13 + 68) = 0;
    *((_BYTE *)v13 + 138) = 0;
    *(_OWORD *)v13 = 0LL;
    *((_OWORD *)v13 + 1) = 0LL;
    *((_OWORD *)v13 + 3) = 0LL;
    *((_OWORD *)v13 + 4) = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  *((_QWORD *)this + 8) = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(6LL, this);
    v31 = L"DXGPROCESS (0x%I64x) failed to allocate m_pNonPagedData";
LABEL_48:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v31, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  v13[4] = this;
  *(_QWORD *)(*((_QWORD *)this + 8) + 80LL) = a2;
  *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = *((_QWORD *)this + 7);
  v15 = (_QWORD *)*((_QWORD *)this + 8);
  v15[8] = DxgkpProcessStatusChangeWork;
  v15[9] = this;
  v15[6] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v17 = (const void *)ProcessImageFileName;
  v18 = -1LL;
  do
    ++v18;
  while ( *(_BYTE *)(ProcessImageFileName + v18) );
  *(_QWORD *)(*((_QWORD *)this + 8) + 96LL) = operator new[](v18 + 1, 0x4B677844u, 64LL);
  v19 = *(void **)(*((_QWORD *)this + 8) + 96LL);
  if ( !v19 )
  {
    WdLogSingleEntry1(6LL, this);
    v31 = L"DXGPROCESS (0x%I64x) failed to allocate m_pNonPagedData->m_ProcessName";
    goto LABEL_48;
  }
  memmove(v19, v17, v18);
  *(_BYTE *)(v18 + *(_QWORD *)(*((_QWORD *)this + 8) + 96LL)) = 0;
  *(_BYTE *)(*((_QWORD *)this + 8) + 136LL) = (*((_DWORD *)this + 106) & 0x10) != 0;
  Global = DXGGLOBAL::GetGlobal();
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1684), this);
  v21 = DXGGLOBAL::GetGlobal();
  if ( !*((_DWORD *)v21 + 341) )
  {
    WdLogSingleEntry1(1LL, 2723LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2723LL, 0LL, 0LL, 0LL, 0LL);
  }
  v22 = *((unsigned int *)v21 + 341);
  if ( !(_DWORD)v22 )
  {
    WdLogSingleEntry1(1LL, 1697LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MaximumGlobalAdapterCount > 0", 1697LL, 0LL, 0LL, 0LL, 0LL);
  }
  v23 = 8 * v22;
  if ( !is_mul_ok(v22, 8uLL) )
    v23 = -1LL;
  v24 = operator new[](v23, 0x4B677844u, 256LL);
  *((_QWORD *)this + 6) = v24;
  if ( !v24 )
  {
    WdLogSingleEntry1(6LL, this);
    v31 = L"DXGPROCESS (0x%I64x) failed to allocate m_ppAdapterInfo";
    goto LABEL_48;
  }
  v25 = operator new[](0x30uLL, 0x4B677844u, 256LL);
  *((_QWORD *)this + 9) = v25;
  if ( !v25 )
  {
    WdLogSingleEntry1(6LL, this);
    v31 = L"DXGPROCESS (0x%I64x) failed to allocate m_pCsStartRunningTime";
    goto LABEL_48;
  }
  v26 = DXGGLOBAL::GetGlobal();
  if ( !*((_DWORD *)v26 + 530) || (v32 = *((_BYTE *)v26 + 304376) == 0, v27 = 1, v32) )
    v27 = 0;
  *((_DWORD *)this + 20) = v27;
  v28 = &DXGGLOBAL::m_pDxgmmsExport;
  v29 = 0;
  while ( 1 )
  {
    DXGGLOBAL::GetGlobal();
    if ( *v28 )
    {
      result = DXGPROCESS::DeferredInitialize(this, v29);
      if ( (int)result < 0 )
        break;
    }
    ++v29;
    ++v28;
    if ( v29 >= 2 )
    {
      _InterlockedAdd64((volatile signed __int64 *)this + 4, 1uLL);
      if ( *((__int64 *)this + 4) <= 0 )
      {
        WdLogSingleEntry1(1LL, 985LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ReferenceCount > 0", 985LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
        *(_QWORD *)(*((_QWORD *)this + 8) + 128LL) = *(_QWORD *)(*((_QWORD *)this + 76) + 608LL) + 160LL;
      *((_DWORD *)this + 10) = 1;
      return 0LL;
    }
  }
  return result;
}
