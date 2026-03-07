__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  int v6; // ebx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  __int64 v9; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-68h] BYREF
  int v12; // [rsp+30h] [rbp-58h]
  __int128 v13; // [rsp+38h] [rbp-50h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  v6 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v13, &v14) )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[15] = v7[15];
    v8 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[15] = v8[15];
    *a2 = v13;
    *a3 = v14;
    v6 = 1;
    v12 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
