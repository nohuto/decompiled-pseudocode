/*
 * XREFs of PssNtFreeWalkMarker @ 0x180114460
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall PssNtFreeWalkMarker(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = NtUnmapViewOfSection();
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  return result;
}
