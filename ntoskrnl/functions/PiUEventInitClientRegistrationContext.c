_QWORD *PiUEventInitClientRegistrationContext()
{
  ACL *v0; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v2; // rdi
  struct _FAST_MUTEX *v3; // rax
  PSID v4; // rsi
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // esi
  ACL *v10; // rax
  void *v12; // rcx
  UNICODE_STRING String2; // [rsp+48h] [rbp-59h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v15; // [rsp+78h] [rbp-29h]
  _OWORD Sid[3]; // [rsp+80h] [rbp-21h] BYREF
  __int128 v17[3]; // [rsp+B0h] [rbp+Fh] BYREF

  *(_QWORD *)&String2.Length = 2752552LL;
  v15 = 0LL;
  String2.Buffer = L"lpacPnpNotifications";
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v0 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 144LL, 1500540496LL);
  v2 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x90uLL);
    v3 = (struct _FAST_MUTEX *)ExAllocatePool2(64LL, 56LL, 1500540496LL);
    v2[2] = v3;
    if ( v3 )
    {
      KeInitializeGuardedMutex(v3);
      *((_DWORD *)v2 + 33) = 4;
      v2[15] = v2 + 14;
      v2[14] = v2 + 14;
      *((_BYTE *)v2 + 140) = 1;
      v2[13] = v2 + 12;
      v2[12] = v2 + 12;
      if ( RtlDeriveCapabilitySidsFromName(&String2, v17, Sid) >= 0
        && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0 )
      {
        v4 = SeLocalSystemSid;
        if ( RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 1u) >= 0 )
        {
          v5 = RtlLengthSid(SeLowMandatorySid);
          v6 = RtlLengthSid(SeAllAppPackagesSid) + v5;
          v7 = RtlLengthSid(SeWorldSid) + v6;
          v8 = RtlLengthSid(v4) + v7;
          v9 = v8 + RtlLengthSid(Sid) + 48;
          v10 = (ACL *)ExAllocatePool2(256LL, v9, 1500540496LL);
          v0 = v10;
          if ( v10 )
          {
            if ( RtlCreateAcl(v10, v9, 2u) >= 0
              && (int)RtlpAddKnownAce((int)v0, 2, 2, 0x10000000, SeLocalSystemSid, 0) >= 0
              && (int)RtlpAddKnownAce((int)v0, 2, 2, 1, SeWorldSid, 0) >= 0
              && (int)RtlpAddKnownAce((int)v0, 2, 2, 1, SeAllAppPackagesSid, 0) >= 0
              && (int)RtlpAddKnownAce((int)v0, 2, 2, 1, SeLowMandatorySid, 0) >= 0
              && (int)RtlpAddKnownAce((int)v0, 2, 2, 1, Sid, 0) >= 0
              && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v0, 0) >= 0
              && (int)ZwCreateWnfStateName((__int64)(v2 + 11), 3LL) >= 0 )
            {
              goto LABEL_15;
            }
          }
        }
      }
    }
    v12 = (void *)v2[2];
    if ( v12 )
      ExFreePoolWithTag(v12, 0x59706E50u);
    ExFreePoolWithTag(v2, 0x59706E50u);
    v2 = 0LL;
    if ( v0 )
LABEL_15:
      ExFreePoolWithTag(v0, 0x59706E50u);
  }
  return v2;
}
