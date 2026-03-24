/*
 * XREFs of CmpJoinClassOfTrust @ 0x14032CBB4
 * Callers:
 *     CmpLoadKeyCommon @ 0x14036102C (CmpLoadKeyCommon.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E774 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     CmpPerformTrustClassAccessCheck @ 0x14032CC30 (CmpPerformTrustClassAccessCheck.c)
 *     CmpLockHiveListExclusive @ 0x14071C674 (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x14071C694 (CmpUnlockHiveList.c)
 */

__int64 __fastcall CmpJoinClassOfTrust(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  v3 = a2;
  v5 = a2;
  LOBYTE(a2) = a3;
  result = CmpPerformTrustClassAccessCheck(v5, a2);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(v3 + 4152) & 1) != 0 )
    {
      CmpLockHiveListExclusive();
      v7 = *(_QWORD **)(v3 + 4168);
      v8 = (_QWORD *)(a1 + 4160);
      if ( *v7 != v3 + 4160 )
        __fastfail(3u);
      *v8 = v3 + 4160;
      *(_QWORD *)(a1 + 4168) = v7;
      *v7 = v8;
      *(_QWORD *)(v3 + 4168) = v8;
      CmpUnlockHiveList();
    }
    else
    {
      *(_DWORD *)(a1 + 4152) &= ~1u;
    }
    return 0LL;
  }
  return result;
}
