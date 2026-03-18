/*
 * XREFs of PspSetQuotaLimits @ 0x1407F2DBC
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x1402091B0 (MmEnforceWorkingSetLimit.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PspAssignProcessQuotaBlock @ 0x1406C86A0 (PspAssignProcessQuotaBlock.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140726520 (SePrivilegedServiceAuditAlarm.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     PspSinglePrivCheck @ 0x1407F3230 (PspSinglePrivCheck.c)
 */

__int64 __fastcall PspSetQuotaLimits(ULONG_PTR BugCheckParameter1, __int64 a2, int a3, char a4)
{
  char v8; // r12
  __int64 result; // rax
  int v10; // edi
  __int64 v11; // r8
  _DWORD *v12; // r9
  struct _KTHREAD *CurrentThread; // r13
  int v14; // r15d
  char v15; // r14
  _QWORD *v16; // rsi
  __int64 v17; // rsi
  bool v18; // zf
  int v19; // esi
  signed __int64 *v20; // rdi
  unsigned __int64 v21; // rbx
  char v22; // [rsp+40h] [rbp-118h]
  char v23; // [rsp+41h] [rbp-117h]
  char v24; // [rsp+42h] [rbp-116h] BYREF
  char v25; // [rsp+43h] [rbp-115h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  int v27; // [rsp+50h] [rbp-108h]
  _QWORD *v28; // [rsp+58h] [rbp-100h]
  _OWORD v29[6]; // [rsp+60h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v31; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-68h]
  _OWORD v33[3]; // [rsp+F8h] [rbp-60h] BYREF

  v8 = 0;
  Object = 0LL;
  memset(v29, 0, 0x58uLL);
  memset(v33, 0, sizeof(v33));
  v24 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v31 = 0LL;
  v32 = 0LL;
  if ( a3 == 48 )
  {
    v29[0] = *(_OWORD *)a2;
    v29[1] = *(_OWORD *)(a2 + 16);
    v29[2] = *(_OWORD *)(a2 + 32);
    memset(&v29[3], 0, 40);
    v22 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return 3221225476LL;
    v22 = 0;
    v29[0] = *(_OWORD *)a2;
    v29[1] = *(_OWORD *)(a2 + 16);
    v29[2] = *(_OWORD *)(a2 + 32);
    v29[3] = *(_OWORD *)(a2 + 48);
    v29[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v29[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v29[5] & 0xFFFFFFE0) != 0 || (v29[5] & 3) == 3 || (v29[5] & 0xC) == 0xC )
    return 3221225485LL;
  if ( (v29[5] & 1) != 0 )
  {
    v10 = 4;
  }
  else
  {
    v10 = 0;
    if ( (v29[5] & 2) != 0 )
      v10 = 8;
  }
  if ( (v29[5] & 4) != 0 )
  {
    v10 |= 1u;
  }
  else if ( (v29[5] & 8) != 0 )
  {
    v10 |= 2u;
  }
  if ( *((_QWORD *)&v29[3] + 1) | *(_QWORD *)&v29[4] | *((_QWORD *)&v29[4] + 1) | DWORD1(v29[5]) )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             256,
             (__int64)PsProcessType,
             a4,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v14 = 0;
    if ( *((_UNKNOWN **)Object + 173) != &PspSystemQuotaBlock || *(_QWORD *)&v29[1] && *((_QWORD *)&v29[1] + 1) )
    {
      if ( *(_QWORD *)&v29[1] && *((_QWORD *)&v29[1] + 1) )
      {
        if ( v29[1] == __PAIR128__(-1LL, -1LL) )
        {
          v23 = 1;
          LOBYTE(v27) = 0;
          v25 = 0;
        }
        else
        {
          v23 = 0;
          LOBYTE(v11) = a4;
          v27 = PspSinglePrivCheck(*((_QWORD *)&v29[1] + 1), -1LL, v11, &SubjectContext);
          v25 = 1;
        }
        v15 = 0;
        v16 = Object;
        v28 = Object;
        while ( 1 )
        {
          KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v33, v12);
          --CurrentThread->SpecialApcDisable;
          v17 = v16[162];
          if ( v17 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
            if ( (*(_DWORD *)(v17 + 1040) & 1) != 0 )
            {
              v10 = 1;
              LOBYTE(v27) = 1;
              v8 = 1;
              if ( !v23 )
                v29[1] = *(_OWORD *)(v17 + 984);
            }
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140CF5E70, 0LL);
            ExReleaseResourceLite((PERESOURCE)(v17 + 56));
          }
          v14 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v29[1],
                  *((unsigned __int64 *)&v29[1] + 1),
                  0,
                  v27,
                  v10,
                  &v24);
          if ( v14 < 0 && v8 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v10);
          if ( v17 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF5E70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(&qword_140CF5E70);
            KeAbPostRelease((ULONG_PTR)&qword_140CF5E70);
          }
          v18 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v18
            && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          KiUnstackDetachProcess((__int64)v33, 0LL);
          if ( v24 == 1 && !v8 )
            v15 = 1;
          v18 = v28[162] == v17;
          v16 = v28;
          if ( v18 )
            break;
          v8 = 0;
        }
        if ( v25 == 1 && BYTE4(v32) )
        {
          if ( v15 == 1 )
            SePrivilegedServiceAuditAlarm(L"$&", (__int64 *)&SubjectContext, (int *)&v31, SBYTE5(v32));
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
    }
    else
    {
      if ( v22 == 1 )
      {
        memset(v29, 0, 0x58uLL);
        LODWORD(v29[5]) = 16;
      }
      if ( !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
      {
        v19 = -1073741727;
LABEL_57:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (unsigned int)v19;
      }
      v20 = (signed __int64 *)Object;
      v21 = PsReferencePrimaryTokenWithTag((__int64)Object, 0x746C6644u);
      v19 = PspAssignProcessQuotaBlock((__int64)v29, (__int64)v20, v21);
      ObFastDereferenceObject(v20 + 151, v21, 0x746C6644u);
      if ( v19 < 0 )
        goto LABEL_57;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return (unsigned int)v14;
  }
  return result;
}
