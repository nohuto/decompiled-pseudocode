/*
 * XREFs of SshpSendSessionData @ 0x140879EBC
 * Callers:
 *     SshpWnfCallback @ 0x140879A40 (SshpWnfCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1402A4AB8 (SSHSupportReleasePushLockExclusive.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SshpQueryBlockerPendingDelete @ 0x1405A08C0 (SshpQueryBlockerPendingDelete.c)
 *     SshpWriteBlocker @ 0x1405A0960 (SshpWriteBlocker.c)
 *     SshpDereferenceBlocker @ 0x1407263FC (SshpDereferenceBlocker.c)
 *     SshpFlushBlockerDataCache @ 0x14099E508 (SshpFlushBlockerDataCache.c)
 */

void SshpSendSessionData()
{
  PVOID v0; // rsi
  __int64 v1; // rdi
  __int64 *v2; // rbx
  __int64 **i; // rbx
  __int64 ***v4; // rsi
  __int64 **v5; // rax
  __int64 ***v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 *j; // rbx
  unsigned int k; // esi
  __int64 v11; // r13
  __int64 v12; // r15
  void *v13; // rcx
  __int64 *v14; // rax
  volatile signed __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 **v17; // rax
  __int64 *v18; // [rsp+28h] [rbp-E0h] BYREF
  __int64 **v19; // [rsp+30h] [rbp-D8h]
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v21; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v22[52]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v22, 0, 0x198uLL);
  v0 = 0LL;
  LODWORD(v20) = 0;
  v19 = &v18;
  v21 = 0LL;
  v18 = (__int64 *)&v18;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpLibraryListLock, 0LL);
  v1 = SshpLibraryList;
  if ( (__int64 *)SshpLibraryList != &SshpLibraryList )
  {
    do
    {
      ExAcquirePushLockExclusiveEx(v1 + 16, 0LL);
      LODWORD(v22[0]) = *(_DWORD *)(v1 + 24);
      for ( i = *(__int64 ***)(v1 + 40); i != (__int64 **)(v1 + 40); i = (__int64 **)*i )
      {
        v4 = (__int64 ***)i;
        SshpWriteBlocker((PKSPIN_LOCK)i[15], &v21, (unsigned int *)&v20);
        if ( SshpQueryBlockerPendingDelete((__int64)i[15]) )
        {
          v5 = (__int64 **)*i;
          v6 = (__int64 ***)(i + 1);
          i = (__int64 **)i[1];
          if ( (*v4)[1] != (__int64 *)v4
            || *i != (__int64 *)v4
            || (*i = (__int64 *)v5, v5[1] = (__int64 *)i, v7 = v19, *v19 != (__int64 *)&v18) )
          {
LABEL_35:
            __fastfail(3u);
          }
          *v6 = v19;
          *v4 = &v18;
          *v7 = v4;
          v19 = (__int64 **)v4;
        }
      }
      v8 = SshpSessionGuid - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
      if ( (_QWORD)SshpSessionGuid == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
        v8 = *((_QWORD *)&SshpSessionGuid + 1) - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
      if ( !v8 )
      {
        for ( j = *(__int64 **)(v1 + 56); j != (__int64 *)(v1 + 56); j = (__int64 *)*j )
        {
          for ( k = 0; k < *((_DWORD *)j + 10); ++k )
          {
            v11 = (__int64)&j[4 * k + 6];
            if ( LODWORD(v22[2]) >= 0x10 )
              SshpFlushBlockerDataCache(v22);
            v12 = 3LL * LODWORD(v22[2]);
            v22[v12 + 3] = v11;
            *(_OWORD *)&v22[v12 + 4] = 0LL;
            if ( (*(int (__fastcall **)(_QWORD))(v11 + 24))(*(_QWORD *)(v11 + 16)) < 0 )
            {
              v13 = (void *)v22[v12 + 5];
              if ( v13 )
                CmpFreeTransientPoolWithTag(v13, v22[0]);
            }
            else
            {
              ++LODWORD(v22[2]);
            }
          }
        }
        SshpFlushBlockerDataCache(v22);
      }
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)(v1 + 16));
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &SshpLibraryList );
    v0 = v21;
  }
  SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpLibraryListLock);
  while ( 1 )
  {
    v2 = v18;
    if ( v18 == (__int64 *)&v18 )
      break;
    if ( (__int64 **)v18[1] != &v18 )
      goto LABEL_35;
    v14 = (__int64 *)*v18;
    if ( *(__int64 **)(*v18 + 8) != v18 )
      goto LABEL_35;
    v18 = (__int64 *)*v18;
    v14[1] = (__int64)&v18;
    v15 = (volatile signed __int64 *)(&SshpBlockerCollections + 4 * *((int *)v2 + 10));
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v15, 0LL);
    v16 = v2[2];
    if ( *(__int64 **)(v16 + 8) != v2 + 2 )
      goto LABEL_35;
    v17 = (__int64 **)v2[3];
    if ( *v17 != v2 + 2 )
      goto LABEL_35;
    *v17 = (__int64 *)v16;
    *(_QWORD *)(v16 + 8) = v17;
    SSHSupportReleasePushLockExclusive(v15);
    SshpDereferenceBlocker((_QWORD *)v2[15]);
  }
  if ( v0 )
    CmpFreeTransientPoolWithTag(v0, 0x70687373u);
}
