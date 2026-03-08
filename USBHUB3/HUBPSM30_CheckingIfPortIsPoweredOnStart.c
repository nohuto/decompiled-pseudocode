/*
 * XREFs of HUBPSM30_CheckingIfPortIsPoweredOnStart @ 0x1C0013B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIfPortIsPoweredOnStart(__int64 a1)
{
  return (*(_WORD *)(*(_QWORD *)(a1 + 960) + 184LL) & 0x200) != 0 ? 3089 : 3005;
}
