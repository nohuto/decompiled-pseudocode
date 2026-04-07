/*
 * XREFs of ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800440E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILRefCountBase::AddRef(CMILRefCountBase *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
