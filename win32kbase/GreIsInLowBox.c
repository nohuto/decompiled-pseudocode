__int64 GreIsInLowBox()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // esi
  int v2; // ecx
  int TokenInformation; // [rsp+50h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+60h] [rbp+18h] BYREF

  v0 = 0;
  TokenInformation = 1;
  TokenHandle = 0LL;
  v1 = GreOpenThreadToken(&TokenHandle);
  if ( v1 >= 0 )
  {
    ReturnLength = 0;
    v1 = ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
  }
  if ( TokenHandle )
    ZwClose(TokenHandle);
  v2 = TokenInformation;
  if ( v1 < 0 )
    v2 = 1;
  LOBYTE(v0) = v2 != 0;
  return v0;
}
