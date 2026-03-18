/*
 * XREFs of SshpSessionManagerFlushControlEventBuffer @ 0x14081BF60
 * Callers:
 *     SshpSessionManagerSendControlEvent @ 0x140811238 (SshpSessionManagerSendControlEvent.c)
 *     SshpSessionManagerControlSessionCallback @ 0x14081BF30 (SshpSessionManagerControlSessionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14036C0A0 (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportEtwWrite @ 0x1403B5B68 (SSHSupportEtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

LONG __fastcall SshpSessionManagerFlushControlEventBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char *v4; // rax
  unsigned int v5; // ebx
  const EVENT_DESCRIPTOR *v6; // rdx
  _QWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR i; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0;
  for ( i = 0LL; v3 < dword_140C1C400; v3 += v5 + 12 )
  {
    v4 = (char *)&unk_140C1C404 + v3;
    v5 = *(_DWORD *)v4;
    v6 = *(const EVENT_DESCRIPTOR **)(v4 + 4);
    i.Ptr = (ULONGLONG)(v4 + 12);
    *(_QWORD *)&i.Size = v5;
    SSHSupportEtwWrite((__int64)&unk_140C1C404, v6, a3, 1u, &i);
  }
  dword_140C1C400 = 0;
  byte_140C1C3E0 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
  if ( !--dword_140C1C1F8[0] )
  {
    v8[0] = 0LL;
    v8[1] = -1LL;
    KeSetTimer2((__int64)&unk_140C1C200, -50000000LL, 0LL, (__int64)v8);
  }
  SSHSupportReleasePushLockExclusive((ULONG_PTR)&stru_140C1C1E8);
  return KeSetEvent(&stru_140C1C3E8, 0, 0);
}
