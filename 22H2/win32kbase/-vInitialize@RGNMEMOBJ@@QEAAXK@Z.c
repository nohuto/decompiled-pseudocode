/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002C4A8
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0023C94 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0024210 (GreExtCreateRegion.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0026878 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0026A10 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0028840 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002BBC0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C002C370 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C002C480 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0034DB0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0034F20 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00367E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0097730 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C0099B70 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00BCF60 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00BDCFC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0140900 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0140CD8 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngCreateClip @ 0x1C014C130 (EngCreateClip.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002CE60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013E598 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned __int8 *v5; // rcx
  __int64 v6; // rbx
  void *v7; // rbp
  int v8; // eax
  void *v9; // rax
  _DWORD *v10; // rax
  _QWORD *v11; // rax

  v4 = 112;
  if ( (unsigned int)a2 >= 0x70 )
    v4 = a2;
  v5 = gpTypeIsolation[7];
  if ( v5 )
    v6 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  else
    v6 = 0LL;
  if ( v6 )
  {
    if ( v4 == 112 )
    {
      v7 = RGNMEMOBJ::s_pSCANLookAsideList;
      if ( qword_1C0256D50 )
        v8 = qword_1C0256D50(v5, a2, a3);
      else
        v8 = -1073741637;
      if ( v8 >= 0 && qword_1C0256D58 )
        v9 = (void *)qword_1C0256D58(v7, a2, a3);
      else
        v9 = 0LL;
    }
    else
    {
      v9 = PALLOCMEM2(v4, 1852011335LL, 0);
    }
    *(_QWORD *)(v6 + 88) = v9;
    if ( !*(_QWORD *)(v6 + 88) )
    {
      REGION::vDeleteREGION((REGION *)v6);
      v6 = 0LL;
    }
  }
  *(_QWORD *)this = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 96) = 0;
    *(_DWORD *)(v6 + 100) = 0;
    *(_DWORD *)(v6 + 104) = 0;
    *(_DWORD *)(v6 + 108) = 0;
    v10 = *(_DWORD **)(v6 + 88);
    *(_DWORD *)(v6 + 80) = 16;
    *(_DWORD *)(v6 + 84) = 1;
    *v10 = 0;
    v10[3] = 0;
    v10[1] = 0x80000000;
    v10[2] = 0x7FFFFFFF;
    *(_QWORD *)(v6 + 40) = v10 + 4;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v4;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v11 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v11[1] = v11;
    *v11 = v11;
  }
}
