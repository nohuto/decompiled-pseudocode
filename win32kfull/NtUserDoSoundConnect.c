__int64 __fastcall NtUserDoSoundConnect(CUserPlaySound *a1)
{
  NTSTATUS v1; // ebx
  void **v2; // rax
  void **v3; // rdi
  CUserPlaySound *v4; // rcx
  ULONG TokenInformationLength; // [rsp+40h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+48h] [rbp+18h] BYREF

  TokenInformationLength = 0;
  TokenHandle = 0LL;
  CUserPlaySound::Disconnect(a1);
  v1 = OpenEffectiveToken(&TokenHandle);
  if ( v1 >= 0 )
  {
    v1 = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    if ( (int)(v1 + 0x80000000) < 0 || v1 == -1073741789 )
    {
      v2 = (void **)Win32AllocPoolZInit(TokenInformationLength, 1869902677LL);
      v3 = v2;
      if ( v2 )
      {
        v1 = ZwQueryInformationToken(TokenHandle, TokenUser, v2, TokenInformationLength, &TokenInformationLength);
        ZwClose(TokenHandle);
        if ( v1 >= 0 )
          v1 = CUserPlaySound::Connect(v4, *v3);
        Win32FreePool(v3);
      }
      else
      {
        ZwClose(TokenHandle);
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      ZwClose(TokenHandle);
    }
  }
  return (unsigned int)v1;
}
