/*
 * XREFs of sub_18005EAB8 @ 0x18005EAB8
 * Callers:
 *     sub_18006034C @ 0x18006034C (sub_18006034C.c)
 * Callees:
 *     sub_18005E354 @ 0x18005E354 (sub_18005E354.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18005EB98 @ 0x18005EB98 (sub_18005EB98.c)
 *     sub_18005ED10 @ 0x18005ED10 (sub_18005ED10.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_18005EAB8(__int64 a1, void (__fastcall ***a2)(_QWORD, __int64, __int64 *), __int64 a3)
{
  RPC_STATUS v6; // eax
  int v7; // ebx

  v6 = UuidCreate((UUID *)(a1 + 264));
  v7 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v7 = (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    v7 = sub_18005E354(a1, a2, a3);
    if ( v7 < 0 )
      goto LABEL_13;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 256) + 24LL))(*(_QWORD *)(a1 + 256), a1 + 284);
    if ( v7 < 0 )
      goto LABEL_13;
    v7 = sub_18005ED10(a1, a2);
    if ( v7 >= 0 )
    {
      sub_18005EB98((LPCRITICAL_SECTION)(a1 + 288));
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 37LL, &unk_18016DDC0, a1);
      }
    }
  }
  if ( v7 < 0 )
LABEL_13:
    sub_18005E8F8((__int64)"CVolumeHardware::Initialize", 1371, v7);
  return (unsigned int)v7;
}
