/*
 * XREFs of NtUserSBGetParms @ 0x1C00DB7E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _SBGetParms @ 0x1C00DB920 (_SBGetParms.c)
 */

__int64 __fastcall NtUserSBGetParms(__int64 a1, __int64 a2, __int128 *a3, ULONG64 a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rcx
  __int64 v9; // r10
  int v10; // ebx
  _BYTE *v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  unsigned int v15; // [rsp+48h] [rbp-40h]
  __int128 v16; // [rsp+58h] [rbp-30h] BYREF

  v6 = a2;
  v16 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  EnterSharedCrit(a1, a2, a3);
  v9 = ValidateHwnd(a1);
  v10 = 0;
  if ( v9 )
  {
    v11 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[27] = v11[27];
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = *a3;
    v13 = *(_OWORD *)a4;
    v14 = *(_QWORD *)(a4 + 16);
    v15 = *(_DWORD *)(a4 + 24);
    v10 = SBGetParms(v9, v6, &v16, &v13);
    *(_OWORD *)a4 = v13;
    *(_QWORD *)(a4 + 16) = v14;
    v8 = v15;
    *(_DWORD *)(a4 + 24) = v15;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
