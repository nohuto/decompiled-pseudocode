/*
 * XREFs of IsParentBandValid @ 0x1C0039C20
 * Callers:
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     ValidateNewParent @ 0x1C0039AAC (ValidateNewParent.c)
 * Callees:
 *     IsTopLevelParent @ 0x1C0039C84 (IsTopLevelParent.c)
 */

__int64 __fastcall IsParentBandValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax

  if ( (unsigned int)IsTopLevelParent(a2, a2, a2, a1) )
    return 1LL;
  v4 = *(_QWORD *)(v2 + 40);
  if ( (*(_BYTE *)(v4 + 233) & 8) != 0 )
    return 1LL;
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_DWORD *)(v5 + 236);
  if ( *(_DWORD *)(v4 + 236) != v6 )
    return 0LL;
  LOBYTE(v6) = ~*(_BYTE *)(v5 + 232);
  return ((*(unsigned __int8 *)(v4 + 232) ^ v6) >> 6) & 1;
}
