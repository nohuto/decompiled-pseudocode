/*
 * XREFs of sub_180053F40 @ 0x180053F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D234 @ 0x18006D234 (sub_18006D234.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180053F40(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r10
  unsigned int v3; // ebx

  v1 = sub_18006D234(a1 + 12);
  v3 = v1;
  if ( (*(_BYTE *)(v2 + 20) & 6) == 0 && v1 == 2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  return v3;
}
