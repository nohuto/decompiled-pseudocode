/*
 * XREFs of DrvDxgkDisplayOnOff @ 0x1C00CE2F0
 * Callers:
 *     DrvEnableMDEV @ 0x1C001D978 (DrvEnableMDEV.c)
 *     GreSuspendDirectDraw @ 0x1C001F220 (GreSuspendDirectDraw.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00CE230 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkDisplayOnOff(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v11; // r8
  __int64 v12; // r9

  v3 = a3;
  v5 = a2;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(a1 + 2552);
  result = v6 + 4;
  if ( ((v6 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v6 + 160) & 0x800000) != 0 )
  {
    WdLogSingleEntry3(4LL, *(_QWORD *)(v6 + 232), v5, v3);
    result = (unsigned int)(v3 - 1);
    if ( (unsigned int)result <= 1 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v9, v8);
      v12 = 0LL;
      goto LABEL_9;
    }
    if ( (_DWORD)v3 == 3 && (_BYTE)v5 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v9, v8);
      LOBYTE(v12) = 1;
LABEL_9:
      LOBYTE(v11) = v5;
      return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(DxgkWin32kInterface + 560))(
               v6 + 240,
               *(unsigned int *)(v6 + 248),
               v11,
               v12);
    }
  }
  return result;
}
