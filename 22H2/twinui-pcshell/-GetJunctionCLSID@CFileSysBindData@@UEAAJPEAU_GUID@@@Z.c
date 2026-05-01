/*
 * XREFs of ?GetJunctionCLSID@CFileSysBindData@@UEAAJPEAU_GUID@@@Z @ 0x180155E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFileSysBindData::GetJunctionCLSID(CFileSysBindData *this, struct _GUID *a2)
{
  GUID v2; // xmm0
  __int64 result; // rax

  if ( *((_QWORD *)this + 3) == 0x42589D70FC0A77E6LL && *((_QWORD *)this + 4) == 0x1EE30F1DAB6D8397LL )
  {
    v2 = GUID_NULL;
    result = 2147500037LL;
  }
  else
  {
    v2 = *(GUID *)((char *)this + 24);
    result = 0LL;
  }
  *a2 = v2;
  return result;
}
