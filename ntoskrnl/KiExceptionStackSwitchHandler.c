/*
 * XREFs of KiExceptionStackSwitchHandler @ 0x1402F34C4
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall KiExceptionStackSwitchHandler(int *a1)
{
  if ( (a1[1] & 0x76) == 0 )
    KeBugCheckEx(0x1Eu, *a1, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 5));
  return 1LL;
}
