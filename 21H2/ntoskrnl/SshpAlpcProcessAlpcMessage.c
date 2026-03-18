/*
 * XREFs of SshpAlpcProcessAlpcMessage @ 0x14081AFCC
 * Callers:
 *     SshpAlpcMessageCallback @ 0x14081AE90 (SshpAlpcMessageCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14036C0A0 (SSHSupportReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14041C640 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x14041C660 (ZwAlpcCancelMessage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SshpAlpcProcessMessage @ 0x14081B144 (SshpAlpcProcessMessage.c)
 *     SshpAlpcSendMessage @ 0x14081B360 (SshpAlpcSendMessage.c)
 */

__int64 __fastcall SshpAlpcProcessAlpcMessage(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // ecx
  unsigned int v4; // eax
  __int64 v6; // rax
  HANDLE v7; // rbx
  _QWORD *v8; // [rsp+20h] [rbp-79h]
  __int64 v9; // [rsp+28h] [rbp-71h]
  __int64 v10; // [rsp+30h] [rbp-69h]
  __int64 v11; // [rsp+38h] [rbp-61h]
  int v12; // [rsp+40h] [rbp-59h]
  _DWORD v13[4]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v14; // [rsp+60h] [rbp-39h]
  __int64 v15; // [rsp+68h] [rbp-31h]
  int v16; // [rsp+70h] [rbp-29h]
  int v17; // [rsp+74h] [rbp-25h]
  __int128 v18; // [rsp+78h] [rbp-21h]
  _QWORD v19[10]; // [rsp+90h] [rbp-9h] BYREF

  v1 = 0;
  v3 = *(unsigned __int16 *)(a1 + 4);
  v13[3] = 0;
  v17 = 0;
  v4 = v3 & 0xFFFF00FF;
  if ( (v3 & 0xFFFF00FF) != 0 )
  {
    if ( v4 > 3 )
    {
      if ( v4 > 4 )
      {
        if ( v4 <= 6 )
        {
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
          v7 = qword_140C1C1F0;
          qword_140C1C1F0 = 0LL;
          SSHSupportReleasePushLockExclusive((ULONG_PTR)&stru_140C1C1E8);
          ZwClose(v7);
        }
        else if ( v4 == 10 )
        {
          v13[2] = 48;
          v14 = 0LL;
          v16 = 512;
          v15 = 0LL;
          v18 = 0LL;
          memset(v19, 0, 0x48uLL);
          v19[2] = 64LL;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
          LOBYTE(v12) = qword_140C1C1F0 == 0LL;
          v11 = 0LL;
          v10 = a1;
          v9 = 0LL;
          v8 = v19;
          if ( (int)ZwAlpcAcceptConnectPort((__int64)&qword_140C1C1F0, SshpAlpcContext) < 0 )
          {
            ZwAlpcAcceptConnectPort((__int64)&qword_140C1C1F0, SshpAlpcContext);
          }
          else
          {
            v13[0] = 0;
            v6 = 0LL;
            do
            {
              LOBYTE(v8) = 0;
              SshpAlpcSendMessage(
                192 * v6,
                2 - (unsigned int)(dword_140C1C1F8[48 * v6] != 0),
                4LL,
                v13,
                v8,
                v9,
                v10,
                v11,
                v12);
              v6 = (unsigned int)(v13[0] + 1);
              v13[0] = v6;
            }
            while ( (unsigned int)v6 < 2 );
          }
          SSHSupportReleasePushLockExclusive((ULONG_PTR)&stru_140C1C1E8);
        }
      }
    }
    else if ( v4 == 1 || (v3 & 0x2000) != 0 )
    {
      return (unsigned int)ZwAlpcCancelMessage(SshpAlpcContext, 0LL);
    }
    else
    {
      SshpAlpcProcessMessage(a1);
    }
  }
  return v1;
}
