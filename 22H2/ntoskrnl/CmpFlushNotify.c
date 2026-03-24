/*
 * XREFs of CmpFlushNotify @ 0x1406E3C7C
 * Callers:
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     CmpDeleteKeyObject @ 0x1406E03B0 (CmpDeleteKeyObject.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406E59F0 (CmpFlushNotifiesOnKeyBodyList.c)
 * Callees:
 *     CmpPostNotify @ 0x1405ED0C0 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     CmUnlockHive @ 0x1406DC84C (CmUnlockHive.c)
 *     CmLockHive @ 0x1406DCB88 (CmLockHive.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, __int64 a2, __int128 *a3)
{
  char *v3; // rbx
  char v5; // si
  __int64 v7; // rax
  __int64 v8; // rdi

  v3 = *(char **)(a1 + 16);
  v5 = a2;
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(v7 + 32);
    if ( !(_BYTE)a2 )
    {
      CmLockHive(*(_QWORD *)(v7 + 32));
      v3 = *(char **)(a1 + 16);
    }
    if ( !v3 )
      goto LABEL_14;
    if ( *((char **)v3 + 2) != v3 + 16 )
    {
      CmpPostNotify((__int64)v3, a2, (__int64)a3, 267LL, 0, 0LL, a3);
      v3 = *(char **)(a1 + 16);
    }
    if ( v3 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v3 + 56));
      **((_QWORD **)v3 + 1) = *(_QWORD *)v3;
      if ( *(_QWORD *)v3 )
        *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *((_QWORD *)v3 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v5 )
        CmUnlockHive(v8);
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
LABEL_14:
      if ( !v5 )
        CmUnlockHive(v8);
    }
  }
}
