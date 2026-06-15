/*
 * XREFs of sub_18007A8CE @ 0x18007A8CE
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 */

void __fastcall sub_18007A8CE(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    sub_180023350(*(struct _RTL_CRITICAL_SECTION ***)(a2 + 128));
  }
}
