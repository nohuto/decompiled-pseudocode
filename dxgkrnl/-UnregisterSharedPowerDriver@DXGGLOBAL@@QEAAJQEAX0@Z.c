__int64 __fastcall DXGGLOBAL::UnregisterSharedPowerDriver(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        struct DXGTHREADPROCESS **a3)
{
  struct _KTHREAD **v3; // r13
  unsigned int v7; // esi
  struct DXGTHREADPROCESS ***v8; // rbx
  unsigned int **v9; // r14
  unsigned int *v10; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r13d
  DXGSHAREDPOWERINUSELISTOBJECT **v14; // r8
  struct DXGTHREADPROCESS **v15; // rcx
  struct _KTHREAD **v17; // [rsp+50h] [rbp+8h]

  v3 = (struct _KTHREAD **)((char *)this + 672);
  v17 = (struct _KTHREAD **)((char *)this + 672);
  v7 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 672));
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1792));
  v8 = (struct DXGTHREADPROCESS ***)*((_QWORD *)this + 228);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    while ( 1 )
    {
      if ( v8 == (struct DXGTHREADPROCESS ***)((char *)this + 1824) || !v8 )
      {
        v7 = -1073741811;
        goto LABEL_19;
      }
      if ( v8[4] == (struct DXGTHREADPROCESS **)a2 && v8[3] == a3 )
        break;
      v8 = (struct DXGTHREADPROCESS ***)*v8;
    }
    v9 = (unsigned int **)v8[8];
    v10 = *v9;
    while ( v10 != (unsigned int *)v9 )
    {
      v11 = (DXGSHAREDPOWERINUSELISTOBJECT *)v10;
      if ( !v10 )
        break;
      v12 = *(_QWORD *)v10;
      v13 = v10[6];
      v10 = (unsigned int *)v12;
      if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(v12 + 8) != v11
        || (v14 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v11 + 1), *v14 != v11) )
      {
        __fastfail(3u);
      }
      *v14 = (DXGSHAREDPOWERINUSELISTOBJECT *)v12;
      *(_QWORD *)(v12 + 8) = v14;
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v11);
      DXGADAPTER::SetPowerComponentIdleCB(a2, v13);
    }
    DXGGLOBAL::RemoveThreadToDxgThreadList((KSPIN_LOCK *)this, v8);
    v15 = v8[8];
    if ( v15 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v15);
    DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'((DXGSHAREDPOWERINUSELISTOBJECT *)v8);
    v3 = v17;
  }
  else
  {
    v7 = -1073741130;
  }
LABEL_19:
  *((_QWORD *)this + 225) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1792, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v3);
  return v7;
}
