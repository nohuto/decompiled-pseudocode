/*
 * XREFs of sub_180053BA0 @ 0x180053BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180053BA0(__int64 a1)
{
  unsigned int v1; // eax
  _DWORD *v2; // r10
  int v3; // edi
  unsigned int v4; // ebx
  bool v5; // zf

  v1 = sub_18006D208(a1 + 12);
  v3 = v2[5];
  v4 = v1;
  if ( v1 )
  {
    if ( (v3 & 6) != 0 )
      return v4;
    v5 = v1 == 1;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 40LL))(v2, 1LL);
    v5 = (v3 & 5) == 5;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
  return v4;
}
