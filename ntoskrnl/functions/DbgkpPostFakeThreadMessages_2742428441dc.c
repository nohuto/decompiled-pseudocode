__int64 __fastcall DbgkpPostFakeThreadMessages(_KPROCESS *a1, struct _KEVENT *a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  void *v7; // r14
  void *v8; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  int v10; // r12d
  char v11; // r13
  _QWORD *NextProcessThread; // rax
  char v13; // si
  char v14; // r13
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  char v18; // [rsp+30h] [rbp-1F8h]
  struct _KTHREAD *v21; // [rsp+50h] [rbp-1D8h]
  HANDLE v23[34]; // [rsp+A0h] [rbp-188h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v24; // [rsp+1B0h] [rbp-78h] BYREF

  memset(&v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  v7 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v21 = CurrentThread;
  v10 = -1073741823;
  if ( !a3 )
  {
    NextProcessThread = PsGetNextProcessThread((__int64)a1, 0LL);
    v11 = 1;
    v18 = 1;
    goto LABEL_4;
  }
  v11 = 0;
  v18 = 0;
  v7 = (void *)a3;
  ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
  while ( a3 )
  {
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
    v8 = (void *)a3;
    ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
    if ( (*(_DWORD *)(a3 + 116) & 0x400) == 0 )
    {
      if ( (*(_DWORD *)(a3 + 1376) & 2) != 0
        || (PsSynchronizeWithThreadInsertion(a3, CurrentThread), (*(_DWORD *)(a3 + 1376) & 2) != 0) )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a3 + 1352)) )
        {
          v13 = 10;
          if ( (int)PsSuspendThread(a3, 0LL) >= 0 )
            v13 = 42;
        }
        else
        {
          v13 = 18;
        }
        memset(v23, 0, sizeof(v23));
        if ( !v11 || (v13 & 0x10) != 0 )
        {
          v14 = 0;
          LODWORD(v23[5]) = 1;
          v23[7] = *(HANDLE *)(a3 + 1312);
        }
        else
        {
          v14 = 1;
          LODWORD(v23[5]) = 2;
          v15 = a1[1].Affinity.StaticBitmap[17];
          if ( v15 )
            v23[7] = (HANDLE)DbgkpSectionToFileHandle(v15);
          else
            v23[7] = 0LL;
          v23[8] = (HANDLE)a1[1].Affinity.StaticBitmap[18];
          KiStackAttachProcess(a1, 0, (__int64)&v24);
          v16 = RtlImageNtHeader(a1[1].Affinity.StaticBitmap[18]);
          if ( v16 )
          {
            v23[11] = 0LL;
            v23[9] = *(HANDLE *)(v16 + 12);
          }
          KiUnstackDetachProcess(&v24);
        }
        v10 = DbgkpQueueMessage(a1, (PVOID)a3, a2);
        if ( v10 < 0 )
        {
          if ( (v13 & 0x20) != 0 )
            PsMultiResumeThread(a3, 0LL, 1u);
          if ( (v13 & 8) != 0 )
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a3 + 1352));
          if ( LODWORD(v23[5]) == 2 && v23[7] )
            ObCloseHandle(v23[7], 0);
          ObfDereferenceObjectWithTag((PVOID)a3, 0x6E457350u);
          break;
        }
        if ( v14 )
        {
          v11 = 0;
          v18 = 0;
          ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
          v7 = (void *)a3;
          DbgkSendSystemDllMessages((_QWORD *)a3, a2, v23);
        }
        else
        {
          v11 = v18;
        }
        CurrentThread = v21;
      }
    }
    NextProcessThread = PsGetNextProcessThread((__int64)a1, (_QWORD *)a3);
LABEL_4:
    a3 = (__int64)NextProcessThread;
  }
  if ( v10 >= 0 )
  {
    if ( v7 )
    {
      *a4 = v7;
      *a5 = v8;
    }
    else
    {
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x4F676244u);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
  }
  return (unsigned int)v10;
}
