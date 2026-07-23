/*
 * XREFs of DbgkSendSystemDllMessages @ 0x14088452C
 * Callers:
 *     DbgkCreateThread @ 0x1406C01E0 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140884EE4 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     RtlStringCbCopyW @ 0x14032E038 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1403FA080 (ZwOpenFile.c)
 *     PsWow64GetProcessNtdllType @ 0x1406120AC (PsWow64GetProcessNtdllType.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     PsQuerySystemDllInfo @ 0x1406C769C (PsQuerySystemDllInfo.c)
 *     DbgkpQueueMessage @ 0x140885568 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x1408871A4 (DbgkpSendApiMessage.c)
 */

void __fastcall DbgkSendSystemDllMessages(_QWORD *a1, struct _KEVENT *a2, _DWORD *a3)
{
  PVOID v4; // rbx
  _KPROCESS *Process; // r15
  _DWORD *v6; // rsi
  int i; // r14d
  __int64 SystemDllInfo; // rax
  _DWORD *v9; // r9
  __int64 v10; // rdx
  void *v11; // r13
  PIMAGE_NT_HEADERS v12; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char v14; // [rsp+30h] [rbp-108h]
  wchar_t *Teb; // [rsp+38h] [rbp-100h]
  __int64 v17; // [rsp+50h] [rbp-E8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v21[48]; // [rsp+C8h] [rbp-70h] BYREF

  v4 = a1;
  memset(v21, 0, sizeof(v21));
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( a1 )
    Process = (_KPROCESS *)a1[68];
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  v6 = a3 + 12;
  for ( i = 0; i < 6; ++i )
  {
    SystemDllInfo = PsQuerySystemDllInfo(i);
    v10 = SystemDllInfo;
    v17 = SystemDllInfo;
    if ( SystemDllInfo
      && (i <= 0
       || *(_WORD *)(SystemDllInfo + 2)
       && Process[1].AffinityPadding[10]
       && i == (unsigned int)PsWow64GetProcessNtdllType((__int64)Process)) )
    {
      *(_OWORD *)v6 = 0LL;
      *((_OWORD *)v6 + 1) = 0LL;
      Teb = 0LL;
      v11 = *(void **)(v10 + 24);
      *((_QWORD *)v6 + 1) = v11;
      if ( v4 && i )
      {
        v14 = 1;
        KiStackAttachProcess(Process, 0LL, (__int64)v21, v9);
      }
      else
      {
        v14 = 0;
      }
      v12 = RtlImageNtHeader(v11);
      if ( v12 )
      {
        v6[4] = v12->FileHeader.PointerToSymbolTable;
        v6[5] = v12->FileHeader.NumberOfSymbols;
      }
      if ( !v4 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = (wchar_t *)CurrentThread->Teb;
        if ( Teb )
        {
          RtlStringCbCopyW(Teb + 2356, 0x20AuLL, *(NTSTRSAFE_PCWSTR *)(v17 + 40));
          *((_QWORD *)Teb + 5) = Teb + 2356;
          *((_QWORD *)v6 + 3) = Teb + 20;
          v4 = a1;
        }
      }
      if ( v14 )
        KiUnstackDetachProcess((__int64)v21, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 1600;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v17 + 8);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile((PHANDLE)v6, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
        *(_QWORD *)v6 = 0LL;
      *a3 = 5242920;
      a3[1] = 8;
      a3[10] = 5;
      if ( v4 )
      {
        if ( (int)DbgkpQueueMessage(Process, v4, a2) < 0 && *(_QWORD *)v6 )
          ObCloseHandle(*(HANDLE *)v6, 0);
      }
      else
      {
        DbgkpSendApiMessage((ULONG_PTR)Process);
        if ( *(_QWORD *)v6 )
          ObCloseHandle(*(HANDLE *)v6, 0);
        if ( Teb )
          *((_QWORD *)Teb + 5) = 0LL;
      }
    }
  }
}
