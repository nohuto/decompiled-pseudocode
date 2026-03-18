/*
 * XREFs of ApiSetEditionInitializeWppLogging @ 0x1C00B5370
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B5150 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionInitializeWppLogging(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C0296D50 && (int)qword_1C0296D50() >= 0 )
  {
    if ( qword_1C0296D58 )
      return (unsigned int)qword_1C0296D58(a1, a2);
    else
      return (unsigned int)-1073741637;
  }
  return v2;
}
