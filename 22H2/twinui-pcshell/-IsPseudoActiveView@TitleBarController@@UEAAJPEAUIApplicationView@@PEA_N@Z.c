/*
 * XREFs of ?IsPseudoActiveView@TitleBarController@@UEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1802F7130
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

__int64 __fastcall TitleBarController::IsPseudoActiveView(TitleBarController *this, struct IUnknown *a2, bool *a3)
{
  RTL_SRWLOCK *v6; // rbp

  v6 = (RTL_SRWLOCK *)((char *)this + 72);
  AcquireSRWLockShared((PSRWLOCK)this + 9);
  *a3 = (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 26)) != 0;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
