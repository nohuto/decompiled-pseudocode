/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@?$vector@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@2@@std@@QEAAPEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@1@QEAU21@$$QEAU21@@Z @ 0x180196778
 * Callers:
 *     ??$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z @ 0x18019655C (--$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z @ 0x1801AC750 (--$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VCBrush@@@CDebugTreeDumper@@QEAAXPEAVCBrush@@_N@Z @ 0x1801B7094 (--$RegisterNodeForVisit@VCBrush@@@CDebugTreeDumper@@QEAAXPEAVCBrush@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VIGDIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIGDIBitmapRealization@@_N@Z @ 0x1801C1640 (--$RegisterNodeForVisit@VIGDIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIGDIBitmapRealizatio.c)
 *     ??$RegisterNodeForVisit@VCResource@@@CDebugTreeDumper@@QEAAXPEAVCResource@@_N@Z @ 0x1801EE130 (--$RegisterNodeForVisit@VCResource@@@CDebugTreeDumper@@QEAAXPEAVCResource@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z @ 0x1801F3280 (--$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@std@@@std@@YAXPEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@0@0AEAV?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@0@@Z @ 0x180196704 (--$_Destroy_range@V-$allocator@U-$pair@PEAXV-$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@.c)
 *     ?_Change_array@?$vector@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@2@@std@@AEAAXQEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@2@_K1@Z @ 0x180197D70 (-_Change_array@-$vector@U-$pair@PEAXV-$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V-.c)
 *     ?_Reset_move@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z @ 0x180198118 (-_Reset_move@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::vector<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>::_Emplace_reallocate<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r14
  SIZE_T v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rcx
  _QWORD *v15; // r13
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  _QWORD *v18; // rsi
  __int64 (__fastcall ***v19)(_QWORD, __int64); // rcx
  __int64 v20; // r13
  _QWORD *v21; // rsi
  _QWORD *v22; // rsi
  _QWORD *v23; // rbx
  __int64 v25; // [rsp+50h] [rbp+8h]

  v3 = a2;
  v6 = ((__int64)a2 - *a1) / 72;
  v7 = (a1[1] - *a1) / 72LL;
  if ( v7 == 0x38E38E38E38E38ELL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 72LL;
  v10 = v9 >> 1;
  if ( v9 <= 0x38E38E38E38E38ELL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 72 * v11;
  if ( v11 > 0x38E38E38E38E38ELL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v25 = 9 * v6;
  *(_QWORD *)(v13 + 72 * v6) = *a3;
  v14 = v13 + 8 * (9 * v6 + 1);
  *(_QWORD *)(v14 + 56) = 0LL;
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(v14, a3 + 1);
  v15 = (_QWORD *)a1[1];
  v16 = (_QWORD *)*a1;
  if ( v3 == v15 )
  {
    v17 = (_QWORD *)v13;
    if ( v16 != v15 )
    {
      v18 = (_QWORD *)(v13 + 64);
      do
      {
        *v17 = *v16;
        *v18 = 0LL;
        v19 = (__int64 (__fastcall ***)(_QWORD, __int64))v16[8];
        if ( v19 )
          *v18 = (**v19)(v19, (__int64)(v18 - 7));
        v17 += 9;
        v18 += 9;
        v16 += 9;
      }
      while ( v16 != v15 );
    }
    std::_Destroy_range<std::allocator<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>>(
      (__int64)v17,
      (__int64)v17);
    v20 = v25;
  }
  else
  {
    v21 = (_QWORD *)v13;
    while ( v16 != v3 )
    {
      *v21 = *v16;
      v21[8] = 0LL;
      std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(v21 + 1, v16 + 1);
      v21 += 9;
      v16 += 9;
    }
    std::_Destroy_range<std::allocator<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>>(
      (__int64)v21,
      (__int64)v21);
    v20 = v25;
    v22 = (_QWORD *)a1[1];
    v23 = (_QWORD *)(v13 + 8 * (v25 + 9));
    while ( v3 != v22 )
    {
      *v23 = *v3;
      v23[8] = 0LL;
      std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(v23 + 1, v3 + 1);
      v23 += 9;
      v3 += 9;
    }
    std::_Destroy_range<std::allocator<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>>(
      (__int64)v23,
      (__int64)v23);
  }
  std::vector<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>::_Change_array(a1, v13, v8, v11);
  return *a1 + 8 * v20;
}
