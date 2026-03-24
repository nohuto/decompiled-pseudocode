/*
 * XREFs of ?bCleanup@UMPDOBJ@@QEAAHXZ @ 0x1C0080E1C
 * Callers:
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0080D40 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UMPDOBJ::bCleanup(UMPDOBJ *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C02569F0 )
    v3 = qword_1C02569F0();
  else
    v3 = -1073741637;
  if ( v3 < 0 )
    return 0LL;
  if ( qword_1C02569F8 )
    return (unsigned int)qword_1C02569F8(this);
  return v1;
}
