char PopIsRunningAsLocalSystem()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  RtlCheckTokenMembership(0LL, SeLocalSystemSid, &v1);
  return v1;
}
