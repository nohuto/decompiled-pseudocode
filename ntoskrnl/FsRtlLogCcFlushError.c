/*
 * XREFs of FsRtlLogCcFlushError @ 0x14093A170
 * Callers:
 *     CcMmLogLostDelayedWriteError @ 0x140535454 (CcMmLogLostDelayedWriteError.c)
 * Callees:
 *     MmIsWriteErrorFatal @ 0x140212D9C (MmIsWriteErrorFatal.c)
 *     IoAllocateErrorLogEntry @ 0x1403C11C0 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x1403C13F0 (IoWriteErrorLogEntry.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IoRaiseInformationalHardError @ 0x140554960 (IoRaiseInformationalHardError.c)
 */

NTSTATUS __stdcall FsRtlLogCcFlushError(
        PUNICODE_STRING FileName,
        PDEVICE_OBJECT DeviceObject,
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        NTSTATUS FlushError,
        ULONG Flags)
{
  NTSTATUS v7; // ebp
  NTSTATUS result; // eax
  NTSTATUS v10; // ecx
  int v11; // esi
  bool v12; // zf
  UCHAR v13; // di
  char *ErrorLogEntry; // rax
  void *v15; // r14
  char *v16; // rsi
  void *v17; // rcx
  size_t Length; // rax
  wchar_t *Buffer; // rdx
  unsigned int v20; // r12d
  unsigned int v21; // edi
  char *v22; // rsi
  unsigned int v23; // r12d
  char *v24; // rsi

  v7 = 0;
  result = MmIsWriteErrorFatal(1, (DeviceObject->Characteristics >> 4) & 1, FlushError);
  if ( !result )
    return result;
  if ( FlushError > -1073741620 )
  {
    if ( FlushError > -1073741247 )
    {
      if ( FlushError == -1073740964 || FlushError == -1073740698 || FlushError == -1073740697 )
        goto LABEL_30;
      v12 = FlushError == -1073740672;
    }
    else
    {
      if ( FlushError == -1073741247
        || FlushError == -1073741309
        || FlushError == -1073741300
        || FlushError == -1073741299
        || FlushError == -1073741258 )
      {
        goto LABEL_30;
      }
      v12 = FlushError == -1073741252;
    }
LABEL_28:
    if ( !v12 )
      goto LABEL_29;
LABEL_30:
    v10 = -1073700736;
    v11 = -2147221365;
    goto LABEL_31;
  }
  if ( FlushError == -1073741620 )
    goto LABEL_30;
  if ( FlushError > -1073741662 )
  {
    if ( FlushError == -1073741636 || FlushError == -1073741634 || FlushError == -1073741628 )
      goto LABEL_30;
    v12 = FlushError == -1073741623;
    goto LABEL_28;
  }
  if ( FlushError != -1073741662 )
  {
    if ( FlushError == -1073741816 || FlushError == -1073741790 || FlushError == -1073741697 )
    {
      v10 = -1073700735;
      v11 = -2147221364;
      goto LABEL_31;
    }
    if ( FlushError != -1073741672 && FlushError != -1073741667 )
    {
LABEL_29:
      v10 = -1073741278;
      v11 = -2147221454;
      goto LABEL_31;
    }
  }
  v10 = -1073700734;
  v11 = -2147221363;
LABEL_31:
  __incgsdword(0x847Cu);
  if ( (Flags & 1) == 0 )
    IoRaiseInformationalHardError(v10, FileName, 0LL);
  if ( (Flags & 2) == 0 )
  {
    v13 = -16;
    if ( (unsigned __int64)FileName->Length + 50 <= 0xF0 )
      v13 = LOBYTE(FileName->Length) + 50;
    ErrorLogEntry = (char *)IoAllocateErrorLogEntry(DeviceObject, v13);
    v15 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 3) = v11;
      *ErrorLogEntry = 4;
      v16 = ErrorLogEntry + 48;
      *((_DWORD *)ErrorLogEntry + 5) = FlushError;
      *((_WORD *)ErrorLogEntry + 3) = 48;
      v17 = ErrorLogEntry + 48;
      *(_DWORD *)(ErrorLogEntry + 2) = 65540;
      *((_DWORD *)ErrorLogEntry + 10) = FlushError;
      Length = FileName->Length;
      Buffer = FileName->Buffer;
      v20 = v13 - 50;
      if ( v20 >= (unsigned int)Length )
      {
        memmove(v17, Buffer, Length);
        v24 = &v16[2 * ((unsigned __int64)FileName->Length >> 1)];
      }
      else
      {
        v21 = 2 * (v20 >> 2) - 4;
        memmove(v17, Buffer, v21);
        v22 = &v16[v21];
        v23 = v20 - v21 - 8;
        *(_QWORD *)v22 = 0x20002E002E0020LL;
        v22 += 8;
        memmove(v22, (char *)FileName->Buffer + FileName->Length - (unsigned __int64)v23, v23);
        v24 = &v22[v23];
      }
      *(_WORD *)v24 = 0;
      IoWriteErrorLogEntry(v15);
    }
    else
    {
      return -1073741670;
    }
  }
  return v7;
}
