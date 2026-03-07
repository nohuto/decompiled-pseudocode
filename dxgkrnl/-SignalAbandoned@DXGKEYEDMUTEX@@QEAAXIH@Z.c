void __fastcall DXGKEYEDMUTEX::SignalAbandoned(DXGKEYEDMUTEX *this, unsigned int a2)
{
  struct DXGPROCESS *Current; // rax
  struct DXGKEYEDMUTEX *v4; // [rsp+30h] [rbp+8h] BYREF
  DXGKEYEDMUTEX *v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = this;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v4 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v5, a2, Current, &v4);
  if ( v4 )
    DXGKEYEDMUTEX::SignalAbandonedInternal(v4, a2, 0);
  else
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
  if ( v5 )
    DXGKEYEDMUTEX::ReleaseReference(v5);
}
