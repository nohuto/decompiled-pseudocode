/*
 * XREFs of DrvDxgkDisplayOnOff @ 0x1C00C4110
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 *     DrvEnableMDEV @ 0x1C00783A4 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C007865C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkDisplayOnOff(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = a3;
  v5 = a2;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(a1 + 2552);
  result = v6 + 4;
  if ( ((v6 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v6 + 160) & 0x800000) != 0 )
  {
    WdLogSingleEntry3(4LL, *(_QWORD *)(v6 + 240), v5, v3);
    result = (unsigned int)(v3 - 1);
    if ( (unsigned int)result <= 1 )
    {
      v9 = 0LL;
      goto LABEL_9;
    }
    if ( (_DWORD)v3 == 3 && (_BYTE)v5 )
    {
      LOBYTE(v9) = 1;
LABEL_9:
      LOBYTE(v8) = v5;
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))qword_1C0296890)(
               v6 + 248,
               *(unsigned int *)(v6 + 256),
               v8,
               v9);
    }
  }
  return result;
}
