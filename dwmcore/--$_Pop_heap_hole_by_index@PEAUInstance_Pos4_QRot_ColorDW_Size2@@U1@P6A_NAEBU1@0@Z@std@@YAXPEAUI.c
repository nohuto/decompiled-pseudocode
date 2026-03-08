/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAUInstance_Pos4_QRot_ColorDW_Size2@@U1@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@_J1$$QEAU1@P6A_NAEBU1@3@Z@Z @ 0x180204FA4
 * Callers:
 *     ??$_Make_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x180204A80 (--$_Make_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstanc.c)
 *     ??$_Sort_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x180205190 (--$_Sort_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstanc.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<Instance_Pos4_QRot_ColorDW_Size2 *,Instance_Pos4_QRot_ColorDW_Size2,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  __int64 v5; // rbp
  __int64 v8; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // [rsp+68h] [rbp+10h]

  v5 = (a3 - 1) >> 1;
  v14 = a2;
  v8 = a2;
  v10 = a2;
  if ( a2 < v5 )
  {
    do
    {
      v10 = 2 * v10 + 2;
      if ( a5(a1 + 48 * v10, a1 + 48 * v10 - 48) )
        --v10;
      v11 = 3 * v8;
      v8 = v10;
      v11 *= 2LL;
      *(_OWORD *)(a1 + 8 * v11) = *(_OWORD *)(a1 + 48 * v10);
      *(_OWORD *)(a1 + 8 * v11 + 16) = *(_OWORD *)(a1 + 48 * v10 + 16);
      *(_OWORD *)(a1 + 8 * v11 + 32) = *(_OWORD *)(a1 + 48 * v10 + 32);
    }
    while ( v10 < v5 );
    LODWORD(a2) = v14;
  }
  if ( v10 == v5 && (a3 & 1) == 0 )
  {
    v12 = 3 * v8;
    LODWORD(v8) = a3 - 1;
    v12 *= 2LL;
    *(_OWORD *)(a1 + 8 * v12) = *(_OWORD *)(a1 + 48 * a3 - 48);
    *(_OWORD *)(a1 + 8 * v12 + 16) = *(_OWORD *)(a1 + 48 * a3 - 32);
    *(_OWORD *)(a1 + 8 * v12 + 32) = *(_OWORD *)(a1 + 48 * a3 - 16);
  }
  return std::_Push_heap_by_index<Instance_Pos4_QRot_ColorDW_Size2 *,Instance_Pos4_QRot_ColorDW_Size2,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
           a1,
           v8,
           a2,
           a4,
           (__int64)a5);
}
