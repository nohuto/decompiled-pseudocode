/*
 * XREFs of ?IsIncludedInOverdrawContentKinds@CContent@@AEAA_NW4FlagsEnum@MilHeatMapOverdrawContentKinds@@PEAVCDrawingContext@@@Z @ 0x180214140
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CContent::IsIncludedInOverdrawContentKinds(__int64 a1, int a2, __int64 a3)
{
  char v4; // di
  __int64 v6; // rax

  v4 = a2;
  if ( a2 != 0xFFFF
    && ((a2 & 2) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 22LL))
    && ((v4 & 4) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 57LL))
    && ((v4 & 8) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 55LL))
    && ((v4 & 0x10) == 0 || *(_DWORD *)(a3 + 656) || !*(_DWORD *)(a3 + 584))
    && ((v4 & 0x20) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1))
    && ((v4 & 0x40) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1)) )
  {
    if ( (v4 & 1) == 0 )
      return 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 264LL))(a1) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 57LL) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a3 + 24) + 32LL))(a3 + 24);
        return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 93LL) != 0;
      }
      return 0;
    }
  }
  return 1;
}
