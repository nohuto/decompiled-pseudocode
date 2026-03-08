/*
 * XREFs of EtwpNotifyGuid @ 0x14068EA84
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x1407489B8 (EtwpSendSessionNotification.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140204F00 (PsGetCurrentThreadProcessId.c)
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpAllocDataBlock @ 0x14068ED78 (EtwpAllocDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x14068F950 (EtwpFreeFilterInfo.c)
 *     EtwpSendDataBlock @ 0x1406901A8 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1406909A0 (EtwpUnreferenceDataBlock.c)
 *     EtwpCheckGuidAccess @ 0x1406910EC (EtwpCheckGuidAccess.c)
 *     EtwpAccessCheck @ 0x140692ED0 (EtwpAccessCheck.c)
 *     EtwpFindGuidEntryByGuid @ 0x140694F60 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140695094 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCreateUmReplyObject @ 0x14078BE14 (EtwpCreateUmReplyObject.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409E94C0 (EtwpCheckCurrentUserProcessAccess.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1409E96E0 (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpApplyTransientFilters @ 0x1409F2338 (EtwpApplyTransientFilters.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x1409F24E4 (EtwpValidateTraceControlFilterDescriptors.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  int v6; // r13d
  __int64 v7; // r8
  int v8; // ebx
  ACCESS_MASK v9; // ebx
  unsigned int v10; // esi
  int v11; // eax
  __int64 GuidEntryByGuid; // rax
  ULONG_PTR v13; // r14
  int v14; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v17; // r15
  int v18; // esi
  _QWORD *v19; // rbx
  __int16 v20; // ax
  int v21; // eax
  HANDLE v22; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  int v25; // eax
  unsigned int ProcessId; // eax
  bool v27; // [rsp+20h] [rbp-79h]
  int v28; // [rsp+24h] [rbp-75h]
  unsigned __int64 v29; // [rsp+40h] [rbp-59h]
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v31[160]; // [rsp+50h] [rbp-49h] BYREF
  __int16 v32; // [rsp+108h] [rbp+6Fh] BYREF
  int v33; // [rsp+118h] [rbp+7Fh]

  Handle = 0LL;
  v33 = 0;
  v6 = 0;
  v27 = 0;
  v29 = 0LL;
  memset(v31, 0, 0x68uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 <= 0x10000 )
  {
    v8 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 11 )
    {
      if ( (unsigned int)v7 < 0x78 || (v23 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8, v23 >= v7 - 76) )
      {
        v14 = -2147483643;
        goto LABEL_7;
      }
      v24 = *(_DWORD *)(v23 + a2 + 72);
      if ( v24 )
      {
        v29 = v23 + a2 + 76;
        if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v24, v29, (unsigned int)(v7 - (v23 + 76)), v31) )
        {
          v14 = -1073741811;
          goto LABEL_7;
        }
      }
      *(_DWORD *)a2 = 4;
      v8 = 4;
    }
    *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
    if ( v8 == 4 )
    {
      if ( *(_DWORD *)(a2 + 4) < 0xF8u )
      {
        v14 = -1073741789;
        goto LABEL_7;
      }
      v9 = 128;
      v10 = 0;
      v25 = EtwpCheckGuidAccess(PrivateLoggerSecurityGuid, 128LL, 0LL);
      *(_OWORD *)(a2 + 40) = PrivateLoggerNotificationGuid;
      v27 = v25 < 0;
    }
    else
    {
      v9 = 4;
      v10 = 1;
    }
    v11 = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 20) = 0;
    v28 = v11;
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2 + 40, v10);
    v13 = GuidEntryByGuid;
    if ( !GuidEntryByGuid )
    {
      v14 = -1073741163;
LABEL_7:
      EtwpFreeFilterInfo(v31);
      return (unsigned int)v14;
    }
    if ( a3 )
    {
      if ( *(_DWORD *)a2 != 4 )
      {
        v14 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), v9);
        if ( v14 < 0 )
        {
LABEL_28:
          EtwpUnreferenceGuidEntry(v13);
          goto LABEL_7;
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v13 + 408, 0LL);
    v17 = (_QWORD *)(v13 + 56);
    *(_QWORD *)(v13 + 416) = KeGetCurrentThread();
    if ( (_QWORD *)*v17 == v17 )
    {
      v14 = -1073741162;
    }
    else
    {
      if ( !*(_BYTE *)(a2 + 12) )
        goto LABEL_13;
      v14 = EtwpCreateUmReplyObject(v13, &Handle);
      if ( v14 >= 0 )
      {
        *(_QWORD *)(a2 + 24) = 0LL;
LABEL_13:
        v18 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
        if ( v18 < 0 )
        {
LABEL_45:
          v14 = -1073741801;
        }
        else
        {
          v19 = (_QWORD *)*v17;
          if ( (_QWORD *)*v17 != v17 )
          {
            while ( 1 )
            {
              v20 = *((_WORD *)v19 + 49);
              if ( (v20 & 2) != 0
                && (v20 & 0x40) == 0
                && (!v29 || (unsigned __int8)EtwpApplyTransientFilters(v19, v31))
                && (!v28 || (unsigned int)PsGetProcessId((PEPROCESS)v19[10]) == v28) )
              {
                if ( !v27 || (v18 = EtwpCheckCurrentUserProcessAccess(v19[10]), v18 >= 0) )
                {
                  if ( *(_DWORD *)a2 != 4 )
                    goto LABEL_21;
                  v32 = 0;
                  if ( *(_DWORD *)(a2 + 76) == 1 )
                    goto LABEL_21;
                  ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v19[10]);
                  v18 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v32);
                  if ( v18 >= 0 )
                    break;
                }
              }
              v6 = v33;
LABEL_23:
              v19 = (_QWORD *)*v19;
              if ( v19 == (_QWORD *)(v13 + 56) )
                goto LABEL_24;
            }
            v18 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
            if ( v18 < 0 )
              goto LABEL_45;
            MEMORY[0x50] = v32;
LABEL_21:
            v21 = EtwpSendDataBlock(v19, 0LL);
            v6 = v33;
            if ( v21 < 0 )
              v18 = v21;
            else
              v6 = ++v33;
            goto LABEL_23;
          }
LABEL_24:
          v22 = Handle;
          v14 = 0;
          *(_DWORD *)(a2 + 20) = v6;
          if ( !v6 )
            v14 = v18;
          *(_QWORD *)(a2 + 24) = v22;
        }
      }
    }
    *(_QWORD *)(v13 + 416) = 0LL;
    ExReleasePushLockEx((__int64 *)(v13 + 408), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_28;
  }
  return 3221225990LL;
}
