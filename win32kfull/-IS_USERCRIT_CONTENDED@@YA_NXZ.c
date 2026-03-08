/*
 * XREFs of ?IS_USERCRIT_CONTENDED@@YA_NXZ @ 0x1C02364B8
 * Callers:
 *     MNAnimate @ 0x1C0237090 (MNAnimate.c)
 * Callees:
 *     <none>
 */

char __fastcall IS_USERCRIT_CONTENDED(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax

  v1 = SGDGetUserSessionState(a1);
  v3 = 0;
  if ( ExGetExclusiveWaiterCount(*(PERESOURCE *)(v1 + 8)) )
    return 1;
  v4 = SGDGetUserSessionState(v2);
  if ( ExGetSharedWaiterCount(*(PERESOURCE *)(v4 + 8)) )
    return 1;
  return v3;
}
