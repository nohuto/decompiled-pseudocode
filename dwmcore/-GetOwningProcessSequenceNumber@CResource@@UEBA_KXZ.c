/*
 * XREFs of ?GetOwningProcessSequenceNumber@CResource@@UEBA_KXZ @ 0x1801B05F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CResource::GetOwningProcessSequenceNumber(CResource *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 6);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)(result + 48) + 16LL);
  return result;
}
