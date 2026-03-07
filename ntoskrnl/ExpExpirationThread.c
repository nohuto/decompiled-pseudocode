void __fastcall ExpExpirationThread(__int64 a1)
{
  NTSTATUS v1; // eax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    v1 = ExRaiseHardError(a1, 0LL, 0LL, 0LL, 1, &v2);
    PsTerminateSystemThread(v1);
  }
}
