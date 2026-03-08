/*
 * XREFs of PspSetQuotaLimits @ 0x140794940
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     MmEnforceWorkingSetLimit @ 0x140294980 (MmEnforceWorkingSetLimit.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140699B5C (SePrivilegedServiceAuditAlarm.c)
 *     PspAssignProcessQuotaBlock @ 0x140745228 (PspAssignProcessQuotaBlock.c)
 *     PspSinglePrivCheck @ 0x140794DB4 (PspSinglePrivCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall PspSetQuotaLimits(ULONG_PTR BugCheckParameter1, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  char v8; // r12
  __int64 result; // rax
  unsigned int v10; // edi
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // r13
  int v13; // r15d
  char v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  int v20; // esi
  signed __int64 *v21; // rdi
  ULONG_PTR v22; // rbx
  char v23; // [rsp+40h] [rbp-118h]
  char v24; // [rsp+41h] [rbp-117h]
  char v25; // [rsp+42h] [rbp-116h] BYREF
  char v26; // [rsp+43h] [rbp-115h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  int v28; // [rsp+50h] [rbp-108h]
  _QWORD *v29; // [rsp+58h] [rbp-100h]
  _OWORD v30[6]; // [rsp+60h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v32; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-68h]
  $115DCDF994C6370D29323EAB0E0C9502 v34; // [rsp+F8h] [rbp-60h] BYREF

  v8 = 0;
  Object = 0LL;
  memset(v30, 0, 0x58uLL);
  memset(&v34, 0, sizeof(v34));
  v25 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v32 = 0LL;
  v33 = 0LL;
  if ( a3 == 48 )
  {
    v30[0] = *(_OWORD *)a2;
    v30[1] = *(_OWORD *)(a2 + 16);
    v30[2] = *(_OWORD *)(a2 + 32);
    memset(&v30[3], 0, 40);
    v23 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return 3221225476LL;
    v23 = 0;
    v30[0] = *(_OWORD *)a2;
    v30[1] = *(_OWORD *)(a2 + 16);
    v30[2] = *(_OWORD *)(a2 + 32);
    v30[3] = *(_OWORD *)(a2 + 48);
    v30[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v30[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v30[5] & 0xFFFFFFE0) != 0 || (v30[5] & 3) == 3 || (v30[5] & 0xC) == 0xC )
    return 3221225485LL;
  if ( (v30[5] & 1) != 0 )
  {
    v10 = 4;
  }
  else
  {
    v10 = 0;
    if ( (v30[5] & 2) != 0 )
      v10 = 8;
  }
  if ( (v30[5] & 4) != 0 )
  {
    v10 |= 1u;
  }
  else if ( (v30[5] & 8) != 0 )
  {
    v10 |= 2u;
  }
  if ( *((_QWORD *)&v30[3] + 1) | *(_QWORD *)&v30[4] | *((_QWORD *)&v30[4] + 1) | DWORD1(v30[5]) )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 0;
    if ( *((_UNKNOWN **)Object + 173) != &PspSystemQuotaBlock || *(_QWORD *)&v30[1] && *((_QWORD *)&v30[1] + 1) )
    {
      if ( *(_QWORD *)&v30[1] && *((_QWORD *)&v30[1] + 1) )
      {
        if ( v30[1] == __PAIR128__(-1LL, -1LL) )
        {
          v24 = 1;
          LOBYTE(v28) = 0;
          v26 = 0;
        }
        else
        {
          v24 = 0;
          LOBYTE(v11) = a4;
          v28 = PspSinglePrivCheck(*((_QWORD *)&v30[1] + 1), -1LL, v11, &SubjectContext);
          v26 = 1;
        }
        v14 = 0;
        v15 = Object;
        v29 = Object;
        while ( 1 )
        {
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v34);
          --CurrentThread->SpecialApcDisable;
          v16 = v15[162];
          if ( v16 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
            if ( (*(_DWORD *)(v16 + 1040) & 1) != 0 )
            {
              v10 = 1;
              LOBYTE(v28) = 1;
              v8 = 1;
              if ( !v24 )
                v30[1] = *(_OWORD *)(v16 + 984);
            }
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D0C000, 0LL);
            ExReleaseResourceLite((PERESOURCE)(v16 + 56));
          }
          v13 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v30[1],
                  *((unsigned __int64 *)&v30[1] + 1),
                  0LL,
                  v28,
                  v10,
                  &v25);
          if ( v13 < 0 && v8 == 1 )
            MmEnforceWorkingSetLimit((struct _KPROCESS *)Object, v10, v17, v18);
          if ( v16 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D0C000, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140D0C000);
            KeAbPostRelease((ULONG_PTR)&qword_140D0C000);
          }
          v19 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v19
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          KiUnstackDetachProcess(&v34);
          if ( v25 == 1 && !v8 )
            v14 = 1;
          v19 = v29[162] == v16;
          v15 = v29;
          if ( v19 )
            break;
          v8 = 0;
        }
        if ( v26 == 1 && BYTE4(v33) )
        {
          if ( v14 == 1 )
            SePrivilegedServiceAuditAlarm((int)L"$&", (__int64 *)&SubjectContext, (__int64)&v32, SBYTE5(v33));
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
      goto LABEL_38;
    }
    if ( v23 == 1 )
    {
      memset(v30, 0, 0x58uLL);
      LODWORD(v30[5]) = 16;
    }
    if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
    {
      v21 = (signed __int64 *)Object;
      v22 = PsReferencePrimaryTokenWithTag((__int64)Object, 0x746C6644u);
      v20 = PspAssignProcessQuotaBlock((__int64)v30, (__int64)v21, v22);
      ObFastDereferenceObject(v21 + 151, v22, 0x746C6644u);
      if ( v20 >= 0 )
      {
LABEL_38:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (unsigned int)v13;
      }
    }
    else
    {
      v20 = -1073741727;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return (unsigned int)v20;
  }
  return result;
}
