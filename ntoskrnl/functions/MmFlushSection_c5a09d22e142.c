__int64 __fastcall MmFlushSection(
        __int64 *a1,
        __int64 *a2,
        ULONG_PTR a3,
        struct _KEVENT *a4,
        struct _IO_STATUS_BLOCK *a5,
        unsigned int a6)
{
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  __int64 *v10; // rsi
  __int64 *v11; // rax
  int v12; // edi
  volatile signed __int32 *Pool; // r14
  struct _IO_STATUS_BLOCK *v14; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v16; // r15
  char v17; // r13
  __int64 v18; // rbp
  __int64 v19; // r12
  int v20; // edi
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  struct _FILE_OBJECT *v24; // rsi
  __int64 *v25; // r13
  unsigned int v26; // [rsp+28h] [rbp-A0h]
  struct _KTHREAD *v27; // [rsp+40h] [rbp-88h]
  __int128 v28; // [rsp+48h] [rbp-80h] BYREF
  __int128 v29; // [rsp+58h] [rbp-70h]
  __int128 v30; // [rsp+68h] [rbp-60h]
  char v32; // [rsp+D8h] [rbp+10h]
  __int64 v34; // [rsp+E8h] [rbp+20h] BYREF

  v6 = a6;
  v7 = 0;
  v34 = 0LL;
  LODWORD(v10) = (_DWORD)a2;
  v11 = a1;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( a2 )
  {
    v10 = &v34;
    v34 = *a2;
    v11 = a1;
  }
  v12 = a6 & 1;
  if ( a4 )
  {
    if ( (a6 & 1) != 0 )
    {
      result = 3221225716LL;
      a5->Status = -1073741580;
      return result;
    }
    Pool = (volatile signed __int32 *)MiAllocatePool(64, 0x30uLL, 0x6C4F6D4Du);
    if ( !Pool )
    {
      result = 3221225626LL;
      a5->Status = -1073741670;
      return result;
    }
    v11 = a1;
    v12 = 0;
  }
  else
  {
    Pool = 0LL;
  }
  v14 = a5;
  a5->Status = 0;
  v14->Information = a3;
  if ( (unsigned int)MiComputeFlushRange(v11, (int)v10, a3, 0, (__int64)&v28) )
  {
    if ( Pool )
    {
      *(_QWORD *)Pool = *((_QWORD *)&v29 + 1);
      *((_QWORD *)Pool + 1) = v30;
      *((_QWORD *)Pool + 4) = a4;
      *((_QWORD *)Pool + 2) = 1LL;
      *((_QWORD *)Pool + 3) = v14;
    }
    CurrentThread = KeGetCurrentThread();
    v16 = v28;
    v27 = CurrentThread;
    v17 = BYTE4(CurrentThread[1].Queue);
    v32 = v17;
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( v12 )
    {
      v22 = MiReferenceControlAreaFileWithTag(v16, 1666411853LL);
      v23 = v30;
      v24 = (struct _FILE_OBJECT *)v22;
      v25 = (__int64 *)*((_QWORD *)&v29 + 1);
      do
      {
        v20 = FsRtlAcquireFileForCcFlushEx(v24);
        if ( v20 < 0 )
          break;
        v20 = MiFlushSectionInternal(*((ULONG_PTR *)&v28 + 1), v29, v25, v23, (__int64)Pool, v6, v14);
        FsRtlReleaseFileForCcFlush(v24);
        if ( v20 != -1073741740 )
          break;
        ++v7;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      }
      while ( v7 < 5 );
      v16 = v28;
      ObFastDereferenceObjectDeferDelete(v28 + 64, v24, 1666411853LL);
      CurrentThread = v27;
      v17 = v32;
      v18 = v30;
      v19 = *((_QWORD *)&v29 + 1);
    }
    else
    {
      v18 = v30;
      v26 = v6;
      v19 = *((_QWORD *)&v29 + 1);
      v20 = MiFlushSectionInternal(*((ULONG_PTR *)&v28 + 1), v29, *((__int64 **)&v29 + 1), v30, (__int64)Pool, v26, v14);
    }
    if ( v20 < 0 || v14->Information )
      v14->Information += (unsigned int)(DWORD2(v30) << 12);
    else
      v14->Information = a3;
    BYTE4(CurrentThread[1].Queue) = v17;
    if ( Pool )
    {
      if ( _InterlockedExchangeAdd(Pool + 4, 0xFFFFFFFF) == 1 )
        MiFreeOverlappedFlushEntry((PVOID)Pool);
    }
    else
    {
      MiFlushRelease(v16, v19, v18);
    }
    return (unsigned int)v20;
  }
  else
  {
    if ( Pool )
    {
      ExFreePoolWithTag((PVOID)Pool, 0);
      KeSetEvent(a4, 0, 0);
    }
    return 0LL;
  }
}
