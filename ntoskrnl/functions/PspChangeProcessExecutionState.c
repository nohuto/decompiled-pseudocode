__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process)
{
  __int64 v2; // rdx
  unsigned int v3; // r13d
  char v4; // dl
  unsigned __int32 DirectoryTableBase; // eax
  __int64 v6; // r15
  int v7; // ebx
  unsigned int v8; // edi
  unsigned __int32 v9; // ett
  char v10; // r12
  unsigned int v11; // eax
  struct _KPROCESS *v12; // rax
  char v13; // r12
  int v14; // eax
  unsigned __int32 v15; // eax
  int v16; // r8d
  unsigned __int32 v17; // ett
  bool v18; // zf
  char v19; // r8
  __int64 v20; // r12
  unsigned __int32 i; // eax
  unsigned __int32 v22; // r15d
  unsigned __int32 v23; // ecx
  __int64 v24; // rdx
  unsigned __int8 v25; // bl
  unsigned int SessionId; // eax
  struct _KPROCESS *SessionById; // rax
  char v28; // bl
  char v29; // di
  int v30; // eax
  unsigned __int32 j; // eax
  unsigned __int32 v32; // eax
  void (__fastcall **ExtensionTable)(PEPROCESS); // rax
  char v35; // [rsp+28h] [rbp-A9h]
  char v36; // [rsp+28h] [rbp-A9h]
  char v37; // [rsp+29h] [rbp-A8h]
  char v38; // [rsp+2Ah] [rbp-A7h]
  char v39; // [rsp+2Ah] [rbp-A7h]
  unsigned __int32 v40; // [rsp+2Ch] [rbp-A5h]
  _QWORD v41[7]; // [rsp+30h] [rbp-A1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-69h] BYREF
  struct _KAPC_STATE v43; // [rsp+98h] [rbp-39h] BYREF
  struct _KAPC_STATE v44; // [rsp+C8h] [rbp-9h] BYREF

  v3 = 0;
  v37 = 0;
  if ( (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
  {
    HIDWORD(v41[0]) = 0;
    v19 = 0;
    v36 = 0;
    v20 = 0LL;
    memset(&v44, 0, sizeof(v44));
    memset(&v43, 0, sizeof(v43));
    _m_prefetchw(Process[2].IdealNode);
    for ( i = *(_DWORD *)Process[2].IdealNode; (i & 1) == 0; i = v40 )
    {
      v22 = HIBYTE(i);
      v23 = HIWORD(i);
      if ( HIBYTE(i) == BYTE2(i) )
        break;
      v40 = _InterlockedCompareExchange((volatile signed __int32 *)Process[2].IdealNode, i | 1, i);
      v24 = v40;
      if ( v40 == i )
      {
LABEL_43:
        v39 = 0;
        v25 = v23 ^ v22;
        if ( !v19 )
        {
          KeStackAttachProcess(Process, &v44);
          SessionId = MmGetSessionIdEx((__int64)Process);
          if ( SessionId != -1 )
          {
            SessionById = (struct _KPROCESS *)MmGetSessionById(SessionId, v24);
            v20 = (__int64)SessionById;
            if ( SessionById )
            {
              if ( (int)MmAttachSession(SessionById, &v43) < 0 )
              {
                MmQuitNextSession(v20);
                v20 = 0LL;
              }
            }
          }
          v36 = 1;
        }
        if ( (v25 & 2) != 0 )
        {
          if ( (v22 & 2) != 0 )
            v39 = 1;
          else
            MmInSwapWorkingSet(Process);
        }
        if ( (v25 & 4) != 0 && (v22 & 4) == 0 )
        {
          HIDWORD(v41[0]) = 1;
          PsRemoveDeepFreezeOptimizations((__int64)Process, (unsigned int *)v41 + 1);
        }
        if ( (v25 & 1) != 0 )
        {
          v37 = 1;
          LOBYTE(v24) = 1;
          if ( (v22 & 1) != 0 )
            PsFreezeProcess(Process, v24);
          else
            PsThawProcess(Process, v24);
        }
        if ( ((unsigned __int8)v22 & v25 & 4) != 0 )
        {
          HIDWORD(v41[0]) = 1;
          PsApplyDeepFreezeOptimizations((__int64)Process, (unsigned int *)v41 + 1);
        }
        v28 = v22;
        v29 = v22;
        if ( v39 )
        {
          v30 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
          if ( v30 < 0 )
          {
            v24 = 3221225625LL;
            if ( v30 == -1073741671 )
              v3 = -1073741671;
            v28 = v22 & 0xFD;
          }
        }
        _m_prefetchw(Process[2].IdealNode);
        for ( j = *(_DWORD *)Process[2].IdealNode; ; j = v40 )
        {
          LODWORD(v41[0]) = j;
          v32 = HIBYTE(j);
          LOBYTE(v22) = v32;
          if ( (_BYTE)v32 != v29 && (_BYTE)v32 != v28 )
          {
            v19 = v36;
            LOBYTE(v23) = v28;
            goto LABEL_43;
          }
          BYTE2(v40) = v28;
          LOWORD(v40) = v40 & 0xFFFE;
          HIBYTE(v40) = v28;
          v40 = _InterlockedCompareExchange((volatile signed __int32 *)Process[2].IdealNode, v40, v41[0]);
          if ( v40 == LODWORD(v41[0]) )
            break;
        }
        if ( v36 )
        {
          if ( v20 )
          {
            MmDetachSession(v20, ($115DCDF994C6370D29323EAB0E0C9502 *)&v43);
            MmQuitNextSession(v20);
          }
          KeUnstackDetachProcess(&v44);
        }
        v18 = v37 == 0;
LABEL_78:
        if ( !v18 )
        {
          ExtensionTable = (void (__fastcall **)(PEPROCESS))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
          if ( ExtensionTable )
          {
            (*ExtensionTable)(Process);
            ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
          }
        }
        return v3;
      }
    }
  }
  else
  {
    v4 = 0;
    v35 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    memset(&v41[1], 0, 48);
    _m_prefetchw(&Process[1].DirectoryTableBase);
    DirectoryTableBase = Process[1].DirectoryTableBase;
    v6 = 0LL;
    while ( (DirectoryTableBase & 0x40000000) == 0 )
    {
      v7 = (DirectoryTableBase >> 28) & 3;
      v8 = (DirectoryTableBase >> 22) & 3;
      if ( v7 == v8 )
        break;
      v9 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                             DirectoryTableBase | 0x40000000,
                             DirectoryTableBase);
      if ( v9 == DirectoryTableBase )
      {
LABEL_7:
        v38 = 0;
        v10 = v8 ^ v7;
        if ( !v4 )
        {
          KeStackAttachProcess(Process, &ApcState);
          v11 = MmGetSessionIdEx((__int64)Process);
          if ( v11 != -1 )
          {
            v12 = (struct _KPROCESS *)MmGetSessionById(v11, v2);
            v6 = (__int64)v12;
            if ( v12 )
            {
              if ( (int)MmAttachSession(v12, (PRKAPC_STATE)&v41[1]) < 0 )
              {
                MmQuitNextSession(v6);
                v6 = 0LL;
              }
            }
          }
          v35 = 1;
        }
        if ( (v10 & 2) != 0 )
        {
          if ( (v7 & 2) != 0 )
            v38 = 1;
          else
            MmInSwapWorkingSet(Process);
        }
        if ( (v10 & 1) != 0 )
        {
          v37 = 1;
          v13 = 1;
          LOBYTE(v2) = 1;
          if ( (v7 & 1) != 0 )
            PsFreezeProcess(Process, v2);
          else
            PsThawProcess(Process, v2);
        }
        else
        {
          v13 = v37;
        }
        v8 = v7;
        if ( v38 )
        {
          v14 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
          if ( v14 < 0 )
          {
            if ( v14 == -1073741671 )
              v3 = -1073741671;
            v8 = v7 & 0xFFFFFFFD;
          }
        }
        _m_prefetchw(&Process[1].DirectoryTableBase);
        v15 = Process[1].DirectoryTableBase;
        v16 = v7;
        do
        {
          v7 = (v15 >> 28) & 3;
          if ( v7 != v16 && v7 != v8 )
          {
            v4 = v35;
            goto LABEL_7;
          }
          v2 = v15 & 0x8F3FFFFF | ((v8 | (v8 << 6)) << 22);
          v17 = v15;
          v15 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[1].DirectoryTableBase, v2, v15);
        }
        while ( v17 != v15 );
        if ( v35 )
        {
          if ( v6 )
          {
            MmDetachSession(v6, ($115DCDF994C6370D29323EAB0E0C9502 *)&v41[1]);
            MmQuitNextSession(v6);
          }
          KeUnstackDetachProcess(&ApcState);
        }
        v18 = v13 == 0;
        goto LABEL_78;
      }
    }
  }
  return v3;
}
