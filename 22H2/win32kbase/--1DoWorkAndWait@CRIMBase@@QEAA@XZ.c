/*
 * XREFs of ??1DoWorkAndWait@CRIMBase@@QEAA@XZ @ 0x1C00B33B4
 * Callers:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C00B322C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRIMBase::DoWorkAndWait::~DoWorkAndWait(CRIMBase::DoWorkAndWait *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)this;
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    ObfDereferenceObject(v3);
}
