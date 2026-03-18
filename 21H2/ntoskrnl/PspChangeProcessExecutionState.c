/*
 * XREFs of PspChangeProcessExecutionState @ 0x140687754
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1402498B0 (PspExecuteJobFreezeThawCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140684158 (PspRemoveProcessFromJobChain.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     PsSwapProcessWorkingSet @ 0x1409AD76C (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 *     MmInSwapWorkingSet @ 0x14025F4D4 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExReleaseExtensionTable @ 0x1403614E0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PsFreezeProcess @ 0x1406C03F0 (PsFreezeProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // r15d
  char v5; // r13
  unsigned __int32 DirectoryTableBase; // eax
  void *v8; // rbp
  __int64 DirectoryTableBase_low; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned __int32 v13; // ett
  char v14; // r12
  char v15; // r14
  unsigned int SessionId; // eax
  ULONG_PTR SessionById; // rax
  char v18; // r14
  unsigned int v19; // r8d
  bool v20; // zf
  unsigned __int32 v21; // eax
  void (__fastcall **ExtensionTable)(_KPROCESS *); // rax
  int v23; // eax
  char v24; // [rsp+20h] [rbp-98h]
  _OWORD v25[3]; // [rsp+28h] [rbp-90h] BYREF
  _OWORD v26[3]; // [rsp+58h] [rbp-60h] BYREF

  v24 = 0;
  v4 = 0;
  memset(v26, 0, sizeof(v26));
  v5 = 0;
  memset(v25, 0, sizeof(v25));
  _m_prefetchw(&BugCheckParameter1[1].DirectoryTableBase);
  DirectoryTableBase = BugCheckParameter1[1].DirectoryTableBase;
  v8 = 0LL;
  DirectoryTableBase_low = 0x40000000LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v10 = (DirectoryTableBase >> 28) & 3;
    v11 = (DirectoryTableBase >> 22) & 3;
    if ( v10 == v11 )
      break;
    v13 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&BugCheckParameter1[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v13 == DirectoryTableBase )
    {
LABEL_6:
      v14 = 0;
      v15 = v11 ^ v10;
      if ( !v5 )
      {
        KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v26, a4);
        SessionId = MmGetSessionIdEx((__int64)BugCheckParameter1);
        if ( SessionId != -1 )
        {
          SessionById = MmGetSessionById(SessionId);
          v8 = (void *)SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById) < 0 )
            {
              ObfDereferenceObject(v8);
              v8 = 0LL;
            }
          }
        }
        v5 = 1;
      }
      if ( (v15 & 2) != 0 )
      {
        if ( (v10 & 2) != 0 )
          v14 = 1;
        else
          MmInSwapWorkingSet(BugCheckParameter1);
      }
      if ( (v15 & 1) != 0 )
      {
        v18 = 1;
        v24 = 1;
        LOBYTE(DirectoryTableBase_low) = 1;
        if ( (v10 & 1) != 0 )
          PsFreezeProcess(BugCheckParameter1, DirectoryTableBase_low);
        else
          PsThawMultiProcess((ULONG_PTR)BugCheckParameter1, DirectoryTableBase_low, 1u);
      }
      else
      {
        v18 = v24;
      }
      v11 = v10;
      if ( v14 )
      {
        v23 = MmOutSwapWorkingSet(BugCheckParameter1, PspOutSwapSharedPages != 0);
        if ( v23 < 0 )
        {
          if ( v23 == -1073741671 )
            v4 = -1073741671;
          v11 = v10 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&BugCheckParameter1[1].DirectoryTableBase);
      DirectoryTableBase_low = LODWORD(BugCheckParameter1[1].DirectoryTableBase);
      v19 = v10;
      do
      {
        v10 = ((unsigned int)DirectoryTableBase_low >> 28) & 3;
        if ( v10 != v19 && v10 != v11 )
          goto LABEL_6;
        v21 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&BugCheckParameter1[1].DirectoryTableBase,
                DirectoryTableBase_low & 0x8F3FFFFF | ((v11 | (v11 << 6)) << 22),
                DirectoryTableBase_low);
        v20 = (_DWORD)DirectoryTableBase_low == v21;
        DirectoryTableBase_low = v21;
      }
      while ( !v20 );
      if ( v8 )
      {
        MmDetachSession((__int64)v8, (__int64)v25);
        ObfDereferenceObject(v8);
      }
      KiUnstackDetachProcess((__int64)v26, 0LL);
      if ( v18 )
      {
        ExtensionTable = (void (__fastcall **)(_KPROCESS *))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        if ( ExtensionTable )
        {
          (*ExtensionTable)(BugCheckParameter1);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        }
      }
      return v4;
    }
  }
  return v4;
}
