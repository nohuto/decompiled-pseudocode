/*
 * XREFs of sub_140423E29 @ 0x140423E29
 * Callers:
 *     sub_140423E32 @ 0x140423E32 (sub_140423E32.c)
 * Callees:
 *     sub_140423E20 @ 0x140423E20 (sub_140423E20.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_140423E29()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_140423E20();
  return sub_140423E32(v1, v0);
}
