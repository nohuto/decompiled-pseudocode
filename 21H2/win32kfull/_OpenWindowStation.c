/*
 * XREFs of _OpenWindowStation @ 0x1C00CFD84
 * Callers:
 *     NtUserOpenWindowStation @ 0x1C00CEC80 (NtUserOpenWindowStation.c)
 *     xxxResolveDesktop @ 0x1C00CF130 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E43F8 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall OpenWindowStation(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS v3; // eax
  ULONG v5; // eax
  __int64 v6; // rdx
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0LL;
  LOBYTE(a3) = 1;
  v3 = ObOpenObjectByName(a1, ExWindowStationObjectType, a3, 0LL, a2, 0LL, &v7);
  if ( v3 < 0 )
  {
    v5 = RtlNtStatusToDosError(v3);
    UserSetLastError(v5, v6);
    return 0LL;
  }
  return v7;
}
