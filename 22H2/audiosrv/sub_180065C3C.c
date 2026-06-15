/*
 * XREFs of sub_180065C3C @ 0x180065C3C
 * Callers:
 *     sub_1800655F4 @ 0x1800655F4 (sub_1800655F4.c)
 *     sub_180065A0C @ 0x180065A0C (sub_180065A0C.c)
 *     sub_1800B52D0 @ 0x1800B52D0 (sub_1800B52D0.c)
 * Callees:
 *     sub_180051B0C @ 0x180051B0C (sub_180051B0C.c)
 */

void __fastcall sub_180065C3C(void **a1, void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_180051B0C(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
