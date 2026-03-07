__int64 __fastcall NtUserPhysicalToLogicalDpiPointForWindow(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rcx
  const struct tagWND *v6; // r9
  int v7; // ebx
  _BYTE *v8; // rdx
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF

  EnterSharedCrit(a1, a2, a3);
  v6 = (const struct tagWND *)ValidateHwnd(a1);
  v7 = 0;
  if ( v6 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[7] = v8[7];
    v10[0] = *a2;
    v10[1] = v10[0];
    v7 = PhysicalToLogicalInPlaceRectWithSubpixel(v6, (int *)v10, 0LL);
    if ( v7 == 1 )
      *a2 = v10[0];
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
