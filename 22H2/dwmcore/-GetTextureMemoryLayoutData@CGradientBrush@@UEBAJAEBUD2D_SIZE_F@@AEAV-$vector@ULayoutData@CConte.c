/*
 * XREFs of ?GetTextureMemoryLayoutData@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801E6E50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1801E2DCC (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 */

__int64 __fastcall CGradientBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[24]; // [rsp+30h] [rbp-28h]

  v5 = *(_OWORD **)a3;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a3;
  if ( *(_BYTE *)(a1 + 176) )
  {
    v6 = *(_QWORD *)(a1 + 168);
    *(_OWORD *)&v10[8] = _xmm;
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v6 + 224LL))(v6, a2, &v9);
      v5 = *(_OWORD **)(a3 + 8);
      v7 = v9;
    }
    else
    {
      v7 = _xmm;
      *(_QWORD *)v10 = 0LL;
      v9 = _xmm;
    }
    if ( *(_OWORD **)(a3 + 16) == v5 )
    {
      std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
        (const void **)a3,
        v5,
        (__int64)&v9);
    }
    else
    {
      *v5 = v7;
      v5[1] = *(_OWORD *)v10;
      *((_QWORD *)v5 + 4) = *(_QWORD *)&v10[16];
      *(_QWORD *)(a3 + 8) += 40LL;
    }
  }
  return 0LL;
}
