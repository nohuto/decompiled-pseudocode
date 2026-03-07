signed __int32 __fastcall SshpAlpcOpenGracePeriodWorker(int a1)
{
  __int64 v2; // rcx
  int *v3; // rbx
  char v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38148, 0LL);
  v3 = &dword_140C38158[48 * a1];
  if ( *((_BYTE *)v3 + 4) && !*v3 )
  {
    v5 = 0;
    SshpAlpcSendMessage(v2, 2LL, 4LL, &v6, v5);
    *((_BYTE *)v3 + 4) = 0;
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38148);
}
