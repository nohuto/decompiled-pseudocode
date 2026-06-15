/*
 * XREFs of sub_1800357F0 @ 0x1800357F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800357F0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx

  result = sub_18006D208(a1 + 12);
  v3 = result;
  if ( !(_DWORD)result )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, (unsigned int)(result + 1));
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
    return v3;
  }
  return result;
}
