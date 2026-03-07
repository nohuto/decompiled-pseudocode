__int64 __fastcall DXGGLOBAL::SetSharedPowerComponentState(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  unsigned int v9; // ebx
  __int64 **v10; // rdi
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  char v13; // al
  __int64 *i; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 *v19; // rdx
  __int64 **v20; // rax
  struct _KTHREAD **v22; // [rsp+90h] [rbp+8h]
  unsigned __int16 v23; // [rsp+AAh] [rbp+22h]

  v23 = HIWORD(a4);
  v22 = (struct _KTHREAD **)((char *)this + 672);
  v9 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 672));
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1792));
  v10 = (__int64 **)*((_QWORD *)this + 228);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v11 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v23 + 1520);
    if ( v11 >= *((_DWORD *)a2 + 792) || *(_DWORD *)(520LL * v11 + *((_QWORD *)a2 + 378) + 208) != 7 )
    {
LABEL_28:
      v9 = -1073741811;
      goto LABEL_29;
    }
    while ( 1 )
    {
      if ( v10 == (__int64 **)((char *)this + 1824) || !v10 )
        goto LABEL_28;
      if ( v10[4] == (__int64 *)a2 && v10[3] == a3 )
        break;
      v10 = (__int64 **)*v10;
    }
    v12 = v10[8];
    v13 = 0;
    for ( i = (__int64 *)*v12; i != v12; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_17;
      if ( *((_DWORD *)i + 6) == a4 )
      {
        v13 = 1;
        goto LABEL_17;
      }
    }
    i = 0LL;
LABEL_17:
    if ( a5 )
    {
      if ( v13 )
        goto LABEL_29;
      v15 = operator new[](0x20uLL, 0x4B677844u, 256LL);
      if ( !v15 )
      {
        WdLogSingleEntry1(6LL, 6705LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Out of memory allocating pNewListObj of type DXGSHAREDPOWERINUSELISTOBJECT",
          6705LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v9 = -1073741801;
        goto LABEL_29;
      }
      *(_QWORD *)(v15 + 16) = this;
      *(_OWORD *)v15 = 0LL;
      *(_DWORD *)(v15 + 24) = a4;
      v17 = v10[8];
      v18 = *v17;
      if ( *(__int64 **)(*v17 + 8) == v17 )
      {
        *(_QWORD *)v15 = v18;
        *(_QWORD *)(v15 + 8) = v17;
        *(_QWORD *)(v18 + 8) = v15;
        *v17 = v15;
        DXGADAPTER::SetPowerComponentActiveCB(a2, a4, v16);
        goto LABEL_29;
      }
    }
    else
    {
      if ( !v13 )
        goto LABEL_29;
      v19 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) == i )
      {
        v20 = (__int64 **)i[1];
        if ( *v20 == i )
        {
          *v20 = v19;
          v19[1] = (__int64)v20;
          DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'((DXGSHAREDPOWERINUSELISTOBJECT *)i);
          DXGADAPTER::SetPowerComponentIdleCB(a2, a4);
          goto LABEL_29;
        }
      }
    }
    __fastfail(3u);
  }
  v9 = -1073741130;
LABEL_29:
  _InterlockedDecrement((volatile signed __int32 *)this + 452);
  ExReleasePushLockSharedEx((char *)this + 1792, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v22);
  return v9;
}
