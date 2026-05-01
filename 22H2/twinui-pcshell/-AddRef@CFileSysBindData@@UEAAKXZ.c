/*
 * XREFs of ?AddRef@CFileSysBindData@@UEAAKXZ @ 0x180153170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFileSysBindData::AddRef(CFileSysBindData *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
