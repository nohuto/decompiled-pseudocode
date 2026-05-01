/*
 * XREFs of ?IsEmptyFrame@CMultitaskingViewFrame@@UEAA_NXZ @ 0x1804099C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CMultitaskingViewFrame::IsEmptyFrame(CMultitaskingViewFrame *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 313);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 408LL))(v1);
  else
    return 1;
}
