/*
 * XREFs of ??1?$unique_ptr@VCKst@@U?$default_delete@VCKst@@@std@@@std@@QEAA@XZ @ 0x180285B0C
 * Callers:
 *     ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CBB3C (-Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_GCKst@@QEAAPEAXI@Z @ 0x1802834AC (--_GCKst@@QEAAPEAXI@Z.c)
 */

CKst *__fastcall std::unique_ptr<CKst>::~unique_ptr<CKst>(CKst **a1)
{
  CKst *v1; // rcx
  CKst *result; // rax

  v1 = *a1;
  if ( v1 )
    return CKst::`scalar deleting destructor'(v1);
  return result;
}
