/*
 * XREFs of UserIsCurrentProcessImmersiveAppContainer @ 0x1C009D930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessImmersiveAppContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  _BOOL8 result; // rax
  int v7; // ecx

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  result = 0;
  if ( ProcessWin32Process )
  {
    if ( *(_QWORD *)ProcessWin32Process )
    {
      if ( *(_DWORD *)(ProcessWin32Process + 868) )
      {
        v7 = *(_DWORD *)(ProcessWin32Process + 812);
        if ( (v7 & 0x30) == 0x10 && (v7 & 0x200) == 0 )
          return 1;
      }
    }
  }
  return result;
}
