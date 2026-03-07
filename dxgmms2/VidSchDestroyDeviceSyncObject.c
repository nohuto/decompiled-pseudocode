void __fastcall VidSchDestroyDeviceSyncObject(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 v9; // rax
  __int64 **v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  char v12; // [rsp+30h] [rbp-30h]
  _QWORD v13[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v14; // [rsp+58h] [rbp-8h]

  v4 = *(_QWORD *)(a1 + 8);
  v14 = 0;
  v13[0] = v4 + 1728;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v13);
  v12 = 0;
  v11[1] = v11;
  v11[0] = v11;
  if ( a3 )
    VidSchiRundownMonitoredFenceCpuWaiters(v11, a1, a2);
  if ( a4 )
  {
    v9 = *a4;
    if ( *a4 )
    {
      if ( *(__int64 **)(v9 + 8) != a4 || (v10 = (__int64 **)a4[1], *v10 != a4) )
        __fastfail(3u);
      *v10 = (__int64 *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      a4[1] = 0LL;
      *a4 = 0LL;
    }
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v11);
  AcquireSpinLock::Release((AcquireSpinLock *)v13);
}
