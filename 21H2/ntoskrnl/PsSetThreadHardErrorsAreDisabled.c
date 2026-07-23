/*
 * XREFs of PsSetThreadHardErrorsAreDisabled @ 0x14039AF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetThreadHardErrorsAreDisabled(__int64 a1, char a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1296), 0x10u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1296), 0xFFFFFFEF);
}
