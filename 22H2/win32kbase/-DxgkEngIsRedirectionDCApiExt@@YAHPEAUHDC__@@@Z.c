/*
 * XREFs of ?DxgkEngIsRedirectionDCApiExt@@YAHPEAUHDC__@@@Z @ 0x1C014A1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDCApiExt(HDC a1)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C02550B0 )
    v3 = qword_1C02550B0();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C02550B8 )
    return (unsigned int)qword_1C02550B8(a1);
  return v1;
}
