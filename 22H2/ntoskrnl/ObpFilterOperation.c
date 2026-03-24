/*
 * XREFs of ObpFilterOperation @ 0x1402F450C
 * Callers:
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x140664680 (ObCompleteObjectDuplication.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpFilterOperation(__int64 a1)
{
  return (*(_BYTE *)(a1 + 66) & 0x40) != 0 && *(_QWORD *)(a1 + 200) != a1 + 200;
}
