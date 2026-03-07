void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsRemoving(DXGGLOBAL *this, void *const a2)
{
  char *v2; // rbp
  DXGGLOBAL *v5; // rdi
  DXGGLOBAL *v6; // rbx
  __int64 CurrentIrql; // rsi
  KIRQL v8; // al
  DXGSHAREDPOWERINUSELISTOBJECT **v9; // r15
  DXGSHAREDPOWERINUSELISTOBJECT *v10; // rsi
  DXGSHAREDPOWERINUSELISTOBJECT *v11; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT **v12; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT **v13; // rax
  _QWORD *v14; // rcx

  v2 = (char *)this + 1792;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1792));
  v5 = (DXGGLOBAL *)*((_QWORD *)this + 228);
  while ( 1 )
  {
    v6 = 0LL;
    if ( v5 != (DXGGLOBAL *)((char *)this + 1824) )
      v6 = v5;
    if ( !v6 )
      break;
    if ( *((void *const *)v6 + 4) == a2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      (*((void (__fastcall **)(void *const, _QWORD))v6 + 6))(a2, *((_QWORD *)v6 + 3));
      if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
      {
        v8 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, this, CurrentIrql, v8);
      }
      v9 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v6 + 8);
      v10 = *v9;
      while ( v10 != (DXGSHAREDPOWERINUSELISTOBJECT *)v9 )
      {
        v11 = v10;
        if ( !v10 )
          break;
        v12 = *(DXGSHAREDPOWERINUSELISTOBJECT ***)v10;
        v13 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v10 + 1);
        v10 = (DXGSHAREDPOWERINUSELISTOBJECT *)v12;
        if ( v12[1] != v11 || *v13 != v11 )
          __fastfail(3u);
        *v13 = (DXGSHAREDPOWERINUSELISTOBJECT *)v12;
        v12[1] = (DXGSHAREDPOWERINUSELISTOBJECT *)v13;
        DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v11);
      }
      v5 = *(DXGGLOBAL **)v5;
      DXGGLOBAL::RemoveThreadToDxgThreadList((KSPIN_LOCK *)this, (struct DXGTHREADPROCESS ***)v6);
      v14 = (_QWORD *)*((_QWORD *)v6 + 8);
      if ( v14 )
        DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v14);
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v6);
    }
    else
    {
      v5 = *(DXGGLOBAL **)v5;
    }
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
