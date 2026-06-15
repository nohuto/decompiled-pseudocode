/*
 * XREFs of sub_1800D0C30 @ 0x1800D0C30
 * Callers:
 *     sub_1800D0E30 @ 0x1800D0E30 (sub_1800D0E30.c)
 * Callees:
 *     sub_1800027F4 @ 0x1800027F4 (sub_1800027F4.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800D0C30(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  __int64 v4; // rdi

  *(_QWORD *)a1 = &off_180149058;
  v2 = *(__int64 **)(a1 + 64);
  v3 = *(__int64 **)(a1 + 56);
  if ( v3 != v2 )
  {
    do
      sub_18002C2A0(*v3++, 1u, 1);
    while ( v3 != v2 );
    v2 = *(__int64 **)(a1 + 64);
  }
  sub_1800027F4(*(_QWORD **)(a1 + 56), v2);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a1 + 56);
  if ( qword_18019E5F8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E5F8 + 16LL))(qword_18019E5F8);
    qword_18019E5F8 = 0LL;
  }
  if ( qword_18019E610 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E610 + 16LL))(qword_18019E610);
    qword_18019E610 = 0LL;
  }
  if ( qword_18019E618 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 160LL))(qword_18019E618);
    if ( qword_18019E618 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 16LL))(qword_18019E618);
      qword_18019E618 = 0LL;
    }
  }
  if ( qword_18019E600 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E600 + 16LL))(qword_18019E600);
    qword_18019E600 = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
  {
    sub_1800027F4(*(_QWORD **)(a1 + 56), *(_QWORD **)(a1 + 64));
    sub_1800472E0(v4, (*(_QWORD *)(a1 + 72) - v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
