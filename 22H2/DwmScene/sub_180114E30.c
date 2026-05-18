/*
 * XREFs of sub_180114E30 @ 0x180114E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002940 @ 0x180002940 (sub_180002940.c)
 */

__int64 sub_180114E30()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&dword_18021AB28, 1u);
  if ( !(_DWORD)result )
    return sub_180002940((ULONGLONG *)&dword_18020DB48, 0LL, 0LL);
  return result;
}
