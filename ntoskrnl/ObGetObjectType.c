/*
 * XREFs of ObGetObjectType @ 0x140786DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ObGetObjectType(__int64 a1)
{
  return ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
}
