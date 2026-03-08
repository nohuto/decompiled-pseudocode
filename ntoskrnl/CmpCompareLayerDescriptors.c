/*
 * XREFs of CmpCompareLayerDescriptors @ 0x14085CD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCompareLayerDescriptors(const void *a1, const void *a2)
{
  __int64 result; // rax

  result = (*(_DWORD *)(*(_QWORD *)a2 + 800LL) & 1) - (*(_DWORD *)(*(_QWORD *)a1 + 800LL) & 1u);
  if ( !(_DWORD)result )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 796LL) - *(_DWORD *)(*(_QWORD *)a2 + 796LL));
  return result;
}
