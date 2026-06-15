/*
 * XREFs of sub_180068DF0 @ 0x180068DF0
 * Callers:
 *     sub_180033E20 @ 0x180033E20 (sub_180033E20.c)
 *     sub_1800B838C @ 0x1800B838C (sub_1800B838C.c)
 * Callees:
 *     sub_1800B89D0 @ 0x1800B89D0 (sub_1800B89D0.c)
 */

void __fastcall sub_180068DF0(struct _TP_TIMER **a1, struct _TP_TIMER *a2)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_1800B89D0(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
