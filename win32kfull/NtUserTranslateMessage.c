__int64 __fastcall NtUserTranslateMessage(__int128 *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int128 v7; // [rsp+38h] [rbp-40h] BYREF
  __int128 v8; // [rsp+48h] [rbp-30h]
  __int128 v9; // [rsp+58h] [rbp-20h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v7 = *a1;
  v8 = a1[1];
  v9 = a1[2];
  v5 = 0;
  if ( ValidateHwnd(v7) )
    v5 = xxxTranslateMessage(&v7, a2);
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
