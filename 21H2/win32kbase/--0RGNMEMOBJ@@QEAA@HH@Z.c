/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002AF30
 * Callers:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C0027480 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     GreCombineRgn @ 0x1C0039860 (GreCombineRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C007FA80 (NtGdiCreateRectRgn.c)
 *     GreCreateRectRgn @ 0x1C009FA20 (GreCreateRectRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002B9F0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013E288 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, __int64 a2, __int64 a3)
{
  unsigned __int8 *v4; // rcx
  __int64 v5; // rbx
  void *v6; // rsi
  int v7; // eax
  __int64 v8; // rax
  _QWORD *v9; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  if ( (_DWORD)a3 == 1 )
  {
    v4 = gpTypeIsolation[7];
    if ( v4 )
      v5 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = RGNMEMOBJ::s_pSCANLookAsideList;
      v7 = qword_1C0257D50 ? qword_1C0257D50(v4, a2, a3) : -1073741637;
      v8 = v7 >= 0 && qword_1C0257D58 ? qword_1C0257D58(v6, a2, a3) : 0LL;
      *(_QWORD *)(v5 + 88) = v8;
      if ( !v8 )
      {
        REGION::vDeleteREGION((REGION *)v5);
        v5 = 0LL;
      }
    }
    *(_QWORD *)this = v5;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 24) = 112;
      *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
      v9 = (_QWORD *)(*(_QWORD *)this + 48LL);
      v9[1] = v9;
      *v9 = v9;
    }
  }
  return this;
}
