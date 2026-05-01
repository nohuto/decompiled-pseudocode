/*
 * XREFs of ?GetFileID@CFileSysBindData@@UEAAJPEAT_LARGE_INTEGER@@@Z @ 0x18008D2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFileSysBindData::GetFileID(CFileSysBindData *this, union _LARGE_INTEGER *a2)
{
  *a2 = *(union _LARGE_INTEGER *)((char *)this + 16);
  return 0LL;
}
