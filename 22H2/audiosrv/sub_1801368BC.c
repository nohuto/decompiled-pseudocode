/*
 * XREFs of sub_1801368BC @ 0x1801368BC
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B5EE4 @ 0x1800B5EE4 (sub_1800B5EE4.c)
 *     sub_180135CA8 @ 0x180135CA8 (sub_180135CA8.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1801368BC(__int64 a1, HSTRING a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // rcx

  v6 = a3;
  v9 = *(_QWORD *)(a4 + 112);
  if ( !v9 )
    sub_1800B5EE4();
  v10 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  LOBYTE(v11) = *(_BYTE *)(a1 + 99);
  if ( !(_BYTE)v11
    || ((v11 = *(_DWORD *)(a1 + 184), v11 != 2) || (int)v10 < 0)
    && (v11 != 4 || (int)v10 < 0)
    && (v11 != 3 || (int)v10 >= 0) )
  {
    v11 = sub_180135CA8(v10, a2);
    LODWORD(v10) = v11;
  }
  *(_DWORD *)(a5 + 24 * v6 + 4) = v10;
  v13 = *(_QWORD *)(a4 + 112);
  if ( v13 )
    LOBYTE(v11) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
  return v11;
}
