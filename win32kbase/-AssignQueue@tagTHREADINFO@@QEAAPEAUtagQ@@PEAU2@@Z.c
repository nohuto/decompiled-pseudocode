struct tagQ *__fastcall tagTHREADINFO::AssignQueue(tagTHREADINFO *this, struct tagQ *a2)
{
  __int64 v4; // rsi
  int IsEnabledDeviceUsage; // eax
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rax

  v4 = tagTHREADINFO::AssignQueueWorker(this, (ULONG_PTR)a2, 432);
  IsEnabledDeviceUsage = Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage();
  v6 = 0LL;
  if ( IsEnabledDeviceUsage )
  {
    v7 = (__int64 *)*((_QWORD *)a2 + 15);
    if ( v7 )
      v8 = *v7;
    else
      v8 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 56) + 32LL) = v8;
    v9 = (__int64 *)*((_QWORD *)a2 + 16);
    if ( v9 )
      v6 = *v9;
    *(_QWORD *)(*((_QWORD *)this + 56) + 40LL) = v6;
  }
  return (struct tagQ *)v4;
}
