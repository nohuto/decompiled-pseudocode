void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rbp
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  char *v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // rcx
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 52) )
    ThreadUnlock1(v2, v1, v3, v4);
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 && qword_1C02D6DD8 )
    qword_1C02D6DD8(v0);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14, v5, v6, v7);
  if ( *((_QWORD *)v0 + 139) )
  {
    if ( qword_1C02D6DE0 && (int)qword_1C02D6DE0() >= 0 && qword_1C02D6DE8 )
      qword_1C02D6DE8(*((_QWORD *)v0 + 139), 1LL);
    *((_QWORD *)v0 + 139) = 0LL;
  }
  if ( *((_QWORD *)v0 + 140) )
  {
    if ( qword_1C02D6DF0 && (int)qword_1C02D6DF0() >= 0 && qword_1C02D6DF8 )
      qword_1C02D6DF8(*((_QWORD *)v0 + 140), 1LL);
    *((_QWORD *)v0 + 140) = 0LL;
  }
  v8 = giheLast;
  if ( giheLast >= 0LL )
  {
    v9 = 24LL * giheLast;
    v10 = 32LL * giheLast;
    do
    {
      v11 = (char *)qword_1C02D0E08 + v10;
      v12 = *((unsigned __int8 *)qword_1C02D0E08 + v10 + 24);
      if ( (_BYTE)v12 )
      {
        if ( (*((_BYTE *)&unk_1C028159C + 24 * v12) & 2) != 0 )
        {
          if ( (_BYTE)v12 == 2 )
          {
            v13 = (__int64 *)(*(_QWORD *)((char *)gpKernelHandleTable + v9) + 80LL);
            if ( *v13 )
            {
              if ( *(struct tagTHREADINFO **)(*v13 + 16) == v0 )
                HMAssignmentUnlockWorker(v13);
            }
          }
        }
        else if ( *(struct tagTHREADINFO **)((char *)gpKernelHandleTable + v9 + 8) == v0 && (v11[25] & 1) == 0 )
        {
          HMDestroyUnlockedObjectWorker(
            (struct _HANDLEENTRY *)((char *)qword_1C02D0E08 + v10),
            v12,
            (__int64)v11,
            (__int64)gpKernelHandleTable);
        }
      }
      v10 -= 32LL;
      v9 -= 24LL;
      --v8;
    }
    while ( v8 >= 0 );
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
}
