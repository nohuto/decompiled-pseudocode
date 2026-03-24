/*
 * XREFs of ?GreGetRandomRgnApiExt@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C014A5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetRandomRgnApiExt(HDC a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v7; // eax

  v3 = 0;
  if ( qword_1C0256060 )
    v7 = qword_1C0256060();
  else
    v7 = -1073741637;
  if ( v7 >= 0 )
  {
    if ( qword_1C0256068 )
      return (unsigned int)qword_1C0256068(a1, a2, a3);
    else
      return (unsigned int)-1;
  }
  return v3;
}
