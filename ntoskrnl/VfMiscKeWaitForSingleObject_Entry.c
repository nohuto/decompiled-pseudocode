/*
 * XREFs of VfMiscKeWaitForSingleObject_Entry @ 0x140ADD170
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateKeWaitUsage @ 0x140ADE5E0 (ViMiscValidateKeWaitUsage.c)
 */

__int64 __fastcall VfMiscKeWaitForSingleObject_Entry(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = *(_BYTE *)(a1 + 17);
  return ViMiscValidateKeWaitUsage(1LL, a1 + 24, a3, *(_QWORD *)(a1 + 8));
}
