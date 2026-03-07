__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  _QWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  char v8; // [rsp+30h] [rbp-30h]
  _QWORD v9[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v10; // [rsp+58h] [rbp-8h]

  v3 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 816) )
  {
    if ( a3 < 8 )
    {
      return (unsigned int)-2147483631;
    }
    else if ( *(_DWORD *)(a1 + 816) )
    {
      v10 = 0;
      v9[0] = a2 + 1728;
      AcquireSpinLock::Acquire((Acquire *)v9);
      v8 = 0;
      v7[1] = v7;
      v7[0] = v7;
      VidSchiRundownUnorderedWaiterGlobal((struct HwQueueStagingList *)v7, a1, v5);
      if ( !v8 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v7);
      AcquireSpinLock::Release((AcquireSpinLock *)v9);
    }
  }
  return v3;
}
