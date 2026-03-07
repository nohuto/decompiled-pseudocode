__int64 __fastcall NtUserMNDragOver(__int64 *a1, _OWORD *a2)
{
  ULONG64 v4; // rcx
  int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v9 = *a1;
  v5 = xxxMNDragOver(&v9, &v7);
  if ( v5 )
  {
    DWORD1(v7) = 0;
    DWORD1(v8) = 0;
    v4 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v7;
    a2[1] = v8;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
