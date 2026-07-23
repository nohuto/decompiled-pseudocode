/*
 * XREFs of RtlpFcUpdateLocalConfiguration @ 0x18005DD2C
 * Callers:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005E17C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcWnfCallback @ 0x180101EB0 (RtlpFcWnfCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpFcMapBuffers @ 0x18005DF00 (RtlpFcMapBuffers.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005DF68 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005E044 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x18005E23C (RtlpFcBufferManagerReferenceBuffers.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 *     NtQuerySystemInformationEx @ 0x1800A0110 (NtQuerySystemInformationEx.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlpFcSectionTypeToBufferType @ 0x18011B15C (RtlpFcSectionTypeToBufferType.c)
 */

__int64 __fastcall RtlpFcUpdateLocalConfiguration(PRTL_SRWLOCK SRWLock, unsigned __int64 a2, char a3)
{
  __int64 v6; // r14
  NTSTATUS v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r9d
  __int64 v10; // r8
  int v11; // r9d
  _QWORD *v12; // r10
  PVOID *v13; // rdi
  __int64 v14; // rsi
  HANDLE *v15; // rdi
  unsigned __int64 Value; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD InputBuffer[5]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD SystemInformation[10]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[80]; // [rsp+B8h] [rbp-50h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v20, 0, 0x48uLL);
  v6 = 3LL;
  if ( byte_18016C508 )
  {
    v7 = -1073741058;
  }
  else
  {
    if ( a3 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
    {
      v7 = -1073741608;
      goto LABEL_15;
    }
    Value = SRWLock[(SRWLock[1].Value & 1) + 22].Value;
    if ( Value < a2 )
    {
      RtlpFcBufferManagerReferenceBuffers(&SRWLock[1], &Value, InputBuffer);
      v8 = InputBuffer[0];
      v9 = 0;
      memset(&InputBuffer[1], 0, 24);
      do
      {
        v10 = (unsigned int)RtlpFcSectionTypeToBufferType(v9, v8);
        v9 = v11 + 1;
        *v12 = *(_QWORD *)(v8 + 24 * v10);
      }
      while ( v9 < 3 );
      RtlpFcBufferManagerDereferenceBuffers(&SRWLock[1]);
      v7 = NtQuerySystemInformationEx(
             SystemFeatureConfigurationSectionInformation,
             &InputBuffer[1],
             0x18u,
             SystemInformation,
             0x50u,
             0LL);
      if ( v7 >= 0 )
      {
        v7 = RtlpFcMapBuffers(SystemInformation, v20);
        if ( v7 >= 0 )
          RtlpFcBufferManagerUpdateBuffers(&SRWLock[1], SystemInformation[0], v20);
      }
    }
    else
    {
      v7 = 0;
    }
    RtlReleaseSRWLockExclusive(SRWLock);
  }
LABEL_15:
  v13 = (PVOID *)&v20[8];
  v14 = 3LL;
  do
  {
    if ( *v13 )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v13);
    v13 += 3;
    --v14;
  }
  while ( v14 );
  v15 = (HANDLE *)&SystemInformation[2];
  do
  {
    if ( *v15 )
      NtClose(*v15);
    v15 += 3;
    --v6;
  }
  while ( v6 );
  return (unsigned int)v7;
}
