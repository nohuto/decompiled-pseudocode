void __fastcall DxgkCompositionObject::Close(struct _EPROCESS *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 CurrentProcess; // rax
  unsigned int v10; // edi
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rax
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  char v25; // [rsp+138h] [rbp+30h]
  PRKPROCESS PROCESS; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v27; // [rsp+148h] [rbp+40h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+48h] BYREF
  _QWORD v29[25]; // [rsp+188h] [rbp+80h] BYREF
  char v30; // [rsp+250h] [rbp+148h]

  v4 = a2[2];
  PROCESS = 0LL;
  v25 = 0;
  v27 = v4;
  CurrentProcess = PsGetCurrentProcess();
  v10 = v27;
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v27 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
    if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v10, &PROCESS) < 0 )
      goto LABEL_11;
    KeStackAttachProcess(PROCESS, &ApcState);
    v25 = 1;
  }
  memset(v29, 0, sizeof(v29));
  v30 = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
  v12 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    v13 = *CurrentThreadWin32Thread;
    if ( v13 && *(_DWORD *)(v13 + 8) )
    {
      v29[0] = v13;
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
      if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 8LL))(*v12) <= 1 )
      {
        WdLogSingleEntry1(1LL, 85LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v20,
              v19,
              v21,
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
    ExInitializeFastOwnerEntry(&v29[7]);
    ExInitializeFastOwnerEntry(&v29[16]);
    HIDWORD(v29[5]) |= 4u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), v29, 0LL);
    v30 = 1;
  }
  (*(void (__fastcall **)(_QWORD, struct _EPROCESS *, _DWORD *, __int64, __int64))(**((_QWORD **)a2 + 2) + 24LL))(
    *((_QWORD *)a2 + 2),
    a1,
    a2,
    a3,
    a4);
  if ( v30 )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v29);
  }
  else if ( v29[0] )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry1(1LL, 2406LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v23,
            v22,
            v24,
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
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 16LL))(v29[0]);
  }
LABEL_11:
  if ( v25 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
}
