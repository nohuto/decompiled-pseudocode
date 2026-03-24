/*
 * XREFs of NtUserPhysicalToLogicalDpiPointForWindow @ 0x1C01FFD30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F1500 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 */

__int64 __fastcall NtUserPhysicalToLogicalDpiPointForWindow(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // r9
  int v6; // ebx
  _QWORD *v7; // rdx
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v6 = 0;
  if ( v5 )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v9[0] = *a2;
    v9[1] = v9[0];
    v6 = PhysicalToLogicalInPlaceRectWithSubpixel(v5, (int *)v9, 0LL);
    if ( v6 == 1 )
      *a2 = v9[0];
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
