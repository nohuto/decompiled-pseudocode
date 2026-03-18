/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1C00AC770
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetPointerDeviceRects @ 0x1C00AC894 (_GetPointerDeviceRects.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  int v6; // ebx
  __int64 v7; // r8
  _BYTE *v8; // rdx
  _BYTE *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[16]; // [rsp+20h] [rbp-68h] BYREF
  int v16; // [rsp+30h] [rbp-58h]
  __int128 v17; // [rsp+38h] [rbp-50h] BYREF
  __int128 v18; // [rsp+50h] [rbp-38h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  v6 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v17, &v18) )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[15] = v8[15];
    v9 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[15] = v9[15];
    *a2 = v17;
    *a3 = v18;
    v6 = 1;
    v16 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15, (__int64)v9, v7);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v6;
}
