/*
 * XREFs of SshpSendSessionData @ 0x1408FAE08
 * Callers:
 *     SshpWnfCallback @ 0x1408FBCB0 (SshpWnfCallback.c)
 * Callees:
 *     SSHSupportReleasePushLockExclusive @ 0x1402481C8 (SSHSupportReleasePushLockExclusive.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     SshpQueryBlockerPendingDelete @ 0x14057FFDC (SshpQueryBlockerPendingDelete.c)
 *     SshpWriteBlocker @ 0x14058040C (SshpWriteBlocker.c)
 *     SSHSupportQueryInterruptTime @ 0x140580F6C (SSHSupportQueryInterruptTime.c)
 *     SshpDereferenceBlocker @ 0x140617024 (SshpDereferenceBlocker.c)
 *     SshpFlushBlockerDataCache @ 0x1408FAB60 (SshpFlushBlockerDataCache.c)
 */

__int64 **SshpSendSessionData()
{
  __int64 InterruptTime; // rax
  __int64 v1; // rdi
  unsigned __int64 v2; // r12
  ULONG_PTR v3; // r15
  __int64 **i; // rbx
  __int64 ***v5; // rsi
  __int64 **v6; // rax
  __int64 ***v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rbx
  unsigned int j; // esi
  __int64 v12; // r13
  __int64 v13; // r15
  void *v14; // rcx
  __int64 *v15; // rbx
  __int64 **result; // rax
  __int64 *v17; // rax
  ULONG_PTR *v18; // rdi
  __int64 v19; // rdx
  __int64 **v20; // rcx
  __int64 *v21; // [rsp+28h] [rbp-E0h] BYREF
  __int64 **v22; // [rsp+30h] [rbp-D8h]
  _QWORD v23[52]; // [rsp+38h] [rbp-D0h] BYREF

  memset(v23, 0, 0x198uLL);
  v22 = &v21;
  v21 = (__int64 *)&v21;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpLibraryListLock, 0LL);
  InterruptTime = SSHSupportQueryInterruptTime();
  v1 = SshpLibraryList;
  v2 = InterruptTime - SshpSessionStartTime;
  while ( (__int64 *)v1 != &SshpLibraryList )
  {
    v3 = v1 + 16;
    ExAcquirePushLockExclusiveEx(v1 + 16, 0LL);
    LODWORD(v23[0]) = *(_DWORD *)(v1 + 24);
    for ( i = *(__int64 ***)(v1 + 40); i != (__int64 **)(v1 + 40); i = (__int64 **)*i )
    {
      v5 = (__int64 ***)i;
      SshpWriteBlocker((__int64)i[13], v2);
      if ( SshpQueryBlockerPendingDelete((PKSPIN_LOCK)i[13]) )
      {
        v6 = (__int64 **)*i;
        v7 = (__int64 ***)(i + 1);
        i = (__int64 **)i[1];
        if ( (*v5)[1] != (__int64 *)v5
          || *i != (__int64 *)v5
          || (*i = (__int64 *)v6, v6[1] = (__int64 *)i, v8 = v22, *v22 != (__int64 *)&v21) )
        {
LABEL_34:
          __fastfail(3u);
        }
        *v7 = v22;
        *v5 = &v21;
        *v8 = v5;
        v22 = (__int64 **)v5;
      }
    }
    v9 = SshpSessionGuid - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( (_QWORD)SshpSessionGuid == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v9 = *((_QWORD *)&SshpSessionGuid + 1) - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( !v9 )
    {
      v10 = *(__int64 **)(v1 + 56);
      if ( v10 != (__int64 *)(v1 + 56) )
      {
        do
        {
          for ( j = 0; j < *((_DWORD *)v10 + 10); ++j )
          {
            v12 = (__int64)&v10[4 * j + 6];
            if ( LODWORD(v23[2]) >= 0x10 )
              SshpFlushBlockerDataCache((ULONG *)v23);
            v13 = 3LL * LODWORD(v23[2]);
            v23[v13 + 3] = v12;
            *(_OWORD *)&v23[v13 + 4] = 0LL;
            if ( (*(int (__fastcall **)(_QWORD))(v12 + 24))(*(_QWORD *)(v12 + 16)) < 0 )
            {
              v14 = (void *)v23[v13 + 5];
              if ( v14 )
                CmpFreeTransientPoolWithTag(v14, v23[0]);
            }
            else
            {
              ++LODWORD(v23[2]);
            }
          }
          v10 = (__int64 *)*v10;
        }
        while ( v10 != (__int64 *)(v1 + 56) );
        v3 = v1 + 16;
      }
      SshpFlushBlockerDataCache((ULONG *)v23);
    }
    SSHSupportReleasePushLockExclusive(v3);
    v1 = *(_QWORD *)v1;
  }
  SSHSupportReleasePushLockExclusive((ULONG_PTR)&SshpLibraryListLock);
  while ( 1 )
  {
    v15 = v21;
    result = &v21;
    if ( v21 == (__int64 *)&v21 )
      return result;
    if ( (__int64 **)v21[1] != &v21 )
      goto LABEL_34;
    v17 = (__int64 *)*v21;
    if ( *(__int64 **)(*v21 + 8) != v21 )
      goto LABEL_34;
    v21 = (__int64 *)*v21;
    v17[1] = (__int64)&v21;
    v18 = &SshpBlockerCollections + 4 * *((int *)v15 + 10);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v18, 0LL);
    v19 = v15[2];
    if ( *(__int64 **)(v19 + 8) != v15 + 2 )
      goto LABEL_34;
    v20 = (__int64 **)v15[3];
    if ( *v20 != v15 + 2 )
      goto LABEL_34;
    *v20 = (__int64 *)v19;
    *(_QWORD *)(v19 + 8) = v20;
    SSHSupportReleasePushLockExclusive((ULONG_PTR)v18);
    SshpDereferenceBlocker((_QWORD *)v15[13]);
  }
}
