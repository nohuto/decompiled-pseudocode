/*
 * XREFs of ?DxgkEngIsRedirectionDCApiExt@@YAHPEAUHDC__@@@Z @ 0x1C0176150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDCApiExt(HDC a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C029AE30 && (int)qword_1C029AE30() >= 0 && qword_1C029AE38 )
    return (unsigned int)qword_1C029AE38(a1);
  return v1;
}
