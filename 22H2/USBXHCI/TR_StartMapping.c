/*
 * XREFs of TR_StartMapping @ 0x1C000822C
 * Callers:
 *     ESM_StartingMapping @ 0x1C0008020 (ESM_StartingMapping.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_StartMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 96LL))();
}
