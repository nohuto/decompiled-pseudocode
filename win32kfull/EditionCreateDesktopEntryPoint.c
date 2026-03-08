/*
 * XREFs of EditionCreateDesktopEntryPoint @ 0x1C00BF140
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 */

__int64 __fastcall EditionCreateDesktopEntryPoint(int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  int v10; // eax
  NTSTATUS Desktop; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  ULONG v15; // ecx
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF

  v16[0] = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 760LL) + 24LL) & 0x40;
  else
    v10 = 0;
  if ( v10 )
  {
    v15 = 5;
LABEL_15:
    UserSetLastError(v15);
    goto LABEL_10;
  }
  if ( a4 > 1 || a2 || a3 )
  {
    v15 = 87;
    goto LABEL_15;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Desktop = xxxCreateDesktopEx(a1, a4, a5, a6, (__int64)v16, 0);
  if ( Desktop < 0 )
  {
    v16[0] = 0LL;
    v15 = RtlNtStatusToDosError(Desktop);
    goto LABEL_15;
  }
LABEL_10:
  v13 = v16[0];
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
