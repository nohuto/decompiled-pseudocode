/*
 * XREFs of ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x1804E7524
 * Callers:
 *     Str_SetPtrW @ 0x1804E7560 (Str_SetPtrW.c)
 *     DSA_Destroy @ 0x1804E7750 (DSA_Destroy.c)
 *     DPA_Destroy @ 0x1804F7600 (DPA_Destroy.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C00D4 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CCv6s_HeapFree(void *a1, void *a2)
{
  BOOL v2; // eax
  unsigned int v3; // ecx

  v2 = HeapFree(a1, 0, a2);
  v3 = 0;
  if ( !v2 )
    return (unsigned int)ResultFromKnownLastError();
  return v3;
}
