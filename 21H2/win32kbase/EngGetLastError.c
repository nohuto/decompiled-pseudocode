/*
 * XREFs of EngGetLastError @ 0x1C014AFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG EngGetLastError(void)
{
  ULONG v0; // ebx
  _DWORD *CurrentThreadTeb; // rax

  v0 = 0;
  CurrentThreadTeb = PsGetCurrentThreadTeb();
  if ( CurrentThreadTeb )
    return CurrentThreadTeb[26];
  return v0;
}
