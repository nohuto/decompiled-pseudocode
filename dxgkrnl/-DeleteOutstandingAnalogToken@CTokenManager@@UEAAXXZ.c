/*
 * XREFs of ?DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C00173C0
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C00172B0 (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::DeleteOutstandingAnalogToken(CTokenManager *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 40);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 40) = 0LL;
  }
}
