/*
 * XREFs of sub_1800FE7E0 @ 0x1800FE7E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

__int64 __fastcall sub_1800FE7E0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ebx

  v4 = a1;
  if ( a3 )
  {
    v5 = *a2;
    if ( !*a2 )
      v5 = a2[1] - 0x46000000000000C0LL;
    if ( !v5 )
      goto LABEL_8;
    v6 = *a2 - 0x4496D6AD657804FALL;
    if ( *a2 == 0x4496D6AD657804FALL )
      v6 = a2[1] + 0x76B050ADD8CA9F76LL;
    if ( v6 )
    {
      v7 = -2147467262;
      v4 = 0LL;
    }
    else
    {
LABEL_8:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      v7 = 0;
    }
    *a3 = v4;
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v7 < 0
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x60u, (__int64)&unk_180172650, v7);
  }
  return (unsigned int)v7;
}
