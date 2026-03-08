/*
 * XREFs of ??_G?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z @ 0x1C006A620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ @ 0x1C006A4F8 (--1-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<ContextDataAssignee::CONTEXT_DATA>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  Set<ContextDataAssignee::CONTEXT_DATA>::~Set<ContextDataAssignee::CONTEXT_DATA>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
