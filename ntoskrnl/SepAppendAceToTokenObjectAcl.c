/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x1406D22B0
 * Callers:
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     SeCopyClientToken @ 0x1406D1D40 (SeCopyClientToken.c)
 *     SepFinalizeTokenAcls @ 0x1406D1E60 (SepFinalizeTokenAcls.c)
 *     NtDuplicateToken @ 0x1406DAB50 (NtDuplicateToken.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     RtlFindAceBySid @ 0x140245DF0 (RtlFindAceBySid.c)
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlGetAce @ 0x140245EE0 (RtlGetAce.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlQueryInformationAcl @ 0x1406DB160 (RtlQueryInformationAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     ObSetSecurityObjectByPointer @ 0x1406DB6C0 (ObSetSecurityObjectByPointer.c)
 *     RtlAddAce @ 0x1406DB760 (RtlAddAce.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140880604 (ObpReferenceSecurityDescriptorSlow.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenObjectAcl(__int64 a1, int a2, _WORD *a3)
{
  NTSTATUS Acl; // esi
  _WORD *v5; // r12
  unsigned __int64 v6; // rcx
  ULONG_PTR v7; // r14
  signed __int64 v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rdi
  signed __int64 v11; // rdx
  unsigned __int64 Pool2; // rdi
  char v13; // r15
  __int16 v14; // ax
  __int64 v15; // rax
  ACL *v16; // r14
  char *v17; // r13
  char v18; // bl
  ULONG v19; // eax
  int v20; // r13d
  ULONG v21; // esi
  ACL *v22; // rax
  ACL *v23; // r12
  ULONG v24; // ebx
  char *v25; // rbx
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  bool v28; // zf
  signed __int64 v29; // rtt
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v32; // r14
  char **v33; // rdi
  signed __int64 v34; // rcx
  bool v35; // cc
  signed __int64 v36; // rcx
  char *i; // rdx
  int v38; // ebx
  int v39; // [rsp+40h] [rbp-69h]
  unsigned int v40; // [rsp+50h] [rbp-59h] BYREF
  int v41; // [rsp+58h] [rbp-51h] BYREF
  ULONG AclRevision; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v43; // [rsp+60h] [rbp-49h]
  PVOID Ace; // [rsp+68h] [rbp-41h] BYREF
  void *Src; // [rsp+70h] [rbp-39h]
  __int64 v46; // [rsp+78h] [rbp-31h]
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-9h]
  __int64 v49; // [rsp+B0h] [rbp+7h] BYREF
  int v50; // [rsp+B8h] [rbp+Fh]

  v46 = a1;
  v48 = 0LL;
  v49 = 0LL;
  Acl = 0;
  v50 = 0;
  v40 = 0;
  v5 = a3;
  v6 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v41 = 0;
  Src = a3;
  v43 = a2;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Ace = 0LL;
  v7 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6];
  AclRevision = 0;
  if ( *(__int64 (__fastcall **)(__int64, int, _DWORD *, void *, __int64, __int64 *, int, __int64))(v7 + 152) != SeDefaultObjectMethod )
  {
    v41 = 447;
    v40 = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(256LL, (unsigned int)ObpDefaultSecurityDescriptorLength, 1901290063LL);
    if ( Pool2 )
    {
      v38 = (*(__int64 (__fastcall **)(__int64, __int64, int *, unsigned __int64, unsigned int *, __int64, _DWORD, ULONG_PTR, _BYTE))(v7 + 152))(
              a1,
              1LL,
              &v41,
              Pool2,
              &v40,
              a1 - 8,
              *(_DWORD *)(v7 + 100),
              v7 + 76,
              0);
      if ( v38 != -1073741789 )
      {
LABEL_57:
        if ( v38 >= 0 )
        {
          v13 = 1;
        }
        else
        {
          ExFreePoolWithTag((PVOID)Pool2, 0);
          v13 = 0;
          Pool2 = 0LL;
        }
        Acl = v38;
        if ( v38 < 0 )
        {
          v17 = (char *)Pool2;
          v18 = v13;
          if ( !Pool2 )
            return (unsigned int)Acl;
          goto LABEL_24;
        }
        v5 = Src;
        goto LABEL_44;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
      ObpDefaultSecurityDescriptorLength = v40;
      Pool2 = ExAllocatePool2(256LL, v40, 1901290063LL);
      if ( Pool2 )
      {
        LOBYTE(v39) = 0;
        v38 = (*(__int64 (__fastcall **)(__int64, __int64, int *, unsigned __int64, unsigned int *, __int64, _DWORD, ULONG_PTR, int))(v7 + 152))(
                a1,
                1LL,
                &v41,
                Pool2,
                &v40,
                a1 - 8,
                *(_DWORD *)(v7 + 100),
                v7 + 76,
                v39);
        goto LABEL_57;
      }
    }
    return (unsigned int)-1073741670;
  }
  _m_prefetchw((const void *)(a1 - 8));
  v8 = *(_QWORD *)(a1 - 8);
  if ( (v8 & 0xF) != 0 )
  {
    do
    {
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 8), v8 - 1, v8);
      if ( v8 == v9 )
        break;
      v8 = v9;
    }
    while ( (v9 & 0xF) != 0 );
  }
  v10 = v8;
  v11 = v8 & 0xF;
  Pool2 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (unsigned int)v11 <= 1 && Pool2 )
    Pool2 = ObpReferenceSecurityDescriptorSlow(a1 - 48, v11, Pool2);
  v13 = 0;
  if ( Pool2 )
    goto LABEL_6;
  if ( (*(_BYTE *)(v7 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0 )
    KeBugCheckEx(0x189u, a1 - 48, v7, 1uLL, 0LL);
LABEL_44:
  if ( !Pool2 )
    return (unsigned int)Acl;
LABEL_6:
  v14 = *(_WORD *)(Pool2 + 2);
  if ( (v14 & 4) == 0 )
  {
    v17 = (char *)Pool2;
    v18 = v13;
    goto LABEL_24;
  }
  if ( v14 >= 0 )
  {
    v16 = *(ACL **)(Pool2 + 32);
  }
  else
  {
    v15 = *(unsigned int *)(Pool2 + 16);
    if ( !(_DWORD)v15 )
    {
      v17 = (char *)Pool2;
      v18 = v13;
      goto LABEL_24;
    }
    v16 = (ACL *)(Pool2 + v15);
  }
  v17 = (char *)Pool2;
  v18 = v13;
  if ( v16 )
  {
    if ( !RtlFindAceBySid((__int64)v16, v5, 0LL) )
    {
      Acl = RtlQueryInformationAcl(v16, &v49, 12LL);
      if ( Acl >= 0 )
      {
        Acl = RtlQueryInformationAcl(v16, &AclRevision, 4LL);
        if ( Acl >= 0 )
        {
          v19 = RtlLengthSid(v5);
          v20 = HIDWORD(v49);
          v21 = (v19 + HIDWORD(v49) + 11) & 0xFFFFFFFC;
          v22 = (ACL *)ExAllocatePool2(256LL, v21, 1665230163LL);
          v23 = v22;
          if ( v22 )
          {
            v24 = AclRevision;
            Acl = RtlCreateAcl(v22, v21, AclRevision);
            if ( Acl >= 0 )
            {
              Acl = RtlGetAce(v16, 0, &Ace);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAce(v23, v24, 0, Ace, v20 - 8);
                if ( Acl >= 0 )
                {
                  Acl = RtlpAddKnownAce((int)v23, v24, 0, v43, Src, 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v23, 0);
                      if ( Acl >= 0 )
                        Acl = ObSetSecurityObjectByPointer(v46, 4LL, SecurityDescriptor);
                    }
                  }
                }
              }
            }
            ExFreePoolWithTag(v23, 0);
            v17 = (char *)Pool2;
            v18 = v13;
          }
          else
          {
            Acl = -1073741670;
            v17 = (char *)Pool2;
          }
        }
      }
    }
  }
LABEL_24:
  if ( v18 )
  {
    ExFreePoolWithTag(v17, 0);
  }
  else
  {
    v25 = v17 - 32;
    _m_prefetchw(v17 - 24);
    v26 = *((_QWORD *)v17 - 3);
    v27 = v26 - 1;
    v28 = v26 == 1;
    if ( v26 - 1 <= 0 )
    {
LABEL_28:
      if ( !v28 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      v32 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v25 + 4));
      --CurrentThread->KernelApcDisable;
      v33 = (char **)(v32 + 1);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v32, 0LL);
      v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 1, 0xFFFFFFFFFFFFFFFFuLL);
      v35 = v34 <= 1;
      v36 = v34 - 1;
      if ( v35 )
      {
        if ( v36 )
          __fastfail(0xEu);
        for ( i = *v33; i != v25; i = *(char **)i )
          v33 = (char **)i;
        *v33 = *(char **)v25;
        if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v32);
        KeAbPostRelease((ULONG_PTR)v32);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ExFreePoolWithTag(v17 - 32, 0x6353624Fu);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v32);
        KeAbPostRelease((ULONG_PTR)v32);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
    }
    else
    {
      while ( 1 )
      {
        v29 = v26;
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v25 + 1, v27, v26);
        if ( v29 == v26 )
          break;
        v27 = v26 - 1;
        v28 = v26 == 1;
        if ( v26 - 1 <= 0 )
          goto LABEL_28;
      }
    }
  }
  return (unsigned int)Acl;
}
