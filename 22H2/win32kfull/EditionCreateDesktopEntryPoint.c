/*
 * XREFs of EditionCreateDesktopEntryPoint @ 0x1C006B320
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

HANDLE __fastcall EditionCreateDesktopEntryPoint(
        union _LARGE_INTEGER *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  int v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  HANDLE v16; // rbx
  __int64 v18; // rcx
  HANDLE v19; // [rsp+40h] [rbp-18h] BYREF

  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 760LL) + 24LL) & 0x40;
  else
    v10 = 0;
  if ( v10 )
  {
    v18 = 5LL;
LABEL_15:
    UserSetLastError(v18);
    goto LABEL_10;
  }
  if ( a4 > 1 || a2 || a3 )
  {
    v18 = 87LL;
    goto LABEL_15;
  }
  if ( ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = xxxCreateDesktopEx(a1, a4, a5, a6, &v19, 0);
  if ( v11 < 0 )
  {
    v19 = 0LL;
    v18 = RtlNtStatusToDosError(v11);
    goto LABEL_15;
  }
LABEL_10:
  v16 = v19;
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v16;
}
