/*
 * XREFs of _dynamic_initializer_for__CWeakResourceReference::s_weakReferenceMap__ @ 0x180001330
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA@XZ @ 0x180024990 (--0-$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U-$hash@PEBVCResource@@@std@@U-$eq.c)
 */

int dynamic_initializer_for__CWeakResourceReference::s_weakReferenceMap__()
{
  std::unordered_map<CResource const *,CWeakResourceReference *>::unordered_map<CResource const *,CWeakResourceReference *>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CWeakResourceReference::s_weakReferenceMap__);
}
