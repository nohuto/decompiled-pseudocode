/*
 * XREFs of EditionRawInputRequestedForKeyboard @ 0x1C01E8850
 * Callers:
 *     <none>
 * Callees:
 *     HasHidTable @ 0x1C0038CB0 (HasHidTable.c)
 */

__int64 __fastcall EditionRawInputRequestedForKeyboard(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_DWORD *)(SGDGetUserSessionState(a1) + 16848)
    || (unsigned int)HasHidTable(a1) && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 824LL) + 100LL) & 0x10) != 0 )
  {
    return 1;
  }
  return v2;
}
