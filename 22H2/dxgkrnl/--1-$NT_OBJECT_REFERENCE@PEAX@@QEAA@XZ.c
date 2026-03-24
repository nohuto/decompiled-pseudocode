/*
 * XREFs of ??1?$NT_OBJECT_REFERENCE@PEAX@@QEAA@XZ @ 0x1C0167100
 * Callers:
 *     DxgkDispMgrOperation @ 0x1C0166F30 (DxgkDispMgrOperation.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall NT_OBJECT_REFERENCE<void *>::~NT_OBJECT_REFERENCE<void *>(void **a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = ObfDereferenceObjectWithTag(v2, 0x4B677844u);
    *a1 = 0LL;
  }
  return result;
}
