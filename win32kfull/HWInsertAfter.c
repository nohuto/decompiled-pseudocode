/*
 * XREFs of HWInsertAfter @ 0x1C01A7610
 * Callers:
 *     LinkWindow @ 0x1C00639C0 (LinkWindow.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00A5428 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HWInsertAfter(unsigned __int64 a1)
{
  if ( a1 < 2 || a1 == -2LL || a1 == -1LL )
    return a1;
  else
    return *(_QWORD *)a1;
}
