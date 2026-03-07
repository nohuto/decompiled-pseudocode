void __fastcall DXGVMBUSCHANNEL::NotifyChannelPostStarted(DXGVMBUSCHANNEL *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  DXGVMBUSCHANNEL *v6; // rsi
  DXGVMBUSCHANNEL *v7; // rcx
  __int64 v8; // rax
  char v9; // si
  struct _KEVENT *v10; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((struct _KTHREAD **)this + 18) != KeGetCurrentThread() )
  {
    DXGFASTMUTEX::Acquire((DXGVMBUSCHANNEL *)((char *)this + 120));
    v5 = 1;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v6 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 6);
  while ( v6 != (DXGVMBUSCHANNEL *)((char *)this + 48) )
  {
    v7 = v6;
    v6 = *(DXGVMBUSCHANNEL **)v6;
    v8 = (__int64)v7 + 120;
    if ( !v7 )
      v8 = 136LL;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 48LL))(*(_QWORD *)v8);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  v9 = *((_BYTE *)this + 26);
  *(_WORD *)((char *)this + 25) = 0;
  if ( v5 )
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 15);
  ExReInitializeRundownProtection((PEX_RUNDOWN_REF)this + 8);
  v10 = (struct _KEVENT *)*((_QWORD *)this + 4);
  if ( v10 )
  {
    if ( v9 )
      KeSetEvent(v10, 0, 0);
  }
}
