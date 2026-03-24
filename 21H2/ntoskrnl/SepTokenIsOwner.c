/*
 * XREFs of SepTokenIsOwner @ 0x14027E590
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14027CAB0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeComputeCreatorDeniedRights @ 0x14034FC90 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140373074 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406261B0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlEqualSid @ 0x14027C9E0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x14027E660 (RtlSidHashLookup.c)
 *     SepSidInToken @ 0x14027EA84 (SepSidInToken.c)
 */

char __fastcall SepTokenIsOwner(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  void *v7; // rbx
  __int64 v8; // rax

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
  v8 = RtlSidHashLookup(a1 + 232, v7);
  if ( !v8 || (v8 != *(_QWORD *)(a1 + 240) || (*(_DWORD *)(v8 + 8) & 0x10) != 0) && (*(_DWORD *)(v8 + 8) & 4) == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 128) )
    return SepSidInToken(a1, 0, (_DWORD)v7, 0, 1, 0, a4);
  return 1;
}
