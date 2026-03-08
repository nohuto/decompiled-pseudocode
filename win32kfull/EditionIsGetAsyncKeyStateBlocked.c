/*
 * XREFs of EditionIsGetAsyncKeyStateBlocked @ 0x1C00DA2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall EditionIsGetAsyncKeyStateBlocked(__int64 a1)
{
  struct tagTHREADINFO *v1; // rdi
  unsigned int v2; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // r8

  v1 = PtiCurrentShared(a1);
  if ( *((_QWORD *)v1 + 57) != grpdeskRitInput )
    return 1LL;
  v2 = 0;
  if ( gptiForeground )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gptiForeground);
    v4 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v4 == *(_QWORD *)(gptiForeground + 424LL) )
      return 0LL;
  }
  LOBYTE(v2) = RtlAreAnyAccessesGranted(*((_DWORD *)v1 + 224), 0x18u) == 0;
  return v2;
}
