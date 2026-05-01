/*
 * XREFs of ?_FindBufferItemInLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1800D94E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_FindBufferItemInLayout(
        PPIWin32VtcLayoutOperation *this,
        struct IAppLayoutItem **a2,
        unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IAppLayoutItem **, unsigned int *))(**((_QWORD **)this + 8) + 168LL))(
           *((_QWORD *)this + 8),
           a2,
           a3);
}
