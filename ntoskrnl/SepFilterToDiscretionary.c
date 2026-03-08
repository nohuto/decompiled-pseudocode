/*
 * XREFs of SepFilterToDiscretionary @ 0x140207874
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepFilterToDiscretionary(_DWORD *a1, int a2)
{
  return (a2 & 0xFDFFFFFF) != (a2 & 0xFDFFFFFF & *a1) ? 0xC0000022 : 0;
}
