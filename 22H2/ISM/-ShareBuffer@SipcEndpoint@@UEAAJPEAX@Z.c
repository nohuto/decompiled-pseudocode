/*
 * XREFs of ?ShareBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800C1C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall SipcEndpoint::ShareBuffer(SipcEndpoint *this, void *a2)
{
  if ( *((_DWORD *)this + 15) == 2 )
    return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1), a2);
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070005LL);
  return 2147942405LL;
}
