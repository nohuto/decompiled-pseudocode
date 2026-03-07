__int64 __fastcall DxgkCompositionObject::Open(
        unsigned int a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned int v6; // eax
  int ProcessSessionId; // eax
  int v12; // ebx
  __int64 CurrentProcess; // rax
  unsigned int v14; // r14d
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rax
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  char v30; // [rsp+138h] [rbp+30h]
  PRKPROCESS PROCESS; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v32; // [rsp+148h] [rbp+40h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+48h] BYREF
  _QWORD v34[25]; // [rsp+188h] [rbp+80h] BYREF
  char v35; // [rsp+250h] [rbp+148h]

  v6 = *(_DWORD *)(a4 + 8);
  v30 = 0;
  PROCESS = 0LL;
  v32 = v6;
  if ( (unsigned __int8)PsIsSystemProcess(a3)
    || (ProcessSessionId = PsGetProcessSessionIdEx(a3), ProcessSessionId != -1)
    && ProcessSessionId == *(_DWORD *)(a4 + 8) )
  {
    v12 = 0;
    CurrentProcess = PsGetCurrentProcess();
    v14 = v32;
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) == v32
      || (Global = DXGGLOBAL::GetGlobal(),
          SessionMgr = DXGGLOBAL::GetSessionMgr(Global),
          v12 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v14, &PROCESS),
          v12 < 0) )
    {
      if ( v12 < 0 )
        goto LABEL_15;
    }
    else
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v30 = 1;
    }
    memset(v34, 0, sizeof(v34));
    v35 = 0;
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
    v16 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v17 = *CurrentThreadWin32Thread;
      if ( v17 && *(_DWORD *)(v17 + 8) )
      {
        v34[0] = v17;
        if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
        {
          WdLogSingleEntry1(1LL, 2406LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v22,
                v21,
                v23,
                0,
                2,
                -1,
                (__int64)L"m_pGlobal != NULL",
                2406LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
        if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 8LL))(*v16) <= 1 )
        {
          WdLogSingleEntry1(1LL, 85LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v25,
                v24,
                v26,
                0,
                2,
                -1,
                (__int64)L"newRefCount > 1",
                85LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
      }
    }
    else
    {
      ExInitializeFastOwnerEntry(&v34[7]);
      ExInitializeFastOwnerEntry(&v34[16]);
      HIDWORD(v34[5]) |= 4u;
      PsSetThreadWin32Thread(KeGetCurrentThread(), v34, 0LL);
      v35 = 1;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64, int))(**(_QWORD **)(a4 + 16)
                                                                                            + 8LL))(
            *(_QWORD *)(a4 + 16),
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
    if ( v35 )
    {
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v34);
    }
    else if ( v34[0] )
    {
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry1(1LL, 2406LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v28,
              v27,
              v29,
              0,
              2,
              -1,
              (__int64)L"m_pGlobal != NULL",
              2406LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 16LL))(v34[0]);
    }
  }
  else
  {
    v12 = -1073741790;
  }
LABEL_15:
  if ( v30 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
  return (unsigned int)v12;
}
