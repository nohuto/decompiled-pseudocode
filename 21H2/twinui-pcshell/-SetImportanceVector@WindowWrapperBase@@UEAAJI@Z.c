/*
 * XREFs of ?SetImportanceVector@WindowWrapperBase@@UEAAJI@Z @ 0x18008AB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowWrapperBase::SetImportanceVector(WindowWrapperBase *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(WindowWrapperBase *, __int64, __int64))(*(_QWORD *)this + 72LL))(
           this,
           a2,
           0xFFFFFFFFLL);
}
