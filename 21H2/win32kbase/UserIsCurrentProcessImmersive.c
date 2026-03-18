/*
 * XREFs of UserIsCurrentProcessImmersive @ 0x1C0167070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsCurrentProcessImmersive(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( PsGetCurrentProcessWin32Process(a1) )
    return (*(_DWORD *)(PsGetCurrentProcessWin32Process(v1) + 820) & 0x30) == 16;
  return v2;
}
