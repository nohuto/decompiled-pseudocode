/*
 * XREFs of SshpSendSessionData @ 0x140809BEC
 * Callers:
 *     SshpWnfCallback @ 0x1408097A0 (SshpWnfCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14036C0A0 (SSHSupportReleasePushLockExclusive.c)
 *     SshpQueryBlockerPendingDelete @ 0x14039630C (SshpQueryBlockerPendingDelete.c)
 *     SshpWriteBlocker @ 0x140399BC4 (SshpWriteBlocker.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SshpDereferenceBlocker @ 0x1407F1648 (SshpDereferenceBlocker.c)
 *     SshpFlushBlockerDataCache @ 0x140807088 (SshpFlushBlockerDataCache.c)
 */

void SshpSendSessionData()
{
  PVOID v0; // rsi
  __int64 v1; // rdi
  __int64 *v2; // rbx
  __int64 *v3; // rax
  ULONG_PTR *v4; // rdi
  __int64 v5; // rdx
  __int64 **v6; // rcx
  __int64 **i; // rbx
  __int64 ***v8; // rsi
  __int64 **v9; // rax
  __int64 ***v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 *j; // rbx
  unsigned int k; // esi
  __int64 v15; // r13
  __int64 v16; // r15
  void *v17; // rcx
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
        v8 = (__int64 ***)i;
        SshpWriteBlocker((PKSPIN_LOCK)i[15], &v21, (unsigned int *)&v20);
        if ( SshpQueryBlockerPendingDelete((PKSPIN_LOCK)i[15]) )
        {
          v9 = (__int64 **)*i;
          v10 = (__int64 ***)(i + 1);
          i = (__int64 **)i[1];
          if ( (*v8)[1] != (__int64 *)v8
            || *i != (__int64 *)v8
            || (*i = (__int64 *)v9, v9[1] = (__int64 *)i, v11 = v19, *v19 != (__int64 *)&v18) )
          {
LABEL_37:
            __fastfail(3u);
          }
          *v10 = v19;
          *v8 = &v18;
          *v11 = v8;
          v19 = (__int64 **)v8;
        }
      }
      v12 = SshpSessionGuid - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
      if ( (_QWORD)SshpSessionGuid == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
        v12 = *((_QWORD *)&SshpSessionGuid + 1) - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
      if ( !v12 )
      {
        for ( j = *(__int64 **)(v1 + 56); j != (__int64 *)(v1 + 56); j = (__int64 *)*j )
        {
          for ( k = 0; k < *((_DWORD *)j + 10); ++k )
          {
            v15 = (__int64)&j[4 * k + 6];
            if ( LODWORD(v22[2]) >= 0x10 )
              SshpFlushBlockerDataCache((ULONG *)v22);
            v16 = 3LL * LODWORD(v22[2]);
            v22[v16 + 3] = v15;
            *(_OWORD *)&v22[v16 + 4] = 0LL;
            if ( (*(int (__fastcall **)(_QWORD))(v15 + 24))(*(_QWORD *)(v15 + 16)) < 0 )
            {
              v17 = (void *)v22[v16 + 5];
              if ( v17 )
                CmpFreeTransientPoolWithTag(v17, v22[0]);
            }
            else
            {
              ++LODWORD(v22[2]);
            }
          }
        }
        SshpFlushBlockerDataCache((ULONG *)v22);
      }
      SSHSupportReleasePushLockExclusive(v1 + 16);
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &SshpLibraryList );
    v0 = v21;
  }
  SSHSupportReleasePushLockExclusive((ULONG_PTR)&SshpLibraryListLock);
  while ( 1 )
  {
    v2 = v18;
    if ( v18 == (__int64 *)&v18 )
      break;
    if ( (__int64 **)v18[1] != &v18 )
      goto LABEL_37;
    v3 = (__int64 *)*v18;
    if ( *(__int64 **)(*v18 + 8) != v18 )
      goto LABEL_37;
    v18 = (__int64 *)*v18;
    v3[1] = (__int64)&v18;
    v4 = &SshpBlockerCollections + 4 * *((int *)v2 + 10);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
    v5 = v2[2];
    if ( *(__int64 **)(v5 + 8) != v2 + 2 )
      goto LABEL_37;
    v6 = (__int64 **)v2[3];
    if ( *v6 != v2 + 2 )
      goto LABEL_37;
    *v6 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    SSHSupportReleasePushLockExclusive((ULONG_PTR)v4);
    SshpDereferenceBlocker((_QWORD *)v2[15]);
  }
  if ( v0 )
    CmpFreeTransientPoolWithTag(v0, 0x70687373u);
}
