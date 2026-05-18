/*
 * XREFs of sub_180017D6C @ 0x180017D6C
 * Callers:
 *     sub_180017E4C @ 0x180017E4C (sub_180017E4C.c)
 * Callees:
 *     sub_18001D1F8 @ 0x18001D1F8 (sub_18001D1F8.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18011E748 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017D6C(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_1801D7CD8);
  v5 = v4;
  if ( v4 )
  {
    *v4 = &ISpectreTexture::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &off_18013AD90;
    if ( qword_180218538 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180218538 + 8LL))(qword_180218538);
    *v5 = &off_18013ADB8;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v6 = sub_18001D1F8(v5, a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
