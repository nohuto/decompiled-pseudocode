/*
 * XREFs of ?DxgkEngGetClientRectApiExt@@YAHPEAUHDC__@@QEAUtagRECT@@@Z @ 0x1C014A000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetClientRectApiExt(HDC a1, struct tagRECT *const a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( qword_1C02550D0 )
    v5 = qword_1C02550D0();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C02550D8 )
    return (unsigned int)qword_1C02550D8(a1, a2);
  return v2;
}
