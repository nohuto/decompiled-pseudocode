/*
 * XREFs of ApiSetEditionSetForegroundCheckNoActivate @ 0x1C0207918
 * Callers:
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1C01D0C24 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionSetForegroundCheckNoActivate(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 1;
  if ( qword_1C0296500 && (int)qword_1C0296500() >= 0 )
  {
    if ( qword_1C0296508 )
      return (unsigned int)qword_1C0296508(a1);
    else
      return 0;
  }
  return v2;
}
