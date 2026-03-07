__int64 __fastcall CmpStartRMLog(char *a1, _OWORD *a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v6; // rcx
  CLFS_INFORMATION *Pool2; // r13
  bool v8; // zf
  int LogFileInformation; // ebx
  ULONG_PTR v10; // rax
  __int64 v11; // r12
  struct _PRIVILEGE_SET *v12; // r14
  PVOID *v13; // r15
  int i; // eax
  CLFS_INFORMATION *v15; // rax
  CLFS_INFORMATION *v16; // rbx
  FILE_OBJECT *v17; // rcx
  PVOID v18; // rcx
  NTSTATUS v19; // eax
  PVOID v21; // rcx
  NTSTATUS v22; // ecx
  CLFS_LSN LastLsn; // rax
  CLFS_LSN v24; // rbx
  FILE_OBJECT *v25; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-99h]
  int ppvReadContexta; // [rsp+20h] [rbp-99h]
  CLFS_LSN plsn1; // [rsp+50h] [rbp-69h] BYREF
  PVOID pvCursorContext; // [rsp+58h] [rbp-61h] BYREF
  ULONG pcbReadBuffer; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING v31; // [rsp+68h] [rbp-51h] BYREF
  ULONG pcbRestartBuffer; // [rsp+78h] [rbp-41h] BYREF
  PVOID pvReadContext; // [rsp+80h] [rbp-39h] BYREF
  PCUNICODE_STRING Source; // [rsp+88h] [rbp-31h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-29h] BYREF
  PVOID ppvRestartBuffer; // [rsp+A0h] [rbp-19h] BYREF
  CLFS_LSN plsn; // [rsp+A8h] [rbp-11h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+B0h] [rbp-9h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+B8h] [rbp-1h] BYREF
  PVOID ppvReadBuffer; // [rsp+C0h] [rbp+7h] BYREF
  CLFS_LSN plsnRecord; // [rsp+C8h] [rbp+Fh] BYREF
  CLS_LSN pvRestartBuffer; // [rsp+D0h] [rbp+17h] BYREF
  CLFS_LSN plsnFirst; // [rsp+D8h] [rbp+1Fh] BYREF
  struct _PRIVILEGE_SET *pcbInfoBuffer; // [rsp+120h] [rbp+67h] BYREF
  char v45; // [rsp+130h] [rbp+77h]
  ULONG pcbWritten; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = 0;
  v45 = 1;
  ppvRestartBuffer = 0LL;
  pcbRestartBuffer = 0;
  plsn.ullOffset = 0LL;
  pvCursorContext = 0LL;
  plsn1.ullOffset = 0LL;
  pcbWritten = 0;
  pvRestartBuffer.ullOffset = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v31.Length = 0LL;
  --CurrentThread->KernelApcDisable;
  v6 = (struct _ERESOURCE *)*((_QWORD *)a1 + 16);
  v31.Buffer = 0LL;
  pcbInfoBuffer = 0LL;
  ExAcquireResourceExclusiveLite(v6, 1u);
  if ( (*((_DWORD *)a1 + 26) & 1) != 0 )
    goto LABEL_47;
  Pool2 = (CLFS_INFORMATION *)ExAllocatePool2(256LL, 120LL, 538987843LL);
  if ( !Pool2 )
  {
    v2 = -1073741670;
LABEL_47:
    ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
    KeLeaveCriticalRegion();
    return v2;
  }
  *((_DWORD *)a1 + 26) |= 2u;
  v8 = a1 == CmRmSystem;
  *((_QWORD *)a1 + 15) = CLFS_LSN_INVALID_EXT;
  if ( v8 )
  {
    Source = &CmpLogPath;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(qword_140C028D0 + 64) + 128LL) = *a2;
    LogFileInformation = RtlStringFromGUIDEx(
                           (unsigned int *)(*(_QWORD *)(qword_140C028D0 + 64) + 128LL),
                           (__int64)&v31,
                           1);
    if ( LogFileInformation >= 0 )
    {
      v11 = (__int64)(a1 + 72);
      *((_QWORD *)a1 + 9) = 5242880LL;
      v10 = qword_140C028D0;
LABEL_9:
      LogFileInformation = CmpQueryFileSecurityDescriptor(*(HANDLE *)(v10 + 1544), &pcbInfoBuffer);
      if ( LogFileInformation < 0 )
      {
        v12 = 0LL;
      }
      else
      {
        v12 = pcbInfoBuffer;
        v13 = (PVOID *)(a1 + 96);
        for ( i = CmpStartCLFSLog(
                    Source,
                    &v31,
                    ppvReadContext,
                    v11,
                    (__int64)(a1 + 68),
                    (__int64)(a1 + 88),
                    (__int64)(a1 + 96));
              ;
              i = CmpStartCLFSLog(
                    Source,
                    &v31,
                    ppvReadContexta,
                    v11,
                    (__int64)(a1 + 68),
                    (__int64)(a1 + 88),
                    (__int64)(a1 + 96)) )
        {
          LogFileInformation = i;
          if ( i < 0 )
            break;
          LODWORD(pcbInfoBuffer) = 120;
          v15 = (CLFS_INFORMATION *)ExAllocatePool2(256LL, 120LL, 538987843LL);
          v16 = v15;
          if ( v15 )
          {
            ClfsGetLogFileInformation(*((PLOG_FILE_OBJECT *)a1 + 11), v15, (PULONG)&pcbInfoBuffer);
            ExFreePoolWithTag(v16, 0);
          }
          v17 = (FILE_OBJECT *)*((_QWORD *)a1 + 11);
          pcbWritten = 120;
          LogFileInformation = ClfsGetLogFileInformation(v17, Pool2, &pcbWritten);
          *((_QWORD *)a1 + 15) = Pool2->BaseLsn.ullOffset;
          if ( LogFileInformation < 0 )
            break;
          if ( ClfsReadRestartArea(*v13, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
            || !ppvRestartBuffer )
          {
            plsn1 = Pool2->BaseLsn;
          }
          else
          {
            plsn1 = *(CLFS_LSN *)ppvRestartBuffer;
            if ( ClfsLsnEqual(&plsn, &plsn1) )
            {
              v21 = *v13;
              plsnFirst = plsn1;
              pvReadContext = 0LL;
              ppvReadBuffer = 0LL;
              pcbReadBuffer = 0;
              plsnUndoNext.ullOffset = 0LL;
              plsnPrevious.ullOffset = 0LL;
              plsnRecord.ullOffset = 0LL;
              LOBYTE(pcbInfoBuffer) = 0;
              if ( ClfsReadLogRecord(
                     v21,
                     &plsnFirst,
                     ClfsContextForward,
                     &ppvReadBuffer,
                     &pcbReadBuffer,
                     (PCLFS_RECORD_TYPE)&pcbInfoBuffer,
                     &plsnUndoNext,
                     &plsnPrevious,
                     &pvReadContext) >= 0 )
              {
                LOBYTE(pcbInfoBuffer) = 1;
                v22 = ClfsReadNextLogRecord(
                        pvReadContext,
                        &ppvReadBuffer,
                        &pcbReadBuffer,
                        (PCLFS_RECORD_TYPE)&pcbInfoBuffer,
                        0LL,
                        &plsnUndoNext,
                        &plsnPrevious,
                        &plsnRecord);
                if ( v22 == -1073741807 )
                {
                  LastLsn = Pool2->LastLsn;
                }
                else
                {
                  LastLsn = plsn1;
                  if ( v22 >= 0 )
                    LastLsn = plsnRecord;
                }
                plsn1 = LastLsn;
              }
              if ( pvReadContext )
                ClfsTerminateReadLog(pvReadContext);
            }
          }
          if ( pvCursorContext )
          {
            ClfsTerminateReadLog(pvCursorContext);
            pvCursorContext = 0LL;
          }
          if ( !ClfsLsnEqual(&plsn1, &Pool2->LastLsn) && (*((_DWORD *)a1 + 26) & 4) != 0 )
          {
            v24 = plsn1;
            if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))CmpRmAnalysisPhase)(a1, (CLFS_LSN)plsn1.ullOffset) >= 0 )
            {
              ((void (__fastcall *)(_QWORD, _QWORD))CmpRmReDoPhase)(a1, (CLFS_LSN)v24.ullOffset);
              CmpRmUnDoPhase(a1);
            }
            *((_DWORD *)a1 + 26) &= ~4u;
          }
          v18 = *v13;
          pvRestartBuffer = Pool2->LastLsn;
          v19 = ClfsWriteRestartArea(v18, &pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
          LogFileInformation = v19;
          if ( !v45 || v19 != -1072037859 && *((_DWORD *)a1 + 17) <= 0xAu )
            break;
          v45 = 0;
          if ( pvCursorContext )
          {
            ClfsTerminateReadLog(pvCursorContext);
            pvCursorContext = 0LL;
          }
          ClfsDeleteLogByPointer(*((PLOG_FILE_OBJECT *)a1 + 11));
          ClfsDeleteMarshallingArea(*v13);
          v25 = (FILE_OBJECT *)*((_QWORD *)a1 + 11);
          *v13 = 0LL;
          ClfsCloseLogFileObject(v25);
          *((_DWORD *)a1 + 17) = 0;
          *((_QWORD *)a1 + 11) = 0LL;
        }
        if ( pvCursorContext )
          ClfsTerminateReadLog(pvCursorContext);
        if ( LogFileInformation < 0 )
        {
          if ( *v13 )
            *v13 = 0LL;
        }
        else
        {
          *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 26) & 0xFFFFFFFC | 1;
        }
      }
      goto LABEL_27;
    }
  }
  else
  {
    LogFileInformation = CmpQueryNameString(*(void **)(*((_QWORD *)a1 + 10) + 1544LL), &UnicodeString);
    if ( LogFileInformation >= 0 )
    {
      Source = &UnicodeString;
      if ( a2 )
        *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL) = *a2;
      LogFileInformation = RtlStringFromGUIDEx(
                             (unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL),
                             (__int64)&v31,
                             1);
      if ( LogFileInformation >= 0 )
      {
        v10 = *((_QWORD *)a1 + 10);
        v11 = (__int64)(a1 + 72);
        *((_QWORD *)a1 + 9) = 0x100000LL;
        goto LABEL_9;
      }
    }
  }
  v12 = pcbInfoBuffer;
LABEL_27:
  ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
  KeLeaveCriticalRegion();
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v31.Buffer )
    RtlFreeUnicodeString(&v31);
  ExFreePoolWithTag(Pool2, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)LogFileInformation;
}
