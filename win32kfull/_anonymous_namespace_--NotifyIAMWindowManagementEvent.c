__int64 __fastcall anonymous_namespace_::NotifyIAMWindowManagementEvent(void *a1, unsigned int a2)
{
  __int64 v4; // rax
  struct tagTHREADINFO **v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]
  char v13; // [rsp+90h] [rbp+18h] BYREF

  v4 = anonymous_namespace_::ResolveWindowManagementTargetWindow(a2);
  v5 = (struct tagTHREADINFO **)v4;
  if ( v4 )
  {
    if ( !IsThreadHungTimeCheck(*(const struct tagTHREADINFO **)(v4 + 16), gdwHungAppTimeout) )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
      v11 = 0LL;
      v12 = 0LL;
      ThreadLock(v5, &v11);
      v6 = xxxSendMessageCallback(v5, 0x342u, 0LL, a1, 0LL, 1LL, 0, 1, 1);
      ThreadUnlock1(v8, v7, v9);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13);
      return v6;
    }
    if ( !a2 )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
  }
  return 0LL;
}
