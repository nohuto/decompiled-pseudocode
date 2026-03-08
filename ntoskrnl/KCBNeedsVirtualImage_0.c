/*
 * XREFs of KCBNeedsVirtualImage_0 @ 0x140614000
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x140768CB8 (CmpIsSystemEntity.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1407B96F0 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBNeedsVirtualImage_0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( !CmpVEEnabled || (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 || !(unsigned __int8)CmpIsKcbInsideVirtualizedHive() )
    return 0;
  LOBYTE(v2) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v2, v1, 0LL) == 0;
}
