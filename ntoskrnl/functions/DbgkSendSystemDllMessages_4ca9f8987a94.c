int __fastcall DbgkSendSystemDllMessages(_QWORD *a1, struct _KEVENT *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  _DWORD *v7; // rdi
  int i; // esi
  struct _KTHREAD *v9; // r12
  __int64 SListFaultAddress; // rbx
  __int64 v11; // rax
  struct _KTHREAD *v12; // rcx
  _QWORD *v13; // r11
  char v15; // [rsp+30h] [rbp-108h]
  wchar_t *Teb; // [rsp+38h] [rbp-100h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-88h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v20; // [rsp+C0h] [rbp-78h] BYREF

  memset(&v20, 0, sizeof(v20));
  IoStatusBlock = 0LL;
  LODWORD(CurrentThread) = 0;
  memset(&ObjectAttributes, 0, 44);
  if ( a1 )
  {
    Process = (_KPROCESS *)a1[68];
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
  }
  v7 = a3 + 12;
  for ( i = 0; i < 7; ++i )
  {
    CurrentThread = (struct _KTHREAD *)PsQuerySystemDllInfo(i);
    v9 = CurrentThread;
    if ( CurrentThread )
    {
      if ( i <= 0
        || (CurrentThread->Header.LockNV & 8) != 0
        && Process[1].Affinity.StaticBitmap[30]
        && (LODWORD(CurrentThread) = PsWow64GetProcessNtdllType((__int64)Process), i == (_DWORD)CurrentThread) )
      {
        *(_OWORD *)v7 = 0LL;
        *((_OWORD *)v7 + 1) = 0LL;
        Teb = 0LL;
        SListFaultAddress = (__int64)v9->SListFaultAddress;
        *((_QWORD *)v7 + 1) = SListFaultAddress;
        if ( a1 && i )
        {
          v15 = 1;
          KiStackAttachProcess(Process, 0, (__int64)&v20);
        }
        else
        {
          v15 = 0;
        }
        v11 = RtlImageNtHeader(SListFaultAddress);
        if ( v11 )
        {
          v7[4] = *(_DWORD *)(v11 + 12);
          v7[5] = *(_DWORD *)(v11 + 16);
        }
        if ( !a1 )
        {
          v12 = KeGetCurrentThread();
          if ( (v12->MiscFlags & 0x400) != 0 || v12->ApcStateIndex == 1 )
            Teb = 0LL;
          else
            Teb = (wchar_t *)v12->Teb;
          if ( Teb )
          {
            RtlStringCbCopyW(Teb + 2356, 0x20AuLL, (NTSTRSAFE_PCWSTR)v9->InitialStack);
            v13 += 5;
            *v13 = Teb + 2356;
            *((_QWORD *)v7 + 3) = v13;
          }
        }
        if ( v15 )
          KiUnstackDetachProcess(&v20);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9->Header.WaitListHead;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenFile((PHANDLE)v7, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
          *(_QWORD *)v7 = 0LL;
        *a3 = 5242920;
        a3[1] = 8;
        a3[10] = 5;
        if ( a1 )
        {
          LODWORD(CurrentThread) = DbgkpQueueMessage(Process, a1, a2);
          if ( (int)CurrentThread < 0 && *(_QWORD *)v7 )
            LODWORD(CurrentThread) = ObCloseHandle(*(HANDLE *)v7, 0);
        }
        else
        {
          LODWORD(CurrentThread) = DbgkpSendApiMessage(Process);
          if ( *(_QWORD *)v7 )
            LODWORD(CurrentThread) = ObCloseHandle(*(HANDLE *)v7, 0);
          if ( Teb )
            *((_QWORD *)Teb + 5) = 0LL;
        }
      }
    }
  }
  return (int)CurrentThread;
}
