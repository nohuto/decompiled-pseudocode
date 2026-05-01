/*
 * XREFs of ?ItemOperationBegin@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@PEAUIObservableItem@@@Z @ 0x1804033A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SwitchItemFilteredCollection::ItemOperationBegin(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  result = (unsigned int)(a3 - 2);
  if ( (unsigned int)result <= 1 )
    ++*(_DWORD *)(a1 + 100);
  return result;
}
