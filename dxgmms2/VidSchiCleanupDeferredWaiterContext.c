void __fastcall VidSchiCleanupDeferredWaiterContext(__int64 a1)
{
  _QWORD **v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  int v6; // eax
  _QWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  char v8; // [rsp+30h] [rbp-30h]
  _QWORD v9[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v10; // [rsp+58h] [rbp-8h]

  v1 = (_QWORD **)(a1 + 696);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL);
  v10 = 0;
  v9[0] = v2 + 1728;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v9);
  v4 = *v1;
  v7[1] = v7;
  v7[0] = v7;
  v8 = 0;
  if ( v4 == v1 )
    goto LABEL_2;
  do
  {
    v5 = v4 - 4;
    LOBYTE(v3) = 1;
    v6 = *((_DWORD *)v4 + 60);
    v4 = (_QWORD *)*v4;
    if ( (v6 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(v7, v5, v3);
    else
      VidSchiUnwaitWaitQueuePacket(v7, v5, v3, 0LL);
  }
  while ( v4 != v1 );
  if ( !v8 )
LABEL_2:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v7);
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
}
