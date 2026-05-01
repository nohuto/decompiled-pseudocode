/*
 * XREFs of ?SetJunctionCLSID@CFileSysBindData@@UEAAJAEBU_GUID@@@Z @ 0x18015BCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFileSysBindData::SetJunctionCLSID(CFileSysBindData *this, const struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(struct _GUID *)((char *)this + 24) = *a2;
  return result;
}
