/*
 * XREFs of UserIsCurrentProcessImmersiveAppContainer @ 0x1C007A700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsCurrentProcessImmersiveAppContainer(__int64 a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  unsigned int v4; // ecx
  int v6; // edx

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  v4 = 0;
  if ( ProcessWin32Process )
  {
    if ( *(_DWORD *)(ProcessWin32Process + 884) )
    {
      v6 = *(_DWORD *)(ProcessWin32Process + 820);
      if ( (v6 & 0x30) == 0x10 )
        return (v6 & 0x200) == 0;
    }
  }
  return v4;
}
