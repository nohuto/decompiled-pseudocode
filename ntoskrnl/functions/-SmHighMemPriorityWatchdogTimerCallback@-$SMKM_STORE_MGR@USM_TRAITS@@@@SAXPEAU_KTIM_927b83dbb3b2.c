void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogTimerCallback(__int64 a1, __int64 a2)
{
  int (__fastcall *v2)(__int64, __int64 *, __int64); // rax
  signed __int64 v3; // rbx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(int (__fastcall **)(__int64, __int64 *, __int64))(a2 + 1864);
  v3 = a2 + 1816;
  v5 = 0LL;
  if ( v2(a2, &v5, 8LL) >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 24), v3, 0LL) )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(a2 + 1864))(a2, 0LL, 9LL);
    }
    else if ( v5 )
    {
      ExQueueWorkItemToPartition((_QWORD *)v3, 3, 0xFFFFFFFF, v5);
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v3, NormalWorkQueue);
    }
  }
}
