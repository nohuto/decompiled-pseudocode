__int64 __fastcall SshpAlpcProcessAlpcMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  __int64 v5; // rdx
  __int64 v7; // rax
  HANDLE v8; // rbx
  _QWORD *v9; // [rsp+20h] [rbp-79h]
  _DWORD v10[4]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v11; // [rsp+60h] [rbp-39h]
  __int64 v12; // [rsp+68h] [rbp-31h]
  int v13; // [rsp+70h] [rbp-29h]
  int v14; // [rsp+74h] [rbp-25h]
  __int128 v15; // [rsp+78h] [rbp-21h]
  _QWORD v16[10]; // [rsp+90h] [rbp-9h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 4);
  v3 = 0;
  v10[3] = 0;
  v14 = 0;
  v5 = (unsigned int)v2 & 0xFFFF00FF;
  switch ( v2 & 0xFFFF00FF )
  {
    case 1LL:
    case 2LL:
    case 3LL:
      if ( (_DWORD)v5 == 1 || (v2 & 0x2000) != 0 )
        return (unsigned int)ZwAlpcCancelMessage(SshpAlpcContext, 0LL);
      else
        SshpAlpcProcessMessage(a1, v5, v2, a2);
      break;
    case 5LL:
    case 6LL:
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38148, 0LL);
      v8 = qword_140C38150;
      qword_140C38150 = 0LL;
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38148);
      ZwClose(v8);
      break;
    case 10LL:
      v10[2] = 48;
      v11 = 0LL;
      v13 = 512;
      v12 = 0LL;
      v15 = 0LL;
      memset(v16, 0, 0x48uLL);
      v16[2] = 64LL;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38148, 0LL);
      v9 = v16;
      if ( (int)ZwAlpcAcceptConnectPort((__int64)&qword_140C38150, SshpAlpcContext) < 0 )
      {
        ZwAlpcAcceptConnectPort((__int64)&qword_140C38150, SshpAlpcContext);
      }
      else
      {
        v10[0] = 0;
        v7 = 0LL;
        do
        {
          LOBYTE(v9) = 0;
          SshpAlpcSendMessage(192 * v7, 2 - (unsigned int)(dword_140C38158[48 * v7] != 0), 4LL, v10, (_DWORD)v9);
          v7 = (unsigned int)(v10[0] + 1);
          v10[0] = v7;
        }
        while ( (unsigned int)v7 < 2 );
      }
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38148);
      break;
  }
  return v3;
}
