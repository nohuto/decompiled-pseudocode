/*
 * XREFs of ExemptedFromImmersiveRestrictions @ 0x1C01D9928
 * Callers:
 *     zzzAttachThreadInput @ 0x1C009D530 (zzzAttachThreadInput.c)
 *     xxxEnableWindow @ 0x1C00AEC3C (xxxEnableWindow.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 */

_BOOL8 __fastcall ExemptedFromImmersiveRestrictions(const struct tagTHREADINFO *a1)
{
  __int64 v2; // rcx
  _BOOL8 result; // rax

  v2 = *((_QWORD *)a1 + 53);
  if ( *(int *)(v2 + 12) < 0 )
    return 1LL;
  if ( (unsigned int)IsImmersiveBroker(v2) )
    return 1LL;
  result = IAMThreadAccessGranted(a1);
  if ( result )
    return 1LL;
  return result;
}
