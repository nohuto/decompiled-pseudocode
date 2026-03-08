/*
 * XREFs of ??1?$MakeAllocator@V?$ValueReference@I@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18028EE98
 * Callers:
 *     ??$MakeAndInitialize@V?$ValueReference@I@@U?$IReference@I@Foundation@Windows@@J@Details@WRL@Microsoft@@YAJPEAPEAU?$IReference@I@Foundation@Windows@@$$QEAJ@Z @ 0x18028DC88 (--$MakeAndInitialize@V-$ValueReference@I@@U-$IReference@I@Foundation@Windows@@J@Details@WRL@Micr.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<ValueReference<unsigned int>>::~MakeAllocator<ValueReference<unsigned int>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
