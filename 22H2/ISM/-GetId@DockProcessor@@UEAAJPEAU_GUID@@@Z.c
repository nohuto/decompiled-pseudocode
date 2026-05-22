/*
 * XREFs of ?GetId@DockProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18001E4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DockProcessor::GetId(DockProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_Dock;
  return result;
}
