_QWORD *__fastcall CWARPDrawListEntry::GetNextRunningEffect(
        __int64 a1,
        _QWORD *a2,
        void (__fastcall ***a3)(_QWORD),
        _BYTE *a4)
{
  *a4 = 0;
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
    a2,
    a3);
  return a2;
}
