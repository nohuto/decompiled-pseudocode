/*
 * XREFs of SepTokenIsOwner @ 0x1403475A0
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1402D0420 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140345AC0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140373854 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406265D0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlEqualSid @ 0x1403459F0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x140347670 (RtlSidHashLookup.c)
 *     SepSidInToken @ 0x140347A94 (SepSidInToken.c)
 */

char __fastcall SepTokenIsOwner(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  void *v7; // rbx
  PSID_AND_ATTRIBUTES v8; // rax

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v7 = *(void **)(a2 + 8);
  }
  else
  {
    v6 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v6 )
      v7 = (void *)(a2 + v6);
    else
      v7 = 0LL;
  }
  if ( a4 && v7 && RtlEqualSid(SeAliasAdminsSid, v7) )
    return 0;
  v8 = RtlSidHashLookup((PSID_AND_ATTRIBUTES_HASH)(a1 + 232), v7);
  if ( !v8 || (v8 != *(PSID_AND_ATTRIBUTES *)(a1 + 240) || (v8->Attributes & 0x10) != 0) && (v8->Attributes & 4) == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 128) )
    return SepSidInToken(a1, 0, (_DWORD)v7, 0, 1, 0, a4);
  return 1;
}
