/*
 * XREFs of ?GreGetRandomRgnApiExt@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C01690F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetRandomRgnApiExt(HDC a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( qword_1C0294470 && (int)qword_1C0294470() >= 0 )
  {
    if ( qword_1C0294478 )
      return (unsigned int)qword_1C0294478(a1, a2, a3);
    else
      return (unsigned int)-1;
  }
  return v3;
}
