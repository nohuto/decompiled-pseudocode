void __fastcall CBaseInput::EnumDevices(
        struct CInpPushLock **this,
        void *a2,
        unsigned __int8 (__fastcall *a3)(__int64, void *))
{
  __int64 i; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v7, this[165]);
  for ( i = *(_QWORD *)this[166]; i && a3(i, a2); i = *(_QWORD *)(i + 56) )
    ;
  if ( !v8 )
  {
    ExReleasePushLockSharedEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
}
