__int64 __fastcall InputTransform::GetTransformList(
        InputTransform *this,
        struct tagWND *a2,
        __int64 a3,
        unsigned __int64 *a4,
        struct tagINPUT_TRANSFORM *a5)
{
  unsigned int v7; // r12d
  __int64 v8; // rsi
  __int64 v10; // r8
  struct tagINPUTTRANSFORMLIST **v11; // rdx
  __int64 i; // rdi
  struct tagINPUTTRANSFORMLIST **EntryByTime; // rax
  unsigned __int64 *v14; // rbx
  unsigned __int64 v15; // rbx
  _QWORD v16[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = (unsigned int)a2;
  v8 = *((_QWORD *)this + 34);
  v16[1] = v8;
  if ( !v8 )
    return 0LL;
  CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)v16, (struct _EX_PUSH_LOCK *)v8);
  v11 = *(struct tagINPUTTRANSFORMLIST ***)(v8 + 8);
  if ( v11 == (struct tagINPUTTRANSFORMLIST **)(v8 + 8) )
  {
    ExReleasePushLockSharedEx(v16[0], 0LL, v10);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    EntryByTime = FindEntryByTime((struct tagINPUTTRANSFORMLIST *)v8, v11, *(_QWORD *)(a3 + 8 * i));
    v11 = EntryByTime;
    v16[2] = EntryByTime;
    if ( (_BYTE)a5 == 1 )
    {
      v14 = &a4[8 * (unsigned __int64)(unsigned int)i];
      if ( (unsigned __int64)v14 >= MmUserProbeAddress )
        v14 = (unsigned __int64 *)MmUserProbeAddress;
      *(_OWORD *)v14 = *(_OWORD *)(EntryByTime + 3);
      *((_OWORD *)v14 + 1) = *(_OWORD *)(EntryByTime + 5);
      *((_OWORD *)v14 + 2) = *(_OWORD *)(EntryByTime + 7);
      *((_OWORD *)v14 + 3) = *(_OWORD *)(EntryByTime + 9);
    }
    else
    {
      v15 = (unsigned __int64)(unsigned int)i << 6;
      *(_OWORD *)((char *)a4 + v15) = *(_OWORD *)(EntryByTime + 3);
      *(_OWORD *)((char *)a4 + v15 + 16) = *(_OWORD *)(EntryByTime + 5);
      *(_OWORD *)((char *)a4 + v15 + 32) = *(_OWORD *)(EntryByTime + 7);
      *(_OWORD *)((char *)a4 + v15 + 48) = *(_OWORD *)(EntryByTime + 9);
    }
  }
  ExReleasePushLockSharedEx(v16[0], 0LL, v10);
  KeLeaveCriticalRegion();
  return 1LL;
}
