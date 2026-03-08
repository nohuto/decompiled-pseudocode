/*
 * XREFs of IoIrpHasFsTrackOffsetExtensionType @ 0x1402CC5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IoIrpHasFsTrackOffsetExtensionType(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 200);
  return *(char *)(a1 + 71) >= 0 && v1 && (*(_BYTE *)(v1 + 2) & 0x20) != 0;
}
