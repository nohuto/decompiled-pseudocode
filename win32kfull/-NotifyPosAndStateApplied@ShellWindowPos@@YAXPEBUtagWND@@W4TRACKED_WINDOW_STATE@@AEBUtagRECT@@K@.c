void __fastcall ShellWindowPos::NotifyPosAndStateApplied(const struct tagWND *a1, int a2, _OWORD *a3, int a4)
{
  const struct tagSHELL_REQUESTED_POS_APPLIED *v6; // r8
  struct tagRECT v7; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v8[56]; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+68h] [rbp-18h]

  v9 = 0;
  memset(v8, 0, sizeof(v8));
  *(_DWORD *)v8 = a2;
  if ( (unsigned int)(a2 - 1) > 1 )
    *(_OWORD *)&v8[8] = *a3;
  *(_DWORD *)&v8[4] = ShellWindowManagement::GetWindowTrackState(a1, 1);
  if ( *(_DWORD *)&v8[4] != 2 )
  {
    *(struct tagRECT *)&v8[24] = *WindowMargins::ReduceRect(
                                    &v7,
                                    (struct tagRECT *)a1,
                                    (const struct tagWND *)(*((_QWORD *)a1 + 5) + 88LL),
                                    0LL);
    LogicalToPhysicalInPlaceRect((__int64)a1, (__int64)&v8[24]);
    *(_OWORD *)&v8[40] = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    LogicalToPhysicalInPlaceRect((__int64)a1, (__int64)&v8[40]);
  }
  v9 = a4;
  NotifyShell::WindowPosAndStateApplied(a1, (const struct tagWND *)v8, v6);
}
