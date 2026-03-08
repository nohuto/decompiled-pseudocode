/*
 * XREFs of ??1?$unique_ptr@VCKst@@U?$default_delete@VCKst@@@std@@@std@@QEAA@XZ @ 0x1802823CC
 * Callers:
 *     ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CB0DC (-Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_GCKst@@QEAAPEAXI@Z @ 0x18027FD6C (--_GCKst@@QEAAPEAXI@Z.c)
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
