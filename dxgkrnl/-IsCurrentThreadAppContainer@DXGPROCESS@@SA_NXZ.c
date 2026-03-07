bool DXGPROCESS::IsCurrentThreadAppContainer(void)
{
  NTSTATUS v0; // eax
  int v1; // ecx
  bool v2; // di
  int TokenInformation; // [rsp+40h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  TokenInformation = 1;
  if ( (int)DXGPROCESS::OpenCurrentThreadToken(&TokenHandle) < 0 )
  {
    v1 = TokenInformation;
  }
  else
  {
    ReturnLength = 0;
    v0 = ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
    v1 = TokenInformation;
    if ( v0 < 0 )
      v1 = 1;
    TokenInformation = v1;
  }
  v2 = v1 != 0;
  if ( TokenHandle )
    ZwClose(TokenHandle);
  return v2;
}
