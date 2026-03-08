/*
 * XREFs of EditionComputeInjectorUIPI @ 0x1C01AD220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionComputeInjectorUIPI(__int64 a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx

  EnterCrit(1LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  *(_QWORD *)a1 = *(_QWORD *)(CurrentProcessWin32Process + 864);
  v5 = PsGetCurrentProcessWin32Process(v4);
  if ( v5 )
  {
    v6 = -*(_QWORD *)v5;
    v5 &= -(__int64)(*(_QWORD *)v5 != 0LL);
  }
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(v5 + 12) >> 31;
  return UserSessionSwitchLeaveCrit(v6);
}
