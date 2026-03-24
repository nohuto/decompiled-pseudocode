/*
 * XREFs of DrvDxgkDisplayOnOff @ 0x1C00B61C0
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0010790 (GreSuspendDirectDraw.c)
 *     DrvEnableMDEV @ 0x1C0014C28 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0014EEC (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkDisplayOnOff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax

  v3 = a3;
  v5 = (unsigned __int8)a2;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = *(_QWORD *)(a1 + 2576);
  result = v6 + 4;
  if ( ((v6 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v6 + 160) & 0x800000) != 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdEvent(a1);
    v8[3] = *(_QWORD *)(v6 + 240);
    v8[4] = v5;
    v8[5] = v3;
    WdLogEvent5_WdEvent(v8);
    result = (unsigned int)(v3 - 1);
    if ( (unsigned int)result <= 1 )
    {
      v10 = 0LL;
LABEL_7:
      LOBYTE(v9) = v5;
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))qword_1C0251AA8)(
               v6 + 248,
               *(unsigned int *)(v6 + 256),
               v9,
               v10);
    }
    if ( (_DWORD)v3 == 3 && (_BYTE)v5 )
    {
      LOBYTE(v10) = 1;
      goto LABEL_7;
    }
  }
  return result;
}
