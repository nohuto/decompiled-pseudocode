/*
 * XREFs of sub_1800BABF4 @ 0x1800BABF4
 * Callers:
 *     sub_18006CC58 @ 0x18006CC58 (sub_18006CC58.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_1800BB014 @ 0x1800BB014 (sub_1800BB014.c)
 * Callees:
 *     sub_1800474E0 @ 0x1800474E0 (sub_1800474E0.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BABF4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64), __int64, void *, int, _QWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      sub_1800B8BC0,
      a1,
      &unk_18015D5C0,
      5,
      0LL);
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
    {
      *(_QWORD *)(a1 + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  if ( *(_BYTE *)(a1 + 21) )
  {
    v4 = combase_69(0LL, 0LL);
    if ( v4 < 0 )
      sub_18006D26C((int)retaddr, 161, (int)"onecore\\internal\\com\\inc\\ComServiceHelper.h", v4);
    *(_BYTE *)(a1 + 21) = 0;
  }
  if ( *(_BYTE *)(a1 + 20) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    *(_BYTE *)(a1 + 20) = 0;
  }
  if ( *(int *)(a1 + 16) >= 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_1800474E0((__int64 *)(a1 + 8), 0LL);
    else
      RoUninitialize();
    *(_DWORD *)(a1 + 16) = -2147467259;
  }
  return 0LL;
}
