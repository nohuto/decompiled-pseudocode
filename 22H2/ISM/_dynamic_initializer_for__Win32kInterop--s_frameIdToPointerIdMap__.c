/*
 * XREFs of _dynamic_initializer_for__Win32kInterop::s_frameIdToPointerIdMap__ @ 0x1800016F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unordered_map@IV?$vector@IV?$allocator@I@std@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180024B60 (--0-$unordered_map@IV-$vector@IV-$allocator@I@std@@@std@@U-$hash@I@2@U-$equal_to@I@2@V-$allocato.c)
 */

int dynamic_initializer_for__Win32kInterop::s_frameIdToPointerIdMap__()
{
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map<unsigned int,std::vector<unsigned int>>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Win32kInterop::s_frameIdToPointerIdMap__);
}
