/*
 * XREFs of EditionCreateDesktopEntryPoint @ 0x1C00CE610
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 */

__int64 __fastcall EditionCreateDesktopEntryPoint(int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v10; // rdx
  int v11; // eax
  NTSTATUS Desktop; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+40h] [rbp-18h] BYREF

  v17[0] = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL);
    v11 = *(_DWORD *)(v10 + 24) & 0x40;
  }
  else
  {
    v11 = 0;
  }
  if ( v11 )
  {
    v16 = 5LL;
LABEL_15:
    UserSetLastError(v16, v10);
    goto LABEL_10;
  }
  if ( a4 > 1 || a2 || a3 )
  {
    v16 = 87LL;
    goto LABEL_15;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Desktop = xxxCreateDesktopEx(a1, a4, a5, a6, (__int64)v17, 0);
  if ( Desktop < 0 )
  {
    v17[0] = 0LL;
    v16 = RtlNtStatusToDosError(Desktop);
    goto LABEL_15;
  }
LABEL_10:
  v14 = v17[0];
  UserSessionSwitchLeaveCrit(v13);
  return v14;
}
