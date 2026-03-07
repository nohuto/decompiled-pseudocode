bool CheckTokenForResourceManagerAccess(void)
{
  __int64 v0; // rdx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v0 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 38059);
  return v0 && (int)RtlCheckTokenMembership(0LL, v0, &v2) >= 0 && v2 != 0;
}
