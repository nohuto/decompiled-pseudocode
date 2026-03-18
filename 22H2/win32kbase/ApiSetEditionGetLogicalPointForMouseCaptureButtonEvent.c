/*
 * XREFs of ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C02062D4
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v5; // r14
  __int64 v6; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v5 = a5;
  v6 = 0LL;
  *a5 = a3;
  if ( qword_1C0296C30 && (int)qword_1C0296C30() >= 0 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&a5, v11, v12, v13);
    v14 = 0LL;
    if ( qword_1C0296C38 )
    {
      qword_1C0296C38(a1, a2, a3, a4, &v14);
      v6 = v14;
    }
    *v5 = v6;
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&a5);
  }
}
