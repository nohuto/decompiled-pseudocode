/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1C0110A00
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetPointerDeviceRects @ 0x1C0110B24 (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // r8
  _BYTE *v9; // rdx
  _BYTE *v10; // rdx
  __int64 v11; // rcx
  _BYTE v13[16]; // [rsp+20h] [rbp-68h] BYREF
  int v14; // [rsp+30h] [rbp-58h]
  __int128 v15; // [rsp+38h] [rbp-50h] BYREF
  __int128 v16; // [rsp+50h] [rbp-38h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  v7 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v15, &v16) )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[15] = v9[15];
    v10 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[15] = v10[15];
    *a2 = v15;
    *a3 = v16;
    v7 = 1;
    v14 = 1;
  }
  else
  {
    UserSetLastError(87LL, v6);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13, (__int64)v10, v8);
  UserSessionSwitchLeaveCrit(v11);
  return v7;
}
