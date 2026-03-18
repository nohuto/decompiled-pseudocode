/*
 * XREFs of UserIsCurrentProcessImmersiveAppContainer @ 0x1C0087B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsCurrentProcessImmersiveAppContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  unsigned int v6; // ecx
  int v8; // edx

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  v6 = 0;
  if ( ProcessWin32Process )
  {
    if ( *(_DWORD *)(ProcessWin32Process + 884) )
    {
      v8 = *(_DWORD *)(ProcessWin32Process + 820);
      if ( (v8 & 0x30) == 0x10 )
        return (v8 & 0x200) == 0;
    }
  }
  return v6;
}
