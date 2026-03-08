/*
 * XREFs of NtUserGetInternalWindowPos @ 0x1C01D3200
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowPlacement @ 0x1C0006898 (_GetWindowPlacement.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetInternalWindowPos(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  struct tagWND *v7; // r9
  unsigned int v8; // ebx
  _BYTE *v9; // rdx
  _BYTE *v10; // rdx
  _OWORD v12[3]; // [rsp+38h] [rbp-50h] BYREF

  memset(v12, 0, 44);
  EnterSharedCrit(a1, a2, a3);
  v7 = (struct tagWND *)ValidateHwnd(a1);
  if ( v7 )
  {
    if ( a2 )
    {
      v9 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v9 = (_BYTE *)MmUserProbeAddress;
      *v9 = *v9;
      v9[15] = v9[15];
    }
    if ( a3 )
    {
      v10 = a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v10 = (_BYTE *)MmUserProbeAddress;
      *v10 = *v10;
      v10[7] = v10[7];
    }
    LODWORD(v12[0]) = 44;
    GetWindowPlacement(v7, (__int64)v12, 0);
    v8 = DWORD2(v12[0]);
    if ( a2 )
      *a2 = *(_OWORD *)((char *)&v12[1] + 12);
    if ( a3 )
      *a3 = *(_QWORD *)((char *)v12 + 12);
  }
  else
  {
    v8 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
