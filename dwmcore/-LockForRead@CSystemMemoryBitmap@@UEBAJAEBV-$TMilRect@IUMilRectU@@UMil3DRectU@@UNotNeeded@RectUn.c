/*
 * XREFs of ?LockForRead@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18010DC90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemMemoryBitmap::LockForRead(__int64 a1, int *a2, __int64 a3)
{
  int v5; // r8d
  int v6; // edx
  int v7; // eax
  int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2] - v5;
  v10[0] = v5;
  v10[2] = v7;
  v8 = a2[3] - v6;
  v10[1] = v6;
  v10[3] = v8;
  return (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(*(_QWORD *)((a1 - 112) & -(__int64)(a1 != 136))
                                                                        + 24LL))(
           (a1 - 112) & -(__int64)(a1 != 136),
           v10,
           1LL,
           a3);
}
