/*
 * XREFs of ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1800B9B84
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x1800B9474 (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCO.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x18021B560 (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$insert@V?$span_iterator@PEAVCColorGradientStop@@@details@gsl@@$0A@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@PEAVCColorGradientStop@@@details@gsl@@1@Z @ 0x1800B9C74 (--$insert@V-$span_iterator@PEAVCColorGradientStop@@@details@gsl@@$0A@@-$vector@PEAVCColorGradien.c)
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1800B9D68 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGradientBrush::SetStops(struct CResource ***this, __int64 *a2, char a3)
{
  struct CResource **v3; // rbx
  struct CResource **v7; // rdi
  int v8; // eax
  struct CResource **v9; // rbp
  struct CResource **i; // rdi
  __int64 v11; // rax
  struct CResource **v12; // r8
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  __int64 v15; // [rsp+40h] [rbp-48h]
  _QWORD v16[4]; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v18; // [rsp+98h] [rbp+10h] BYREF

  v3 = (struct CResource **)a2[1];
  v7 = &v3[*a2];
  while ( v3 != v7 )
  {
    v8 = CResource::RegisterNotifier((CResource *)this, *v3);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    ++v3;
  }
  if ( !a3 )
  {
    v9 = this[22];
    for ( i = this[21]; i != v9; ++i )
      CResource::UnRegisterNotifierInternal((CResource *)this, *i);
    this[22] = this[21];
  }
  v11 = *a2;
  v13 = a2[1];
  v16[0] = v13;
  v16[2] = v13;
  v12 = this[22];
  v14 = v13 + 8 * v11;
  v15 = v14;
  v16[1] = v14;
  std::vector<CColorGradientStop *>::insert<gsl::details::span_iterator<CColorGradientStop *>,0>(
    (_DWORD)this + 168,
    (unsigned int)&v18,
    (_DWORD)v12,
    (unsigned int)v16,
    (__int64)&v13);
  CGradientBrush::FlattenStops((CGradientBrush *)this);
  CGradientBrush::InvalidateGradient((CGradientBrush *)this);
}
