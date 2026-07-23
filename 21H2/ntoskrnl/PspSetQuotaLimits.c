/*
 * XREFs of PspSetQuotaLimits @ 0x140603BC4
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14023C7DC (MmAdjustWorkingSetSizeEx.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x1402F69E8 (MmEnforceWorkingSetLimit.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspLockWorkingSetChangeExclusiveUnsafe @ 0x140581BAC (PspLockWorkingSetChangeExclusiveUnsafe.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x140581E10 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PspSinglePrivCheck @ 0x140603FDC (PspSinglePrivCheck.c)
 *     PspAssignProcessQuotaBlock @ 0x14060BFA4 (PspAssignProcessQuotaBlock.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14069382C (SePrivilegedServiceAuditAlarm.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 */

NTSTATUS __fastcall PspSetQuotaLimits(HANDLE Handle, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  char v8; // r12
  NTSTATUS result; // eax
  int v10; // edi
  __int64 v11; // r8
  int v12; // r15d
  char v13; // r13
  char v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // r9
  bool v18; // zf
  int v19; // esi
  signed __int64 *v20; // rdi
  struct _DMA_ADAPTER *v21; // rbx
  char v22; // [rsp+40h] [rbp-118h]
  char v23; // [rsp+41h] [rbp-117h]
  char v24; // [rsp+42h] [rbp-116h] BYREF
  char v25; // [rsp+43h] [rbp-115h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-108h]
  _QWORD *v28; // [rsp+58h] [rbp-100h]
  _OWORD v29[6]; // [rsp+60h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v31; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v8 = 0;
  Object = 0LL;
  memset(v29, 0, 0x58uLL);
  memset(&ApcState, 0, sizeof(ApcState));
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
      return -1073741820;
    v22 = 0;
    v29[0] = *(_OWORD *)a2;
    v29[1] = *(_OWORD *)(a2 + 16);
    v29[2] = *(_OWORD *)(a2 + 32);
    v29[3] = *(_OWORD *)(a2 + 48);
    v29[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v29[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v29[5] & 0xFFFFFFE0) != 0 || (v29[5] & 3) == 3 || (v29[5] & 0xC) == 0xC )
    return -1073741811;
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
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(Handle, 0x100u, (POBJECT_TYPE)PsProcessType, a4, 0x79517350u, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0;
    if ( *((_UNKNOWN **)Object + 173) != &PspSystemQuotaBlock || *(_QWORD *)&v29[1] && *((_QWORD *)&v29[1] + 1) )
    {
      if ( *(_QWORD *)&v29[1] && *((_QWORD *)&v29[1] + 1) )
      {
        if ( v29[1] == __PAIR128__(-1LL, -1LL) )
        {
          v23 = 1;
          v13 = 0;
          v25 = 0;
        }
        else
        {
          v23 = 0;
          LOBYTE(v11) = a4;
          v13 = PspSinglePrivCheck(*((_QWORD *)&v29[1] + 1), -1LL, v11, &SubjectContext);
          v25 = 1;
        }
        v14 = 0;
        v15 = Object;
        v28 = Object;
        while ( 1 )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          --CurrentThread->SpecialApcDisable;
          v16 = v15[162];
          if ( v16 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
            if ( (*(_DWORD *)(v16 + 848) & 1) != 0 )
            {
              v10 = 1;
              v13 = 1;
              v8 = 1;
              if ( !v23 )
                v29[1] = *(_OWORD *)(v16 + 792);
            }
            PspLockWorkingSetChangeExclusiveUnsafe();
            ExReleaseResourceLite((PERESOURCE)(v16 + 56));
          }
          v12 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v29[1],
                  *((unsigned __int64 *)&v29[1] + 1),
                  0,
                  v13,
                  v10,
                  &v24);
          if ( v12 < 0 && v8 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v10);
          if ( v16 )
            PspUnlockWorkingSetChangeExclusiveUnsafe();
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KeUnstackDetachProcess(&ApcState);
          if ( v24 == 1 && !v8 )
            v14 = 1;
          v18 = v28[162] == v16;
          v15 = v28;
          if ( v18 )
            break;
          v8 = 0;
        }
        if ( v25 == 1 && BYTE4(v32) )
        {
          if ( v14 == 1 )
          {
            LOBYTE(v17) = BYTE5(v32);
            SePrivilegedServiceAuditAlarm(L"$&", &SubjectContext, &v31, v17);
          }
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
LABEL_52:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v19;
      }
      v20 = (signed __int64 *)Object;
      v21 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)Object);
      v19 = PspAssignProcessQuotaBlock(v29, v20, v21);
      ObFastDereferenceObject(v20 + 151, v21);
      if ( v19 < 0 )
        goto LABEL_52;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v12;
  }
  return result;
}
