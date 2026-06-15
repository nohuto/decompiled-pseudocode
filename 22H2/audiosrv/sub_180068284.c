/*
 * XREFs of sub_180068284 @ 0x180068284
 * Callers:
 *     sub_18005579C @ 0x18005579C (sub_18005579C.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068284(__int64 a1)
{
  _QWORD *v2; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180149C28;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = &off_180149BD0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 16), 0, 0);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = sub_180008EAC(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)(a1 + 56) = v2;
  return a1;
}
