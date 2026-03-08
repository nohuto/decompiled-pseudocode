/*
 * XREFs of ??1?$unique_ptr@VCMmcssTask@@U?$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ @ 0x1802823EC
 * Callers:
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x1800CBDF4 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 * Callees:
 *     ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x180282448 (--_GCMmcssTask@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<CMmcssTask>::~unique_ptr<CMmcssTask>(CMmcssTask **a1, unsigned int a2)
{
  CMmcssTask *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CMmcssTask::`scalar deleting destructor'(v2, a2);
  return result;
}
