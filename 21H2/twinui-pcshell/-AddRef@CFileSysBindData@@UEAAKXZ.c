/*
 * XREFs of ?AddRef@CFileSysBindData@@UEAAKXZ @ 0x1801532E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFileSysBindData::AddRef(CFileSysBindData *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
