/*
 * XREFs of EditionComputeInjectorUIPI @ 0x1C01AC030
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
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(1LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  *(_QWORD *)a1 = *(_QWORD *)(CurrentProcessWin32Process + 888);
  v5 = PsGetCurrentProcessWin32Process(v4);
  if ( v5 )
  {
    v7 = -*(_QWORD *)v5;
    v6 = -(__int64)(*(_QWORD *)v5 != 0LL);
    v5 &= v6;
  }
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(v5 + 12) >> 31;
  return UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
}
