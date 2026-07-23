/*
 * XREFs of SepTrustLevelCheck @ 0x14026C2B0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372BC4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x14026BD80 (RtlSidDominatesForTrust.c)
 *     SeGetTrustLabelAce @ 0x14026C320 (SeGetTrustLabelAce.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     SeLockSubjectContext @ 0x14070D210 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14070D270 (SeUnlockSubjectContext.c)
 */

__int64 __fastcall SepTrustLevelCheck(
        __int64 a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        PSID Sid1,
        char a6,
        int *a7)
{
  char v9; // si
  __int64 TrustLabelAce; // rax
  __int64 result; // rax
  int v12; // r14d
  void *v13; // r15
  struct _KTHREAD *CurrentThread; // rax
  PSID v15; // r11
  NTSTATUS v16; // ebp
  BOOLEAN v17[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 DominatesTrust; // [rsp+50h] [rbp+8h] BYREF

  DominatesTrust = a1;
  v17[0] = 0;
  LOBYTE(DominatesTrust) = 0;
  v9 = 0;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  if ( !TrustLabelAce || (v12 = *(_DWORD *)(TrustLabelAce + 4), v13 = (void *)(TrustLabelAce + 8), TrustLabelAce == -8) )
  {
    result = 0LL;
    *a7 = -1;
    return result;
  }
  if ( a6 )
  {
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a4 + 48), 1u);
    }
    else
    {
      SeLockSubjectContext(a3);
    }
    v9 = 1;
  }
  if ( a4 )
  {
    v15 = Sid1;
    goto LABEL_15;
  }
  if ( !a3->ClientToken )
  {
LABEL_14:
    v15 = (PSID)*((_QWORD *)a3->PrimaryToken + 138);
LABEL_15:
    v16 = RtlSidDominatesForTrust(v15, v13, v17);
    if ( v16 >= 0 )
    {
      if ( v17[0] )
        *a7 = -1;
      else
        *a7 = v12 | 0x1000000;
    }
    goto LABEL_19;
  }
  v16 = RtlSidDominatesForTrust(
          *((PSID *)a3->PrimaryToken + 138),
          *((PSID *)a3->ClientToken + 138),
          (PBOOLEAN)&DominatesTrust);
  if ( v16 >= 0 )
  {
    if ( (_BYTE)DominatesTrust )
      goto LABEL_15;
    goto LABEL_14;
  }
LABEL_19:
  if ( v9 )
  {
    if ( a4 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
      KeLeaveCriticalRegion();
    }
    else
    {
      SeUnlockSubjectContext(a3);
    }
  }
  return (unsigned int)v16;
}
