/*
 * XREFs of ??2CRoundedRectangleShape@@SAPEAX_K@Z @ 0x1800D2C2C
 * Callers:
 *     ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x1800D2B40 (-FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRoundedRectangleShape@@@Z @ 0x18007F4B0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRoundedRectangleShape@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CRoundedRectangleShape::operator new(struct CRoundedRectangleShape *a1)
{
  struct CObjectCache *ObjectCache; // rdx
  _QWORD *result; // rax
  int v3; // r8d
  void *retaddr; // [rsp+28h] [rbp+0h]

  ObjectCache = CThreadContext::GetObjectCache(a1);
  result = 0LL;
  v3 = *((_DWORD *)ObjectCache + 1);
  if ( v3 )
  {
    result = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *result;
    *((_DWORD *)ObjectCache + 1) = v3 - 1;
  }
  if ( !result )
  {
    result = DefaultHeap::Alloc(0x18uLL);
    if ( !result )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  return result;
}
