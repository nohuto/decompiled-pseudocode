__int64 __fastcall DxgkCompositionObject::OkToClose(struct _EPROCESS *a1, _DWORD *a2, void *a3, char a4)
{
  unsigned int v4; // eax
  __int64 CurrentProcess; // rax
  unsigned int v10; // edi
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rax
  int v14; // ebx
  unsigned __int8 v15; // bl
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // [rsp+28h] [rbp-E0h]
  char v29; // [rsp+138h] [rbp+30h]
  PRKPROCESS PROCESS; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v31; // [rsp+148h] [rbp+40h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+48h] BYREF
  _QWORD v33[25]; // [rsp+188h] [rbp+80h] BYREF
  char v34; // [rsp+250h] [rbp+148h]

  v4 = a2[2];
  v29 = 0;
  PROCESS = 0LL;
  v31 = v4;
  if ( a4 && (unsigned int)PsGetProcessSessionIdEx(a1) == -1 )
    goto LABEL_33;
  CurrentProcess = PsGetCurrentProcess();
  v10 = v31;
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v31 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
    if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v10, &PROCESS) < 0 )
      goto LABEL_33;
    KeStackAttachProcess(PROCESS, &ApcState);
    v29 = 1;
  }
  memset(v33, 0, sizeof(v33));
  v34 = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
  v12 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    v13 = *CurrentThreadWin32Thread;
    if ( v13 && *(_DWORD *)(v13 + 8) )
    {
      v33[0] = v13;
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry1(1LL, 2406LL);
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
              v23,
              v22,
              v24,
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
    ExInitializeFastOwnerEntry(&v33[7]);
    ExInitializeFastOwnerEntry(&v33[16]);
    HIDWORD(v33[5]) |= 4u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), v33, 0LL);
    v34 = 1;
  }
  LOBYTE(v28) = a4;
  v14 = (*(__int64 (__fastcall **)(_QWORD, struct _EPROCESS *, _DWORD *, void *, int))(**((_QWORD **)a2 + 2) + 16LL))(
          *((_QWORD *)a2 + 2),
          a1,
          a2,
          a3,
          v28);
  if ( v34 )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v33);
  }
  else if ( v33[0] )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry1(1LL, 2406LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v26,
            v25,
            v27,
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
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 16LL))(v33[0]);
  }
  if ( v14 >= 0 )
  {
    v15 = 1;
    goto LABEL_15;
  }
LABEL_33:
  v15 = 0;
LABEL_15:
  if ( v29 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
  return v15;
}
