/*
 * XREFs of sub_180103650 @ 0x180103650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

__int64 __fastcall sub_180103650(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ebx

  v4 = a1;
  if ( a3 )
  {
    v5 = *a2;
    if ( !*a2 )
      v5 = a2[1] - 0x46000000000000C0LL;
    if ( v5 )
    {
      v6 = -2147467262;
      v4 = 0LL;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      v6 = 0;
    }
    *a3 = v4;
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v6 < 0
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x41u, (__int64)&unk_1801726D0, v6);
  }
  return (unsigned int)v6;
}
