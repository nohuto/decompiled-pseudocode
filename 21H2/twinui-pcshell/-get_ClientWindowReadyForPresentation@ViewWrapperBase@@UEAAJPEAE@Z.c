/*
 * XREFs of ?get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180343300
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x180026140 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 */

__int64 __fastcall ViewWrapperBase::get_ClientWindowReadyForPresentation(ViewWrapperBase *this, unsigned __int8 *a2)
{
  RTL_SRWLOCK *v3; // rsi

  v3 = (RTL_SRWLOCK *)(*((_QWORD *)this + 17) + 280LL);
  AcquireSRWLockShared(v3);
  *a2 = WindowReadyState::IsReadyForPresentation((ViewWrapperBase *)((char *)this + 328));
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
