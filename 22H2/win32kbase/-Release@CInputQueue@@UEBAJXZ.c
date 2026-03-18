/*
 * XREFs of ?Release@CInputQueue@@UEBAJXZ @ 0x1C00B3090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputQueue::Release(CInputQueue *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CInputQueue *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
  return v1;
}
