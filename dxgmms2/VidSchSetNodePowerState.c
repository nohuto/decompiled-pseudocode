void __fastcall VidSchSetNodePowerState(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  char v8; // r14
  _QWORD *v9; // rsi
  char i; // bp
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD **v19; // [rsp+20h] [rbp-38h] BYREF
  _QWORD **v20; // [rsp+28h] [rbp-30h]
  char v21; // [rsp+30h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  v5 = *(__int64 **)(a1 + 632);
  v6 = a3 + (unsigned int)*(unsigned __int8 *)(a2 + a1 + 88);
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 704) )
    v5 += v6;
  v7 = *v5;
  if ( a4 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 168)
      || *(_BYTE *)(a1 + 54)
      || (unsigned int)KeIsExecutingDpc() )
    {
      v8 = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
    }
    else
    {
      v8 = 0;
    }
    *(_BYTE *)(v7 + 11276) = 1;
    v9 = (_QWORD *)(v7 + 2600);
    for ( i = 0; ; i = 1 )
    {
      v11 = (_QWORD *)*v9;
      if ( (_QWORD *)*v9 == v9 )
        break;
      *((_DWORD *)v11 + 44) &= ~0x80u;
      VidSchiUpdateContextStatus((__int64)(v11 - 1), 5LL, 12728);
    }
    v20 = &v19;
    v12 = (_QWORD *)(v7 + 2632);
    v19 = &v19;
LABEL_10:
    v21 = 0;
    while ( 1 )
    {
      v13 = (_QWORD *)*v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 )
        goto LABEL_31;
      v14 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 )
        goto LABEL_31;
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( v13 == v12 )
        break;
      *v13 = 0LL;
      v13[1] = 0LL;
      v17 = v13 - 2;
      if ( !*v17 )
      {
        v18 = v20;
        if ( *v20 == &v19 )
        {
          *v17 = &v19;
          v17[1] = v18;
          *v18 = v17;
          v20 = (_QWORD **)v17;
          goto LABEL_10;
        }
LABEL_31:
        __fastfail(3u);
      }
    }
    if ( !v21 )
    {
      while ( 1 )
      {
        v15 = v19;
        if ( v19[1] != &v19 )
          goto LABEL_31;
        v16 = (__int64)*v19;
        if ( (_QWORD **)(*v19)[1] != v19 )
          goto LABEL_31;
        v19 = (_QWORD **)*v19;
        *(_QWORD *)(v16 + 8) = &v19;
        if ( v15 == &v19 )
          break;
        *v15 = 0LL;
        v15[1] = 0LL;
        HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)&v19, (struct VIDSCH_HW_QUEUE *)(v15 - 22));
      }
    }
    if ( v8 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( i )
    {
      *(_QWORD *)(a1 + 1224) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(a1 + 1192), 0, 0);
    }
  }
  else
  {
    *(_BYTE *)(v7 + 11276) = 0;
  }
}
