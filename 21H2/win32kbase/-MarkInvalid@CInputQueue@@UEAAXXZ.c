/*
 * XREFs of ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C00B3C40
 * Callers:
 *     ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C0096500 (--_GCInputQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputQueue::MarkInvalid(CInputQueue *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    if ( qword_1C029CA80 )
      qword_1C029CA80(v2, this);
  }
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 16) = 0;
}
