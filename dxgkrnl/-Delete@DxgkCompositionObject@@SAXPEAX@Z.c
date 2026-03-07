void __fastcall DxgkCompositionObject::Delete(_DWORD *a1)
{
  unsigned int v1; // eax
  __int64 CurrentProcess; // rax
  unsigned int v4; // edi
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rax
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  char v19; // [rsp+138h] [rbp+30h]
  PRKPROCESS PROCESS; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v21; // [rsp+148h] [rbp+40h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+48h] BYREF
  _QWORD v23[25]; // [rsp+188h] [rbp+80h] BYREF
  char v24; // [rsp+250h] [rbp+148h]

  v1 = a1[2];
  v19 = 0;
  PROCESS = 0LL;
  v21 = v1;
  if ( !*((_QWORD *)a1 + 2) )
    return;
  CurrentProcess = PsGetCurrentProcess();
  v4 = v21;
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) == v21 )
    goto LABEL_3;
  Global = DXGGLOBAL::GetGlobal();
  SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
  if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v4, &PROCESS) >= 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v19 = 1;
LABEL_3:
    memset(v23, 0, sizeof(v23));
    v24 = 0;
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
    v6 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v7 = *CurrentThreadWin32Thread;
      if ( v7 && *(_DWORD *)(v7 + 8) )
      {
        v23[0] = v7;
        if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
        {
          WdLogSingleEntry1(1LL, 2406LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v11,
                v10,
                v12,
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
        if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 8LL))(*v6) <= 1 )
        {
          WdLogSingleEntry1(1LL, 85LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v14,
                v13,
                v15,
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
      ExInitializeFastOwnerEntry(&v23[7]);
      ExInitializeFastOwnerEntry(&v23[16]);
      HIDWORD(v23[5]) |= 4u;
      PsSetThreadWin32Thread(KeGetCurrentThread(), v23, 0LL);
      v24 = 1;
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)a1 + 2) + 32LL))(*((_QWORD *)a1 + 2), a1);
    if ( v24 )
    {
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v23);
    }
    else if ( v23[0] )
    {
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry1(1LL, 2406LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v17,
              v16,
              v18,
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
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 16LL))(v23[0]);
    }
  }
  if ( v19 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
}
