/*
 * XREFs of ?SetScribble@CComputeScribbleFramebuffer@@QEAAXPEAVCComputeScribble@@@Z @ 0x180201F20
 * Callers:
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z @ 0x180200B14 (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCCom.c)
 * Callees:
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x1801F8548 (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 */

void __fastcall CComputeScribbleFramebuffer::SetScribble(
        CComputeScribbleFramebuffer *this,
        struct CComputeScribble *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = (RTL_SRWLOCK *)((char *)this + 64);
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 9,
    (void (__fastcall ***)(_QWORD))a2);
  *((_BYTE *)this + 240) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
