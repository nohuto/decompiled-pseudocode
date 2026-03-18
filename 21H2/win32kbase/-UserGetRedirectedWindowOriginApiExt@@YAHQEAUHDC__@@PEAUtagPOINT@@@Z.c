/*
 * XREFs of ?UserGetRedirectedWindowOriginApiExt@@YAHQEAUHDC__@@PEAUtagPOINT@@@Z @ 0x1C01768F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserGetRedirectedWindowOriginApiExt(HDC a1, struct tagPOINT *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  *a2 = 0LL;
  if ( qword_1C029AF50 && (int)qword_1C029AF50() >= 0 && qword_1C029AF58 )
    return (unsigned int)qword_1C029AF58(a1, a2);
  return v2;
}
