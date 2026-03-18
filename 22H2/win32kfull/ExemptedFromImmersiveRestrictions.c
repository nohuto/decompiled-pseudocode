/*
 * XREFs of ExemptedFromImmersiveRestrictions @ 0x1C01B3190
 * Callers:
 *     xxxEnableWindow @ 0x1C000BA8C (xxxEnableWindow.c)
 *     zzzAttachThreadInput @ 0x1C005BB64 (zzzAttachThreadInput.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 */

__int64 __fastcall ExemptedFromImmersiveRestrictions(const struct tagTHREADINFO *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  v3 = *((_QWORD *)a1 + 53);
  if ( *(int *)(v3 + 12) < 0 || (unsigned int)IsImmersiveBroker(v3) )
    return 1LL;
  LOBYTE(v4) = IAMThreadAccessGranted(a1);
  LOBYTE(v2) = v4 != 0;
  return v2;
}
