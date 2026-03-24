/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002AC70
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AB70 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C013C440 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C0141FB0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002B9F0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013E288 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r8
  void *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  if ( !gpTypeIsolation[7] )
    goto LABEL_11;
  v4 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  if ( v4 )
  {
    v6 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0257D50 && (int)qword_1C0257D50(v3, v2, v5) >= 0 && qword_1C0257D58 )
      v9 = qword_1C0257D58(v6, v7, v8);
    else
      v9 = 0LL;
    *(_QWORD *)(v4 + 88) = v9;
    if ( !v9 )
    {
      REGION::vDeleteREGION((REGION *)v4);
LABEL_11:
      v4 = 0LL;
    }
  }
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    v10 = *(_QWORD *)(v4 + 88);
    *(_DWORD *)(v4 + 80) = 16;
    *(_DWORD *)(v4 + 84) = 1;
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_QWORD *)(v4 + 104) = 0LL;
    *(_DWORD *)v10 = 0;
    *(_DWORD *)(v10 + 4) = 0x80000000;
    *(_QWORD *)(v10 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v4 + 40) = v10 + 16;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 112;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v11 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v11[1] = v11;
    *v11 = v11;
  }
  return this;
}
