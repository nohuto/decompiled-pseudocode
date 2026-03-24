/*
 * XREFs of ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1C00D1F84
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00D1D9C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00D1FC0 (-Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

struct UmfdAllocation *__fastcall UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(
        NSInstrumentation::CPointerHashTable *a1)
{
  char *v1; // rbx
  void *v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  if ( NSInstrumentation::CPointerHashTable::Lookup(a1, a1, &v3) )
  {
    v1 = (char *)v3 - 28;
    ++*((_DWORD *)v3 - 7);
  }
  return (struct UmfdAllocation *)v1;
}
