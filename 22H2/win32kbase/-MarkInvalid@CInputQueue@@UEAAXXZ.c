/*
 * XREFs of ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C00AC7B0
 * Callers:
 *     ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C009C5E0 (--_GCInputQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputQueue::MarkInvalid(CInputQueue *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    if ( qword_1C0296140 )
      qword_1C0296140(v2, this);
  }
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 16) = 0;
}
